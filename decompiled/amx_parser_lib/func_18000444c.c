// FUN_18000444c @ 18000444c

void FUN_18000444c(void)

{
  undefined *puVar1;
  
  if (DAT_180025090 != 0xffffffff) {
    puVar1 = (undefined *)__vcrt_FlsGetValue(DAT_180025090);
    __vcrt_FlsSetValue(DAT_180025090,(LPVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180025b90)) {
      thunk_FUN_180009da0(puVar1);
    }
  }
  return;
}


