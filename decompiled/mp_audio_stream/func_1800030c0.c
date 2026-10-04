// FUN_1800030c0 @ 1800030c0

undefined8 FUN_1800030c0(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar8 = *(uint *)(param_1 + 4);
    uVar5 = (ulonglong)uVar8;
    if ((uVar8 != 0) && (uVar1 = *(uint *)(param_1 + 8), uVar1 != 0)) {
      pcVar2 = *(char **)(param_1 + 0x10);
      uVar7 = 0;
      uVar4 = uVar7;
      pcVar9 = pcVar2;
      if (1 < uVar8) {
        do {
          uVar8 = (uint)uVar4;
          if (pcVar2 == (char *)0x0) {
            uVar4 = FUN_180005500(0,(uint)uVar5,uVar8);
            cVar3 = (char)uVar4;
          }
          else {
            cVar3 = *pcVar9;
          }
          if (cVar3 == '\x01') {
            return 0xfffffffe;
          }
          uVar4 = (ulonglong)(uVar8 + 1);
          pcVar9 = pcVar9 + 1;
        } while (uVar8 + 1 < (uint)uVar5);
      }
      pcVar2 = *(char **)(param_1 + 0x18);
      uVar5 = uVar7;
      pcVar9 = pcVar2;
      if (1 < uVar1) {
        do {
          uVar8 = (uint)uVar5;
          if (pcVar2 == (char *)0x0) {
            uVar5 = FUN_180005500(0,uVar1,uVar8);
            cVar3 = (char)uVar5;
          }
          else {
            cVar3 = *pcVar9;
          }
          if (cVar3 == '\x01') {
            return 0xfffffffe;
          }
          uVar5 = (ulonglong)(uVar8 + 1);
          pcVar9 = pcVar9 + 1;
        } while (uVar8 + 1 < uVar1);
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 4);
        *param_2 = uVar7;
      }
      param_2[2] = uVar7;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar7 = uVar7 + *(uint *)(param_1 + 8);
      }
      *param_2 = uVar7 + 7 & 0xfffffffffffffff8;
      uVar6 = FUN_180002e60(param_1);
      uVar5 = *param_2;
      param_2[3] = uVar5;
      if ((int)uVar6 != 4) {
        param_2[4] = uVar5;
        if ((int)uVar6 == 5) {
          uVar5 = uVar5 + (ulonglong)*(uint *)(param_1 + 4) * 8;
          *param_2 = uVar5;
          uVar5 = uVar5 + (ulonglong)*(uint *)(param_1 + 8) * (ulonglong)*(uint *)(param_1 + 4) * 4;
        }
        *param_2 = uVar5 + 7 & 0xfffffffffffffff8;
        return 0;
      }
      uVar5 = uVar5 + *(uint *)(param_1 + 8);
      param_2[4] = uVar5;
      *param_2 = uVar5 + 7 & 0xfffffffffffffff8;
      return 0;
    }
  }
  return 0xfffffffe;
}


