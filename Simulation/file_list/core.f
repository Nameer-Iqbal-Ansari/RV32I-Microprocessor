# UVM base library
// -uvmhome $UVMHOME

# Include directory of design and verification
#-incdir ./src
// -incdir ./UVM

# Package and top module to compile and simulate
./UVM/test1_pkg.sv

# Interface
./UVM/interface.sv

# Design 
./src/alu.sv
./src/branchalu.sv  
./src/channel_a.sv  
./src/channel_d.sv  
./src/cu.sv  
./src/i_mem.sv  
./src/d_mem.sv  
./src/data_mem_adapter.sv  
./src/immgen.sv  
./src/inst_mem_adapter.sv  
./src/reg_file.sv  
./src/top.sv  
./src/top_main.sv

# UVM VIP top
./tb/tb_top.sv