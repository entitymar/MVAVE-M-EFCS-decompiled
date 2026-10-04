// FUN_18002beb0 @ 18002beb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002beb0(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  char cVar11;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  char cVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  short sVar29;
  uint uVar30;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  short sVar36;
  uint uVar39;
  char cVar9;
  char cVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined4 uVar31;
  undefined6 uVar32;
  undefined4 uVar37;
  undefined6 uVar38;
  
  uVar18 = _DAT_1800322a0;
  uVar17 = _UNK_1800321dc;
  uVar16 = _UNK_1800321d8;
  uVar15 = _UNK_1800321d4;
  uVar22 = _DAT_1800321d0;
  if (param_4 == 0) {
    uVar24 = 0;
    if (param_3 != 0) {
      if ((0xf < param_3) &&
         ((param_2 + (param_3 - 1) * 4 < param_1 || ((param_1 - 1) + param_3 < param_2)))) {
        puVar20 = (undefined4 *)(param_1 + 8);
        piVar23 = (int *)(param_2 + 0x20);
        do {
          uVar24 = uVar24 + 0x10;
          uVar30 = piVar23[-8] >> 0x18 & uVar22;
          uVar33 = piVar23[-7] >> 0x18 & uVar15;
          uVar34 = piVar23[-6] >> 0x18 & uVar16;
          uVar35 = piVar23[-5] >> 0x18 & uVar17;
          sVar2 = (short)uVar30;
          cVar19 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar30 - (0xff < sVar2);
          sVar2 = (short)(uVar30 >> 0x10);
          sVar29 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar2),
                            cVar19);
          sVar2 = (short)uVar33;
          cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
          sVar2 = (short)(uVar33 >> 0x10);
          uVar31 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) - (0xff < sVar2),
                            CONCAT12(cVar8,sVar29));
          sVar2 = (short)uVar34;
          cVar9 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar34 - (0xff < sVar2);
          sVar2 = (short)(uVar34 >> 0x10);
          uVar32 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar34 >> 0x10) - (0xff < sVar2),
                            CONCAT14(cVar9,uVar31));
          sVar2 = (short)uVar35;
          cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar35 - (0xff < sVar2);
          sVar3 = (short)(uVar35 >> 0x10);
          uVar30 = piVar23[-4] >> 0x18 & uVar22;
          uVar33 = piVar23[-3] >> 0x18 & uVar15;
          uVar34 = piVar23[-2] >> 0x18 & uVar16;
          uVar39 = piVar23[-1] >> 0x18 & uVar17;
          sVar2 = (short)uVar30;
          cVar11 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar30 - (0xff < sVar2);
          sVar2 = (short)(uVar30 >> 0x10);
          sVar36 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar2),
                            cVar11);
          sVar2 = (short)uVar33;
          cVar12 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
          sVar2 = (short)(uVar33 >> 0x10);
          uVar37 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) - (0xff < sVar2),
                            CONCAT12(cVar12,sVar36));
          sVar2 = (short)uVar34;
          cVar13 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar34 - (0xff < sVar2);
          sVar2 = (short)(uVar34 >> 0x10);
          uVar38 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar34 >> 0x10) - (0xff < sVar2),
                            CONCAT14(cVar13,uVar37));
          sVar2 = (short)uVar39;
          cVar14 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar39 - (0xff < sVar2);
          sVar7 = (short)(uVar39 >> 0x10);
          sVar2 = (short)((uint)uVar31 >> 0x10);
          sVar4 = (short)((uint6)uVar32 >> 0x20);
          sVar6 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar35 >> 0x10) -
                                   (0xff < sVar3),CONCAT16(cVar10,uVar32)) >> 0x30);
          sVar3 = (short)((uint)uVar37 >> 0x10);
          sVar5 = (short)((uint6)uVar38 >> 0x20);
          sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)(uVar39 >> 0x10) -
                                   (0xff < sVar7),CONCAT16(cVar14,uVar38)) >> 0x30);
          cVar25 = (char)uVar18;
          cVar26 = (char)((ulonglong)uVar18 >> 8);
          cVar27 = (char)((ulonglong)uVar18 >> 0x10);
          cVar28 = (char)((ulonglong)uVar18 >> 0x18);
          puVar20[-2] = CONCAT13(((0 < sVar6) * (sVar6 < 0x100) * cVar10 - (0xff < sVar6)) + cVar28,
                                 CONCAT12(((0 < sVar4) * (sVar4 < 0x100) * cVar9 - (0xff < sVar4)) +
                                          cVar27,CONCAT11(((0 < sVar2) * (sVar2 < 0x100) * cVar8 -
                                                          (0xff < sVar2)) + cVar26,
                                                          ((0 < sVar29) * (sVar29 < 0x100) * cVar19
                                                          - (0xff < sVar29)) + cVar25)));
          puVar20[-1] = CONCAT13(((0 < sVar7) * (sVar7 < 0x100) * cVar14 - (0xff < sVar7)) + cVar28,
                                 CONCAT12(((0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5))
                                          + cVar27,CONCAT11(((0 < sVar3) * (sVar3 < 0x100) * cVar12
                                                            - (0xff < sVar3)) + cVar26,
                                                            ((0 < sVar36) * (sVar36 < 0x100) *
                                                             cVar11 - (0xff < sVar36)) + cVar25)));
          uVar30 = *piVar23 >> 0x18 & uVar22;
          uVar33 = piVar23[1] >> 0x18 & uVar15;
          uVar34 = piVar23[2] >> 0x18 & uVar16;
          uVar35 = piVar23[3] >> 0x18 & uVar17;
          sVar2 = (short)uVar30;
          cVar19 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar30 - (0xff < sVar2);
          sVar2 = (short)(uVar30 >> 0x10);
          sVar29 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar2),
                            cVar19);
          sVar2 = (short)uVar33;
          cVar8 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
          sVar2 = (short)(uVar33 >> 0x10);
          uVar31 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) - (0xff < sVar2),
                            CONCAT12(cVar8,sVar29));
          sVar2 = (short)uVar34;
          cVar9 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar34 - (0xff < sVar2);
          sVar2 = (short)(uVar34 >> 0x10);
          uVar32 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar34 >> 0x10) - (0xff < sVar2),
                            CONCAT14(cVar9,uVar31));
          sVar2 = (short)uVar35;
          cVar10 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar35 - (0xff < sVar2);
          sVar3 = (short)(uVar35 >> 0x10);
          uVar30 = piVar23[4] >> 0x18 & uVar22;
          uVar33 = piVar23[5] >> 0x18 & uVar15;
          uVar34 = piVar23[6] >> 0x18 & uVar16;
          uVar39 = piVar23[7] >> 0x18 & uVar17;
          sVar2 = (short)uVar30;
          cVar11 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar30 - (0xff < sVar2);
          sVar2 = (short)(uVar30 >> 0x10);
          sVar36 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar30 >> 0x10) - (0xff < sVar2),
                            cVar11);
          sVar2 = (short)uVar33;
          cVar12 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar33 - (0xff < sVar2);
          sVar2 = (short)(uVar33 >> 0x10);
          uVar37 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) - (0xff < sVar2),
                            CONCAT12(cVar12,sVar36));
          sVar2 = (short)uVar34;
          cVar13 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar34 - (0xff < sVar2);
          sVar2 = (short)(uVar34 >> 0x10);
          uVar38 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar34 >> 0x10) - (0xff < sVar2),
                            CONCAT14(cVar13,uVar37));
          sVar2 = (short)uVar39;
          cVar14 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar39 - (0xff < sVar2);
          sVar7 = (short)(uVar39 >> 0x10);
          sVar2 = (short)((uint)uVar31 >> 0x10);
          sVar4 = (short)((uint6)uVar32 >> 0x20);
          sVar6 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar35 >> 0x10) -
                                   (0xff < sVar3),CONCAT16(cVar10,uVar32)) >> 0x30);
          sVar3 = (short)((uint)uVar37 >> 0x10);
          sVar5 = (short)((uint6)uVar38 >> 0x20);
          sVar7 = (short)(CONCAT17((0 < sVar7) * (sVar7 < 0x100) * (char)(uVar39 >> 0x10) -
                                   (0xff < sVar7),CONCAT16(cVar14,uVar38)) >> 0x30);
          *puVar20 = CONCAT13(((0 < sVar6) * (sVar6 < 0x100) * cVar10 - (0xff < sVar6)) + cVar28,
                              CONCAT12(((0 < sVar4) * (sVar4 < 0x100) * cVar9 - (0xff < sVar4)) +
                                       cVar27,CONCAT11(((0 < sVar2) * (sVar2 < 0x100) * cVar8 -
                                                       (0xff < sVar2)) + cVar26,
                                                       ((0 < sVar29) * (sVar29 < 0x100) * cVar19 -
                                                       (0xff < sVar29)) + cVar25)));
          puVar20[1] = CONCAT13(((0 < sVar7) * (sVar7 < 0x100) * cVar14 - (0xff < sVar7)) + cVar28,
                                CONCAT12(((0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5)) +
                                         cVar27,CONCAT11(((0 < sVar3) * (sVar3 < 0x100) * cVar12 -
                                                         (0xff < sVar3)) + cVar26,
                                                         ((0 < sVar36) * (sVar36 < 0x100) * cVar11 -
                                                         (0xff < sVar36)) + cVar25)));
          puVar20 = puVar20 + 4;
          piVar23 = piVar23 + 0x10;
        } while (uVar24 < (param_3 & 0xfffffffffffffff0));
        if (param_3 <= uVar24) {
          return;
        }
      }
      do {
        *(char *)(param_1 + uVar24) = *(char *)(param_2 + 3 + uVar24 * 4) + -0x80;
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
      return;
    }
  }
  else {
    uVar24 = 0;
    if (param_3 != 0) {
      if (param_4 == 2) {
        do {
          iVar21 = DAT_18003604c * 0xbc8f;
          iVar1 = *(int *)(param_2 + uVar24 * 4);
          uVar22 = iVar21 + ((int)((longlong)iVar21 * 0x40000001 >> 0x3d) - (iVar21 >> 0x1f)) *
                            -0x7fffffff;
          iVar21 = uVar22 * 0xbc8f;
          DAT_18003604c =
               iVar21 + ((int)((longlong)iVar21 * 0x40000001 >> 0x3d) - (iVar21 >> 0x1f)) *
                        -0x7fffffff;
          uVar22 = (DAT_18003604c >> 9) + (uVar22 >> 9);
          if ((longlong)(((ulonglong)uVar22 - 0x800000) + (longlong)iVar1) < 0x80000000) {
            cVar19 = (char)((uVar22 - 0x800000) + iVar1 >> 0x18);
          }
          else {
            cVar19 = '\x7f';
          }
          *(char *)(uVar24 + param_1) = cVar19 + -0x80;
          uVar24 = uVar24 + 1;
        } while (uVar24 < param_3);
        return;
      }
      do {
        iVar1 = *(int *)(param_2 + uVar24 * 4);
        iVar21 = 0;
        if (param_4 == 1) {
          iVar21 = DAT_18003604c * 0xbc8f;
          DAT_18003604c =
               iVar21 + ((int)((longlong)iVar21 * 0x40000001 >> 0x3d) - (iVar21 >> 0x1f)) *
                        -0x7fffffff;
          iVar21 = (DAT_18003604c >> 8) - 0x800000;
        }
        cVar19 = (char)((uint)(iVar1 + iVar21) >> 0x18);
        if (0x7fffffff < (longlong)iVar21 + (longlong)iVar1) {
          cVar19 = '\x7f';
        }
        *(char *)(uVar24 + param_1) = cVar19 + -0x80;
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_3);
    }
  }
  return;
}


