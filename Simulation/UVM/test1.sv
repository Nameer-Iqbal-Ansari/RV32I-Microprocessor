class test1 extends uvm_test;
    `uvm_component_utils(test1)
    test_env env;
    // test_config cfg; 
    my_seq seq ;     
    virtual vir_int int_test;
    // Removed unnecessary declaration
    // uvm_sequencer #(test_seq_item) my_seqr;

    function new(string name = "test1", uvm_component parent = null);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        `uvm_info("test1::", $sformatf("____In the build phase____"), UVM_LOW)
        env = test_env::type_id::create("env", this);
        if(!uvm_config_db#(virtual vir_int)::get(this,"","vir_int",int_test))
            `uvm_fatal("test1::","didnt get the interface")
        uvm_config_db#(virtual vir_int)::set(this,"env.agnt.*","vir_int",int_test);
        seq = my_seq::type_id::create("seq");
        seq.randomize();
    endfunction

    virtual task run_phase(uvm_phase phase);
        `uvm_info("test1::", $sformatf("____In the run phase____"), UVM_LOW)     
        // Raise objection before starting the sequence
        phase.raise_objection(this,"Start SEQ");
        
        // Start the sequence using the sequencer from the configuration 
        seq.start(env.agnt.my_seqr);
        // #1000ns
        //phase.phase_done.set_drain_time(this, 100/*time in ns*/); //delay
        // Drop objection after the sequence completes
        // phase.drop_objection(this,"End SEQ");
    endtask
    function void /*tx_test::*/end_of_elaboration_phase(uvm_phase phase);
		// top class is uvm_root, uvm_top is the instance name of uvm_root
		uvm_top.print_topology();
        		`uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity DEBUG" ), UVM_DEBUG )
		        `uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity FULL"  ), UVM_FULL  )
		        `uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity HIGH"  ), UVM_HIGH  )
		        `uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity MEDIUM"), UVM_MEDIUM)
		        `uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity LOW"   ), UVM_LOW   )
		        `uvm_info(get_type_name(),$sformatf("[INFO MESSAGE] Test message with verbosity NONE"  ), UVM_NONE  )
    endfunction
endclass // test1 extends uvm_test
