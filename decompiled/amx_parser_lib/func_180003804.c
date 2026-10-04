// FUN_180003804 @ 180003804

int FUN_180003804(undefined8 param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 == 0) && (DAT_180025b18 < 1)) {
    return 0;
  }
  if (param_2 - 1U < 2) {
    if (DAT_1800183d0 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (*(code *)PTR__guard_dispatch_icall_180018270)();
    }
    if (iVar3 == 0) {
      return 0;
    }
    uVar1 = FUN_180003618(param_1,param_2,param_3);
    if ((int)uVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_180003a1c();
  iVar3 = (int)uVar2;
  if ((param_2 == 1) && (iVar3 == 0)) {
    FUN_180003a1c();
    FUN_180003780(param_3 != 0);
    if (DAT_1800183d0 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180018270)(param_1,0,param_3);
    }
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    uVar1 = FUN_180003618(param_1,param_2,param_3);
    iVar3 = 0;
    if ((int)uVar1 != 0) {
      if (DAT_1800183d0 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = (*(code *)PTR__guard_dispatch_icall_180018270)(param_1,param_2,param_3);
      }
    }
  }
  return iVar3;
}


