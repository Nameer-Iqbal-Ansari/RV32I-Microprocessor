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
  
      assign a_valid_o   = (a_ready_i==1)? 1:0  ;
      assign a_opcode_o  = (a_ready_i==1)? a_opcode_i :3'b?;
      assign a_address_o = (a_ready_i==1)? a_address_i :12'b?;
      assign a_data_o    = (a_ready_i==1)? a_data_i   : 32'b?;
      assign a_size_o    = (a_ready_i==1)? 2'b10 : 2'b?;
      assign a_mask_o    = (a_ready_i==1)? a_size_o :2'b?  ;
endmodule
