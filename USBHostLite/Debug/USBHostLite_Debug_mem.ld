/*
 * GENERATED FILE - DO NOT EDIT
 * (c) Code Red Technologies Ltd, 2008-2013
 * (c) NXP Semiconductors 2013-2013
 * Linker script memory definitions
 * Created from LinkMemoryTemplate
 * By LPCXpresso v6.0.2 [Build 151] [2013-09-18]  on Sun Oct 20 15:21:03 CEST 2013)
*/

MEMORY
{
  /* Define each memory region */
  MFlash512 (rx) : ORIGIN = 0x0, LENGTH = 0x80000 /* 512k */
  RamLoc64 (rwx) : ORIGIN = 0x10000000, LENGTH = 0x10000 /* 64k */
  RamPeriph32 (rwx) : ORIGIN = 0x20000000, LENGTH = 0x8000 /* 32k */


}
  /* Define a symbol for the top of each memory region */
  __top_MFlash512 = 0x0 + 0x80000;
  __top_RamLoc64 = 0x10000000 + 0x10000;
  __top_RamPeriph32 = 0x20000000 + 0x8000;



