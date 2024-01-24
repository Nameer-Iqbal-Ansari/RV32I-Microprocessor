class test_agent extends uvm_agent;
    test_driv driv;
    test_monitor mon;
    uvm_sequencer#(test_seq_item) my_seqr;
    `uvm_component_utils(test_agent)
    function new(string name = "test_agent",uvm_component parent = null);
        super.new(name,parent);        
    endfunction 
    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("Agent::",$sformatf("____In the build phase____"),UVM_LOW);
            my_seqr = uvm_sequencer#(test_seq_item)::type_id::create("my_seqr",this);
            driv = test_driv::type_id::create("driv",this);
        mon = test_monitor::type_id::create("mon",this);
    endfunction
    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);
        `uvm_info("Agent::",$sformatf("____In connection phase____"),UVM_LOW);
            driv.seq_item_port.connect (my_seqr.seq_item_export);
    endfunction

endclass //test_agent extends uvm_agent
