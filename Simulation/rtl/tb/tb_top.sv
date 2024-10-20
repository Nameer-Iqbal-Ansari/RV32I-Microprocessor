module tb_top;
    //`include "test_pkg/test1_pkg.sv"
    import uvm_pkg::*;      		 // For using uvm libraries
    import test1_pkg::*;
	`include "uvm_macros.svh"    // To make use of macros that are found in uvm libraries
    // Signal declaration
    bit clk;
    // Clock generation
	always #20 clk <= ~clk;

    vir_int dut_int(.clock(clk));
    
    top_main dut_core (
        .clk(clk),
        .reset(dut_int.reset),
        .ouput_led(dut_int.led)
    );

    initial begin
        clk <= 0;
        //passing the interface to test through uvm database property useage
        uvm_config_db#(virtual vir_int)::set(null,"uvm_test_top"/*sort of connecting
        the interface to uvm builtin test*/,"vir_int",dut_int);
        fork run_test ();
        join_none 
        forever @(posedge clk)
        begin
            if(dut_core.data_mem_adapter.data_m.sram[1535]==32'd10) //TEMP TO HOST ADDRESS
            begin
                $display("\n\033[32m=========================================\033[0m\n\033[32m===============TEST PASSED===============\033[0m\n\033[32m=========================================\033[0m\n");
                break;
            end
            else if(dut_core.data_mem_adapter.data_m.sram[1535]==32'd20) //TEMP TO HOST ADDRESS
            begin
                $display("\n\033[31m=========================================\033[0m\n\033[31m===============TEST FAILED===============\033[0m\n\033[31m=========================================\033[0m\n");
                break;
            end
            else if($time>100000)
            begin
                $display("\n\033[31m=========================================\033[0m\n\033[31m===============TEST TIMEOUT==============\033[0m\n\033[31m=========================================\033[0m\n");
                break;
            end
        end
        $finish;
    end
endmodule
