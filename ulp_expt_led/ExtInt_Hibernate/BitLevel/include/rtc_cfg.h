#include <inttypes.h>
#include "ADF7030_arm.h"
#include "ADF7030.h"

    // Preamble to allow the eFuse refresh at power-on reset 
    // to complete before changing back to 8'h01 the divide-down
    // ratio for the bus matrix's clock. This facilitates the rest
    // of the test which has been written on the basis of a 
    // clock-divide ratio of one...
    // 
void clk_div_1()
{
    while (ADI_EFUSE_CTRL->NVM_STATUS0 & EFUSE_CTRL_NVM_STATUS0_NVM_BUSY_Msk);  
    set_mem_field2(CRMGT_PROC_CLK_DIV_SYSCLK_DIVIDE, 1);
}

