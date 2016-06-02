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

    Module       : timer2WU.h
    Description  : timer2 definitions
    Date         : $Date
    Version      : $Revision
    Changelog    :
*/

// Wake-Up Timer - WUTCON Bit Definitions
// 
#define WUTCON_PRESCALE_SEL_1       (0x0UL << 0  ) // Clock prescaler /1                 
#define WUTCON_PRESCALE_SEL_16      (0x1UL << 0  ) // Clock prescaler /16                 
#define WUTCON_PRESCALE_SEL_256     (0x2UL << 0  ) // Clock prescaler /256
#define WUTCON_PRESCALE_SEL_32768   (0x3UL << 0  ) // Clock prescaler /32768
#define WUTCON_START_SM_EN          (0x1UL << 2  ) // Enable for LFRx pulse                  
#define WUTCON_FREEZE_EN            (0x1UL << 3  ) // Enable freezing of counter             
#define WUTCON_FORMAT_BINARY        (0x0UL << 4  ) // Time format binary.                           
#define WUTCON_FREE_RUN             (0x1UL << 6  ) // Timer free run enable.                 
#define WUTCON_ENABLE               (0x1UL << 7  ) // Timer enable.                          
#define WUTCON_WAKE_UP_EN           (0x1UL << 8  ) // Wake up enable bits for all time values
#define WUTCON_CS_16M               (0x0UL << 9  ) // Clock Select.    
#define WUTCON_CS_32K               (0x1UL << 9  ) // Clock Select.                                               

typedef struct
{
   unsigned long  PRESCALE_SEL   : 2;       // Clock prescaler select                 
   unsigned long  START_SM_EN    : 1;       // Enable for LFRx pulse                  
   unsigned long  FREEZE_EN      : 1;       // Enable freezing of counter             
   unsigned long  FORMAT         : 2;       // Time format.                           
   unsigned long  FREE_RUN       : 1;       // Timer free run enable.                 
   unsigned long  ENABLE         : 1;       // Timer enable.                          
   unsigned long  WAKE_UP_EN     : 1;       // Wake up enable bits for all time values
   unsigned long  CS             : 1;       // Clock Select.                          
   unsigned long  UNUSED         : 22;      // Unsused                                
} TyWUTCON;


// Wake-Up Timer - WUTIEN Bit Definitions
// 
#define WUTIEN_IRQ_WAKE_UP_EN0   (0x1UL << 0  ) // Interrupt enable bit field 0
#define WUTIEN_IRQ_WAKE_UP_EN1   (0x1UL << 1  ) // Interrupt enable bit field 1
#define WUTIEN_IRQ_WAKE_UP_EN2   (0x1UL << 2  ) // Interrupt enable bit field 2
#define WUTIEN_IRQ_WAKE_UP_EN3   (0x1UL << 3  ) // Interrupt enable bit field 3
#define WUTIEN_IRQ_ROLLOVER_EN   (0x1UL << 4  ) // Interrupt enable bit rollover

typedef struct
{
   unsigned long  IRQ_WAKE_UP_EN0   : 1;       // Interrupt enable bit field 0 
   unsigned long  IRQ_WAKE_UP_EN1   : 1;       // Interrupt enable bit field 1 
   unsigned long  IRQ_WAKE_UP_EN2   : 1;       // Interrupt enable bit field 2 
   unsigned long  IRQ_WAKE_UP_EN3   : 1;       // Interrupt enable bit field 3 
   unsigned long  IRQ_ROLLOVER_EN   : 1;       // Interrupt enable bit rollover
   unsigned long  UNUSED            : 27;      // Unsused                                
} TyWUTIEN;

// Wake-Up Timer - WUTIST Bit Definitions
// 
#define WUTIST_IRQ_WAKE_UP0   (0x1UL << 0  ) // Interrupt status bit field 0
#define WUTIST_IRQ_WAKE_UP1   (0x1UL << 1  ) // Interrupt status bit field 1
#define WUTIST_IRQ_WAKE_UP2   (0x1UL << 2  ) // Interrupt status bit field 2
#define WUTIST_IRQ_WAKE_UP3   (0x1UL << 3  ) // Interrupt status bit field 3
#define WUTIST_IRQ_ROLLOVER   (0x1UL << 4  ) // Interrupt status bit rollover
#define WUTIST_WAKE_UP_STATUS (0x1UL << 6  ) // Status of wake up signal for the 4 time field values.
#define WUTIST_WUT_FREEZE     (0x1UL << 7  ) // Status of WUTVALS freeze.
#define WUTIST_WUT_EN_SYNC    (0x1UL << 8  ) // Indicates when Enable is being synchronised to 32K clock domain



typedef struct
{
   unsigned long IRQ_WAKE_UP0      : 1;       // Interrupt status bit field 0                          
   unsigned long IRQ_WAKE_UP1      : 1;       // Interrupt status bit field 1                          
   unsigned long IRQ_WAKE_UP2      : 1;       // Interrupt status bit field 2                          
   unsigned long IRQ_WAKE_UP3      : 1;       // Interrupt status bit field 3                          
   unsigned long IRQ_ROLLOVER      : 1;       // Interrupt status bit rollover  
   unsigned long IRQ_RESERVED      : 1;       // Reserved  
   unsigned long WAKE_UP_STATUS    : 1;       // Status of wake up signal for the 4 time field values. 
   unsigned long WUT_FREEZE        : 1;       // Status of WUTVALS freeze.
   unsigned long EN_SYNC           : 1;       // Indicates when a change in the enable bit is synchronised to the 32K clock domain.                            
   unsigned long UNUSED            : 23;      // Unused                                
} TyWUTIST;


// Wake-Up Timer - WUTCLRI Bit Definitions
// 
#define WUTCLRI_IRQ_WAKE_UP_CLR0   (0x1UL << 0  ) // Interrupt clear bit field 0
#define WUTCLRI_IRQ_WAKE_UP_CLR1   (0x1UL << 1  ) // Interrupt clear bit field 1
#define WUTCLRI_IRQ_WAKE_UP_CLR2   (0x1UL << 2  ) // Interrupt clear bit field 2
#define WUTCLRI_IRQ_WAKE_UP_CLR3   (0x1UL << 3  ) // Interrupt clear bit field 3
#define WUTCLRI_IRQ_ROLLOVER_CLR   (0x1UL << 4  ) // Interrupt clear bit rollover

typedef struct
{
   unsigned long  IRQ_WAKE_UP_CLR0   : 1;       // Interrupt clear bit field 0 
   unsigned long  IRQ_WAKE_UP_CLR1   : 1;       // Interrupt clear bit field 1 
   unsigned long  IRQ_WAKE_UP_CLR2   : 1;       // Interrupt clear bit field 2 
   unsigned long  IRQ_WAKE_UP_CLR3   : 1;       // Interrupt clear bit field 3 
   unsigned long  IRQ_ROLLOVER_CLR   : 1;       // Interrupt clear bit rollover
   unsigned long  UNUSED             : 27;      // Unsused                                
} TyCLRI;



