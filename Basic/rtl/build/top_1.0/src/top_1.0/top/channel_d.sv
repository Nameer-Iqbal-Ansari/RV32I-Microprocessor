module channel_d(
  //official signals
  output logic         d_ready_o,
  input  logic         d_valid_i,
  input  logic  [2:0]  d_opcode_i,
  input  logic  [1:0]  d_size_i,
  input  logic  [31:0] d_data_i,
  //required signals
  output logic [31:0] d_data_o,    
  output logic [2:0]  d_opcode_o  
);

  assign d_ready_o  = (d_valid_i==1)? 1 :0; 
  assign d_opcode_o = (d_valid_i==1)? d_opcode_i :3'b?;

  assign d_data_o  =(d_valid_i==1 && d_size_i==2'b10)? d_data_i : 32'b?;
  
      
endmodule
