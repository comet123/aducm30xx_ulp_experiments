#define  GP0CON_A                                      0x40020000
#define  GP0CON      (*(volatile unsigned long      *) 0x40020000)
#define UART_Rx_GPIO_EN_C() 	GP0CON = ((GP0CON)&0xFF0FFFFF) + 0x400000; //UART RX Side
#define UART_Tx_GPIO_EN_C() 	GP0CON = ((GP0CON)&0xFF0FFFFF) + 0x100000; // UART Tx side
#define UART_Tx_Rx_GPIO_EN_C() 	GP0CON = ((GP0CON)&0xFF0FFFFF) + 0x500000; // UART Tx side
