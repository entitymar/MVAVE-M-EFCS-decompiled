// FUN_18001ff30 @ 18001ff30

undefined8 FUN_18001ff30(int *param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_28 [8];
  
  if ((param_1 == (int *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  if (param_3 == (undefined4 *)0x0) {
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    uVar4 = (uint)(local_28[*param_1] * param_1[2]) * param_4;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar4;
        if (0xffffffff < uVar4) {
          uVar3 = 0xffffffff;
        }
        if ((param_2 != (undefined4 *)0x0) && (uVar3 != 0)) {
          memset(param_2,0,uVar3);
        }
        param_2 = (undefined4 *)((longlong)param_2 + uVar3);
        uVar4 = uVar4 - uVar3;
      } while (uVar4 != 0);
      return 0;
    }
  }
  else {
    iVar1 = param_1[4];
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        uVar2 = FUN_180003560(param_1,(longlong)param_2,(longlong)param_3,param_4);
        return uVar2;
      }
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          uVar2 = FUN_180003930(param_1,param_2,(longlong)param_3,param_4);
          return uVar2;
        }
        uVar2 = FUN_180005270(param_2,param_1[2],(longlong)param_3,param_1[1],param_4,
                              *(byte **)(param_1 + 10),*param_1);
        return uVar2;
      }
      uVar2 = FUN_180003220(param_1,(longlong)param_2,param_3,param_4);
      return uVar2;
    }
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    for (uVar4 = (uint)(local_28[*param_1] * param_1[2]) * param_4; uVar4 != 0;
        uVar4 = uVar4 - uVar3) {
      uVar3 = uVar4;
      if (0xffffffff < uVar4) {
        uVar3 = 0xffffffff;
      }
      memcpy(param_2,param_3,uVar3);
      param_2 = (undefined4 *)((longlong)param_2 + uVar3);
      param_3 = (undefined4 *)((longlong)param_3 + uVar3);
    }
  }
  return 0;
}


