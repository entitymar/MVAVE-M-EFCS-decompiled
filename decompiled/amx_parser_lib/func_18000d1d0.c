// FUN_18000d1d0 @ 18000d1d0

/* WARNING: Removing unreachable block (ram,0x00018000d250) */
/* WARNING: Removing unreachable block (ram,0x00018000d242) */
/* WARNING: Removing unreachable block (ram,0x00018000d1e7) */

undefined8 FUN_18000d1d0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  DAT_180026318._0_4_ = 0;
  DAT_180026318._4_4_ = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      DAT_180026318._0_4_ = 1;
      DAT_180026318._4_4_ = 1;
    }
    else {
      DAT_180026318._0_4_ = 0;
    }
  }
  if (((int)DAT_180026318 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_180026318._4_4_ = 3;
      DAT_180026318._0_4_ = 3;
      return 0;
    }
  }
  return 0;
}


