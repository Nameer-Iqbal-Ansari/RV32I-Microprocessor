module channel_a(
  //official signals
  input  logic a_ready_i,
  output logic        a_valid_o,
  output logic [2:0]  a_opcode_o,
  output logic [11:0]  a_address_o,
  output logic [31:0] a_data_o,
  output logic [1:0]  a_size_o,
  output logic [1:0]  a_mask_o,
  //required signals
  input logic  [2:0]  a_opcode_i,
  input logic  [11:0]  a_address_i,
  input logic  [31:0] a_data_i
);
  always_latch begin 
    if(a_ready_i) begin
      a_valid_o   = a_ready_i  ;
      a_opcode_o  = a_opcode_i ;
      a_address_o = a_address_i;
      a_data_o    = a_data_i   ;
      a_size_o    = 2'b10;
      a_mask_o    = a_size_o   ;
    end
    else a_valid_o = 0;
  end
endmodule
