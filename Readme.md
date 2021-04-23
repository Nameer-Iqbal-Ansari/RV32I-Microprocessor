# SINGLE CYCLE MICROPROCESSOR
This is a microprocessor in which all integer 
type commands and operations can be done 
(including jal,jalr,branch commands etc). 
This is RISC base processor in which their both data
and program memory are combined in a single
memory which is von neumann architecture. Both 
sequential and control flow operations can be 
executed on this microprocessor. we have used RISC V
language instructions to decorde them through opcodes
then the respective signals gets onn and all the 
instructions breakdown into pieces including 
opcode, immediate ( constant ,if their any ),
alu operation ,registers etc.All this is done on 
logisim simulation software. This microprocessor 
includes the following blocks:
- immediate generation block 
- opcode decoder 
- register file
- ALU 
- Branch ALU 
- ALU controller 
And many multiplexers and memories from the top file veiw.