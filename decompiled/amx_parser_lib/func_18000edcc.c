// FUN_18000edcc @ 18000edcc

void FUN_18000edcc(uint param_1,ulonglong param_2)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_18000ee19:
          if (!bVar1) goto LAB_18000ee1d;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_18000ee57;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_18000ee19;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_18000ee1d;
LAB_18000ee57:
    param_2 = (ulonglong)((uint)param_2 & 8);
    goto LAB_18000ee1d;
  }
  param_2 = 0;
LAB_18000ee1d:
                    /* WARNING: Could not recover jumptable at 0x00018000ee1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}


