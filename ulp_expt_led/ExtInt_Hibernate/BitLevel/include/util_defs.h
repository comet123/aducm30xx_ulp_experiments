//---------------------------------------------------------------------------------------
// util_defs.h
//
// Description: this file contains defined values used by both util.h and util_assembly.h
//  it is included in both util.h and util_assembly.h
//
// Author: Jakub Dudek
//
// Date: 02/02/2012
//
//---------------------------------------------------------------------------------------


#define PNULL ((void *) 0) /* NULL pointer */

#define FALSE  0
#define TRUE   1
#define False  0
#define True   1
#define Passed 1
#define Failed 0
#define On     1
#define Off    0
#define Up     1
#define Down   0

#define TB_ISYNC_I2CM           1
#define TB_ISYNC_I2CM_1         2
#define TB_ISYNC_LFRX           3
#define TB_ISYNC_UART           4
#define TB_ISYNC_SPI0           5
#define TB_ISYNC_SPI1           6
#define TB_ISYNC_JTAG           7
#define TB_ISYNC_SPIH0          8
#define TB_ISYNC_ADC            9
#define TB_ISYNC_PROBE          10
#define TB_ISYNC_USB            11
#define TB_ISYNC_USB_LPM        12
#define TB_ISYNC_EXT_INT        13
#define TB_ISYNC_ANA            15
#define TB_ISYNC_STRIP          16
#define TB_ISYNC_SPI0_ufl_ofl   19
#define TB_ISYNC_I2S            20
#define TB_ISYNC_LCD            21

#define NUM_CHAR_IN_ULONG sizeof(unsigned long)
#define NUM_BITS_IN_ULONG (NUM_CHAR_IN_ULONG * CHAR_BIT)

#define BIT_0_HI     (0x1UL << 0  ) 
#define BIT_1_HI     (0x1UL << 1  ) 
#define BIT_2_HI     (0x1UL << 2  ) 
#define BIT_3_HI     (0x1UL << 3  ) 
#define BIT_4_HI     (0x1UL << 4  ) 
#define BIT_5_HI     (0x1UL << 5  ) 
#define BIT_6_HI     (0x1UL << 6  ) 
#define BIT_7_HI     (0x1UL << 7  ) 
#define BIT_8_HI     (0x1UL << 8  ) 
#define BIT_9_HI     (0x1UL << 9  ) 
#define BIT_10_HI    (0x1UL << 10 ) 
#define BIT_11_HI    (0x1UL << 11 ) 
#define BIT_12_HI    (0x1UL << 12 ) 
#define BIT_13_HI    (0x1UL << 13 ) 
#define BIT_14_HI    (0x1UL << 14 ) 
#define BIT_15_HI    (0x1UL << 15 ) 

#define BIT_0_LO     (0x0UL << 0  ) 
#define BIT_1_LO     (0x0UL << 1  ) 
#define BIT_2_LO     (0x0UL << 2  ) 
#define BIT_3_LO     (0x0UL << 3  ) 
#define BIT_4_LO     (0x0UL << 4  ) 
#define BIT_5_LO     (0x0UL << 5  ) 
#define BIT_6_LO     (0x0UL << 6  ) 
#define BIT_7_LO     (0x0UL << 7  ) 
#define BIT_8_LO     (0x0UL << 8  ) 
#define BIT_9_LO     (0x0UL << 9  ) 
#define BIT_10_LO    (0x0UL << 10 ) 
#define BIT_11_LO    (0x0UL << 11 ) 
#define BIT_12_LO    (0x0UL << 12 ) 
#define BIT_13_LO    (0x0UL << 13 ) 
#define BIT_14_LO    (0x0UL << 14 ) 
#define BIT_15_LO    (0x0UL << 15 ) 

#define MCU_HALT        0x0001
#define SYS_HALT        0x0002
#define TOTAL_HALT      0x0002
#define HIBERNATE       0x0003
#define SHUT_DOWN       0x0004

#define FULLPWR         0x0
#define CORE_SLEEP      0x1
#define SYS_SLEEP       0x2

#define PWRKEY_unlock1  0x4859
#define PWRKEY_unlock2  0xf27b        

#define WICENACK        0x8

#define OSCKEY_KEY 0xCB14
