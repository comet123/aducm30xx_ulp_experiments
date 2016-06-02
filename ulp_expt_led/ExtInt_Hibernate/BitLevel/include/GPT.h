#ifndef GPT_H
#define GPT_H
#include <inttypes.h>
typedef volatile struct GPT_s {
    uint16_t LD;
    uint16_t _reserved_2;
    uint16_t VAL;
    uint16_t _reserved_6;
    uint16_t CON;
    uint16_t _reserved_A;
    uint16_t CLRI;
    uint16_t _reserved_E;
    uint16_t CAP;
    uint16_t _reserved_12;
    uint16_t ALD;
    uint16_t _reserved_16;
    uint16_t AVAL;
    uint16_t _reserved_1A;
    uint16_t STA;
    uint16_t _reserved_1E;
    uint16_t PCON;
    uint16_t _reserved_22;
    uint16_t PMAT;
} *GPT_t;
#define GPT0 ((GPT_t)0x40000000)
#define GPT1 ((GPT_t)0x40000400)
#define GPT2 ((GPT_t)0x40000800)
#define GPT3 ((GPT_t)0x40000800)



#define PRESCALE_BY16						1
#define PRESCALE_BY64     					2
#define PRESCALE_BY256      				3

#define UP				    			(1<<2)
#define DOWN							(0<<2)

#define PERIODIC_GPT						(1<<3)
#define GPT_FREE_RUN						(0<<3)

#define GPT_ENABLE						(1<<4)
#define GPT_DISABLE						(0<<4)

#define CLK0							(0<<5)
#define CLK1							(1<<5)
#define CLK2							(2<<5)
#define CLK3							(3<<5)

#define RSTONCLR						(1<<7)

#define EVENT0							(0<<8)
#define EVENT1							(1<<8)
#define EVENT2							(2<<8)
#define EVENT3							(3<<8)
#define EVENT4							(4<<8)
#define EVENT5							(5<<8)
#define EVENT6							(6<<8)
#define EVENT7							(7<<8)
#define EVENT8							(8<<8)
#define EVENT9							(9<<8)
#define EVENT10							(10<<8)
#define EVENT11							(11<<8)
#define EVENT12							(12<<8)
#define EVENT13							(13<<8)
#define EVENT14							(14<<8)
#define EVENT15							(15<<8)
#define EVENT16							(16<<8)
#define EVENT17							(17<<8)
#define EVENT18							(18<<8)
#define EVENT19							(19<<8)
#define EVENT20							(20<<8)
#define EVENT21							(21<<8)
#define EVENT22							(22<<8)
#define EVENT23							(23<<8)
#define EVENT24							(24<<8)
#define EVENT25							(25<<8)
#define EVENT26							(26<<8)
#define EVENT27							(27<<8)
#define EVENT28							(28<<8)
#define EVENT29							(29<<8)
#define EVENT30							(30<<8)
#define EVENT31							(31<<8)

#define EVENT_EN						(1<<13)
#define EVENT_DIS						(0<<13)

#define RSTONEVT						(1<<14)

#define SYNC_BYPASS						(1<<15)

#define GPT_BUSY 		    (1 << 6)
#define GPT_TMOUT 		    (1 << 0)
#define GPT_CAP 		    (1 << 1)
#define GPT_CLR 		    (1 << 7)
#define GPT_EVT 		    (1 << 8)

#define GPT_TMOUT_CLR 		(1 << 0)
#define GPT_CAP_CLR 		(1 << 1)

#define PWM_IDLE_LOW 		(0 << 1)
#define PWM_IDLE_HIGH 		(1 << 1)

#define PWM_MATCH_EN 		(1 << 1)
#define PWM_MATCH_DIS 		(0 << 1)

#define PWM_MATCH_IRQ_EN 	0x0004
#define PWM_MATCH_IRQ_DIS 	0x0000

#define TIMEOUT_NO_EFFECT	0x0000

#define UP_BIT											2
#define PERIODIC_GPT_BIT						3
#define GPT_ENABLE_BIT							4
#define RSTONCLR_BIT								7
#define EVENT_EN_BIT								12


#define TMOUT_CLR_BIT 										0
#define CAP_CLR_BIT 										1


#endif
