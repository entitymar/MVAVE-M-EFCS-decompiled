// FUN_18002e178 @ 18002e178

ulonglong FUN_18002e178(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  
  if (param_2 == 0) {
    uVar2 = FUN_18002e2e0(CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != 0));
    return CONCAT71(extraout_var,uVar2);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = FUN_18002e7e4();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_18002e80c();
    }
    return (ulonglong)bVar1;
  }
  uVar3 = FUN_18002e1c8(param_1,param_3);
  return uVar3;
}


