module mem (
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
    logic [31:0] instruction ;
    logic        en1         = a_valid_i;
    logic [11:0]  add         = /*(a_address_i[0]==0)?*/ a_address_i /*: 12'b?*/;
    logic [31:0] mem [4095:0];
    /* verilator lint_off UNUSED */logic [31:0] data        = a_data_i;
    assign d_data_o =instruction;
  initial begin
    $readmemh ("/home/nameer/Downloads/rtl/inst.mem",mem);
  end 
  always_latch begin
    if (en1==1 && a_opcode_i==3'b100
    && a_size_i==2'b10 && a_mask_i==2'b10) begin
      d_size_o = a_size_i;
      instruction=mem[add];
      d_opcode_o = a_opcode_i;
      d_valid_o = en1;
    end
    else 
      d_valid_o = 0 ;
    
  end
endmodule
