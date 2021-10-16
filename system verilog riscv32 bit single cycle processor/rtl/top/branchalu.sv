module branchalu(
  input logic [31:0] rs1,
  input logic [31:0] rs2,
  input logic [2:0] func210,
  output logic branchtrue
);

  always_comb begin
    branchtrue=0;
    case(func210)
      3'b000: if(rs1==rs2) branchtrue=1;//beq
      3'b001: if(rs1!=rs2) branchtrue=1;//bne
      3'b100: if($signed(rs1)<$signed(rs2))  branchtrue=1;//blt
      3'b101: if($signed(rs1)>=$signed(rs2)) branchtrue=1;//bge
      3'b110: if($unsigned(rs1)<$unsigned(rs2)) branchtrue=1;//bltu
      3'b111: if($unsigned(rs1)>=$unsigned(rs2)) branchtrue=1;//bgeu
      default:;
    endcase
  end
endmodule
