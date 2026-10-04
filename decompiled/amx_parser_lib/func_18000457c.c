// __vcrt_initialize_ptd @ 18000457c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint __vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(FUN_18000442c);
  DAT_180025090 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_180025b90);
    if (iVar2 != 0) {
      _DAT_180025c08 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    FUN_1800045c4();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}


