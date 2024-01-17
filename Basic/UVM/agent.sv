class test_agent extends uvm_agent;
    `uvm_component_utils(test_agent)
    function new(string name = "test_agent",uvm_component parent = null);
        super.new(name,parent);        
    endfunction //new()
    test_driv driv;
    test_monitor mon;

    uvm_analysis_port #(test_seq_item) scrb_port;
    uvm_analysis_port #(test_seq_item) seq_port;
    virtual function void build_phase (uvm_phase phase);
        `uvm_info("Agent::",$sformatf("____In the build phase____"),UVM_LOW);
        scrb_port = new ("scrb_port",this);//physical port for monitor and scoreboard
        seq_port = new ("seq_port",this);//physical port for sequencer and driver
        driv = test_driv::type_id::create("driv");
        mon = test_monitor::type_id::create("mon");
    endfunction
    virtual function void connect_phase (uvm_phase phase);
        `uvm_info("Agent::",$sformatf("____In connection phase____"),UVM_LOW);
        driv.driv_port.connect(seq_port.seq_item_export);
        mon.mon_port.connect(this.scrb_port);
    endfunction

endclass //test_agent extends uvm_agent