class test_monitor extends uvm_monitor;
    `uvm_component_utils(test_monitor)  
    function new(string name = "test_monitor", uvm_component parent = null);
        super.new(name,parent);
    endfunction 
    virtual vir_int int_fm;
    uvm_analysis_port #(test_seq_item) mon_port; //required if using scoreboard

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("Monitor::",$sformatf("____In the build phase____"),UVM_LOW);
        if(!uvm_config_db#(virtual vir_int)::get(this,"","vir_int",int_fm))
            `uvm_fatal("Monitor", "didnt get the interface")
        mon_port = new ("mon_port",this); //required if using scoreboard
    endfunction
    virtual task run_phase (uvm_phase phase);
        super.run_phase(phase);
        `uvm_info("Monitor::",$sformatf("____In the run phase____"),UVM_LOW)
        forever begin
            @(int_fm.tc);
                get_trans();
        end
    endtask
    virtual task get_trans();
        test_seq_item item = test_seq_item::type_id::create("item");
        item.led = int_fm.tc.led;
        item.reset = int_fm.reset;
        mon_port.write(item);
    endtask
endclass //test_monitor extends uvm_monitor
