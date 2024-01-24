class test_env extends uvm_env;
    `uvm_component_utils (test_env)
    function new(string name  = "test_env",uvm_component parent = null);
        super.new(name,parent);       
    endfunction 
    test_agent agnt;
    test_score scrb;
    virtual function void build_phase (uvm_phase phase);
        `uvm_info("Environment::",$sformatf("____In the build phase____"),UVM_LOW)
        agnt = test_agent::type_id::create("agnt",this);
        scrb = test_score::type_id::create("scrb",this);
    endfunction 
    virtual function void connect_phase (uvm_phase phase);
        `uvm_info("Environment::",$sformatf("____In the connect phase____"),UVM_LOW);
        agnt.mon.mon_port.connect(scrb.score);
    endfunction
endclass //test_env extends uvm_env