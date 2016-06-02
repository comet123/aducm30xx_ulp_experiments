#ifndef __IRQ_H
#define __IRQ_H

// NVIC Interrupt positions
#define NVIC_IRQ_RTC1                    0   // RTC INTERRUPT 1
#define NVIC_IRQ_EXTIRQ0                 1   // EXTERNAL INTERRUPT 0
#define NVIC_IRQ_EXTIRQ1                 2   // EXTERNAL INTERRUPT 1
#define NVIC_IRQ_EXTIRQ2                 3   // EXTERNAL INTERRUPT 1
#define NVIC_IRQ_EXTIRQ3                 4   // EXTERNAL INTERRUPT 1
#define NVIC_IRQ_WDG                     5   // WATCHDOG TIMER
#define NVIC_IRQ_VREG_OVER               6   // VREG OVER
#define NVIC_IRQ_BVR                     7   // BATTERY VOLTAGE RANGE
#define NVIC_IRQ_RTC                     8   // RTC INTERRUPT 0
#define NVIC_IRQ_GPIO_INTA               9   // GPIO IntA
#define NVIC_IRQ_GPIO_INTB               10  // GPIO IntB

#define NVIC_IRQ_TIMER0_EXPIRED          11   // GENERAL PURPOSE TIMER 0
#define NVIC_IRQ_TIMER1_EXPIRED          12   // GENERAL PURPOSE TIMER 1


#define NVIC_IRQ_FLASH                   13   // Flash Controller
#define NVIC_IRQ_UART                    14   // UART
#define NVIC_IRQ_SPI0                    15   // SPI0
#define NVIC_IRQ_SPIH                    16   // SPI0
#define NVIC_IRQ_I2C0_SLAVE              17   // I2C0 Slave
#define NVIC_IRQ_I2C0_MASTER             18   // I2C0 Master

#define NVIC_IRQ_DMA_ERROR               19   // DMA Error
#define NVIC_IRQ_DMA_CH0_DONE            20   // DMA CH0 DONE
#define NVIC_IRQ_DMA_CH1_DONE            21   // DMA CH1 DONE
#define NVIC_IRQ_DMA_CH2_DONE            22   // DMA CH2 DONE
#define NVIC_IRQ_DMA_CH3_DONE            23   // DMA CH3 DONE
#define NVIC_IRQ_DMA_CH4_DONE            24   // DMA CH4 DONE
#define NVIC_IRQ_DMA_CH5_DONE            25   // DMA CH5 DONE
#define NVIC_IRQ_DMA_CH6_DONE            26   // DMA CH6 DONE
#define NVIC_IRQ_DMA_CH7_DONE            27   // DMA CH7 DONE
#define NVIC_IRQ_DMA_CH8_DONE            28   // DMA CH8 DONE
#define NVIC_IRQ_DMA_CH9_DONE            29   // DMA CH9 DONE
#define NVIC_IRQ_DMA_CH10_DONE           30   // DMA CH10 DONE
#define NVIC_IRQ_DMA_CH11_DONE           31   // DMA CH11 DONE
#define NVIC_IRQ_DMA_CH12_DONE           32   // DMA CH12 DONE
#define NVIC_IRQ_DMA_CH13_DONE           33   // DMA CH13 DONE
#define NVIC_IRQ_DMA_CH14_DONE           34   // DMA CH14 DONE
#define NVIC_IRQ_DMA_CH15_DONE           35   // DMA CH15 DONE

#define NVIC_IRQ_SPORT0A                 36   // SPORT0A
#define NVIC_IRQ_SPORT0B                 37   // SPORT0B

#define NVIC_IRQ_CRYPTO                  38   // Crypto

#define NVIC_IRQ_TIMER2_EXPIRED          40   // GENERAL PURPOSE TIMER 2

#define NVIC_IRQ_CRYSTAL_OSC             41   // Crystal oscillator
#define NVIC_IRQ_SPI1                    42   // SPI 1
#define NVIC_IRQ_PLL                     43   // PLL
#define NVIC_IRQ_RNG                     44   // RNG
#define NVIC_IRQ_BEEPER                  45   // BEEPER

#define NVIC_IRQ_SIP_ERROR               47
#define NVIC_IRQ_SIP0                    48   // SIP Interrupt 0
#define NVIC_IRQ_SIP1                    49   // SIP Interrupt 1
#define NVIC_IRQ_SIP2                    50   // SIP Interrupt 2
#define NVIC_IRQ_SIP3                    51   // SIP Interrupt 3
#define NVIC_IRQ_SIP4                    52   // SIP Interrupt 4
#define NVIC_IRQ_SIP5                    53   // SIP Interrupt 5
#define NVIC_IRQ_SIP6                    54   // SIP Interrupt 6
#define NVIC_IRQ_SIP7                    55   // SIP Interrupt 7

#define NVIC_IRQ_DMA_CH16_DONE           56   // DMA CH16 DONE
#define NVIC_IRQ_DMA_CH17_DONE           57   // DMA CH17 DONE
#define NVIC_IRQ_DMA_CH18_DONE           58   // DMA CH18 DONE
#define NVIC_IRQ_DMA_CH19_DONE           59   // DMA CH19 DONE
#define NVIC_IRQ_DMA_CH20_DONE           60   // DMA CH20 DONE
#define NVIC_IRQ_DMA_CH21_DONE           61   // DMA CH21 DONE
#define NVIC_IRQ_DMA_CH22_DONE           62   // DMA CH22 DONE
#define NVIC_IRQ_DMA_CH23_DONE           63   // DMA CH23 DONE

#include "IRQ_legacy.h"
#endif
