interface vir_int (input logic clock);
    import uvm_pkg::*;      		 // For using uvm libraries
	//import base_test_pkg::*;
	`include "uvm_macros.svh"   
    
    logic clk;
    logic reset;
    logic [1:0] led;

    assign clk = clock;
endinterface