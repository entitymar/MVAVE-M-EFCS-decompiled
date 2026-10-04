// FUN_180002c10 @ 180002c10

ulonglong FUN_180002c10(uint param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    if (param_1 == param_2) {
      return param_3;
    }
    uVar1 = (param_1 * param_3) / (ulonglong)param_2;
    uVar2 = uVar1 + 1;
    if (param_3 < ((ulonglong)param_2 % (ulonglong)param_1) * uVar1 +
                  (((ulonglong)param_2 / (ulonglong)param_1) * uVar1) / (ulonglong)param_1) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}


