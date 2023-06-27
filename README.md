# CCS_pic_rbo_interrupt
-Used to generate Hardware interrupt for PIC microcontroller  
-It requires configuration of INTCON alongside TRISB register  
-RB0 must be an input pin  
-Also The ISR is handled wher interrupt flag is cleared at the end
-The pins are active low when configured as input  
-If requited set the PortB pullup bit of the option register to 1  
-Also enable the GIE and PIE bits of INTCON register
