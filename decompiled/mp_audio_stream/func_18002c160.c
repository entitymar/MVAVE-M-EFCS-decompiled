// FUN_18002c160 @ 18002c160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002c160(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint *puVar16;
  byte *pbVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  fVar15 = _UNK_18003224c;
  fVar14 = _UNK_180032248;
  fVar13 = _UNK_180032244;
  fVar12 = _DAT_180032240;
  fVar11 = _UNK_18003222c;
  fVar10 = _UNK_180032228;
  fVar9 = _UNK_180032224;
  fVar8 = _DAT_180032220;
  uVar20 = 0;
  if (param_3 != 0) {
    if ((0xf < param_3) &&
       (((param_2 - 1) + param_3 < param_1 || (param_1 + (param_3 - 1) * 4 < param_2)))) {
      puVar16 = (uint *)(param_2 + 8);
      pfVar18 = (float *)(param_1 + 0x20);
      do {
        uVar2 = puVar16[-2];
        uVar20 = uVar20 + 0x10;
        auVar4[0xc] = (char)(uVar2 >> 0x18);
        auVar4._0_12_ = ZEXT712(0);
        uVar3 = puVar16[-1];
        pfVar18[-8] = (float)(uVar2 & 0xff) * fVar8 - fVar12;
        pfVar18[-7] = (float)(uVar2 >> 8 & 0xff) * fVar9 - fVar13;
        pfVar18[-6] = (float)(int)CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10)) * fVar10 -
                      fVar14;
        pfVar18[-5] = (float)(uint3)(auVar4._10_3_ >> 0x10) * fVar11 - fVar15;
        auVar5[0xc] = (char)(uVar3 >> 0x18);
        auVar5._0_12_ = ZEXT712(0);
        uVar2 = *puVar16;
        pfVar18[-4] = (float)(uVar3 & 0xff) * fVar8 - fVar12;
        pfVar18[-3] = (float)(uVar3 >> 8 & 0xff) * fVar9 - fVar13;
        pfVar18[-2] = (float)(int)CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar3 >> 0x10)) * fVar10 -
                      fVar14;
        pfVar18[-1] = (float)(uint3)(auVar5._10_3_ >> 0x10) * fVar11 - fVar15;
        auVar6[0xc] = (char)(uVar2 >> 0x18);
        auVar6._0_12_ = ZEXT712(0);
        uVar3 = puVar16[1];
        puVar16 = puVar16 + 4;
        *pfVar18 = (float)(uVar2 & 0xff) * fVar8 - fVar12;
        pfVar18[1] = (float)(uVar2 >> 8 & 0xff) * fVar9 - fVar13;
        pfVar18[2] = (float)(int)CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar2 >> 0x10)) * fVar10 -
                     fVar14;
        pfVar18[3] = (float)(uint3)(auVar6._10_3_ >> 0x10) * fVar11 - fVar15;
        auVar7[0xc] = (char)(uVar3 >> 0x18);
        auVar7._0_12_ = ZEXT712(0);
        pfVar18[4] = (float)(uVar3 & 0xff) * fVar8 - fVar12;
        pfVar18[5] = (float)(uVar3 >> 8 & 0xff) * fVar9 - fVar13;
        pfVar18[6] = (float)(int)CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar3 >> 0x10)) * fVar10 -
                     fVar14;
        pfVar18[7] = (float)(uint3)(auVar7._10_3_ >> 0x10) * fVar11 - fVar15;
        pfVar18 = pfVar18 + 0x10;
      } while (uVar20 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar20) {
        return;
      }
    }
    fVar9 = DAT_1800320cc;
    fVar8 = DAT_1800320b4;
    if (3 < param_3 - uVar20) {
      pbVar17 = (byte *)(param_2 + 2 + uVar20);
      lVar19 = ((param_3 - uVar20) - 4 >> 2) + 1;
      pfVar18 = (float *)(param_1 + 8 + uVar20 * 4);
      uVar20 = uVar20 + lVar19 * 4;
      do {
        pfVar18[-2] = (float)pbVar17[-2] * fVar8 - fVar9;
        pfVar18[-1] = (float)pbVar17[-1] * fVar8 - fVar9;
        *pfVar18 = (float)*pbVar17 * fVar8 - fVar9;
        pbVar1 = pbVar17 + 1;
        pbVar17 = pbVar17 + 4;
        pfVar18[1] = (float)*pbVar1 * fVar8 - fVar9;
        pfVar18 = pfVar18 + 4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      if (param_3 <= uVar20) {
        return;
      }
    }
    do {
      *(float *)(param_1 + uVar20 * 4) = (float)*(byte *)(param_2 + uVar20) * fVar8 - fVar9;
      uVar20 = uVar20 + 1;
    } while (uVar20 < param_3);
  }
  return;
}


