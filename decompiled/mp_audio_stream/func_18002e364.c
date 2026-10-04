// FUN_18002e364 @ 18002e364

int FUN_18002e364(HMODULE param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  HMODULE pHVar3;
  int iVar4;
  
  if ((param_2 == 0) && (DAT_180036ce8 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_1800322e0 == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = (*(code *)PTR__guard_dispatch_icall_18002f210)();
    }
    if (iVar4 == 0) {
      return 0;
    }
    uVar1 = FUN_18002e178(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_18002e6f8(param_1,param_2);
  iVar4 = (int)uVar2;
  if ((param_2 == 1) && (iVar4 == 0)) {
    pHVar3 = param_1;
    FUN_18002e6f8(param_1,0);
    FUN_18002e2e0(CONCAT71((int7)((ulonglong)pHVar3 >> 8),param_3 != 0));
    if (DAT_1800322e0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18002f210)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar1 = FUN_18002e178(param_1,param_2,param_3);
    iVar4 = 0;
    if ((int)uVar1 != 0) {
      if (DAT_1800322e0 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (*(code *)PTR__guard_dispatch_icall_18002f210)(param_1,param_2,param_3);
      }
    }
  }
  return iVar4;
}


