                  =============================
                  TILELINK UNCAHCED LIGHTWEIGHT
                  =============================
In this RISCV 32bit integer type single cycle processor the SOC used for 
providing communication between the main core and the memory units is 
"TILELINK uncached lightweight" TLUL. Descriptively it consists of two 
channels which are used for transporting the messages between two ends. 
CHANNEL A is used for requesting messages from HOST to DEVICE and 
CHANNEL D is used for response messages from DEVICE to HOST. Here core 
is the HOST and memories (instruction memory and data memory) being DEVICES.
So first set of channel A and channels D is dedicated for the communication 
between core to instruction memory and second set of channel A and 
channel D is for core to data memory. The signals used in channel A are 
valid, ready, opcode, address, data, size, and mask. Similarly for channel D
valid, ready, opcode, size, and data.

The timing diagram for write and read transactions in this core is shown in
“transactions” file.

references : 
* https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwju8I__gZj0AhVpS_EDHWf1AsUQFnoECAYQAQ&url=https%3A%2F%2Fstatic.dev.sifive.com%2Fdocs%2Ftilelink%2Ftilelink-spec-1.7-draft.pdf&usg=AOvVaw0V_m9Ov7Lu1RmF23HzDt9V
* https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwidsfa5gpj0AhXiQ_EDHZZkCMUQFnoECAcQAQ&url=https%3A%2F%2Fdocs.opentitan.org%2Fhw%2Fip%2Ftlul%2Fdoc%2F&usg=AOvVaw2B3Wz60AFgfqjgBymdGlVs
