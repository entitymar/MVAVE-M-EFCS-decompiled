// FUN_180010968 @ 180010968

undefined8 FUN_180010968(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_18000a300();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1800262d0)) {
      if ((*(byte *)((&DAT_180025ed0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180025ed0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_18000a300();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_18000a324();
    *(undefined4 *)p_Var1 = 9;
    FUN_18000a17c();
  }
  return 0xffffffffffffffff;
}


