interface vir_int (input logic clock);
    import uvm_pkg::*;      		 // For using uvm libraries
	import test1_pkg::*;
	`include "uvm_macros.svh"   
    logic reset;
    logic [1:0] led;
    clocking tc @(posedge clock);
        default input #10ns output #10ns;
        input led;
        output reset;
    endclocking
endinterface : vir_int