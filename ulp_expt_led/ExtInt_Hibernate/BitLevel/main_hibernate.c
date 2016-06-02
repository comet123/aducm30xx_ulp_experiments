#include <device.h>
//#include "startup.c"
#include "system.h"
#include "pm.h"
#include "rtc.h"
#include "cache.h"
#include <stdio.h>

volatile static int k=0;



int main (void) 
{
 SystemInit();
 
  // Disable the Watch Dog timer
  pADI_wdt->CTRL &= ~BITM_WDT_CTRL_ENABLE;
 
  // Unlock TestProtKey
 pADI_PMG->TESTPROT = 0x5970418E;
 uint32_t shutdown_status; 
 
#ifdef UNTRIMMED_PART
 pADI_PMG->PMG_TRIM = 0xC151;
  pADI_PMG->LP_TST_REF0 = 0x8008;       // trim BG to 0.615V
  pADI_PMG->HP_LDO_TST = 8;             // trim LDO to 1.2V
  TOSCCTRL0 = 0x8a422031;      //trim HFOSC at 26MHz and LFOSC at 32kHz
#endif 

 
      
 shutdown_status = pADI_PMG->SHUTDOWN_STATUS;
     
  if(shutdown_status == BITM_PMG_SHUTDOWN_STATUS_EXTINT1)
    {
     // The configuration of the pads is preserved, but it is also locked after waking up from SHUTDOWN mode
      //unlocking the state of the PADS
      pADI_PMGT->CLEAR_LATCH_GPIOS = 0x58FA;
      
	 //clearing the external interruptflag 
      pADI_EXTINT->EICLR = BITM_EXTINT_EICLR_IRQ1;
     
     
       pADI_gpio->GP1CON |= 0x00000000;
      pADI_gpio->GP1OEN |= 1<<10; 
      pADI_gpio->GP1OUT = 1<<10; 
       
      return 0;
    }
 
 
  // pADI_CLKGT->CLKCON1  = 0x00101A1A; //1MHz HCLK & PCLK
  
 //  pADI_CLKGT->CLKCON1  = 0x00100101; //26MHz HCLK & PCLK
  
  // pADI_CLKGT->CLKCON1  = 0x00100404; //6.5MHz
  
 

  
  // Enable Pullup for GPIO 1
  pADI_gpio->GP1PE |= 0x3;
  // enable GPIO as inputs for external interrupt 1
  pADI_gpio->GP1IEN |= 0x1;
  // enable External Interrupt 1 and Configure it for falling edge.
  pADI_EXTINT-> EI0CFG = BITM_EXTINT_EI0CFG_IRQ1EN+(5<<BITP_EXTINT_EI0CFG_IRQ1MDE); 
  // Enable EXT_IRQ_IN1  in NVIC
  NVIC->ISER[NVIC_IRQ_EXTIRQ1/32] |= 1 << (NVIC_IRQ_EXTIRQ1%32);  
 

 
  
  k=1;
   while(k)
 {   
   if(k!=1)
   {
   break;
   }
}


 
 hibernate();







  return 0;

}



void Ext_Int1_Handler(void)
{
  // Clear Interrupt 1
  //  pADI_gpio->GP1OUT = 0<<10; 
  pADI_EXTINT->EICLR = BITM_EXTINT_EICLR_IRQ1;
k++;
}




