class test1 extends uvm_test;
    `uvm_component_utils (test1)
    function new(string name  = "test1",uvm_component parent = null);
        super.new(name,parent);       
    endfunction //new()
    test_env env; //decleration of environment handle
    virtual function void build_phase(uvm_phase phase);
        `uvm_info("test1::",$sformatf("____In the build phase____"),UVM_LOW)
        env = test_env::type_id::create("env",this);
        //purposfully skiping configuration agent
    endfunction
    //another try to print build phase 
    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction
    virtual task run_phase (uvm_phase phase);
        my_seq seq = my_seq::type_id::create("seq");
        phase.raise_objection(this);
        seq.start(m_env.seqr); //need_to_clarify
        phase.drop_objection(this);
    endtask

endclass //test1 extends uvm_test