class my_seq extends uvm_sequencer;
`uvm_component_utils(my_seq)
    function new(string name = "my_seq",uvm_component parent = null);
        super.new(name,parent);
    endfunction //new()
    `uvm_declare_p_sequencer (my_seq)
    task pre_body();

    endtask
    task body();

    endtask
    task post_body();

    endtask
endclass //my_seq extends uvm_sequencer