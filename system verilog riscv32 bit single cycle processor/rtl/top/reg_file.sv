module reg_file(
  input logic clk,
  input logic write_enable,
  input logic [4:0] rs1,
  input logic [4:0] rs2,
  input logic [4:0] rd,
  input logic [31:0] write_data,
  output logic [31:0] read_data1,
  output logic [31:0] read_data2,
  output logic [31:0] out,
  input logic reset
);
  bit [31:0] reg_array[31:0];
  always @(posedge clk ) begin
    reg_array[0]<=32'd0;
    if(reset) for(int i=0;i<32;i++) reg_array[i]<=32'd0;
    else begin
      if(write_enable) begin
        if(rd==5'd0) reg_array[rd]<=32'd0;
        else reg_array[rd]<=write_data;
      end
    end
  end
  assign out = write_data;
   assign read_data1 = reg_array[rs1];
   assign read_data2 = reg_array[rs2]; 
   
endmodule

