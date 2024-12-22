// 3KB memory
module d_mem #(parameter DATA_WIDTH = 32, ADDR_WIDTH = 12) (
  input logic clk,
  input logic wen,
  input logic ren,
  input logic [ADDR_WIDTH-1:0]  add,
  output logic [DATA_WIDTH-1:0] dataout,
  input logic [DATA_WIDTH-1:0]  datain
);  
  localparam MEM_DEPTH = 4096;
  logic  [8-1:0]     sram [MEM_DEPTH-1:0];
  
  assign dataout = (ren==1)? {sram[add+3],sram[add+2],sram[add+1],sram[add]}:32'b? ;
  always @(posedge clk) begin
    if(wen==1) begin
      {sram[add+3],sram[add+2],sram[add+1],sram[add]}<=datain;  
    end
  end
endmodule
