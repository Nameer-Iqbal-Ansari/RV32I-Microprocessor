module branchalu(
  input logic [31:0] rs1,
  input logic [31:0] rs2,
  input logic [2:0] func210,
  output logic branchtrue,
  input logic en
);
// verilator lint_off LATCH
  always_comb begin
    if(!en) branchtrue=0;
    else
    begin
      case(func210)
        3'b000: if(rs1==rs2) branchtrue=1;//beq
        3'b001: if(rs1!=rs2) branchtrue=1;//bne
        3'b100: if($signed(rs1)<$signed(rs2))  branchtrue=1;//blt
        3'b101: if($signed(rs1)>=$signed(rs2)) branchtrue=1;//bge
        3'b110: if($unsigned(rs1)<$unsigned(rs2)) branchtrue=1;//bltu
        3'b111: if($unsigned(rs1)>=$unsigned(rs2)) branchtrue=1;//bgeu
        default: branchtrue=0;
      endcase
    end
  end
endmodule
