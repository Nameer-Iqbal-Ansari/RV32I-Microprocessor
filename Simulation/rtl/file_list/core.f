# UVM base library
-uvmhome $UVMHOME

# Include directory of design and verification
#-incdir ./rtl/src
-incdir ./UVM

# Package and top module to compile and simulate
./UVM/test1_pkg.sv

# Interface
./UVM/interface.sv

# Design 
./rtl/src/alu.sv
./rtl/src/branchalu.sv  
./rtl/src/channel_a.sv  
./rtl/src/channel_d.sv  
./rtl/src/cu.sv  
./rtl/src/i_mem.sv  
./rtl/src/d_mem.sv  
./rtl/src/data_mem_adapter.sv  
./rtl/src/immgen.sv  
./rtl/src/inst_mem_adapter.sv  
./rtl/src/reg_file.sv  
./rtl/src/top.sv  
./rtl/src/top_main.sv

# UVM VIP top
./UVM/tb_top.sv