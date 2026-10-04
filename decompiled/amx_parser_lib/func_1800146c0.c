// FUN_1800146c0 @ 1800146c0

undefined8 FUN_1800146c0(uint *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  uVar2 = param_3 & 0xfff7ffff;
  if ((param_2 & uVar2 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = thunk_FUN_180015880(0,0);
      *param_1 = uVar2;
    }
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_18000a17c();
    return 0x16;
  }
  if (param_1 != (uint *)0x0) {
    uVar2 = thunk_FUN_180015880(param_2,uVar2);
    *param_1 = uVar2;
    return 0;
  }
  thunk_FUN_180015880(param_2,uVar2);
  return 0;
}


