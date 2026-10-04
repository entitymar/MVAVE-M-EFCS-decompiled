// FUN_18000b5b8 @ 18000b5b8

int FUN_18000b5b8(HMODULE param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  HMODULE pHVar3;
  int iVar4;
  
  if ((param_2 == 0) && (DAT_180015dec < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (PTR_180010020 == (undefined *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = (*(code *)PTR__guard_dispatch_icall_18000d310)();
    }
    if (iVar4 == 0) {
      return 0;
    }
    uVar1 = FUN_18000b3cc(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_18000c2a0(param_1,param_2);
  iVar4 = (int)uVar2;
  if ((param_2 == 1) && (iVar4 == 0)) {
    pHVar3 = param_1;
    FUN_18000c2a0(param_1,0);
    FUN_18000b534(CONCAT71((int7)((ulonglong)pHVar3 >> 8),param_3 != 0));
    if (PTR_180010020 != (undefined *)0x0) {
      (*(code *)PTR__guard_dispatch_icall_18000d310)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar1 = FUN_18000b3cc(param_1,param_2,param_3);
    iVar4 = 0;
    if ((int)uVar1 != 0) {
      if (PTR_180010020 == (undefined *)0x0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (*(code *)PTR__guard_dispatch_icall_18000d310)(param_1,param_2,param_3);
      }
    }
  }
  return iVar4;
}


