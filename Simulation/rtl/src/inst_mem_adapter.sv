module inst_mem_adapter (
    input logic clk,
    input logic reset,
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
    //translating memory's signals to bus
    assign d_valid_o = a_valid_i;
    assign d_size_o = (a_mask_i==2'b10)? a_size_i:2'b10;
    assign d_opcode_o = (a_opcode_i==3'b100)? 3'b001:3'b000;
   i_mem #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(12)
  ) inst_mem(
       .clock(clk),
       .reset(reset),
       .readEnable(a_valid_i),
       .readAddress(a_address_i),
       .readData(d_data_o),
       .writeEnable(1'b0),
       .writeAddress(12'b0),
       .writeData(a_data_i)
 );
 
endmodule
