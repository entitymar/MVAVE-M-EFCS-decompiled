// FUN_18000a300 @ 18000a300

__acrt_ptd * FUN_18000a300(void)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var1 = FUN_18000cfc8();
  p_Var2 = p_Var1 + 0x24;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800251c4;
  }
  return p_Var2;
}


