
//(* ram_style = "block" *) 3KB 
module i_mem #(parameter DATA_WIDTH = 32, ADDR_WIDTH = 12) (
        input logic reset,
        input logic readEnable,
        input logic [ADDR_WIDTH-1:0] readAddress,
        output logic [DATA_WIDTH-1:0]  readData,
        // verilator lint_off UNUSED
        input logic clock,
        input logic writeEnable,
        input logic [ADDR_WIDTH-1:0] writeAddress,
        input logic [DATA_WIDTH-1:0] writeData
        // verilator lint_on UNUSED
);

localparam MEM_DEPTH = 4096;
logic  [8-1:0]     sram [MEM_DEPTH-1:0];

  assign readData = (readEnable && reset)? {sram[readAddress],sram[readAddress+1],sram[readAddress+2],sram[readAddress+3]} : 32'b0;
  initial begin
    $readmemh("inst.mem",sram);
  end
endmodule