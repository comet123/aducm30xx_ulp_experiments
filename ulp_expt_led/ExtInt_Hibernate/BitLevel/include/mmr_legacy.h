#ifndef MMR_LEGACY_H
#define MMR_LEGACY_H

// Map for Memory-mapped register names.
//
// DO NOT HARD-CODE NUMERIC ADDRESS VALUES HERE!
//
// #define old_name new_name
//   where old_name = legacy   register name
//   where new_name = Yoda XML register name

#define  CLKCON            CLKCON0
#define  CLKSTAT           CLKSTAT0
#define  CLKSTAT_A         CLKSTAT0_A
#define  EI0CFG            EXTINTEI0CFG
#define  EICLR             EXTINTEICLR
#define  EICLR_A           EXTINTEICLR_A
#define  SPI0CON           SPI0CTL
#define  SPI0RXCNT         SPI0CNT
#define  SPI1CON           SPI1CTL
#define  SPI1RXCNT         SPI1CNT
#define  SPIH0CNT          SPIHCNT
#define  SPIH0CS_CTL       SPIHCS_CTL
#define  SPIH0CS_OVERRIDE  SPIHCS_OVERRIDE
#define  SPIH0CON          SPIHCTL
#define  SPIH0DIV          SPIHDIV
#define  SPIH0DMA          SPIHDMA
#define  SPIH0FIFO_STAT    SPIHFIFO_STAT
#define  SPIH0FLOW_CTL     SPIHFLOW_CTL
#define  SPIH0IEN          SPIHIEN
#define  SPIH0RD_CTL       SPIHRD_CTL
#define  SPIH0RX           SPIHRX
#define  SPIH0RXCNT        SPIHCNT
#define  SPIH0STAT         SPIHSTAT
#define  SPIH0TX           SPIHTX
#define  SPIH0WAIT_TMR     SPIHWAIT_TMR
#define  SPI0CTRL          SPI0CTL
#define  SPI1CTRL          SPI1CTL
#define  SPIH0CTRL         SPIHCTL

#define  RTCCR0_A   RTC0CR0_A    
#define  RTCCR0     RTC0CR0      
#define  RTCSR0_A   RTC0SR0_A    
#define  RTCSR0     RTC0SR0      
#define  RTCSR1_A   RTC0SR1_A    
#define  RTCSR1     RTC0SR1      
#define  RTCCNT0_A  RTC0CNT0_A   
#define  RTCCNT0    RTC0CNT0     
#define  RTCCNT1_A  RTC0CNT1_A   
#define  RTCCNT1    RTC0CNT1     
#define  RTCALM0_A  RTC0ALM0_A   
#define  RTCALM0    RTC0ALM0     
#define  RTCALM1_A  RTC0ALM1_A   
#define  RTCALM1    RTC0ALM1     
#define  RTCTRM_A   RTC0TRM_A    
#define  RTCTRM     RTC0TRM      
#define  RTCGWY_A   RTC0GWY_A    
#define  RTCGWY     RTC0GWY      
#define  RTCDBG_A   RTC0DBG_A    
#define  RTCDBG     RTC0DBG      
#define  RTCCR1_A   RTC0CR1_A    
#define  RTCCR1     RTC0CR1      
#define  RTCSR2_A   RTC0SR2_A    
#define  RTCSR2     RTC0SR2      
#define  RTCSNAP0_A RTC0SNAP0_A  
#define  RTCSNAP0   RTC0SNAP0    
#define  RTCSNAP1_A RTC0SNAP1_A  
#define  RTCSNAP1   RTC0SNAP1    
#define  RTCSNAP2_A RTC0SNAP2_A  
#define  RTCSNAP2   RTC0SNAP2    
#define  RTCMOD_A   RTC0MOD_A    
#define  RTCMOD     RTC0MOD      
#define  RTCCNT2_A  RTC0CNT2_A   
#define  RTCCNT2    RTC0CNT2     
#define  RTCALM2_A  RTC0ALM2_A   
#define  RTCALM2    RTC0ALM2     

#endif // MMR_LEGACY_H
