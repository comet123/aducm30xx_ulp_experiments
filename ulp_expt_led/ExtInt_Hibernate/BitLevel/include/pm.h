//------------------------------------------------------------------------
//
// Copyright (c) 2011 Analog Devices
// Analog Devices Confidential. All rights reserved.
//
// Description:
//   C header file for the Power management functions.
//
// Revision History:
//   2011: Originally coded for Roche project.
//
//------------------------------------------------------------------------

#include <stdbool.h>
#include <stdint.h>

#define PWRKEY_unlock 0x4859
#define CONTINUE_TEST 2
#define TESTPROTKEY_UNLOCK 0x5970418E

#define PowAtom(mode) pADI_PMG->PWRKEY = PWRKEY_unlock; pADI_PMG->PWRMOD = (pADI_PMG->PWRMOD & (~BITM_PMG_PWRMOD_PW_MD) ) +  (mode << BITP_PMG_PWRMOD_PW_MD);
//pADI_PMG->PWRMOD &= ~BITM_PMG_PWRMOD_PW_MD;pADI_PMG->PWRKEY = PWRKEY_unlock; pADI_PMG->PWRMOD |= (mode << BITP_PMG_PWRMOD_PW_MD);
#define PowAtomRet(mode,sram_ret) PowAtom(mode) 
#define UNLOCK_TEST_REG pADI_PMG->TESTPROT = TESTPROTKEY_UNLOCK;

// go to sleep
void flexi();
void flexi_hs();
void sys_sleep();
void sys_sleep_hs();
void hibernate();
void hibernate_hs();
void hibernate_ret(bool ret);
void hibernate_ret_hs(bool ret);
void shutdown();
void shutdown_hs();

void hibernate_ie0_hs();

int shutdown_wakeup_check (uint32_t shutdown_status);

void rand_delay();
