class test_score extends uvm_scoreboard;
    `uvm_component_utils(test_score)
    function new(string name = "test_score",uvm_component parent = null);
        super.new(name,parent);        
    endfunction //new()
    uvm_analysis_imp #(test_seq_item,test_score) score;
    function void build_phase (uvm_phase phase);
        `uvm_info("Scoreboard::",$sformatf("___In the build phase___"),UVM_LOW);
        score = new("score",this);
    endfunction
    virtual function void write (test_seq_item port);
        `uvm_info("Scoreboard write::",$sformatf("LED = %0d, RESET = %0d",port.led,port.reset),UVM_HIGH);
    endfunction
endclass //test_score extends uvm_scoreboard