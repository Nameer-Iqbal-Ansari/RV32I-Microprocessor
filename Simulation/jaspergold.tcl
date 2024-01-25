clear -all
analyze -sv -f ./file_list/rtl.f
elaborate
clock clk
reset ~reset
