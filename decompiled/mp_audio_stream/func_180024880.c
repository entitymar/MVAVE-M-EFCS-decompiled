// FUN_180024880 @ 180024880

undefined8 FUN_180024880(int *param_1,undefined4 *param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  int local_58 [12];
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  uVar4 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar4 < 0) {
    uVar6 = -uVar4;
    if (param_4 <= -uVar4 && -param_4 != uVar4) {
      uVar6 = param_4;
    }
    FUN_180021ed0(param_2,param_3,uVar6,*param_1,param_1[1]);
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + uVar6;
    uVar9 = param_4 - uVar6;
    uVar4 = *(ulonglong *)(param_1 + 8);
    local_58[6] = 0;
    local_58[7] = 1;
    local_58[8] = 2;
    local_58[9] = 3;
    local_58[10] = 4;
    local_58[0xb] = 4;
    local_58[0] = 0;
    local_58[1] = 1;
    local_58[2] = 2;
    local_58[3] = 3;
    local_58[4] = 4;
    local_58[5] = 4;
    param_2 = (undefined4 *)
              ((longlong)param_2 + (uint)(param_1[1] * local_58[(longlong)*param_1 + 6]) * uVar6);
    param_3 = (void *)((longlong)param_3 + (uint)(param_1[1] * local_58[*param_1]) * uVar6);
    param_4 = uVar9;
    if (-1 < (longlong)uVar4) goto LAB_1800249a3;
LAB_180024ae0:
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + uVar9;
  }
  else {
LAB_1800249a3:
    fVar11 = (float)param_1[4];
    fVar10 = (float)param_1[3];
    iVar1 = *param_1;
    uVar9 = 0xffffffff - uVar4;
    if (uVar4 + param_4 < 0x100000000) {
      uVar9 = param_4;
    }
    if (fVar10 == fVar11) {
      uVar3 = param_1[1];
      if (fVar10 == DAT_1800320cc) {
        FUN_180021ed0(param_2,param_3,uVar9,iVar1,uVar3);
        *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + uVar9;
        return 0;
      }
    }
    else {
      uVar6 = *(ulonglong *)(param_1 + 6);
      if (uVar4 < uVar6) {
        if (iVar1 != 5) {
          return 0xffffffe3;
        }
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            uVar2 = uVar4 + uVar8;
            if (uVar6 <= uVar4 + uVar8) {
              uVar2 = uVar6;
            }
            uVar7 = 0;
            uVar3 = param_1[1];
            if (uVar3 != 0) {
              do {
                uVar4 = (ulonglong)uVar7;
                uVar7 = uVar7 + 1;
                lVar5 = uVar3 * uVar8 + uVar4;
                param_2[lVar5] =
                     (((float)(uVar2 & 0xffffffff) / (float)(uVar6 & 0xffffffff)) *
                      (fVar11 - fVar10) + fVar10) * *(float *)((longlong)param_3 + lVar5 * 4);
                uVar3 = param_1[1];
              } while (uVar7 < uVar3);
              uVar6 = *(ulonglong *)(param_1 + 6);
              uVar4 = *(ulonglong *)(param_1 + 8);
              fVar10 = (float)param_1[3];
              fVar11 = (float)param_1[4];
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        goto LAB_180024ae0;
      }
      uVar3 = param_1[1];
      fVar10 = fVar11;
    }
    FUN_180021040(param_2,(ulonglong)param_3,uVar9,iVar1,uVar3,fVar10);
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + uVar9;
  }
  return 0;
}


