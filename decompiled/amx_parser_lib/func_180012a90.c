// FUN_180012a90 @ 180012a90

byte FUN_180012a90(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800262d0)) {
      return *(byte *)((&DAT_180025ed0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 9;
    FUN_18000a17c();
  }
  return 0;
}


