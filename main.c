//!#include <main.h>
#include<16F877A.h>
#fuses NOLVP,PUT,NOWDT,XT,BROWNOUT
#use delay(clock=2000000)
#byte INTCON=0x0b
#byte TRISB=0x86
#byte PORTB=0x06
#INT_EXT
void ext_isr(void)
{
if(INTCON&0x02)
   {
      PORTB^=0x02;
      PORTB^=0x04;
      INTCON=0xd0;
   }
}
void main()
{
   //RB0 Interrupt pin as input;
   //all other pins output
   TRISB=0x01;
   //InterruptInitialisation
   INTCON=0xd0;
   //PIE=1;GIE=1;INTE=1;INTF=0
   PORTB=0x02;
   while(1)
   {
      //loop will continuously ron to raise interrupt
   }

}
