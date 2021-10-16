module cu(
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
  output logic [1:0] pcsel,
  output logic jalr,
  output logic en0
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

  always_latch begin
    r =0; i=0; s=0; lui=0;auipc=0;jal=0;b=0;jalr=0;lw=0;
    bands=0; opA=2'b00; opB=0 ; memwrite=0; 
    immsel=2'b00 ; writeback=0 ; regfile =0; pcsel=2'b00; 
    jalr=0; aluop210=3'b000; en0=1;
    case(opcode) 
        7'b0110011: begin 
          r =1;
          if (r) begin 
        opA=2'b01;immsel=2'b11 ; regfile =1;
              end
            end
        7'b0010011: begin 
          i =1;
          if (i) begin 
         opA=2'b01; opB=1 ; regfile =1;aluop210=3'b010;
              end
            end
      	7'b0100011: begin 
          s=1;
          if (s) begin 
        bands=1; opA=2'b01; opB=1 ; memwrite=1; immsel=2'b01 ;aluop210=3'b100;
              end
            end
      	7'b0110111: begin 
          lui =1;
          if (lui) begin 
        opA=2'b11; opB=1 ;immsel=2'b10 ;regfile =1; aluop210=3'b110;
              end
            end
      	7'b0010111: begin 
          auipc=1;
          if (auipc) begin 
         opA=2'b10; opB=1; immsel=2'b10 ;  regfile =1; aluop210=3'b101;
              end
            end
        7'b1101111: begin 
          jal=1;
      	  if (jal) begin 
         immsel=2'b11 ; regfile =1; pcsel=2'b10; aluop210=3'b111;
              end
            end
        7'b1100011: begin 
          b =1; 
          if (branchtrue && b) begin 
        bands=1;  immsel=2'b11 ; pcsel=2'b01;aluop210=3'b111;
              end
          else if (b) begin
                bands=1; aluop210=3'b111;
              end
        	end
          7'b1100111: begin 
          jalr=1;
            if (jalr) begin 
         opA=2'b01; opB=1 ;  regfile =1; pcsel=2'b11; jalr=01 ;aluop210=3'b011;
              end
            end
          7'b0000011: begin
          lw=1;
            if (lw) begin
        opA=2'b01; opB=1 ;writeback=1 ; regfile =1; aluop210=3'b001;
      	      end
            end
          default:;
    endcase
    case(aluop210)
      3'b000:begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b1000; end
          else if (func7==1) begin alucontrol=4'b1001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b1001; end
          else if (func7==1) begin alucontrol=4'b1001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b001: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0001; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b0001; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b010: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0000; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b1000; end
          else if (func7==1) begin alucontrol=4'b1001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b1001; end
          else if (func7==1) begin alucontrol=4'b1001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b011: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b0001; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b100: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b0001; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b101: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b0111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b0000; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b0001; end
          else if (func7==1) begin alucontrol=4'b0001; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b0100; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b0101; end
          else if (func7==1) begin alucontrol=4'b0110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b0011; end
          else if (func7==1) begin alucontrol=4'b0011; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b0010; end
          else if (func7==1) begin alucontrol=4'b0010; end
        end
      end
      3'b110: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b1110; end
          else if (func7==1) begin alucontrol=4'b111; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b0111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b1110; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b1110; end
          else if (func7==1) begin alucontrol=4'b1110; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1110; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b1110; end
          else if (func7==1) begin alucontrol=4'b1110; end
        end
      end
      3'b111: begin
        if (func210==3'b000) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b001) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b010) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b011) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b100) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b101) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b110) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
        else if(func210==3'b111) begin 
          if (func7==0) begin  alucontrol=4'b1111; end
          else if (func7==1) begin alucontrol=4'b1111; end
        end
      end
    endcase
  end
endmodule
