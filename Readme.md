#---SINGLE CYCLE RV32I MICROPROCESSOR---#
-------
level 1:
-------
This is a RISCV Processor in which all integer 
type commands and operations can be performed
(including jal,jalr,branch commands etc).Both 
sequential and control flow operations can be 
executed on this microprocessor. I have used RISCV assembly
language instructions to decorde them through opcodes
then the respective signals gets onn and all the 
instructions breakdown into pieces including 
opcode, immediate ( constant ,if their any ),
alu operation ,registers etc.All this is done on 
logisim software. This microprocessor 
includes the following blocks:
- immediate generation block 
- opcode decoder 
- register file
- ALU 
- Branch ALU 
- ALU controller 
And many multiplexers and memories from the top file veiw.
<img align="center" src="https://github.com/Nameer-Iqbal-Ansari/riscv32-bit-i-single-cycle-microprocessor/blob/master/image_07397726-0dba-4501-9f70-7fe3be3ec49f20220329_230347.jpg" />
-------
level 2:
-------
After implementing on a drag and drop software called 
logisim. It is then coded in a hardware discriptive language
called SYSTEMVERILOG.In further upgradation a bus architechture
(SOC) called TILELINK is also implemented in this single cycle
processor which provides communication between memories and core.
For which 2 channel A are used for request signals 
and 2 channel D are used for response signals from core to
memories (host to device) and viseversa.
After interconnecting whole processor it is tested on verilator
using fusesoc. 

link of risv assembly codes and thier hexa values. (tested codes)
https://docs.google.com/spreadsheets/d/14NU7tBv-i7zpZHIYiMBVQ3DX
mnE4UchTyx7spAzkmaI/edit#gid=1593725999
