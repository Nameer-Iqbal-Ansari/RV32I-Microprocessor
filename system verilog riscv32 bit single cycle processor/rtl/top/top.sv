module top(
  input logic clk,
  input logic reset,
  //request signals 
  output logic  [2:0]  a_opcode_o_1,
  output logic  [2:0]  a_opcode_o_2,
  output logic  [11:0] a_address_o_1,
  output logic  [11:0] a_address_o_2,
  output logic  [31:0] a_data_o_1,
  output logic  [31:0] a_data_o_2,
  output logic         a_ready_o_1,
  output logic         a_ready_o_2,
  //response signals
  input logic        d1_ready_i,
  input logic        d2_ready_i,
  input logic [31:0] d_data_i_1,
  input logic [31:0] d_data_i_2,
  input logic [2:0]  d_opcode_i_1,
  input logic [2:0]  d_opcode_i_2
);

  // calling all the modules (accept memories)to connect them with top module//
  
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
                 .jalr(jalr_en)
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
          .input_a(a_alu),
          .input_b(b_alu));
  
  reg_file rf(.clk(clk),
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
  logic  channel_a_sel;
  //instruction memory signals
  logic [9:0] address=10'd0;
  /* verilator lint_off UNOPTFLAT */logic [31:0] dataout;
  //data memory signals
  /* verilator lint_off UNOPTFLAT */logic [31:0] dmemout;
  logic memwrite;
  logic [10:1] aluoutput1;
  logic [31:0] rs2_out;
  //initializing the signals to communicate with modules
  
  /* verilator lint_off UNOPTFLAT */logic [31:0] pcreg=$signed(32'b11111111111111111111111111111100);
  logic [31:0] branch_add;
  logic [31:0] aluoutput;
  logic [31:0] jal_add;
  logic [31:0] imm;
  logic [31:0] jalr_add=aluoutput;
  logic bands;
  logic [3:0] alucontrol;
  logic [1:0] opA;
  logic opB;
  logic [31:0] a_alu;
  logic [31:0] b_alu;
  logic [1:0] immsel;
  logic writeback;
  logic regfile;
  logic [1:0] pcsel;
  logic branchtrue;
  logic [31:0] rs1_out;
  logic [31:0] writein_reg;
  logic jalr_en;
  logic [31:0] r1;
  logic [31:0] r2;
  //translation of core's signals into bus signals
  assign dataout       = (d_opcode_i_1==3'b100 && d1_ready_i==1)? d_data_i_1 : 32'b?;
  assign dmemout       = (d_opcode_i_2==3'b001 && d2_ready_i==1)? d_data_i_2 : 32'b? ;

  assign channel_a_sel = (memwrite==1 || writeback==1)? 1:0;
  assign a_opcode_o_2  = (memwrite==1)? 3'b000:3'b100;
  assign a_opcode_o_1  = 3'b100;
  assign a_address_o_1 = {2'b00,address};
  assign a_address_o_2 = (channel_a_sel==1)? {2'b01,aluoutput1} : 12'b?; 
  assign a_data_o_1    = 32'b0;
  assign a_data_o_2    = rs2_out;
  assign a_ready_o_1   = (reset==1)? 1 : 0;
  assign a_ready_o_2   = (reset==1 && (memwrite==1 || writeback==1))? 1 : 0;
  //generating data memory address 
  assign aluoutput1=aluoutput[11:2];
  //alu muxes//                    
  assign a_alu = opA==2'b00 ? pcreg+4:(opA==2'b01 ? rs1_out :(opA==2'b10 ? pcreg : 32'b?));
  assign b_alu = opB==0 ? rs2_out : imm;
  //data memory muxes//
  assign r1 = writeback==0 ? aluoutput:dmemout;
  assign r2 = jalr_en==0 ? r1 : pcreg+4 ;
  assign writein_reg = bands==0 ? r2 : 32'b?;
  //generating the address//
always @(posedge clk) begin
  case(pcsel)
      /* verilator lint_off BLKSEQ */2'b00: pcreg=pcreg+4;
      /* verilator lint_off BLKSEQ */2'b01: pcreg=$signed(branch_add);
      /* verilator lint_off BLKSEQ */2'b10: pcreg=$signed(jal_add);
      /* verilator lint_off BLKSEQ */2'b11: pcreg=jalr_add;
      default:;
  endcase
end
always_latch begin 
  if(reset==1) address<=pcreg[11:2];
  else begin
    pcreg<=$signed(32'b11111111111111111111111111111100);
    address<=10'd0;
  end
end
endmodule
