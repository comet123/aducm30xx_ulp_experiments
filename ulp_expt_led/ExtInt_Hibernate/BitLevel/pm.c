//------------------------------------------------------------------------
//
// Copyright (c) 2012 Analog Devices
// Analog Devices Confidential. All rights reserved.
//
// Description:
//   C functions for system system power management.
//
// Revision History:
//   15 Feb 2012: Originally coded by Jakub Dudek for Roche project.
//
//------------------------------------------------------------------------

#include "pm.h"
#include "device.h"
// *********************************************************
// **************** FLEXI **********************************
// *********************************************************


void flexi_hs(){
  PowAtom(ENUM_PMG_PWRMOD_FLEXI);

  //Clear deep power mode
  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk;
  // send sync to testbench
  sync2tb(100);

  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_CORESLEEP, 0x3);
}

void flexi(){
  PowAtom(ENUM_PMG_PWRMOD_FLEXI);

  //Clear deep power mode
  SCB->SCR &= ~SCB_SCR_SLEEPDEEP_Msk;
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_CORESLEEP, 0x3);
}

// *********************************************************
// **************** SYS SLEEP ******************************
// *********************************************************
void sys_sleep_hs(){
  PowAtom(ENUM_PMG_PWRMOD_SYSSLEEP);

  // send sync to testbench
  sync2tb(100);
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_SYSSLEEP, 0x3);
}

void sys_sleep(){
  PowAtom(ENUM_PMG_PWRMOD_SYSSLEEP);

  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_SYSSLEEP, 0x3);
}

// *********************************************************
// **************** HIBERNATE ******************************
// *********************************************************
void hibernate_hs(){
  PowAtom(ENUM_PMG_PWRMOD_HIBERNATE);

  //deep power mode
  SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

  // send sync to testbench
  sync2tb(100);
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_HIBERNATE, 0x3);
}

void hibernate(){
  PowAtom(ENUM_PMG_PWRMOD_HIBERNATE);

  //deep power mode
 // SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
pADI_cortex->INTCON0 = 4;
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  // MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_HIBERNATE, 0x3);
}

void hibernate_ret_hs(bool ret){
  PowAtomRet(ENUM_PMG_PWRMOD_HIBERNATE, ret);

  //deep power mode
  SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

  // send sync to testbench
  sync2tb(100);
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_HIBERNATE, 0x3);
}

void hibernate_ret(bool ret){
  PowAtomRet(ENUM_PMG_PWRMOD_HIBERNATE, ret);

  //deep power mode
  SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_HIBERNATE, 0x3);
}

void hibernate_ie0_hs(){

  // Enable EXT_IRQ_IN0  in NVIC
  NVIC->ISER[NVIC_IRQ_EXTIRQ0/32] |= 1 << (NVIC_IRQ_EXTIRQ0%32);
  // enable GPIO as inputs for external interrupt 0
  EXTINT0_GPIO_EN();
  // Configure IDU to enable External interrupt0
  pADI_EXTINT-> EI0CFG = BITM_EXTINT_EI0CFG_IRQ0EN;
  //Go to Hibernate
  hibernate_hs();

}

// *********************************************************
// **************** SHUTDOWN *******************************
// *********************************************************
void shutdown_hs(){
  PowAtom(ENUM_PMG_PWRMOD_SHUTDOWN);

  //deep power mode
  SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

  // send sync to testbench
  sync2tb(100);
  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_SHUTDOWN, 0x3);
}

void shutdown(){
  PowAtom(ENUM_PMG_PWRMOD_SHUTDOWN);

  //deep power mode
  SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;

  //go to sleep
  asm("wfi");
  
  // waiting for interrupt from external thread
  // after ISR, the execution returns here

  //Check that power mode is still correct
  //MemCheck16Mask(PWRMOD_A, ENUM_PMG_PWRMOD_SHUTDOWN, 0x3);
} 

int shutdown_wakeup_check (uint32_t shutdown_expected_status){

  uint32_t shutdown_status_read;

  shutdown_status_read = pADI_PMG->SHUTDOWN_STATUS;

  if(shutdown_status_read == REG_PMG_SHUTDOWN_STATUS_RESET)
  {
       //info("Wakeup from POR");
  }
  else if(shutdown_status_read == shutdown_expected_status)
  {
    //info("Wakeup from SHUTDOWN correct source");
    return EXIT_SUCCESS;
  }
  else
  {
    //error("Wakeup from SHUTDOWN wrong source");
    exit(EXIT_FAILURE);
  }

return CONTINUE_TEST; 
}

//Rand delay Function
//There is a corresponding delay block in testbench
//rand_delay(); Need to call this from test.sv

void rand_delay(){
 sync2tb(110);
 wait4tb(110);
}

