#define WDT_WD_STOP								1 
#define WDT_IRQ_TIMEOUT						(1<<1)  
#define PS_BY1                    (0<<2)
#define PS_BY16                   (1<<2)
#define PS_BY256                  (2<<2)
#define PS_BY4096                 (3<<2)
#define PCLK											(1<<4)
#define WD_EN											(1<<5)
#define PERIODIC									(1<<6)



#define WDT_WD_STOP_BIT						0 
#define WDT_IRQ_TIMEOUT_BIT				1  
#define PCLK_BIT									4
#define WD_EN_BIT									5
#define PERIODIC_BIT							6


#define WD_RST_POR								1

#define WD_RST_CTRL_BIT						0
#define WDT_EN										(1<<5)

