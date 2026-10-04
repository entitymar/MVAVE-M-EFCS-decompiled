// FUN_18000a324 @ 18000a324

__acrt_ptd * FUN_18000a324(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_18000cfc8();
  p_Var2 = p_Var1 + 0x20;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800251c0;
  }
  return p_Var2;
}


