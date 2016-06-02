#ifndef POWER_H
#define POWER_H

#include <inttypes.h>
#include <stdlib.h>
#include "ADF7030_arm.h"
#include "ADF7030.h"

#define PMU_AWAKE_WRITE_ACCESS_KEY 0x35
#define RETAIN_SRAM set_mem_field(1, ADI_PMU->MAINTAIN, PMU_MAINTAIN_MAINTAIN_SRAM); //Ensure that the RTC has power when CORE is powered down
#define NO_RETAIN_SRAM set_mem_field(0, ADI_PMU->MAINTAIN, PMU_MAINTAIN_MAINTAIN_SRAM); //Ensure that the RTC has power when CORE is powered down
#define RET_ADDR_0 (*(volatile unsigned long *) 0x20000004)
#define RET_ADDR_1 (*(volatile unsigned long *) 0x20000008)

void maintain_rtc(void);
void power_off(void);
void lf_remove_isol(void);

#endif
