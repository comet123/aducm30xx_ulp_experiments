#ifndef UTIL_H
#define UTIL_H

#include "util_legacy.h"

#include <stdarg.h>
#include <inttypes.h>

// register mapf or Test bench access
typedef volatile struct TB_s {
  uint32_t CHANNEL;
  uint32_t DATA;
}*TB_t;
#define TB ((TB_t)0xA0000000)

// Generic busy delay function
//   Equivalent to while(count-- > 0); 
//	but written in assembler so is not optimized away.
void delay(int count);
#if 0
// For legacy testcases
//   Nop() was used to add a delay.
//   The routine never used NOP instructions, just decremented a counter.
//   Renamed from Nop() to delay() to more accurately reflect its behavior.
#define Nop(count) delay(count)
#endif
// define a type for a function pointer with variable arguments
typedef void *call_ptr;

// call a function and pass it an argument where it came from
void call_from(void *function, ...);

// error codes
#define UVM_INFO	1
#define UVM_WARNING	2
#define UVM_ERROR	3
#define UVM_FATAL	4
#define MEM_ERROR	100

// printf style messages
void _messagef(uint32_t pc_addr, uint32_t msg_type, char *msg, ...);
#define info(...)    call_from(_messagef, UVM_INFO,    __VA_ARGS__)
#define warning(...) call_from(_messagef, UVM_WARNING, __VA_ARGS__)
#define error(...)   call_from(_messagef, UVM_ERROR,   __VA_ARGS__)
#define fatal(...)   call_from(_messagef, UVM_FATAL,   __VA_ARGS__)

// smaller/faster string-only messages
// (only smaller if nothing uses message())
void _message(uint32_t pc_addr, uint32_t msg_type, char *msg);
#define _info(msg)    call_from(_message, UVM_INFO,    msg)
#define _warning(msg) call_from(_message, UVM_WARNING, msg)
#define _error(msg)   call_from(_message, UVM_ERROR,   msg)
#define _fatal(msg)   call_from(_message, UVM_FATAL,   msg)
void _MemCheck(uint32_t pcaddr, uint32_t *reg_addr, uint32_t value);
#define MemCheck(addr,value) call_from(_MemCheck, addr, value)
#define MemCheck32(addr,value) call_from(_MemCheck, addr, value)
void _MemCheck8(uint32_t pcaddr, uint8_t *reg_addr, uint8_t value);
#define MemCheck8(addr,value) call_from(_MemCheck8, addr, (uint8_t)(value))
void _MemCheck16(uint32_t pcaddr, uint16_t *reg_addr, uint16_t value);
#define MemCheck16(addr,value) call_from(_MemCheck16, addr, (uint16_t)(value))

//sync functions
#define sync2tb(channel) do { TB->CHANNEL = 2; TB->DATA = channel; } while(0)
#define wait4tb(channel) do { TB->CHANNEL = 2; while((TB->DATA != channel)); } while(0)
#define rstDone sync2tb(1024);
#define mainDone sync2tb(1025);

/*================ L e g a c y  M a c r o s  ==================*/
#if 0
#define WriteMem8(ADDR,DATA)   *((volatile uint8_t  *) (ADDR)) = (DATA)
//#define WriteMem16S(ADDR,DATA) *((volatile s16 *) (ADDR)) = (DATA)
#define WriteMem16(ADDR,DATA)  *((volatile uint16_t *) (ADDR)) = (DATA)
#define WriteMem32(ADDR,DATA)  *((volatile uint32_t *) (ADDR)) = (DATA)

#define ReadMem8(ADDR)         *((volatile uint8_t  *) (ADDR))
#define ReadMem16(ADDR)        *((volatile uint16_t *) (ADDR))
#define ReadMem32(ADDR)        *((volatile uint32_t *) (ADDR))
#endif
/*================ M M R  a n d  M C R  L e g a c y  M a c r o s  ==================*/

#define set_mem_address(val, addr)		addr = (uint32_t)(val)
#define set_mem_field(val, addr, field)		addr = ((addr & ~field##_Msk) | ((uint32_t)val << field##_Pos))
#define set_mem_field2(field, val)		(*(volatile uint32_t *)field##_Addr) = (((*(volatile uint32_t *)field##_Addr) & ~field##_Msk) | ((uint32_t)val << field##_Pos))

#define check_mem_field(val, addr, field)	(((addr & field##_Msk)==((uint32_t)val << field##_Pos)))
#define check_mem_address(val, addr)		((addr)==((uint32_t)val))

#endif
