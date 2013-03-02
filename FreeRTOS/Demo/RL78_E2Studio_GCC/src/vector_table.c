/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  RTOSDemo                                       */
/*      FILE         :  vector_table.c                                 */
/*      DESCRIPTION  :  Vector Table                                   */
/*      CPU SERIES   :  RL78 - G1C                                     */
/*      CPU TYPE     :  R5F10JBC                                       */
/*  													               */
/*      This file is generated by e2studio.                        */
/*  													               */
/***********************************************************************/                                                                       
                                                                                   
#include "interrupt_handlers.h"

extern void PowerON_Reset (void);

const unsigned char Option_Bytes[]  __attribute__ ((section (".option_bytes"))) = {
	0xef, 0xff, 0xe8, 0x85
};

const unsigned char Security_Id[]  __attribute__ ((section (".security_id"))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#define VEC          __attribute__ ((section (".vec")))
const void *HardwareVectors[] VEC = {
	// Address 0x0
	PowerON_Reset,
};

#define VECT_SECT          __attribute__ ((section (".vects")))
const void *Vectors[] VECT_SECT = {
	//INT_SRO/INT_WDTI (0x4)
	INT_WDTI,
	//INT_LVI (0x6)
	INT_LVI,
	//INT_P0 (0x8)
	INT_P0,
	//INT_P1 (0xA)
	INT_P1,
	//INT_P2 (0xC)
	INT_P2,
	//INT_P3 (0xE)
	INT_P3,
	//INT_P4 (0x10)
	INT_P4,
	//INT_P5 (0x12)
	INT_P5,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_DMA0 (0x1A)
	INT_DMA0,
	//INT_DMA1 (0x1C)
	INT_DMA1,
	//INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
	INT_ST0,
	//INT_TM00 (0x20)
	INT_TM00,
	//INT_CSI01/INT_IIC01/INT_SR0 (0x22)
	INT_SR0,
	//INT_SRE0/INT_TM01H (0x24)
	INT_TM01H,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_TM03H (0x2A)
	INT_TM03H,
	//INT_IICA0 (0x2C)
	INT_IICA0,
	//INT_TM01 (0x2E)
	INT_TM01,
	//INT_TM02 (0x30)
	INT_TM02,
	//INT_TM03 (0x32)
	INT_TM03,
	//INT_AD (0x34)
	INT_AD,
	//INT_RTC (0x36)
	INT_RTC,
	//INT_IT (0x38)
	INT_IT,
	// Padding
	(void*)0xFFFF,
	//INT_USB (0x3C)
	INT_USB,
	//INT_RSUM (0x3E)
	INT_RSUM,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_P8 (0x4E)
	INT_P8,
	//INT_P9 (0x50)
	INT_P9,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_MD (0x5E)
	INT_MD,
	// Padding
	(void*)0xFFFF,
	//INT_FL (0x62)
	INT_FL,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	// Padding
	(void*)0xFFFF,
	//INT_BRK_I (0x7E)
	INT_BRK_I,
};
