class test_env extends uvm_env;
    `uvm_component_utils (tests_env)
    function new(string name  = "tests_env",uvm_component parent = null);
        super.new(name,parent);       
    endfunction //new()
    test_agent agnt;
    test_score scrb;
    virtual function void build_phase (uvm_phase phase);
        `uvm_info("environment::",$sformatf("____In the build phase____"),UVM_LOW)
        agnt = test_agent::type_id::create("agnt");
        scrb = test_score::type_id::create("scrb");
    endfunction 
    virtual function void connect_phase (uvm_phase phase);
        `uvm_info("environment::",$sformatf("____In the connect phase____"),UVM_LOW);
        agnt.scrb_port.connect(scrb.score);
    endfunction

endclass //tests_env extends uvm_env