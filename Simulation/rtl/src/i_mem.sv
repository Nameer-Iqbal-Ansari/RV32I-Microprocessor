
/*(* ram_style = "block" *)*/
module i_mem #(parameter DATA_WIDTH = 32, ADDR_WIDTH = 12) (
        input logic clock,
        input logic reset,
        input logic readEnable,
        input logic [ADDR_WIDTH-1:0] readAddress,
        output logic [DATA_WIDTH-1:0]  readData,
        input logic writeEnable,
        input logic [ADDR_WIDTH-1:0] writeAddress,
        input logic [DATA_WIDTH-1:0] writeData
);

localparam MEM_DEPTH = 4096;
logic  [DATA_WIDTH-1:0]     sram [MEM_DEPTH-1:0];

//--------------Code Starts Here------------------
  assign readData = (readEnable)? sram[readAddress] : 32'b0;
  initial begin
    $readmemh ("/home/niansari/Desktop/RV32I-Microprocessor/Simulation/rtl/inst.mem",sram);
  end
  always@(posedge clock) begin
  if(reset) if(writeEnable)sram[writeAddress] <= writeData;
  end
endmodule
