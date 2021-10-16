module data_mem (
  input logic clk,
  input logic [9:0] add,
  input logic [31:0] datain,
  input logic wen,
  output logic [31:0] dataout
);
  bit [31:0] mem [1023:0];
  always @(posedge clk) begin
      if(wen==1) 
        mem[add]<=datain;
  end
  assign dataout=mem[add];
endmodule
