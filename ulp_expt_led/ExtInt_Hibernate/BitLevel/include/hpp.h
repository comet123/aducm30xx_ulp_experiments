/*
 *	HPP specific routines
 *	
 *
 */


/*
 *	HPP clock configuration to run system at higher rate
 *	than legacy peripherals
 *
 */

#define SRAM2

void hpp_clk_div(u8 hclk_div, u8 pclk_div);

void hpp_uclk_div(u8 uclk_div, u8 aclk_div);

void hpp_spll_en_nointr(u8 pll_M, u8 pll_N, u8 pll_div2);

void hpp_upll_en_nointr(u8 pll_M, u8 pll_N, u8 pll_div2);


