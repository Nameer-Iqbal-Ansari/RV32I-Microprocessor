class my_seq extends uvm_sequence #(test_seq_item);
    `uvm_object_utils(my_seq)

    function new(string name = "my_seq");
        super.new(name);
    endfunction // new

    virtual task body();
        for (int i= 0; i<10; i++) begin
        // Create a sequence item
            test_seq_item item = test_seq_item::type_id::create("item");
            start_item(item);
            item.randomize();
            `uvm_info("Sequencer::",$sformatf("Generate new items: %s",item.print_seq()),UVM_LOW)
            finish_item(item);
        end
    endtask // body
endclass // my_seq
