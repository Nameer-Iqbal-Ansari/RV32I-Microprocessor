module mem (
    input logic en1,
    input logic [9:0] add,
    output logic [31:0] instruction
    );
    bit [31:0] mem [1023:0];
  initial begin
    $readmemh ("/home/nameer/Downloads/rtl/inst.mem",mem);
  end 
  always_latch begin 
    if (en1==1) instruction=mem[add];
  end
  
endmodule
