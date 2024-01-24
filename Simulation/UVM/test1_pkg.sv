package test1_pkg ;

    import uvm_pkg::*;         // To bring uvm base library, from which we extend all the testbench components
	`include "uvm_macros.svh"  // To make use of macros that are found in uvm libraries

    `include "seq_item.sv"
    // `include "test_config.sv"
    `include "sequence.sv"
    `include "monitor.sv"
    `include "driver.sv"
    `include "scoreboard.sv"
    `include "agent.sv"
    `include "env.sv"
    `include "test1.sv"   
endpackage
