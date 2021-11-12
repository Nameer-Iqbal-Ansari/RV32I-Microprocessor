module top_main(
  input logic clk,
  input logic reset
);
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

  top core(
    .clk (clk),
    .reset (reset),
    //outputs
    .a_opcode_o_1   (a_opcode_i_1),
    .a_opcode_o_2   (a_opcode_i_2),
    .a_address_o_1  (a_address_i_1),
    .a_address_o_2  (a_address_i_2),
    .a_data_o_1     (a_data_i_1),
    .a_data_o_2     (a_data_i_2),
    .a_ready_o_1    (a_ready_i_1),
    .a_ready_o_2    (a_ready_i_2),
    //inputs
    .d1_ready_i   (d1_ready_i),  
    .d2_ready_i   (d2_ready_i),  
    .d_data_i_1   (d_data_i_1),
    .d_data_i_2   (d_data_i_2),
    .d_opcode_i_1   (d_opcode_i_1),
    .d_opcode_i_2   (d_opcode_i_2)
  );

  mem inst_mem(
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
  data_mem d_mem(
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
