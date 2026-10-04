// FUN_180019ab0 @ 180019ab0

void FUN_180019ab0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  
  uVar8 = *(uint *)(param_1 + 4);
  uVar18 = 0;
  fVar25 = (float)*(uint *)(param_1 + 0x2c) / (float)*(uint *)(param_1 + 0xc);
  if (0xf < uVar8) {
    lVar9 = *(longlong *)(param_1 + 0x30);
    lVar10 = *(longlong *)(param_1 + 0x38);
    uVar20 = 8;
    do {
      pfVar17 = (float *)(lVar9 + uVar18 * 4);
      fVar3 = pfVar17[1];
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[3];
      uVar16 = (ulonglong)(uVar20 - 4);
      pfVar2 = (float *)(lVar10 + uVar18 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar1 = (float *)(lVar9 + uVar16 * 4);
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar1 = (float *)(param_2 + uVar18 * 4);
      *pfVar1 = (*pfVar2 - *pfVar17) * fVar25 + *pfVar17;
      pfVar1[1] = (fVar6 - fVar3) * fVar25 + fVar3;
      pfVar1[2] = (fVar7 - fVar4) * fVar25 + fVar4;
      pfVar1[3] = (fVar11 - fVar5) * fVar25 + fVar5;
      uVar22 = (int)uVar18 + 0x10;
      uVar18 = (ulonglong)uVar22;
      pfVar1 = (float *)(lVar10 + uVar16 * 4);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar17 = (float *)(param_2 + uVar16 * 4);
      *pfVar17 = (*pfVar1 - fVar12) * fVar25 + fVar12;
      pfVar17[1] = (fVar3 - fVar13) * fVar25 + fVar13;
      pfVar17[2] = (fVar4 - fVar14) * fVar25 + fVar14;
      pfVar17[3] = (fVar5 - fVar15) * fVar25 + fVar15;
      uVar16 = (ulonglong)uVar20;
      pfVar17 = (float *)(lVar9 + uVar16 * 4);
      fVar3 = pfVar17[1];
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[3];
      pfVar2 = (float *)(lVar10 + uVar16 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar1 = (float *)(param_2 + uVar16 * 4);
      *pfVar1 = (*pfVar2 - *pfVar17) * fVar25 + *pfVar17;
      pfVar1[1] = (fVar6 - fVar3) * fVar25 + fVar3;
      pfVar1[2] = (fVar7 - fVar4) * fVar25 + fVar4;
      pfVar1[3] = (fVar11 - fVar5) * fVar25 + fVar5;
      uVar16 = (ulonglong)(uVar20 + 4);
      uVar20 = uVar20 + 0x10;
      pfVar17 = (float *)(lVar9 + uVar16 * 4);
      fVar3 = pfVar17[1];
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[3];
      pfVar2 = (float *)(lVar10 + uVar16 * 4);
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar1 = (float *)(param_2 + uVar16 * 4);
      *pfVar1 = (*pfVar2 - *pfVar17) * fVar25 + *pfVar17;
      pfVar1[1] = (fVar6 - fVar3) * fVar25 + fVar3;
      pfVar1[2] = (fVar7 - fVar4) * fVar25 + fVar4;
      pfVar1[3] = (fVar11 - fVar5) * fVar25 + fVar5;
    } while (uVar22 < (uVar8 & 0xfffffff0));
  }
  uVar20 = (uint)uVar18;
  if (uVar20 < uVar8) {
    lVar9 = *(longlong *)(param_1 + 0x30);
    lVar10 = *(longlong *)(param_1 + 0x38);
    uVar16 = uVar18;
    if (3 < uVar8 - uVar20) {
      pfVar17 = (float *)(param_2 + 8 + uVar18 * 4);
      lVar24 = 4 - param_2;
      lVar19 = -8 - param_2;
      uVar22 = ((uVar8 - uVar20) - 4 >> 2) + 1;
      uVar23 = (ulonglong)uVar22;
      lVar21 = lVar19 + (longlong)pfVar17;
      uVar20 = uVar20 + uVar22 * 4;
      uVar16 = (ulonglong)uVar20;
      uVar18 = uVar18 + (ulonglong)uVar22 * 4;
      do {
        fVar3 = *(float *)((longlong)pfVar17 + lVar10 + lVar19);
        fVar4 = *(float *)(lVar21 + lVar9);
        fVar5 = *(float *)(lVar21 + lVar9);
        lVar21 = lVar21 + 0x10;
        pfVar17[-1] = (*(float *)((longlong)pfVar17 + lVar10 + 4 + lVar19) -
                      *(float *)((longlong)pfVar17 + lVar9 + 4 + lVar19)) * fVar25 +
                      *(float *)((longlong)pfVar17 + lVar9 + 4 + lVar19);
        fVar6 = *(float *)((longlong)pfVar17 + (lVar10 - param_2));
        fVar7 = *(float *)((longlong)pfVar17 + (lVar9 - param_2));
        pfVar17[-2] = (fVar3 - fVar4) * fVar25 + fVar5;
        *pfVar17 = (fVar6 - fVar7) * fVar25 + *(float *)((longlong)pfVar17 + (lVar9 - param_2));
        pfVar17[1] = (*(float *)((longlong)pfVar17 + lVar10 + lVar24) -
                     *(float *)((longlong)pfVar17 + lVar9 + lVar24)) * fVar25 +
                     *(float *)((longlong)pfVar17 + lVar9 + lVar24);
        pfVar17 = pfVar17 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      if (uVar8 <= uVar20) {
        return;
      }
    }
    lVar21 = uVar18 * 4;
    uVar18 = (ulonglong)(uVar8 - (int)uVar16);
    do {
      *(float *)(lVar21 + param_2) =
           (*(float *)(lVar10 + lVar21) - *(float *)(lVar9 + lVar21)) * fVar25 +
           *(float *)(lVar9 + lVar21);
      lVar21 = lVar21 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  return;
}


