module top(
  input logic clk,
  input logic reset,
  output logic [31:0] output1
);
  // calling all the modules to connect them with top module//
  
  mem im(     .add(address),
              .en1(en),
              .instruction(dataout));
  
  cu controlunit(.opcode(dataout[6:0]),
                 .func210(dataout[14:12]),
                 .func7(dataout[30]),
                 .bands(bands),
                 .alucontrol(alucontrol),
                 .opA(opA),.opB(opB),
                 .memwrite(memwrite),
                 .immsel(immsel),
                 .writeback(writeback),
                 .regfile(regfile),
                 .pcsel(pcsel),
                 .branchtrue(branchtrue),
                 .jalr(jalr_en),
                 .en0(en)
                 );
  
  immgen ig(
    .inst(dataout),
    .pcvalue(pcreg),
    .immsel(immsel),
    .branch_imm(branch_add),
    .jal_imm(jal_add),
    .imm(imm));
  
  alu alu_i( .aluout(aluoutput),
          .alusel(alucontrol),
          .a(a_alu),.b(b_alu));
  
  reg_file rf( .out(output1),
              .clk(clk),
              .reset(reset),
              .write_enable(regfile),
              .rs1(dataout[19:15]),
              .rs2(dataout[24:20]),
              .read_data1(rs1_out),
              .read_data2(rs2_out),
              .rd(dataout[11:7]),
              .write_data(writein_reg));
  
  branchalu balu( .func210(dataout[14:12]),
                 .branchtrue(branchtrue),
                 .rs1(rs1_out),
                 .rs2(rs2_out));
  
  data_mem dmem(
                .clk(clk),
                .add(aluoutput[11:2]),
                .datain(rs2_out),
                .wen(memwrite),
                .dataout(dmemout));
  
  alumuxes mux12(.opA(opA),
                 .opB(opB),
                 .pcreg(pcreg),
                 .rs1_out(rs1_out),
                 .rs2_out(rs2_out),
                 .imm(imm),
                 .a_alu(a_alu),
                 .b_alu(b_alu));
  
  dmemmuxes mux3(.writeback(writeback),
                 .jalr_en(jalr_en),
                 .bands(bands),
                 .aluoutput(aluoutput),
                 .dmemout(dmemout),
                 .pcreg(pcreg),
                 .writein_reg(writein_reg));

  
  //initializing the signals to communicate with modules
  
  logic [31:0] pcreg=$signed(32'b11111111111111111111111111111100);
  logic [9:0] address=10'd0;
  logic [31:0] dataout;
  logic [31:0] branch_add;
  logic [31:0] jal_add;
  logic [31:0] imm;
  logic [31:0] aluoutput;
  logic [31:0] jalr_add=aluoutput;
  logic bands;
  logic [3:0] alucontrol;
  logic [1:0] opA;
  logic opB;
  logic [31:0] a_alu;
  logic [31:0] b_alu;
  logic memwrite;
  logic [1:0] immsel;
  logic writeback;
  logic regfile;
  logic [1:0] pcsel;
  logic branchtrue;
  logic [31:0] rs1_out;
  logic [31:0] rs2_out;
  logic [31:0] writein_reg;
  logic [31:0] dmemout;
  logic jalr_en;
  logic en;

  //stage 1 addressing or generating the address//
always @(posedge clk) begin
  case(pcsel)
      /* verilator lint_off BLKSEQ */2'b00: pcreg=pcreg+4;
      /* verilator lint_off BLKSEQ */2'b01: pcreg=branch_add;
      /* verilator lint_off BLKSEQ */2'b10: pcreg=jal_add;
      /* verilator lint_off BLKSEQ */2'b11: pcreg=jalr_add;
      default:;
  endcase
end
always_latch begin 
  if(reset==0) address=pcreg[11:2];
  else begin
    pcreg=$signed(32'b11111111111111111111111111111100);
    address=10'd0;
  end
end
endmodule
