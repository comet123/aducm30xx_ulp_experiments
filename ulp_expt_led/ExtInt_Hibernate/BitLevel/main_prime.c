#include <device.h>
//#include "startup.c"
#include "system.h"
#include "pm.h"
#include "rtc.h"
#include "cache.h"
#include <stdio.h>

volatile static int k=0;
uint16_t txval = 1;
uint8_t rdat0, rdat1;
static int size;
static int prescale = 0xF;
char data[4];
volatile static uint32_t icache_miss = 0;
volatile static int icache_misscount = 0;
volatile static uint32_t dcache_miss = 0;
volatile static int dcache_misscount = 0;


#define ENABLE_CACHE
//#define PERCLKOFF
#define HPBUCK_ENABLE
//#define HFXTAL
#define PRIM_NUMS 620
//#define UNTRIMMED_PART
//#define SRAM_BANK_EN
//#define CACHE_MISS_ASSESS



  //added volatile so that compiler will not optimize the code.
volatile int primes[PRIM_NUMS];
#define n_iter   2




void prime()
 {
    for (int iter = 1; iter < n_iter; iter++)
     {
       primes[0] = 1;
       for (int i = 1; i < PRIM_NUMS;)
       {

         for (int n = primes[i - 1] + 1; ;n++)
         {


           for (int d = 2; d <= n; d++)
           {

             if (n == d)
             {
               primes[i] = n;
               goto nexti;
             }
             if (n%d == 0) break;
           }
         }
       nexti:
         i++;

       }
     }
 }

void cache_setup_operation(bool i_cache_en, bool i_cache_lock, bool d_cache_en, bool d_cache_lock)
{

int setup_word;

/* if(!i_cache_en && i_cache_lock)

  Error();

if(!d_cache_en && d_cache_lock)

  Error();
*/
if(i_cache_en)

  setup_word += ICACHE_EN;

if(i_cache_lock)

  setup_word += ICACHE_LOCK;

if(d_cache_en)

  setup_word += DCACHE_EN;

if(d_cache_lock)

  setup_word += DCACHE_LOCK;

  

// Enter Cache Key

  CacheKey();

  pADI_FLASH_CACHE ->CACHESETUP = setup_word;

}

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
  
  
  
#ifdef ENABLE_CACHE
  //Enable cache
  cache_setup_operation(1,0,1,0); 
#endif  
  
#ifdef HPBUCK_ENABLE
  //To enable HP buck
 pADI_PMG->CNTRL1 |= BITM_PMG_CNTRL1_HPBUCK_EN;
 
 //Enable buck in hibernate and active, keep_hp_buck_gain 
 // pADI_PMG->CNTRL1 |= 0x84000001;
 
#endif
 
 
#ifdef PERCLKOFF
 //Set this bit to clock gate the peripherals   
  pADI_CLKGT->CLKCON5 |= BITM_CLKGT_CLKCON5_PERCLKOFF;
  pADI_CLKGT->CLKCON5 &= ~BITM_CLKGT_CLKCON5_PERCLKOFF;    
  pADI_CLKGT->CLKCON5 |= BITM_CLKGT_CLKCON5_PERCLKOFF;
#endif

#ifdef SRAM_BANK_EN
  //To enable various sram retention in hibernate
pADI_PMG->PWRKEY = 0x4859;  //(also for vbat_monitor)
 
pADI_PMG->SRAMRET |= BITM_PMG_SRAMRET_SRAM_RET1_EN + BITM_PMG_SRAMRET_SRAM_RET2_EN;
#endif
 
 
 

  
  
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


 
  //starting Icache and Dcache miss counts in Test mode
 
//pADI_FLASH_CACHE->CACHETMSETUP = BITM_FLASH_CACHE_CACHETMSETUP_ICACHE_START_MISS_CNTR + BITM_FLASH_CACHE_CACHETMSETUP_DCACHE_START_MISS_CNTR;
 
  for(int loop=0;loop<12;loop++)
 {
   // pADI_gpio->GP2OUT = 1<<11;
 prime();
#ifdef CACHE_MISS_ASSESS
  icache_miss = (pADI_FLASH_CACHE->CACHEMISSCNTR & BITM_FLASH_CACHE_CACHEMISSCNTR_ICACHEMISSCOUNT);

 if((icache_miss) == BITM_FLASH_CACHE_CACHEMISSCNTR_ICACHEMISSCOUNT)
        {
          icache_misscount++;
          pADI_FLASH_CACHE->CACHETMSETUP |= BITM_FLASH_CACHE_CACHETMSETUP_ICACHE_START_MISS_CNTR;
         }
 
  dcache_miss = (pADI_FLASH_CACHE->CACHEMISSCNTR & BITM_FLASH_CACHE_CACHEMISSCNTR_DCACHEMISSCOUNT);
 
  if((dcache_miss) == BITM_FLASH_CACHE_CACHEMISSCNTR_DCACHEMISSCOUNT)
        {
          dcache_misscount++;
          pADI_FLASH_CACHE->CACHETMSETUP |= BITM_FLASH_CACHE_CACHETMSETUP_DCACHE_START_MISS_CNTR;
      }
#endif
 // pADI_gpio->GP2OUT = 0<<11;
 }








  return 0;

}



void Ext_Int1_Handler(void)
{
  // Clear Interrupt 1
  //  pADI_gpio->GP1OUT = 0<<10; 
  pADI_EXTINT->EICLR = BITM_EXTINT_EICLR_IRQ1;
k++;
}




