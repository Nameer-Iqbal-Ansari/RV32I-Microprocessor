module channel_d(
  //official signals
  output logic         d_ready_o,
  input  logic         d_valid_i,
  input  logic  [2:0]  d_opcode_i,
  input  logic  [1:0]  d_size_i,
  input  logic  [31:0] d_data_i,
  //required signals
  output logic [31:0] d_data_o,    
  output logic [2:0]  d_opcode_o  
);
  always_latch begin 
    if(d_valid_i) begin
      d_ready_o  = d_valid_i;
      d_opcode_o = d_opcode_i;
      case(d_size_i)
        2'b00: d_data_o [7:0]   = d_data_i  [7:0]   ;
        2'b01: d_data_o [15:0]  = d_data_i  [15:0]  ;
        2'b10: d_data_o [31:0]  = d_data_i  [31:0]  ;
        2'b11: d_data_o         = 32'b?             ;
        default:;
      endcase
    end
  end
endmodule
