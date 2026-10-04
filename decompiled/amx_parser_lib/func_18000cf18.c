// FUN_18000cf18 @ 18000cf18

void FUN_18000cf18(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_180025218 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_180025218);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_180025218,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_180009da0(p_Var1);
  }
  return;
}


