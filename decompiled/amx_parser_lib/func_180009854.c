// thunk_FUN_18000960c @ 180009854

undefined8 thunk_FUN_18000960c(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_180025db8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pcVar2 = FUN_18000ef3c();
    if (pcVar2 == (char *)0x0) {
      FUN_180009da0((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180009680(pcVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_180025db8;
        puVar1 = DAT_180025dd0;
      }
      DAT_180025dd0 = puVar1;
      DAT_180025db8 = puVar4;
      FUN_180009da0((LPVOID)0x0);
      FUN_180009da0(pcVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


