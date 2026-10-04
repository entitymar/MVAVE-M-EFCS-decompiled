// FUN_180001290 @ 180001290

void FUN_180001290(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  uint *param_5)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *param_2;
  lVar9 = *param_4;
  puVar3 = (uint *)(param_1 + 0x168);
  if ((((puVar3 != (uint *)0x0) && (lVar9 != 0)) && (lVar8 != 0)) && (*param_5 != 0)) {
    uVar6 = (ulonglong)*param_5;
    do {
      uVar2 = *puVar3;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar7 = (ulonglong)((int)uVar5 + uVar2 * *(int *)(param_1 + 0x184));
          fVar1 = *(float *)(*(longlong *)(param_1 + 400) + uVar7 * 4);
          if (*(int *)(param_1 + 0x174) == 0) {
            *(float *)(*(longlong *)(param_1 + 400) + uVar7 * 4) =
                 *(float *)(param_1 + 0x17c) * *(float *)(lVar8 + uVar5 * 4) +
                 fVar1 * *(float *)(param_1 + 0x180);
            *(float *)(lVar9 + uVar5 * 4) =
                 *(float *)(*(longlong *)(param_1 + 400) + uVar7 * 4) * *(float *)(param_1 + 0x178);
          }
          else {
            *(float *)(lVar9 + uVar5 * 4) = fVar1 * *(float *)(param_1 + 0x178);
            *(float *)(*(longlong *)(param_1 + 400) + uVar7 * 4) =
                 *(float *)(param_1 + 0x17c) * *(float *)(lVar8 + uVar5 * 4) +
                 *(float *)(*(longlong *)(param_1 + 400) + uVar7 * 4) * *(float *)(param_1 + 0x180);
          }
          uVar2 = *puVar3;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar2);
      }
      lVar9 = lVar9 + (ulonglong)*puVar3 * 4;
      *(uint *)(param_1 + 0x184) = (*(int *)(param_1 + 0x184) + 1U) % *(uint *)(param_1 + 0x188);
      lVar8 = lVar8 + (ulonglong)*puVar3 * 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


