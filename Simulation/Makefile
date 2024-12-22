sim: clean
	qrun -clean +UVM_TESTNAME=test1 +UVM_VERBOSITY=UVM_LOW +define+UVM_REPORT_DISABLE_FILE_LINE +UVM_OBJECTION_TRACE -f ./file_list/core.f
simgui:
	qrun -clean +UVM_TESTNAME=test1 +UVM_VERBOSITY=UVM_LOW +define+UVM_REPORT_DISABLE_FILE_LINE +UVM_OBJECTION_TRACE -gui -f ./file_list/core.f 
clean:
	rm -rf qrun.out qrun.log ../build build
