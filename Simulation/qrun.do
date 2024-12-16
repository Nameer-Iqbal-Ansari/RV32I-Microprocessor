onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_top/dut_core/core/clk
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/reset
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/readEnable
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/readAddress
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/readData
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/clock
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/writeEnable
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/writeAddress
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/writeData
add wave -noupdate -expand -group imem /tb_top/dut_core/inst_mem_adapter/inst_mem/sram
add wave -noupdate -expand -group dmem /tb_top/dut_core/data_mem_adapter/data_m/clk
add wave -noupdate -expand -group dmem /tb_top/dut_core/data_mem_adapter/data_m/wen
add wave -noupdate -expand -group dmem /tb_top/dut_core/data_mem_adapter/data_m/ren
add wave -noupdate -expand -group dmem -radix hexadecimal /tb_top/dut_core/data_mem_adapter/data_m/add
add wave -noupdate -expand -group dmem -radix decimal /tb_top/dut_core/data_mem_adapter/data_m/dataout
add wave -noupdate -expand -group dmem -radix hexadecimal /tb_top/dut_core/data_mem_adapter/data_m/datain
add wave -noupdate -expand -group dmem /tb_top/dut_core/data_mem_adapter/data_m/sram
add wave -noupdate -expand -group balu /tb_top/dut_core/core/balu/rs1
add wave -noupdate -expand -group balu /tb_top/dut_core/core/balu/rs2
add wave -noupdate -expand -group balu /tb_top/dut_core/core/balu/func210
add wave -noupdate -expand -group balu /tb_top/dut_core/core/balu/branchtrue
add wave -noupdate -expand -group balu /tb_top/dut_core/core/balu/en
add wave -noupdate -expand -group alu -radix decimal /tb_top/dut_core/core/alu_i/input_a
add wave -noupdate -expand -group alu -radix decimal /tb_top/dut_core/core/alu_i/input_b
add wave -noupdate -expand -group alu /tb_top/dut_core/core/alu_i/alusel
add wave -noupdate -expand -group alu /tb_top/dut_core/core/alu_i/aluout
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/opcode
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/branchtrue
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/func210
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/func7
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/bands
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/alucontrol
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/opA
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/opB
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/memwrite
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/immsel
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/writeback
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/regfile
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/pcsel
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/jalr
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/aluop210
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/r
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/i
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/s
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/lui
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/auipc
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/jal
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/b
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/lw
add wave -noupdate -group cu /tb_top/dut_core/core/controlunit/alucontrol_input
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/inst
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/pcvalue
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/immsel
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/jal_imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/branch_imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/iorjalr_imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/s_imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/u_imm
add wave -noupdate -group immgen /tb_top/dut_core/core/ig/extend
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/clk
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/write_enable
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/rs1
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/rs2
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/rd
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/write_data
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/read_data1
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/read_data2
add wave -noupdate -expand -group regfile /tb_top/dut_core/core/rf/reset
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {5868 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 331
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ns} {373 ns}
