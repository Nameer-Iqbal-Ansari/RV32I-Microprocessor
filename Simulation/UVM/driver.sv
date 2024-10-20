class test_driv extends uvm_driver #(test_seq_item);
    `uvm_component_utils(test_driv)
    function new(string name = "test_driv",uvm_component parent = null);
        super.new(name,parent);
    endfunction 
    virtual vir_int int_f;
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("Driver::",$sformatf("____In the build phase____"),UVM_LOW);
        if(!uvm_config_db#(virtual vir_int)::get(this,"","vir_int",int_f)) 
            `uvm_fatal("Driver::", "Didnt get the interface")
    endfunction
    virtual task run_phase(uvm_phase phase);
        `uvm_info("Driver::",$sformatf("____In the run phase____"),UVM_LOW);
        repeat(10) begin
            test_seq_item item;
            // `uvm_info("Driver::",$sformatf("Waiting for item from sequencer"),UVM_LOW)
            seq_item_port.get_next_item(item);
            send_trans(item);
            seq_item_port.item_done();
        end
    endtask
    virtual task send_trans (test_seq_item item);
        @(int_f.tc);
        int_f.reset = item.reset;
    endtask

endclass //test_driv extends uvm_driver
