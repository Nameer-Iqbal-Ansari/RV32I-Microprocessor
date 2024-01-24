class test_seq_item extends uvm_sequence_item;
    `uvm_object_utils(test_seq_item)
    function new(string name = "test_seq_item");
        super.new(name);
    endfunction //new()
    rand bit reset;
    bit [1:0] led;
    virtual function string print_seq ();
        return $sformatf(" reset : %0d , led : %0d", reset, led);
    endfunction
    constraint c1 {reset dist {0:/0, 1:/100}; }    
endclass //my_seq extends uvm_sequencer