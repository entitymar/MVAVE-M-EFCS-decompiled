// FUN_18000dae0 @ 18000dae0

void FUN_18000dae0(longlong param_1,void *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_68 [12];
  
  uVar5 = 0;
  if (param_1 != 0) {
    LOCK();
    iVar10 = *(int *)(param_1 + 0x10);
    if (iVar10 == 0) {
      *(int *)(param_1 + 0x10) = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (iVar10 == 4) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    if (param_4 != 0) {
      do {
        uVar6 = 0;
        uVar7 = param_4 - (int)uVar5;
        if (param_3 != 0) {
          uVar8 = *(uint *)(param_1 + 0xc34);
          if (uVar8 < *(uint *)(param_1 + 0xc30)) {
            iVar10 = *(int *)(param_1 + 0x8d0);
            uVar4 = *(uint *)(param_1 + 0xc30) - uVar8;
            iVar9 = *(int *)(param_1 + 0x8cc);
            local_68[0] = 0;
            if (uVar7 <= uVar4) {
              uVar4 = uVar7;
            }
            local_68[6] = 0;
            uVar6 = (ulonglong)uVar4;
            local_68[1] = 1;
            local_68[2] = 2;
            local_68[3] = 3;
            local_68[4] = 4;
            local_68[5] = 4;
            local_68[7] = 1;
            local_68[8] = 2;
            local_68[9] = 3;
            local_68[10] = 4;
            local_68[0xb] = 4;
            FUN_180021ed0((void *)((ulonglong)(uint)(iVar10 * local_68[(longlong)iVar9 + 6]) *
                                   (ulonglong)uVar8 + *(longlong *)(param_1 + 0xc28)),
                          (void *)((uint)(iVar10 * local_68[iVar9]) * uVar5 + param_3),
                          (ulonglong)uVar4,iVar9,iVar10);
            *(int *)(param_1 + 0xc34) = *(int *)(param_1 + 0xc34) + uVar4;
            uVar8 = *(uint *)(param_1 + 0xc34);
          }
          if ((uVar8 == *(uint *)(param_1 + 0xc30)) && (*(int *)(param_1 + 8) != 3)) {
            (**(code **)(param_1 + 0x18))(param_1,0,*(longlong *)(param_1 + 0xc28));
            *(undefined4 *)(param_1 + 0xc34) = 0;
          }
        }
        iVar10 = (int)uVar6;
        if (param_2 != (void *)0x0) {
          uVar8 = *(uint *)(param_1 + 0x69c);
          if (uVar8 == 0) {
            iVar9 = 0;
          }
          else {
            if (*(int *)(param_1 + 8) != 3) {
              if (uVar8 < uVar7) {
                uVar7 = uVar8;
              }
              uVar6 = (ulonglong)uVar7;
            }
            iVar9 = *(int *)(param_1 + 0x334);
            iVar1 = *(int *)(param_1 + 0x338);
            local_68[6] = 0;
            local_68[0] = 0;
            local_68[7] = 1;
            local_68[8] = 2;
            local_68[9] = 3;
            local_68[10] = 4;
            local_68[0xb] = 4;
            local_68[1] = 1;
            local_68[2] = 2;
            local_68[3] = 3;
            local_68[4] = 4;
            local_68[5] = 4;
            iVar10 = (int)uVar6;
            FUN_180021ed0((void *)((uint)(iVar1 * local_68[iVar9]) * uVar5 + (longlong)param_2),
                          (void *)((ulonglong)(uint)(iVar1 * local_68[(longlong)iVar9 + 6]) *
                                   (ulonglong)(*(int *)(param_1 + 0x698) - uVar8) +
                                  *(longlong *)(param_1 + 0x690)),uVar6,iVar9,iVar1);
            *(int *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) - iVar10;
            iVar9 = *(int *)(param_1 + 0x69c);
          }
          if ((iVar9 == 0) && (*(int *)(param_1 + 8) != 3)) {
            uVar7 = *(uint *)(param_1 + 0x698);
            pvVar2 = *(void **)(param_1 + 0x690);
            if ((*(char *)(param_1 + 0x65) == '\0') && (pvVar2 != (void *)0x0)) {
              FUN_18002c430(pvVar2,(ulonglong)uVar7,*(int *)(param_1 + 0x334),
                            *(uint *)(param_1 + 0x338));
            }
            (**(code **)(param_1 + 0x18))(param_1,pvVar2,0,uVar7);
            *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x698);
          }
        }
        if ((*(int *)(param_1 + 8) == 3) &&
           (uVar7 = *(uint *)(param_1 + 0xc30), *(uint *)(param_1 + 0xc34) == uVar7)) {
          uVar3 = *(undefined8 *)(param_1 + 0xc28);
          pvVar2 = *(void **)(param_1 + 0x690);
          if ((*(char *)(param_1 + 0x65) == '\0') && (pvVar2 != (void *)0x0)) {
            FUN_18002c430(pvVar2,(ulonglong)uVar7,*(int *)(param_1 + 0x334),
                          *(uint *)(param_1 + 0x338));
          }
          (**(code **)(param_1 + 0x18))(param_1,pvVar2,uVar3,uVar7);
          *(undefined4 *)(param_1 + 0xc34) = 0;
          *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x698);
        }
        uVar7 = (int)uVar5 + iVar10;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < param_4);
    }
    return;
  }
  if ((*(char *)(param_1 + 0x65) == '\0') && (param_2 != (void *)0x0)) {
    FUN_18002c430(param_2,(ulonglong)param_4,*(int *)(param_1 + 0x334),*(uint *)(param_1 + 0x338));
  }
                    /* WARNING: Could not recover jumptable at 0x00018000db63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(param_1,param_2,param_3,(ulonglong)param_4);
  return;
}


