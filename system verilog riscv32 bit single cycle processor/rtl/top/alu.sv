module alu(
  input logic [31:0]a,
  input logic [31:0]b,
  input logic [3:0]alusel,
  output logic [31:0]aluout
);

  always_latch begin
    case (alusel)
      4'b0000: aluout=a+b;
      4'b0001: aluout=$signed(a)-$signed(b);
      4'b0010: aluout=a&b;
      4'b0011: aluout=a|b;
      4'b0100: aluout=a^b;
      4'b0101: aluout=a>>b[4:0];
      4'b0110: aluout=a>>>b[4:0];
      4'b0111: aluout=a<<b[4:0];
      4'b1000: aluout[0]=$signed(a) < $signed (b) ;
      4'b1001: aluout[0]=$unsigned(a) < $unsigned (b) ;
      4'b1110: aluout=b;
      4'b1111: aluout=a;
      default: ;
    endcase
  end
endmodule  
