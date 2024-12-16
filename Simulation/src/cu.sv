module cu(
`ifdef RISCV_FORMAL
  output logic [2:0]  reg_file_en,
`endif 
  input logic [6:0] opcode,
  input logic branchtrue,
  input logic [2:0]func210,
  input logic func7,
  output logic bands,
  output logic [3:0] alucontrol,
  output logic [1:0] opA,
  output logic opB,
  output logic memwrite,
  output logic [1:0] immsel,
  output logic writeback,
  output logic regfile,
  output logic [2:0] pcsel,
  output logic jalr
);
  logic [2:0] aluop210;
  logic r;
  logic i;
  logic s;
  logic lui;
  logic auipc;
  logic jal;
  logic b;
  logic lw;
  logic [6:0]alucontrol_input;

  assign alucontrol_input = {aluop210,func210,func7};
   
  always_comb begin
    `ifdef RISCV_FORMAL
      reg_file_en[0]=0;reg_file_en[1]=0;reg_file_en[2]=0;  
    `endif 
    r =0; i=0; s=0; lui=0;auipc=0;jal=0;b=0;jalr=0;lw=0;
    bands=0; opA=2'b00; opB=0 ; memwrite=0; 
    immsel=2'b00 ; writeback=0 ; regfile =0; pcsel=3'b000; 
    jalr=0; aluop210=3'b000;  
    case(opcode) 
        7'b0110011: begin 
          r =1;
          if (r) begin 
      `ifdef RISCV_FORMAL
        reg_file_en[0]=1;reg_file_en[1]=1; reg_file_en[2]=1; 
      `endif
      opA=2'b01;immsel=2'b11 ; regfile =1; pcsel=3'b00;
              end
            end
        7'b0010011: begin 
          i =1;
          if (i) begin  
      `ifdef RISCV_FORMAL
         reg_file_en[0]=1; reg_file_en[2]=1;
      `endif
      opA=2'b01; opB=1 ; regfile =1;aluop210=3'b010; pcsel=3'b00;
              end
            end
      	7'b0100011: begin 
          s=1;
          if (s) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[0]=1; reg_file_en[1]=1;
        `endif
        bands=1; opA=2'b01; opB=1 ; memwrite=1; immsel=2'b01 ;aluop210=3'b100;pcsel=3'b00;
              end
            end
      	7'b0110111: begin 
          lui =1;
          if (lui) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[2]=1;
        `endif
        opA=2'b11; opB=1 ;immsel=2'b10 ;regfile =1; aluop210=3'b110;pcsel=3'b00;
              end
            end
      	7'b0010111: begin 
          auipc=1;
          if (auipc) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[2]=1;
        `endif
        opA=2'b10; opB=1; immsel=2'b10 ;  regfile =1; aluop210=3'b101;pcsel=3'b00;
              end
            end
        7'b1101111: begin 
          jal=1;
      	  if (jal) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[2]=1;
        `endif
        immsel=2'b11 ; regfile =1; pcsel=3'b10; aluop210=3'b111;
              end
            end
        7'b1100011: begin 
          b =1; 
          if (branchtrue && b) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[0]=1; reg_file_en[1]=1;
        `endif 
        bands=1;  immsel=2'b11 ; pcsel=3'b01;aluop210=3'b111;
              end
          else if (b) begin
        `ifdef RISCV_FORMAL       
          reg_file_en[0]=1; reg_file_en[1]=1;
        `endif
        bands=1; aluop210=3'b111;pcsel=3'b00;
              end
        	end
          7'b1100111: begin 
          jalr=1;
            if (jalr) begin 
        `ifdef RISCV_FORMAL
          reg_file_en[0]=1; reg_file_en[2]=1;
        `endif
        opA=2'b01; opB=1 ;  regfile =1; pcsel=3'b11; jalr=01 ;aluop210=3'b011;
              end
            end
          7'b0000011: begin
          lw=1;
            if (lw) begin
        `ifdef RISCV_FORMAL
          reg_file_en[0]=1; reg_file_en[2]=1;
      	`endif
        opA=2'b01; opB=1 ;writeback=1 ; regfile =1; aluop210=3'b001;pcsel=3'b00;
              end
            end
          default:;
    endcase
    
    casez(alucontrol_input)
      7'b0000000: alucontrol=4'b0000; 
      7'b0000001: alucontrol=4'b0001; 
      7'b0000010: alucontrol=4'b0111; 
      7'b0000011: alucontrol=4'b0111; 
      7'b0000100: alucontrol=4'b1000; 
      7'b0000101: alucontrol=4'b1001; 
      7'b0000110: alucontrol=4'b1001; 
      7'b0000111: alucontrol=4'b1001; 
      7'b0001000: alucontrol=4'b0100; 
      7'b0001001: alucontrol=4'b0110; 
      7'b0001010: alucontrol=4'b0101; 
      7'b0001011: alucontrol=4'b0110; 
      7'b0001100: alucontrol=4'b0011; 
      7'b0001101: alucontrol=4'b0011; 
      7'b0001110: alucontrol=4'b0010; 
      7'b0001111: alucontrol=4'b0010; 
      7'b0010000: alucontrol=4'b0001; 
      7'b0010001: alucontrol=4'b0001; 
      7'b0010010: alucontrol=4'b0111; 
      7'b0010011: alucontrol=4'b0111; 
      7'b0010100: alucontrol=4'b0000; 
      7'b0010101: alucontrol=4'b0001; 
      7'b0010110: alucontrol=4'b0001; 
      7'b0010111: alucontrol=4'b0001; 
      7'b0011000: alucontrol=4'b0100; 
      7'b0011001: alucontrol=4'b0110; 
      7'b0011010: alucontrol=4'b0101; 
      7'b0011011: alucontrol=4'b0110; 
      7'b0011100: alucontrol=4'b0011; 
      7'b0011101: alucontrol=4'b0011; 
      7'b0011110: alucontrol=4'b0010; 
      7'b0011111: alucontrol=4'b0010;
      7'b0100000: alucontrol=4'b0000; 
      7'b0100001: alucontrol=4'b0000; 
      7'b0100010: alucontrol=4'b0111; 
      7'b0100011: alucontrol=4'b0111; 
      7'b0100100: alucontrol=4'b1000; 
      7'b0100101: alucontrol=4'b1001; 
      7'b0100110: alucontrol=4'b1001; 
      7'b0100111: alucontrol=4'b1001; 
      7'b0101000: alucontrol=4'b0100; 
      7'b0101001: alucontrol=4'b0110; 
      7'b0101010: alucontrol=4'b0101; 
      7'b0101011: alucontrol=4'b0110; 
      7'b0101100: alucontrol=4'b0011; 
      7'b0101101: alucontrol=4'b0011; 
      7'b0101110: alucontrol=4'b0010; 
      7'b0101111: alucontrol=4'b0010;
      7'b0110000: alucontrol=4'b0000; 
      7'b0110001: alucontrol=4'b0001; 
      7'b0110010: alucontrol=4'b0111; 
      7'b0110011: alucontrol=4'b0111; 
      7'b0110100: alucontrol=4'b0000; 
      7'b0110101: alucontrol=4'b0001; 
      7'b0110110: alucontrol=4'b0001; 
      7'b0110111: alucontrol=4'b0001; 
      7'b0111000: alucontrol=4'b0100; 
      7'b0111001: alucontrol=4'b0110; 
      7'b0111010: alucontrol=4'b0101; 
      7'b0111011: alucontrol=4'b0110; 
      7'b0111100: alucontrol=4'b0011; 
      7'b0111101: alucontrol=4'b0011; 
      7'b0111110: alucontrol=4'b0010; 
      7'b0111111: alucontrol=4'b0010;
      7'b1000000: alucontrol=4'b0000; 
      7'b1000001: alucontrol=4'b0001; 
      7'b1000010: alucontrol=4'b0111; 
      7'b1000011: alucontrol=4'b0111; 
      7'b1000100: alucontrol=4'b0000; 
      7'b1000101: alucontrol=4'b0001; 
      7'b1000110: alucontrol=4'b0001; 
      7'b1000111: alucontrol=4'b0001; 
      7'b1001000: alucontrol=4'b0100; 
      7'b1001001: alucontrol=4'b0110; 
      7'b1001010: alucontrol=4'b0101; 
      7'b1001011: alucontrol=4'b0110; 
      7'b1001100: alucontrol=4'b0011; 
      7'b1001101: alucontrol=4'b0011; 
      7'b1001110: alucontrol=4'b0010; 
      7'b1001111: alucontrol=4'b0010; 
      7'b1010000: alucontrol=4'b0000; 
      7'b1010001: alucontrol=4'b0001; 
      7'b1010010: alucontrol=4'b0111; 
      7'b1010011: alucontrol=4'b0111; 
      7'b1010100: alucontrol=4'b0000; 
      7'b1010101: alucontrol=4'b0001; 
      7'b1010110: alucontrol=4'b0001; 
      7'b1010111: alucontrol=4'b0001; 
      7'b1011000: alucontrol=4'b0100; 
      7'b1011001: alucontrol=4'b0111; 
      7'b1011010: alucontrol=4'b0101; 
      7'b1011011: alucontrol=4'b0110; 
      7'b1011100: alucontrol=4'b0011; 
      7'b1011101: alucontrol=4'b0011; 
      7'b1011110: alucontrol=4'b0010; 
      7'b1011111: alucontrol=4'b0010; 
      7'b1100000: alucontrol=4'b1110; 
      7'b1100001: alucontrol=4'b1110; 
      7'b1100010: alucontrol=4'b1110; 
      7'b1100011: alucontrol=4'b1110; 
      7'b1100100: alucontrol=4'b1110; 
      7'b1100101: alucontrol=4'b1110; 
      7'b1100110: alucontrol=4'b1110; 
      7'b1100111: alucontrol=4'b1110; 
      7'b1101000: alucontrol=4'b1110; 
      7'b1101001: alucontrol=4'b1110; 
      7'b1101010: alucontrol=4'b1110; 
      7'b1101011: alucontrol=4'b1110; 
      7'b1101100: alucontrol=4'b1110; 
      7'b1101101: alucontrol=4'b1110; 
      7'b1101110: alucontrol=4'b1110; 
      7'b1101111: alucontrol=4'b1110; 
      7'b1110000: alucontrol=4'b1111; 
      7'b1110001: alucontrol=4'b1111; 
      7'b1110010: alucontrol=4'b1111; 
      7'b1110011: alucontrol=4'b1111; 
      7'b1110100: alucontrol=4'b1111; 
      7'b1110101: alucontrol=4'b1111; 
      7'b1110110: alucontrol=4'b1111; 
      7'b1110111: alucontrol=4'b1111; 
      7'b1111000: alucontrol=4'b1111; 
      7'b1111001: alucontrol=4'b1111; 
      7'b1111010: alucontrol=4'b1111; 
      7'b1111011: alucontrol=4'b1111; 
      7'b1111100: alucontrol=4'b1111; 
      7'b1111101: alucontrol=4'b1111; 
      7'b1111110: alucontrol=4'b1111; 
      7'b1111111: alucontrol=4'b1111; 
    endcase
  end
endmodule
