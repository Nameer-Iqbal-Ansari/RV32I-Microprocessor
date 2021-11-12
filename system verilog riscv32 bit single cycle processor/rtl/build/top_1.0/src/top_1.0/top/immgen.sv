module immgen(
  /* verilator lint_off UNUSED*/input logic [31:0] inst,
  input logic [31:0] pcvalue,
  input logic [1:0] immsel,
  output logic [31:0] jal_imm,
  output logic [31:0] imm,
  output logic [31:0] branch_imm
  
);
  logic [31:0] iorjalr_imm;
  logic [31:0] s_imm;
  logic [31:0] u_imm;
  bit [19:0]extend;
  always_comb begin
    if(inst[31]==1) assign extend=20'b11111111111111111111;
    else assign extend=20'b00000000000000000000;
    iorjalr_imm = 32'd0;
    s_imm = 32'd0; 
    u_imm = 32'd0; 
    case(immsel)
      2'b00: begin
        iorjalr_imm[11:0] = inst[31:20];
        iorjalr_imm[31:12] = extend;
        imm=iorjalr_imm;
      end
      2'b01: begin
        s_imm[31:12]=extend;
        s_imm[4:0]=inst[11:7];
        s_imm[11:5]=inst[31:25];
        imm=s_imm;
      end
      2'b10: begin
        u_imm[31:20] =extend[11:0];
        u_imm[19:0] = inst[31:12];
        u_imm=u_imm<<12;
        imm=u_imm;
      end
      default:;
    endcase
    jal_imm[0]=0;
    jal_imm[10:1]=inst[30:21];
    jal_imm[11]=inst[20];
    jal_imm[19:12]=inst[19:12];
    jal_imm[20]=inst[31];
    jal_imm[31:21]=extend[10:0];
    jal_imm=$signed(jal_imm)+pcvalue;

    branch_imm[0]=0;
    branch_imm[4:1]=inst[11:8];
    branch_imm[10:5]=inst[30:25];
    branch_imm[11]=inst[7];
    branch_imm[12]=inst[31];
    branch_imm[31:13]=extend[18:0];
    branch_imm=$signed(branch_imm)+pcvalue;
  end
endmodule

