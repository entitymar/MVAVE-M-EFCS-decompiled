// FUN_18000f690 @ 18000f690

uint FUN_18000f690(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_180026608;
    DAT_180026608 = param_1;
  }
  else {
    p_Var2 = FUN_18000a324();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_18000a17c();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


