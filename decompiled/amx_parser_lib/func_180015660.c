// FUN_180015660 @ 180015660

void FUN_180015660(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 0x22;
    return;
  }
  return;
}


