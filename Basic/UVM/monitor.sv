class test_monitor extends uvm_monitor;
    `uvm_component_utils(test_monitor)  
    function new(string name = "test_monitor", uvm_component parent = null);
        super.new(name,parent);
    endfunction //new()
    vir_int int_fm;
    uvm_analysis_port $(test_seq_item) mon_port;
    virtual function void build_phase(uvm_phase phase);
        `uvm_info("Monitor::",$sformatf("____In the build phase____"),UVM_LOW);
        mon_port = new ("mon_port",this);
        uvm_config_db #(virtual vir_int)::get(this,"","vir_int",int_fm);
    endfunction
    virtual task run_phase (uvm_phase phase);
        forever begin
            get_trans();
            //mon_port.item_done();
        end
    endtask
    virtual task get_trans();
        test_seq_item seq_item;
        forever begin
            @(posedge int_fm.clk)
            seq_item = test_seq_item::type_id::create("seq_item");
            seq_item.led = int_fm.led;
            seq_item.reset = int_fm.led;
            mon_port.write(seq_item);
        end
    endtask
endclass //test_monitor extends uvm_monitor