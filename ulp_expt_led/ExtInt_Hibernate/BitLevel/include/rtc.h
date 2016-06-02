#ifndef RTC_H
#define RTC_H
#include <stdlib.h>
#include <device.h>
#include <inttypes.h>
#include <RTC_ALIAS.h>
#define ADI_RTC                                 pADI_rtc
#define ADI_RTC_BASE                            ADI_rtc0_BASE
//========================================
//Gateway keys
#define  RTC_SNAPSHOT_KEY       0x7627
#define  FLUSH_RTC              0xa2c5
//========================================
#define TRMIVL_2EXP_MIN         14
//========================================

//#define RTC_TEST_STEP_NUMBER    (*(volatile unsigned short int *) 0x40002628)   // Non-existent RTC MMR used as a simulation marker.
//#define RTC_ISR_STEP_NUMBER     (*(volatile unsigned short int *) 0x4000262C)   // Non-existent RTC MMR used as a simulation marker.

#define RTC_TEST_STEP_NUMBER pADI_TMR0->LD
#define RTC_ISR_STEP_NUMBER pADI_TMR0->PMAT

#define RTC_ISR_STEP_OFFSET     12      // Bit positioning of the RTC ISR step number value in the write to RTC_ISR_STEP_NUMBER.

//========================================
//RTCDBG keys
#define RTC_DEBUG_UNLOCK_KEY1   0x9FDE
#define RTC_DEBUG_UNLOCK_KEY2   0x86C9

//========================================
#define RTC_12BIT_KEY_OFFSET     4
#define RTC_12BIT_KEY_SHIFT     12

#define NUM_REGS 18
//========================================

//========================================
//
#define WERRCODE_RTCCR   ((&pADI_rtc->CR0 >> 2) & 0x0000000F)
#define WERRCODE_RTCSR   ((&pADI_rtc->SR0 >> 2) & 0x0000000F)
#define WERRCODE_RTCSR0  ((&pADI_rtc->SR0 >> 2) & 0x0000000F)
#define WERRCODE_RTCSR1  ((&pADI_rtc->SR1 >> 2) & 0x0000000F)
#define WERRCODE_RTCCNT0 ((&pADI_rtc->CNT0 >> 2) & 0x0000000F)
#define WERRCODE_RTCCNT1 ((&pADI_rtc->CNT1 >> 2) & 0x0000000F)
#define WERRCODE_RTCALM0 ((&pADI_rtc->ALM0 >> 2) & 0x0000000F)
#define WERRCODE_RTCALM1 ((&pADI_rtc->ALM1 >> 2) & 0x0000000F)
#define WERRCODE_RTCTRM  ((&pADI_rtc->TRM >> 2) & 0x0000000F)

#define WERRCODE_NOERR    0xF
#define WERRCODE_FIFOFULL ((1 << 3) | (((int)(&pADI_rtc->CR0) >> 2) & 0x00000007))
#define WERRCODE_WDOG     ((1 << 3) | (((int)(&pADI_rtc->SR0) >> 2) & 0x00000007)) 

// Pointer values for data sub-mux steering during debug-mode APB reads of the RTCDBG MMR...
// 
#define RTC_DEBUG_PTR_TRANS_FIFO    0
#define RTC_DEBUG_PTR_EVENT_MARKERS 1
#define RTC_DEBUG_PTR_GATED_CLOCKS  2
#define RTC_DEBUG_PTR_SYNC_FLAGS    3
#define RTC_DEBUG_PTR_WDOG_POSTED   4
#define RTC_DEBUG_PTR_COMPRESS_CNT  5
#define RTC_DEBUG_PTR_LOCK_RST_ISO  6
#define RTC_DEBUG_PTR_DEFAULT       7

#define AWAIT_TRANSACTION   0
#define SERVICE_TRANSACTION 1

// Keys with which software authorises specific actions to be 
// undertaken *provided* RTC debug access is already enabled...
// 

#define RTC_SW_UNLOCK_TRANS_KEY  0x0000de67
#define RTC_WATCHDOG_CONFIG_KEY  0x00000f9b     // Note : In a 16-bit APB write, the 4 MSBs contain the watchdog *configuration*. The 12 LSBs contain the enabling *key*.
#define RTC_DEBUG_PTR_CONFIG_KEY 0x000006d6     // Note : In a 16-bit APB write, the 3 MSBs contain the pointer *configuration*. The 12 LSBs contain the enabling *key*.
#define RTC_RTCCR_CONFIG_KEY     0x000006bd     // Note : In a 16-bit APB write, the MSB contains the RTCCR hidden field configuration. The 12 LSBs contain the enabling *key*.
#define RTC_DBG_DISPRESCALE RTC_RTCCR_CONFIG_KEY | (0x1 << 12)
#define RTC_DBG_NODISPRESCALE RTC_RTCCR_CONFIG_KEY | (0x0 << 12)

#define RTC_IRQ_count (*(volatile unsigned long *) 0x2000100C)
void clk_div_1(void);
void enable_32k_clock(void);
void set_hclk_div(int value)
{
  uint32_t WriteMask = ~BITM_CLKGT_CLKCON1_HCLKDIVCNT;
  pADI_CLKGT->CLKCON1 = (pADI_CLKGT->CLKCON1 & WriteMask)
                      | ((value << BITP_CLKGT_CLKCON1_HCLKDIVCNT) & (BITM_CLKGT_CLKCON1_HCLKDIVCNT));   
}

void set_pclk_div(int value)
{
  uint32_t WriteMask = ~BITM_CLKGT_CLKCON1_PCLKDIVCNT;
  pADI_CLKGT->CLKCON1 = (pADI_CLKGT->CLKCON1 & WriteMask) 
                      | ((value << BITP_CLKGT_CLKCON1_PCLKDIVCNT) & (BITM_CLKGT_CLKCON1_PCLKDIVCNT));   
}


void wait_sync(void)
{
    //Nop(50);
  for(int i=0;i<0xff;i++);
    //while((pADI_rtc->SR0 & 0x3F80) != 0x3F80); // we are only interested in sync bits
    //while((pADI_rtc->SR2) & 0xC000 != 0xC000);
    while(~pADI_rtc->SR0 & 0x3F80); // we are only interested in sync bits
    while(~pADI_rtc->SR2 & 0xC000);
}
void wait_pend(void)
{
    //while((pADI_rtc->SR1) & 0x3F80 != 0x3F80); // wait until all writes are no longer pending
    //while((pADI_rtc->SR2) & 0x3000 != 0x3000);
    while(pADI_rtc->SR1 & 0x3F80); // wait until all writes are no longer pending
    while(pADI_rtc->SR2 & 0x3000);
}
void clear_rtc_irpts(void)
{
    //info("Clearing irq sources");
    pADI_rtc->SR0 = 0xFF;
    pADI_rtc->SR2 = 0xFF;
    wait_sync();
}
void clear_initial_rtc_irpts(void)
{
    clear_rtc_irpts();
    NVIC_ClearPendingIRQ(RTC_IRQn);
}

void wait_rtc_ready(void) //wait until the RTC is ready to accept commands after a power up for example
{
#define LOCK_ISO (RTC_SR0_LOCK32KHZ_Msk | RTC_SR0_ISOENB_Msk)
    unsigned int SR0_MASKED;
    clk_div_1();
    enable_32k_clock();
    //info("Lock | ISO masks == %0x",  LOCK_ISO);
    do {
        // Unlock RTC debug access...
        // 
        pADI_rtc->DBG = RTC_DEBUG_UNLOCK_KEY1;
        pADI_rtc->DBG = RTC_DEBUG_UNLOCK_KEY2;
        SR0_MASKED = pADI_rtc->SR0 & LOCK_ISO;
        //info("SR0 & (LOCK | ISO) = %0x",SR0_MASKED);
        }
    while (SR0_MASKED != LOCK_ISO);
    //info("Lock achieved and isolation down");

}

void unlock_rtc_debug(void)
{
    pADI_rtc->DBG = RTC_DEBUG_UNLOCK_KEY1;
    pADI_rtc->DBG = RTC_DEBUG_UNLOCK_KEY2;
}

void debug_8khz_mode(void)
{
    unlock_rtc_debug();
    pADI_rtc->DBG = RTC_DBG_DISPRESCALE;

}
void no_debug_8khz_mode(void)
{
    unlock_rtc_debug();
    pADI_rtc->DBG = RTC_DBG_NODISPRESCALE;

}
void clk_div_1()
{
    // Preamble to allow the eFuse refresh at power-on reset 
    // to complete before changing back to 8'h01 the divide-down
    // ratio for the bus matrix's clock. This facilitates the rest
    // of the test which has been written on the basis of a 
    // clock-divide ratio of one...
    // TODO - Next two lones should not be commented
    //while (ADI_EFUSE_CTRL->NVM_STATUS0 & EFUSE_CTRL_NVM_STATUS0_NVM_BUSY_Msk);  
    //set_mem_field2(CRMGT_PROC_CLK_DIV_SYSCLK_DIVIDE, 1);
    set_hclk_div(1);
    set_pclk_div(1);
}

void enable_32k_clock()
{
    pADI_CLK->OSCKEY = 0xCB14;
    pADI_CLK->OSCCTRL |= BITM_CLK_OSCCTRL_LFXTALEN;
   while(!((pADI_CLK->OSCCTRL) & BITM_CLK_OSCCTRL_LFXTALOK));
}

#endif

