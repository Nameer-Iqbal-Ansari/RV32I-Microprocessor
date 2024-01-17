class test_driv extends uvm_driver;
    `uvm_component_utils(test_driv)
    function new(string name = "test_driv",uvm_component parent = null);
        super.new(name,parent);
    endfunction //new()
    vir_int int_f;
    uvm_analysis_port #(test_seq_item) driv_port; 
    virtual function void build_phase(uvm_phase phase);
        `uvm_info("Driver::",$sformatf("____In the build phase____"),UVM_LOW);
        driv_port = new ("driv_port",this);
        uvm_config_db #(virtual vir_int)::get(this,"","vir_int",int_f);
    endfunction
    virtual task run_phase(uvm_phase phase);
        test_seq_item seq_item;
        forever begin
            @(posedge int_f.clk) driv_port.get_next_item(seq_item);
            send_trans(seq_item);
            driv_port.item_done();
        end
    endtask
    virtual task void send_trans (test_seq_item item);
        int_f.reset = item.reset;
        item.led    = int_f.led;
    endtask

endclass //test_driv extends uvm_driver