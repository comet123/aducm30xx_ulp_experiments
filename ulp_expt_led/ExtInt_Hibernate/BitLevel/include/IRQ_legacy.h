/*   
THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES INC. ``AS IS'' AND ANY EXPRESS OR 
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT, ARE 
DISCLAIMED. IN NO EVENT SHALL ANALOG DEVICES INC. BE LIABLE FOR ANY DIRECT, 
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.

YOU ASSUME ANY AND ALL RISK FROM THE USE OF THIS CODE OR SUPPORT FILE.  

IT IS THE RESPONSIBILITY OF THE PERSON INTEGRATING THIS CODE INTO AN APPLICATION
TO ENSURE THAT THE RESULTING APPLICATION PERFORMS AS REQUIRED AND IS SAFE.

    Module       : IRQ_legacy.h
    Description  : IRQ definitions
    Date         : $Date
    Version      : $Revision
*/
// DMA Request channels  (16 channels defined)
#define DMA_REQ_SPIH0_TX        0 
#define DMA_REQ_SPIH0_RX        1 
#define DMA_REQ_SPORT0_A        2 
#define DMA_REQ_SPORT0_B        3 

#define DMA_REQ_SPI0_TX         4 
#define DMA_REQ_SPI0_RX         5 
#define DMA_REQ_SPI1_TX         6 
#define DMA_REQ_SPI1_RX         7 

#define DMA_REQ_UART_TX         8 
#define DMA_REQ_UART_RX         9 

#define DMA_REQ_I2C0_SLV_TX     10 
#define DMA_REQ_I2C0_SLV_RX     11
#define DMA_REQ_I2C0_MST_TX     12 // Same for tx and rx
#define DMA_REQ_I2C0_MST_RX     12 // Same for tx and rx

//#define DMA_REQ_AFE_TX          11 
//#define DMA_REQ_AFE_RX          12
#define DMA_REQ_AES_TX          13
#define DMA_REQ_AES_RX          14
//#define DMA_REQ_CRC             13
//#define DMA_REQ_PDISP_IF        14
//#define DMA_REQ_I2S             15
#define DMA_REQ_FLSH             15

#define DMA_REQ_SIP_CH0         16
#define DMA_REQ_SIP_CH1         17
#define DMA_REQ_SIP_CH2         18
#define DMA_REQ_SIP_CH3         19
#define DMA_REQ_SIP_CH4         20
#define DMA_REQ_SIP_CH5         21
#define DMA_REQ_SIP_CH6         22
#define DMA_REQ_SIP_CH7         23

/* Interrupt numbers                                                         */
//         External Interrupt Enable Register 0
#define INT_NUM_WAKEUP       NVIC_IRQ_RTC            
#define INT_NUM_EXT_INT0     NVIC_IRQ_EXTIRQ0        
#define INT_NUM_EXT_INT1     NVIC_IRQ_EXTIRQ1        
#define INT_NUM_EXT_INT2     NVIC_IRQ_EXTIRQ2        
#define INT_NUM_EXT_INT3     NVIC_IRQ_EXTIRQ3        
//#define INT_NUM_EXT_INT4     NVIC_IRQ_WDG            
//#define INT_NUM_EXT_INT5     NVIC_IRQ_VREG_OVER      
//#define INT_NUM_EXT_INT6     NVIC_IRQ_BVR            
//#define INT_NUM_EXT_INT7     NVIC_IRQ_GPIO_INTA      
//#define INT_NUM_EXT_INT8     NVIC_IRQ_GPIO_INTB      
#define INT_NUM_WDOG_TMR     NVIC_IRQ_WDG                           
#define INT_NUM_GP_TMR0      NVIC_IRQ_TIMER0_EXPIRED 
#define INT_NUM_GP_TMR1      NVIC_IRQ_TIMER1_EXPIRED 
#define INT_NUM_FLSH         NVIC_IRQ_FLASH                        
#define INT_NUM_UART0        NVIC_IRQ_UART                        
#define INT_NUM_SPI0         NVIC_IRQ_SPI0             
#define INT_NUM_SPIH0        NVIC_IRQ_SPIH           
#define INT_NUM_I2C0_SLAVE   NVIC_IRQ_I2C0_SLAVE     
#define INT_NUM_I2C0_MASTER  NVIC_IRQ_I2C0_MASTER    
#define INT_NUM_DMA_ERROR    NVIC_IRQ_DMA_ERROR
#define INT_NUM_DMA_FIRST    NVIC_IRQ_DMA_CH0_DONE

// DMA Channel Interrupts
#define INT_NUM_DMA_SPIH0_TX  (INT_NUM_DMA_FIRST + DMA_REQ_SPIH0_TX    )    // DMA SPIH0 TX                   
#define INT_NUM_DMA_SPIH0_RX  (INT_NUM_DMA_FIRST + DMA_REQ_SPIH0_RX    )    // DMA SPIH0 RX
#define INT_NUM_DMA_SPI0_TX   (INT_NUM_DMA_FIRST + DMA_REQ_SPI0_TX     )    // DMA SPI0 TX
#define INT_NUM_DMA_SPI0_RX   (INT_NUM_DMA_FIRST + DMA_REQ_SPI0_RX     )    // DMA SPI0 RX
#define INT_NUM_DMA_SPI1_TX   (INT_NUM_DMA_FIRST + DMA_REQ_SPI1_TX     )    // DMA SPI1 TX
#define INT_NUM_DMA_SPI1_RX   (INT_NUM_DMA_FIRST + DMA_REQ_SPI1_RX     )    // DMA SPI1 RX
#define INT_NUM_DMA_UART_TX   (INT_NUM_DMA_FIRST + DMA_REQ_UART_TX     )    // DMA UART TX
#define INT_NUM_DMA_UART_RX   (INT_NUM_DMA_FIRST + DMA_REQ_UART_RX     )    // DMA UART RX
#define INT_NUM_DMA_I2C0_STX  (INT_NUM_DMA_FIRST + DMA_REQ_I2C0_SLV_TX )    // DMA I2C0 Slave TX
#define INT_NUM_DMA_I2C0_SRX  (INT_NUM_DMA_FIRST + DMA_REQ_I2C0_SLV_RX )    // DMA I2C0 Slave RX
#define INT_NUM_DMA_I2C0_MTX  (INT_NUM_DMA_FIRST + DMA_REQ_I2C0_MST_TX )    // DMA I2C0 Master TX
#define INT_NUM_DMA_I2C0_MRX  (INT_NUM_DMA_FIRST + DMA_REQ_I2C0_MST_RX )    // DMA I2C0 Master RX
#define INT_NUM_DMA_AFE_TX    (INT_NUM_DMA_FIRST + DMA_REQ_AFE_TX      )    // DMA AFE TX
#define INT_NUM_DMA_AFE_RX    (INT_NUM_DMA_FIRST + DMA_REQ_AFE_RX      )    // DMA AFE RX
#define INT_NUM_DMA_CRC       (INT_NUM_DMA_FIRST + DMA_REQ_CRC         )    // DMA CRC
#define INT_NUM_DMA_PDISP_IF  (INT_NUM_DMA_FIRST + DMA_REQ_PDISP_IF    )    // DMA Parallel Disp IF
#define INT_NUM_DMA_I2S       (INT_NUM_DMA_FIRST + DMA_REQ_I2S         )    // DMA I2S
              
#define INT_NUM_DMA_LAST      35     //                            dma_last
//         External Interrupt Enable Register 1
//#define INT_NUM_USBWKUP       36     // USB WakeUp                 irq_usbwkup    
//#define INT_NUM_USB           37     // USB                        irq_usb    
//#define INT_NUM_USBDMA        38     // USB DMA                    irq_usbdma
//#define INT_NUM_I2S              
#define INT_NUM_GP_TMR2      NVIC_IRQ_TIMER2_EXPIRED
#define INT_NUM_FLSH1        NVIC_IRQ_FLASH
#define INT_NUM_SPI1         NVIC_IRQ_SPI1
#define INT_NUM_RTC          NVIC_IRQ_RTC
//#define INT_NUM_CRC          
#define INT_NUM_BEEPER       NVIC_IRQ_BEEPER
//#define INT_NUM_LCD          
#define INT_NUM_GPIO_A       NVIC_IRQ_GPIO_INTA
#define INT_NUM_GPIO_B       NVIC_IRQ_GPIO_INTB
//#define INT_NUM_AFE_INSERT   
//#define INT_NUM_AFE_ACAP     
//#define INT_NUM_AFE_AGEN     
//#define INT_NUM_AFE_CMDFIFO  
//#define INT_NUM_AFE_DATFIFO  
//#define INT_NUM_CAPTOUCH     
//#define INT_NUM_GPFLSH       
#define INT_NUM_XOSC         NVIC_IRQ_CRYSTAL_OSC
#define INT_NUM_PLL          NVIC_IRQ_PLL
#define INT_NUM_RNG          NVIC_IRQ_RNG
//#define INT_NUM_PDISP_IF     
//#define INT_NUM_PARITY       

/* For writing to NVIC enable registers                                                         */
//         External Interrupt Enable Register 0
#define NVIC_EN0_WAKEUP        (1UL << INT_NUM_WAKEUP      ) // Wake Up Timer              irq_wut       
#define NVIC_EN0_EXT_INT0      (1UL << INT_NUM_EXT_INT0    ) // External Interrupt 0       irq_extint0 
#define NVIC_EN0_EXT_INT1      (1UL << INT_NUM_EXT_INT1    ) // External Interrupt 1       irq_extint1 
#define NVIC_EN0_EXT_INT2      (1UL << INT_NUM_EXT_INT2    ) // External Interrupt 2       irq_extint2 
#define NVIC_EN0_EXT_INT3      (1UL << INT_NUM_EXT_INT3    ) // External Interrupt 3       irq_extint3 
//#define NVIC_EN0_EXT_INT4      (1UL << INT_NUM_EXT_INT4    ) // External Interrupt 4       irq_extint4 
//#define NVIC_EN0_EXT_INT5      (1UL << INT_NUM_EXT_INT5    ) // External Interrupt 5       irq_extint5 
//#define NVIC_EN0_EXT_INT6      (1UL << INT_NUM_EXT_INT6    ) // External Interrupt 6       irq_extint6 
//#define NVIC_EN0_EXT_INT7      (1UL << INT_NUM_EXT_INT7    ) // External Interrupt 7       irq_extint7 
//#define NVIC_EN0_EXT_INT8      (1UL << INT_NUM_EXT_INT8    ) // External Interrupt 8       irq_extint8 
#define NVIC_EN0_WDOG_TMR      (1UL << INT_NUM_WDOG_TMR    ) // Watchdog timer handler     irq_wd      
#define NVIC_EN0_GP_TMR0       (1UL << INT_NUM_GP_TMR0     ) // General purpose timer 0    irq_gpt0    
#define NVIC_EN0_GP_TMR1       (1UL << INT_NUM_GP_TMR1     ) // General purpose timer 1    irq_gpt1    
#define NVIC_EN0_FLSH          (1UL << INT_NUM_FLSH        ) // Flash IRQ                  irq_flash   
#define NVIC_EN0_UART0         (1UL << INT_NUM_UART0       ) // UART0                      irq_uart    
#define NVIC_EN0_SPI0          (1UL << INT_NUM_SPI0        ) // SPI 0                      irq_spi0    
#define NVIC_EN0_SPIH0         (1UL << INT_NUM_SPIH0       ) // SPIH 0                     irq_spih0    
#define NVIC_EN0_I2C0_SLAVE    (1UL << INT_NUM_I2C0_SLAVE  ) // I2C0 Slave                 irq_i2cs0   
#define NVIC_EN0_I2C0_MASTER   (1UL << INT_NUM_I2C0_MASTER ) // I2C0 Master                irq_i2cm0   
#define NVIC_EN0_DMA_ERROR     (1UL << INT_NUM_DMA_ERROR   ) // DMA Error interrupt        dma_error   
#define NVIC_EN0_DMA_SPIH0_TX  (1UL << INT_NUM_DMA_SPIH0_TX ) // DMA SPIH 0 TX             dma_first   
#define NVIC_EN0_DMA_SPIH0_RX  (1UL << INT_NUM_DMA_SPIH0_RX ) // DMA SPIH 1 RX
#define NVIC_EN0_DMA_SPI0_TX   (1UL << INT_NUM_DMA_SPI0_TX  ) // DMA SPI0 TX
#define NVIC_EN0_DMA_SPI0_RX   (1UL << INT_NUM_DMA_SPI0_RX  ) // DMA SPI0 RX
#define NVIC_EN0_DMA_SPI1_TX   (1UL << INT_NUM_DMA_SPI1_TX  ) // DMA SPI1 TX
#define NVIC_EN0_DMA_SPI1_RX   (1UL << INT_NUM_DMA_SPI1_RX  ) // DMA SPI1 RX
#define NVIC_EN0_DMA_UART_TX   (1UL << INT_NUM_DMA_UART_TX  ) // DMA UART TX
#define NVIC_EN0_DMA_UART_RX   (1UL << INT_NUM_DMA_UART_RX  ) // DMA UART RX
#define NVIC_EN0_DMA_I2C0_STX  (1UL << INT_NUM_DMA_I2C0_STX ) // DMA I2C0 Slave TX
#define NVIC_EN0_DMA_I2C0_SRX  (1UL << INT_NUM_DMA_I2C0_SRX ) // DMA I2C0 Slave RX
#define NVIC_EN0_DMA_I2C0_MTX  (1UL << INT_NUM_DMA_I2C0_MTX ) // DMA I2C0 Master TX
#define NVIC_EN0_DMA_I2C0_MRX  (1UL << INT_NUM_DMA_I2C0_MRX ) // DMA I2C0 Master RX
#define NVIC_EN0_DMA_AFE_TX    (1UL << INT_NUM_DMA_AFE_TX   ) // DMA AFE TX
//         External Interrupt Enable 1
#define NVIC_EN1_DMA_AFE_RX    (1UL << (INT_NUM_DMA_AFE_RX    - 32) ) // DMA AFE RX
#define NVIC_EN1_DMA_CRC       (1UL << (INT_NUM_DMA_CRC       - 32) ) // DMA CRC
#define NVIC_EN1_DMA_PDISP_IF  (1UL << (INT_NUM_DMA_PDISP_IF  - 32) ) // DMA Parallel Disp IF
#define NVIC_EN1_DMA_I2S       (1UL << (INT_NUM_DMA_I2S       - 32) ) // DMA I2S            dma_last     
//#define NVIC_EN1_USBWKUP       (1UL << (INT_NUM_USBWKUP      - 32) ) // USB WakeUp                 irq_usbwkup    
//#define NVIC_EN1_USB           (1UL << (INT_NUM_USB          - 32) ) // USB                        irq_usb    
//#define NVIC_EN1_USBDMA        (1UL << (INT_NUM_USBDMA       - 32) ) // USBDMA                     irq_usbdma    
//#define NVIC_EN1_I2S           (1UL << (INT_NUM_I2S          - 32) ) // I2S                        irq_i2s
#define NVIC_EN1_GP_TMR2       (1UL << (INT_NUM_GP_TMR2      - 32) ) // General purpose timer 2    irq_gpt2    
#define NVIC_EN1_FLSH1         (1UL << (INT_NUM_FLSH1        ) ) // Flash 1 IRQ                irq_flash1   
#define NVIC_EN1_SPI1          (1UL << (INT_NUM_SPI1         - 32) ) // SPI 1                      irq_spi1    
#define NVIC_EN1_RTC           (1UL << (INT_NUM_RTC          ) ) // Real Time Clock   
//#define NVIC_EN1_CRC           (1UL << (INT_NUM_CRC          - 32) ) // CRC
#define NVIC_EN1_BEEPER        (1UL << (INT_NUM_BEEPER       - 32) ) // Beeper
//#define NVIC_EN1_LCD           (1UL << (INT_NUM_LCD          - 32) ) // LCD Controller
#define NVIC_EN1_GPIO_A        (1UL << (INT_NUM_GPIO_A       ) ) // GPIO Int A
#define NVIC_EN1_GPIO_B        (1UL << (INT_NUM_GPIO_B       ) ) // GPIO Int B
//#define NVIC_EN1_AFE_INSERT    (1UL << (INT_NUM_AFE_INSERT   - 32) ) // AFE Controller (Strip Insert)
//#define NVIC_EN1_AFE_ACAP      (1UL << (INT_NUM_AFE_ACAP     - 32) ) // AFE Controller (Analog Capture Interrupt)
//#define NVIC_EN1_AFE_AGEN      (1UL << (INT_NUM_AFE_AGEN     - 32) ) // AFE Ctlr (Analog Generation Interrupt)
//#define NVIC_EN1_AFE_CMDFIFO   (1UL << (INT_NUM_AFE_CMDFIFO  - 32) ) // AFE Controller (Command FIFO Interrupt)
//#define NVIC_EN1_AFE_DATFIFO   (1UL << (INT_NUM_AFE_DATFIFO  - 32) ) // AFE Controller (Data FIFO Interrupt)
//#define NVIC_EN1_CAPTOUCH      (1UL << (INT_NUM_CAPTOUCH     - 32) ) // Cap Touch
//#define NVIC_EN1_GPFLSH        (1UL << (INT_NUM_GPFLSH       - 32) ) // GP Flash Controller
#define NVIC_EN1_XOSC          (1UL << (INT_NUM_XOSC         - 32) )  // XOSC                irq_xosc    
#define NVIC_EN1_PLL           (1UL << (INT_NUM_PLL          - 32) )  // PLL                 irq_pll    
#define NVIC_EN1_RNG           (1UL << (INT_NUM_RNG          - 32) )  // Random Bit Generator
//#define NVIC_EN1_PDISP_IF      (1UL << (INT_NUM_PDISP_IF     - 32) )  // Parallel Display Interface
//#define NVIC_EN1_PARITY        (1UL << (INT_NUM_PARITY       - 32) )  // Flash Parity

// The following defintions were also used and will be maintained
// NOTE!!! Use the intclear and intset macros for setting and clearing interrupts
// rather than writing these directly to INTCLRE* and INTSETE* so that the assembly
// code is independent of the IRQ number which is likely to change from system
// to system.

#define WAKEUP          (1 << INT_NUM_WAKEUP      ) 
#define EXT_INT0        (1 << INT_NUM_EXT_INT0    )
#define EXT_INT1        (1 << INT_NUM_EXT_INT1    )
#define EXT_INT2        (1 << INT_NUM_EXT_INT2    )
#define EXT_INT3        (1 << INT_NUM_EXT_INT3    )
#define WDOG_TMR        (1 << INT_NUM_WDOG_TMR    )
#define GP_TMR0         (1 << INT_NUM_GP_TMR0     )
#define GP_TMR1         (1 << INT_NUM_GP_TMR1     )
#define GP_TMR2         (1 << (INT_NUM_GP_TMR2 - 32))
#define I2C0_MASTER     (1 << INT_NUM_I2C0_MASTER )
#define I2C0_SLAVE      (1 << INT_NUM_I2C0_SLAVE  )
#define SPI0            (1 << INT_NUM_SPI0        )
#define UART0           (1 << INT_NUM_UART0       )
//#define SPIH0           (1 << INT_NUM_SPIH0       )
#define FLSH            (1 << INT_NUM_FLSH        )

#define DMA_ERROR       (1 << INT_NUM_DMA_ERROR   )
#define DMA_SPIH0_TX    (1 << INT_NUM_DMA_SPIH0_TX )
#define DMA_SPIH0_RX    (1 << INT_NUM_DMA_SPIH0_RX )
#define DMA_SPI0_TX    (1 << INT_NUM_DMA_SPI0_TX )
#define DMA_SPI0_RX    (1 << INT_NUM_DMA_SPI0_RX )
#define DMA_SPI1_TX    (1 << INT_NUM_DMA_SPI1_TX )
#define DMA_SPI1_RX    (1 << INT_NUM_DMA_SPI1_RX )
#define DMA_UART_TX     (1 << INT_NUM_DMA_UART_TX )
#define DMA_UART_RX     (1 << INT_NUM_DMA_UART_RX )
#define DMA_I2C0_STX    (1 << INT_NUM_DMA_I2C0_STX)
#define DMA_I2C0_SRX    (1 << INT_NUM_DMA_I2C0_SRX)
#define DMA_I2C0_MTX    (1 << INT_NUM_DMA_I2C0_MTX)
#define DMA_I2C0_MRX    (1 << INT_NUM_DMA_I2C0_MRX)

#define SPI0_Int_Handler SPI0_IRQHandler
#define SPI1_Int_Handler SPI1_IRQHandler
#define SPIH0_Int_Handler SPIH_IRQHandler
#define DMA_SPI0_TX_Int_Handler DMA_CHNL4_IRQHandler
#define DMA_SPI0_RX_Int_Handler DMA_CHNL5_IRQHandler

#define DMA_SPI1_TX_Int_Handler DMA_CHNL6_IRQHandler
#define DMA_SPI1_RX_Int_Handler DMA_CHNL7_IRQHandler

#define DMA_SPIH0_TX_Int_Handler DMA_CHNL0_IRQHandler
#define DMA_SPIH0_RX_Int_Handler DMA_CHNL1_IRQHandler

