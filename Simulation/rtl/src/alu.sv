module alu(
  input logic [31:0]input_a,
  input logic [31:0]input_b,
  input logic [3:0]alusel,
  output logic [31:0]aluout
);
always_comb begin 
  case (alusel)
    4'b0000: aluout =    $signed(input_a)+$signed(input_b);
    4'b0001: aluout =    $signed(input_a)-$signed(input_b);
    4'b0010: aluout =    input_a&input_b ;
    4'b0011: aluout =    input_a|input_b ;
    4'b0100: aluout =    input_a^input_b ;
    4'b0101: aluout =    input_a >> input_b[4:0] ;
    4'b0110: aluout =    input_a >>> input_b[4:0];
    4'b0111: aluout =    input_a<<input_b[4:0];
    4'b1000: aluout =    {31'd0,($signed(input_a) < $signed (input_b)     )};
    4'b1001: aluout =    {31'd0,($unsigned(input_a) < $unsigned (input_b) )};
    4'b1110: aluout =    input_b ;
    4'b1111: aluout =    input_a ;
    default: aluout =    32'h0;
   endcase
end

endmodule  
