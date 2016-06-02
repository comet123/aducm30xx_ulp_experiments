#ifndef ANGEL_REASONS_H
#define ANGEL_REASONS_H

#define ADP_Stopped_BranchThroughZero	0x20000
#define ADP_Stopped_UndefinedInstr	0x20001
#define ADP_Stopped_SoftwareInterrupt	0x20002
#define ADP_Stopped_PrefetchAbort	0x20003
#define ADP_Stopped_DataAbort		0x20004
#define ADP_Stopped_AddressException	0x20005
#define ADP_Stopped_IRQ			0x20006
#define ADP_Stopped_FIQ			0x20007

#define ADP_Stopped_Breakpoint		0x20020
#define ADP_Stopped_WatchPoint		0x20021
#define ADP_Stopped_StepCOmplete	0x20022
#define ADP_Stopped_RunTimeErrorUnknown	0x20023
#define ADP_Stopped_InternalError	0x20024
#define ADP_Stopped_UserInterruption	0x20025
#define ADP_Stopped_ApplicationExit	0x20026
#define ADP_Stopped_StackOverflow	0x20027
#define ADP_Stopped_DivisionByZero	0x20028
#define ADP_Stopped_OSSpecific		0x20029

#endif
