class test_config extends uvm_object;
    `uvm_object_utils(test_config)
    function new(string name = "test_config");
        super.new(name);
    endfunction
    virtual vir_int vif;
    
    uvm_sequencer #(test_seq_item) my_seqr;
    //my_seqr = uvm_sequencer::type_id::create("my_seqr");
endclass