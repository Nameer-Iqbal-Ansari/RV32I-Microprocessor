module data_mem_adapter(
  input clk,
  //requests signals from host
  input logic        a_valid_i,
  input logic [11:0]  a_address_i,
  input logic [2:0]  a_opcode_i,
  input logic [31:0] a_data_i,
  input logic [1:0]  a_size_i,
  input logic [1:0]  a_mask_i,
  //respone signals to host
  output  logic         d_valid_o,
  output  logic  [2:0]  d_opcode_o,
  output  logic  [1:0]  d_size_o,
  output  logic  [31:0] d_data_o
);
//translating memory signal to bus signals
logic wen;
logic ren;

  assign d_size_o   = (a_mask_i==2'b10)? a_size_i:2'b10 ; 
  assign wen = (a_opcode_i==3'b000)? 1 : 0 ;
  assign ren = (a_opcode_i==3'b100)? 1 : 0 ;
  assign d_opcode_o = (a_opcode_i==3'b100)? 3'b001:3'b000;
  assign d_valid_o = a_valid_i;

  d_mem #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(12)
  )
    data_m(
    .clk(clk),
    .wen(wen),
    .ren(ren),
    .add(a_address_i),
    .dataout(d_data_o),
    .datain(a_data_i)
  );
endmodule
