sim:
	qrun -clean -f ./file_list/core.f +UVM_TESTNAME=test1 +UVM_VERBOSITY=UVM_LOW +define+UVM_REPORT_DISABLE_FILE_LINE +UVM_OBJECTION_TRACE +vcs+flush+log
simgui:
	qrun -clean -f ./file_list/core.f +UVM_TESTNAME=test1 +UVM_VERBOSITY=UVM_LOW +define+UVM_REPORT_DISABLE_FILE_LINE +UVM_OBJECTION_TRACE +vcs+flush+log -gui 
clean:
	rm -rf qrun.out qrun.log dump.vcd  work  vsim.wlf ../build build
