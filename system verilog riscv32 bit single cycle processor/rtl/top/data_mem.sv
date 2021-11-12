module data_mem(
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
  logic [31:0] dataout ;
  
  logic [11:0] add =(a_address_i[11]==1)? a_address_i : 12'b? ;
  logic [31:0] datain = a_data_i;
  logic wen;
  
  /* verilator lint_off UNUSED */logic ren;
  assign d_data_o = dataout ;
  assign d_size_o   = a_size_i ;
  assign wen = (a_opcode_i==3'b000)? 1 : 0 ;
  assign ren = (a_opcode_i==3'b100)? 1 : 0 ;
  //assign d_opcode_o = a_opcode_i ;
  bit [31:0] mem [4095:0];
  always @(posedge clk) begin
    if(a_valid_i) begin 
      d_opcode_o <= a_opcode_i ;
      
      d_valid_o  <= (a_valid_i==1)? 1 : 0 ;
      if(wen==1 && a_size_i==2'b10 && a_mask_i==2'b10) begin
        mem[add]<=datain;
      end
    end
  end
  always_latch begin 
    if(ren) begin
        dataout<= mem[add] ;
    end
  end
endmodule
