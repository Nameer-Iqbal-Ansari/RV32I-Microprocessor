/*`include "top/alu.sv"
`include "top/branchalu.sv"
`include "top/channel_a.sv"
`include "top/channel_d.sv"
`include "top/cu.sv"
`include "top/data_mem.sv"
`include "top/immgen.sv"
`include "top/mem.sv"
`include "top/reg_file.sv"
`include "top/top.sv"
*/
module top_main(
  input logic clk,
  input logic reset,
  output logic [1:0] ouput_led
);
//UNCOMMENT when testing on fpga and make input clk to clock
/*logic reset=~rst;
logic clk1;
logic clk;
clk_wiz_0  clk_wiz
            (
             // Clock out ports
             .clk_out1(clk1),
             // Status and control signals
             .reset(!reset),
             .locked(),
            // Clock in ports
             .clk_in1(clock)
            );
 Clock_divider cd(
             .clock_in(clk1),
             .clock_out(clk)
             );*/
`ifdef RISCV_FORMAL
  logic 		   rvfi_valid = 1'b0;
  logic [11:0] rvfi_order = 12'd0;
  logic [31:0] rvfi_insn = 32'd0;
  logic 		   rvfi_trap = 1'b0;
  logic 		   rvfi_halt = 1'b0;
  logic 		   rvfi_intr = 1'b0;
  logic [1:0]  rvfi_mode = 2'b11;
  logic [1:0]  rvfi_ixl = 2'b01;
  logic [4:0]  rvfi_rs1_addr;
  logic [4:0]  rvfi_rs2_addr;
  logic [31:0] rvfi_rs1_rdata;
  logic [31:0] rvfi_rs2_rdata;
  logic [4:0]  rvfi_rd_addr;
  logic [31:0] rvfi_rd_wdata;
  logic [31:0] rvfi_pc_rdata;
  logic [31:0] rvfi_pc_wdata;
  logic [11:0] rvfi_mem_addr;
  logic [1:0]  rvfi_mem_rmask;
  logic [1:0]  rvfi_mem_wmask;
  logic [31:0] rvfi_mem_rdata;
  logic [31:0] rvfi_mem_wdata; 

// only for compliance test signals from core
logic [2:0]  reg_file_en;
logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [4:0]  rd_addr;
logic [31:0] rs1_rdata;
logic [31:0] rs2_rdata;
logic [31:0] rd_wdata;
`endif
//signals from core
  logic        a_ready_i_1;
  logic        a_ready_i_2;
  logic [2:0]  a_opcode_i_1;
  logic [2:0]  a_opcode_i_2;
  logic [11:0]  a_address_i_1;
  logic [11:0]  a_address_i_2;
  logic [31:0] a_data_i_1;
  logic [31:0] a_data_i_2;
//signals for core
  logic d1_ready_i;
  logic d2_ready_i;
  logic [31:0] d_data_i_1;
  logic [31:0] d_data_i_2;
  logic [2:0] d_opcode_i_1;
  logic [2:0] d_opcode_i_2;
//output of channel a1 for data memory
  logic        a1_valid_o;
  logic [2:0]  a1_opcode_o;
  logic [11:0]  a1_address_o;
  logic [31:0] a1_data_o;
  logic [1:0]  a1_size_o;  
  logic [1:0]  a1_mask_o;  
//output of channel a2 for instruction memory
  logic        a2_valid_o;
  logic [2:0]  a2_opcode_o;
  logic [11:0] a2_address_o;
  logic [31:0] a2_data_o;
  logic [1:0]  a2_size_o;  
  logic [1:0]  a2_mask_o;
//input for channel d1
  logic        d1_valid_o;
  logic [2:0]  d1_opcode_o;
  logic [1:0]  d1_size_o;
  logic [31:0] d1_data_o;
//input for channel d1
  logic        d2_valid_o;
  logic [2:0]  d2_opcode_o;
  logic [1:0]  d2_size_o;
  logic [31:0] d2_data_o;

assign ouput_led[0] = a2_valid_o;
assign ouput_led[1] = d1_valid_o;
`ifdef RISCV_FORMAL
  always_comb begin 
    rvfi_valid = a_ready_i_1;
    if(rvfi_valid) begin
      rvfi_order     = rvfi_order + {12'd0,rvfi_valid};
      rvfi_insn      = d_data_i_1;
      rvfi_mem_addr  = a2_address_o;
      rvfi_mem_rmask = a2_mask_o;
      rvfi_mem_wmask = a2_mask_o;
      rvfi_mem_rdata = d_data_i_2;
      rvfi_mem_wdata = a2_data_o;
      rvfi_pc_rdata  = a1_address_o;
      rvfi_pc_wdata  = a1_address_o+4;
      //Not used 
      rvfi_halt = 1'b0;
      rvfi_intr = 1'b0;
      rvfi_mode = 2'd3;
      rvfi_ixl  = 2'd1;
      if(reg_file_en[0]) begin
        rvfi_rs1_addr  = rs1_addr;
        rvfi_rs1_rdata = rs1_rdata;
      end
      if(reg_file_en[1]) begin
        rvfi_rs2_addr = rs2_addr;
        rvfi_rs2_rdata = rs2_rdata;
      end
      if(reg_file_en[2]) begin
        rvfi_rd_addr = rd_addr;
        rvfi_rd_wdata = rd_wdata;
      end
    end
  end
`endif 
  top core(
     //non bus signals
  `ifdef RISCV_FORMAL
    .reg_file_en   (reg_file_en), 
    .rs1_addr      (rs1_addr),
    .rs2_addr      (rs2_addr),
    .rd_addr       (rd_addr),
    .rs1_rdata     (rs1_rdata),
    .rs2_rdata     (rs2_rdata),
    .rd_wdata      (rd_wdata)
  `endif
    .clk (clk),
    .reset (reset),
    //request out for instruction memory interface
    .a_opcode_o_1  (a_opcode_i_1),
    .a_address_o_1 (a_address_i_1),
    .a_data_o_1    (a_data_i_1),//nothing to do
    .a_ready_o_1   (a_ready_i_1),
    //response in from instruction memory interface
    .d1_ready_i    (d1_ready_i),  
    .d_data_i_1    (d_data_i_1),  
    .d_opcode_i_1  (d_opcode_i_1),
    //request out for data memory interface
    .a_opcode_o_2  (a_opcode_i_2),
    .a_address_o_2 (a_address_i_2),
    .a_data_o_2    (a_data_i_2),
    .a_ready_o_2   (a_ready_i_2),
    //response in from data memory interface
    .d2_ready_i    (d2_ready_i),
    .d_data_i_2    (d_data_i_2),
    .d_opcode_i_2  (d_opcode_i_2)
  );

  inst_mem_adapter inst_mem_adapter(
    .clk(clk),
    .reset(reset),
    //inputs 
    .a_valid_i   (a1_valid_o),
    .a_address_i (a1_address_o),
    .a_opcode_i  (a1_opcode_o),
    .a_data_i    (a1_data_o),
    .a_size_i    (a1_size_o),
    .a_mask_i    (a1_mask_o),

    //outputs
    .d_valid_o  (d1_valid_o),
    .d_opcode_o (d1_opcode_o),
    .d_size_o   (d1_size_o),
    .d_data_o   (d1_data_o)
  );
  data_mem_adapter data_mem_adapter(
    .clk(clk),
    //inputs
    .a_valid_i  (a2_valid_o),
    .a_address_i(a2_address_o),
    .a_opcode_i (a2_opcode_o),
    .a_data_i   (a2_data_o),
    .a_size_i   (a2_size_o),
    .a_mask_i   (a2_mask_o),
    //outputs
    .d_valid_o  (d2_valid_o),
    .d_opcode_o (d2_opcode_o),
    .d_size_o   (d2_size_o),
    .d_data_o   (d2_data_o)
  );
  channel_d d1( 
    .d_valid_i  (d1_valid_o),
    .d_opcode_i (d1_opcode_o),
    .d_size_i   (d1_size_o),
    .d_data_i   (d1_data_o),

    .d_ready_o  (d1_ready_i),
    .d_data_o   (d_data_i_1),
    .d_opcode_o (d_opcode_i_1)
  );
  channel_d d2( 
    .d_valid_i  (d2_valid_o),
    .d_opcode_i (d2_opcode_o),
    .d_size_i   (d2_size_o),
    .d_data_i   (d2_data_o),
    
    .d_ready_o  (d2_ready_i),
    .d_data_o   (d_data_i_2),
    .d_opcode_o (d_opcode_i_2)
  );

  channel_a a2(
    .a_ready_i   (a_ready_i_2),
    .a_opcode_i  (a_opcode_i_2),
    .a_address_i (a_address_i_2),
    .a_data_i    (a_data_i_2),
    
    .a_valid_o   (a2_valid_o), 
    .a_opcode_o  (a2_opcode_o),
    .a_address_o (a2_address_o),
    .a_data_o    (a2_data_o),
    .a_size_o    (a2_size_o),
    .a_mask_o    (a2_mask_o)
  );

  channel_a a1(
    .a_ready_i (a_ready_i_1),
    .a_opcode_i (a_opcode_i_1),
    .a_address_i (a_address_i_1),
    .a_data_i (a_data_i_1),
  
    .a_valid_o   (a1_valid_o),
    .a_opcode_o  (a1_opcode_o),
    .a_address_o (a1_address_o),
    .a_data_o    (a1_data_o),
    .a_size_o    (a1_size_o),
    .a_mask_o    (a1_mask_o)
  );
endmodule
