module alumuxes(
  input logic [1:0] opA,
  input logic opB,
  input logic [31:0]pcreg,
  input logic [31:0]rs1_out,
  input logic [31:0]rs2_out,
  input logic [31:0]imm,
  output logic [31:0]a_alu,
  output logic [31:0]b_alu
);
  always_comb  begin
    case(opA)
        2'b00:a_alu=pcreg+4;
        2'b01:a_alu=rs1_out;
        2'b10:a_alu=pcreg;
       // 2'b11:a_alu=32'd?;
        default:;
      endcase
      case(opB)
        1'b0:b_alu=rs2_out;
        1'b1:b_alu=imm;
        default:;
      endcase
  end
endmodule
