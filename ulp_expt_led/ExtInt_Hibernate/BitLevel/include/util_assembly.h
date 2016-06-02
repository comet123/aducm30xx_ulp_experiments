#include <util_defs.h> 

#define  write(addr,data)  ldr r0,=addr;  ldr r1,=data; str r1,[r0] 
#define  write16(addr,data)  ldr r0,=addr;  ldr r1,=data; strh r1,[r0] 
#define  write8(addr,data)  ldr r0,=addr;  ldr r1,=data; strb r1,[r0] 
#define  read(addr,reg)    ldr r0,=addr;  ldr reg,[r0]
#define  read16(addr,reg)    ldr r0,=addr;  ldrh reg,[r0]
#define  read8(addr,reg)    ldr r0,=addr;  ldrb reg,[r0]
#define  loop_nop(name,count) ldr r0,=count; name: nop; sub r0,r0,#1; cmp r0,#0; bne name
#define  loop_nopr(name,reg) mov r0,reg; name: nop; sub r0,r0,#1; cmp r0,#0; bne name
//read_chec32 checks for whole 32 bits
#define  read_check32(addr,data,reg,reg2) ldr reg,=addr; ldr reg,[reg] ; ldr reg2,=data; cmp reg,reg2 ; bne Error;
//read_check is changed to 16 bit read check from 32 bit, as AHB is changed to 32 bus
#define  read_check(addr,data,reg,reg2) read_check16(addr,data,reg,reg2)
#define  read_check16(addr,data,reg,reg2) ldr reg,=addr; ldr reg,[reg] ; ldr reg2,=data; lsl reg,16; lsl reg2,16; cmp reg,reg2 ; bne Error;
#define  mem_val_check32(addr,data) ldr r0,=addr; ldr r1,=data; bl MemCheck32;
#define  mem_val_check16(addr,data) ldr r0,=addr; ldr r1,=data; bl MemCheck16;
#define  mem_val_check8(addr,data) ldr r0,=addr; ldr r1,=data; bl MemCheck8;

#define  read_range_check16(addr,data_min,data_max,reg,reg2) ldr reg,=addr; ldr reg,[reg] ; ldr reg2,=data_min; lsl reg,16; lsl reg2,16; cmp reg,reg2; blt Error; ldr reg2,=data_max; lsl reg2,16; cmp reg,reg2; bgt Error;

// check a single bit: dereferences ADDR, isolates BIT from *ADDR and sticks it in LSB, compares LSB with VALUE (should be 1/0), obliterates REG
#define  checkbit(addr,bit,value,reg) ldr reg,=addr; ldr reg,[reg]; lsl reg,31-bit; lsr reg,31; cmp reg,value; 
 
// check multiple bits: deref. ADDR, isolates *ADDR[bitu:bitl] and sticks in LSbits, comapres LSbits with VALUE, obliterates REG
#define  checkbits(addr,bitu,bitl,value,reg) ldr reg,=addr; ldr reg,[reg]; lsl reg,31-bitu; lsr reg,31-(bitu-bitl); cmp reg,value; 

#define  waitonbusy(statusreg,busy,reg,name) name: checkbit(statusreg,busy,0,reg); bne name;
#define  waitonidle(statusreg,idle,reg,name) name: checkbit(statusreg,idle,1,reg); bne name;
#define  writer(addr,reg) ldr r0,=addr; str reg,[r0] 
#define  writepc(addr,reg,reg2) mov reg,pc; ldr reg2,=addr; str reg,[reg2] 

#define SRAM_BIT_CLR(ADDR,BIT_NUM)  write((SRAM_BB_START_ADDR + ((ADDR - SYS_SRAM_START_ADDR) << 5) + (BIT_NUM << 2)),0x00000000)
#define SRAM_BIT_SET(ADDR,BIT_NUM)  write((SRAM_BB_START_ADDR + ((ADDR - SYS_SRAM_START_ADDR) << 5) + (BIT_NUM << 2)),0x00000001)

#define PERIPH_BIT_CLR(ADDR,BIT_NUM)  write((PERIPH_BB_START_ADDR + ((ADDR - PERIPH_START_ADDR) << 5) + (BIT_NUM << 2)),0x00000000)
#define PERIPH_BIT_SET(ADDR,BIT_NUM)  write((PERIPH_BB_START_ADDR + ((ADDR - PERIPH_START_ADDR) << 5) + (BIT_NUM << 2)),0x00000001)

#define powl(mod,int_en) write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); write(PWRMOD_A,mod); intset(int_en); wfi 
#define powlr(mod,int_en) write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); writer(PWRMOD_A,mod); intset(int_en); wfi 

// atomic versions of powl()/powlr()
#define powla(mod,int_en, name) ;name: write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); write(PWRMOD_A,mod); checkbits(PWRMOD_A, 2, 0, mod, r1); bne name; intset(int_en); wfi 
#define powlra(mod,int_en, name) ;name: write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); writer(PWRMOD_A,mod); checkbits(PWRMOD_A,3, 0, mod, r1); bne name ; intset(int_en); wfi ;

#define powd(mod,int_en,name) write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); write(PWRMOD_A,mod); intset(int_en);name:  checkbit(PWRMOD_A,3,0x1,r1) bne name; wfi 
#define powdr(mod,int_en,name) write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); writer(PWRMOD_A,mod); intset(int_en);name:  checkbit(PWRMOD_A,3,0x1,r1) bne name; wfi 

// atomic version of powdr()
#define powdra(mod, int_en, name) ;name: write(PWRKEY_A,0x4859); write(PWRKEY_A,0xf27b); writer(PWRMOD_A,mod); mov r1, r5; orr r1, r1, 0x8; read(PWRMOD_A, r0);and r0, r0, 0xF;cmp r1, r0; bne name; intset(int_en); wfi 

// switch power mode as an atomic operation, without WFI or INT control - if unsuccesful branch back to NAME; assumes MOD is a 3 bit value, obliterates R0 and R1
#define powatom(mod, name) ;name: write(PWRKEY_A, 0x4859); write(PWRKEY_A, 0xf27b); write(PWRMOD_A, mod); checkbits(PWRMOD_A, 2, 0, mod, r1); bne name
#define powatomr(reg, name) ;name: write(PWRKEY_A, 0x4859); write(PWRKEY_A, 0xf27b); writer(PWRMOD_A, reg); mov r1, reg; read(PWRMOD_A, r0); and r1, r1, 0x7; and r0, r0, 0x7; cmp r1, r0; bne name;

.macro intclear intnum
.if \intnum >= 32
   write(INTCLRE1_A,1 << (\intnum - 32))
.else
   write(INTCLRE0_A,1 << (\intnum))
.endif
.endm

.macro intset intnum
.if \intnum >= 32
   write(INTSETE1_A,1 << (\intnum - 32))
.else
   write(INTSETE0_A,1 << (\intnum))
.endif
.endm 

.macro oscset oscctrlbits
        write(OSCKEY_A,OSCKEY_KEY);
        write(OSCCTRL_A,\oscctrlbits);
.endm


// Send a string to the standard output (from the simulator viewpoint)
__IMPORT__ send_msg

// Pass and end the simulation
__IMPORT__ send_pass

// Fail and end the simulation
__IMPORT__ send_fail

// Stop the monitor
__IMPORT__ stop_mon

// Start the monitor
__IMPORT__ start_mon

// Send a single character
__IMPORT__ send_char

__IMPORT__ val_chk_failed_addr
__IMPORT__ val_chk_failed
__IMPORT__ MemCheck8
__IMPORT__ MemCheck16
__IMPORT__ MemCheck32


#define  ext_pass_fail_send_msg(io,msg)   ldr r0,=io;  ldr r1,=msg;  BL send_msg 
#define  ext_pass_fail_start_mon(io)      ldr r0,=io;                BL start_mon
#define  ext_pass_fail_send_pass(io)      ldr r0,=io;                BL send_pass
#define  ext_pass_fail_send_fail(io)      ldr r0,=io;                BL send_fail
#define  ext_pass_fail_stop_mon(io)       ldr r0,=io;                BL stop_mon
#define  ext_pass_fail_send_char(io,byte) ldr r0,=io;  ldr r1,=byte; BL send_char


