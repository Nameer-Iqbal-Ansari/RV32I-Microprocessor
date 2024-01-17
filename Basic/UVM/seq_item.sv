class test_seq_item extends uvm_sequence_item;
`uvm_object_utils(test_seq_item)
    function new(string name = "test_seq_item");
        super.new(name);
    endfunction //new()
    bit [1:0] led;
    bit reset;
endclass //my_seq extends uvm_sequencer