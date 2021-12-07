
module alu(
  input logic [31:0]input_a,
  input logic [31:0]input_b,
  input logic [3:0]alusel,
  output logic [31:0]aluout
);

  assign aluout=    (alusel==4'b0000)? ($signed(input_a)+$signed(input_b)) :32'b?;
  assign aluout=    (alusel==4'b0001)? ($signed(input_a)-$signed(input_b)) :32'b?;
  assign aluout=    (alusel==4'b0010)? (input_a&input_b) : 32'b?;
  assign aluout=    (alusel==4'b0011)? (input_a|input_b) : 32'b?;
  assign aluout=    (alusel==4'b0100)? (input_a^input_b) : 32'b?;
  assign aluout=    (alusel==4'b0101)? (input_a>>input_b[4:0])  :32'b?;
  assign aluout=    (alusel==4'b0110)? (input_a>>>input_b[4:0]) :32'b?;
  assign aluout=    (alusel==4'b0111)? (input_a<<input_b[4:0])  :32'b?;
  assign aluout[0]= (alusel==4'b1000)? ($signed(input_a) < $signed (input_b)     ): 1'b?;
  assign aluout[0]= (alusel==4'b1001)? ($unsigned(input_a) < $unsigned (input_b) ): 1'b?;
  assign aluout=    (alusel==4'b1110)? (input_b) : 32'b?;
  assign aluout=    (alusel==4'b1111)? (input_a) : 32'b?;

endmodule  
