module tb_top
    import uvm_pkg::*;
    `include "uvm_macros.svh";

    bit clk;
    always #2 clk=~clk;

    vir_int dut_int(.clock(clk));
    
    top_main dut_core (
        .clk(dut_int.clock),
        .reset(dut_int.reset),
        .ouput_led(dut_int.led)
    );

    initial begin
        //passing the interface to test through uvm database property useage
        uvm_config_db#(virtual vir_int)::set(null,"uvm_test_top"/*sort of connecting
        the interface to uvm builtin test*/,"vir_int",dut_int);
        run_test ("test1");
    end
    initial begin
        $dumpvars;
        $dumpfile("test1.vcd");
    end
   
endmodule
