// FUN_18002b3d0 @ 18002b3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002b3d0(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  char cVar32;
  uint uVar33;
  uint uVar35;
  uint uVar36;
  undefined1 auVar34 [16];
  uint uVar37;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  undefined1 auVar39 [16];
  uint uVar42;
  
  cVar26 = UNK_1800322a7;
  cVar25 = UNK_1800322a6;
  cVar24 = UNK_1800322a5;
  cVar23 = UNK_1800322a4;
  cVar22 = UNK_1800322a3;
  cVar21 = UNK_1800322a2;
  cVar20 = UNK_1800322a1;
  cVar32 = DAT_1800322a0;
  uVar19 = _UNK_18003220c;
  uVar18 = _UNK_180032208;
  uVar17 = _UNK_180032204;
  uVar31 = _DAT_180032200;
  if (param_4 == 0) {
    uVar29 = 0;
    if (param_3 != 0) {
      if ((0x1f < param_3) &&
         ((param_2 + (param_3 - 1) * 2 < param_1 || ((param_1 - 1) + param_3 < param_2)))) {
        puVar27 = (undefined8 *)(param_1 + 0x10);
        pauVar28 = (undefined1 (*) [16])(param_2 + 0x20);
        do {
          uVar29 = uVar29 + 0x20;
          auVar34 = psraw(pauVar28[-2],8);
          auVar39 = psraw(pauVar28[-1],8);
          uVar33 = auVar34._0_4_ & uVar31;
          uVar35 = auVar34._4_4_ & uVar17;
          uVar36 = auVar34._8_4_ & uVar18;
          uVar37 = auVar34._12_4_ & uVar19;
          sVar1 = (short)uVar33;
          sVar3 = (short)(uVar33 >> 0x10);
          sVar5 = (short)uVar35;
          sVar7 = (short)(uVar35 >> 0x10);
          sVar9 = (short)uVar36;
          sVar11 = (short)(uVar36 >> 0x10);
          sVar13 = (short)uVar37;
          sVar15 = (short)(uVar37 >> 0x10);
          uVar38 = auVar39._0_4_ & uVar31;
          uVar40 = auVar39._4_4_ & uVar17;
          uVar41 = auVar39._8_4_ & uVar18;
          uVar42 = auVar39._12_4_ & uVar19;
          sVar2 = (short)uVar38;
          sVar4 = (short)(uVar38 >> 0x10);
          sVar6 = (short)uVar40;
          sVar8 = (short)(uVar40 >> 0x10);
          sVar10 = (short)uVar41;
          sVar12 = (short)(uVar41 >> 0x10);
          sVar14 = (short)uVar42;
          sVar16 = (short)(uVar42 >> 0x10);
          puVar27[-2] = CONCAT17(((0 < sVar15) * (sVar15 < 0x100) * (char)(uVar37 >> 0x10) -
                                 (0xff < sVar15)) + cVar26,
                                 CONCAT16(((0 < sVar13) * (sVar13 < 0x100) * (char)uVar37 -
                                          (0xff < sVar13)) + cVar25,
                                          CONCAT15(((0 < sVar11) * (sVar11 < 0x100) *
                                                    (char)(uVar36 >> 0x10) - (0xff < sVar11)) +
                                                   cVar24,CONCAT14(((0 < sVar9) * (sVar9 < 0x100) *
                                                                    (char)uVar36 - (0xff < sVar9)) +
                                                                   cVar23,CONCAT13(((0 < sVar7) *
                                                                                    (sVar7 < 0x100)
                                                                                    * (char)(uVar35 
                                                  >> 0x10) - (0xff < sVar7)) + cVar22,
                                                  CONCAT12(((0 < sVar5) * (sVar5 < 0x100) *
                                                            (char)uVar35 - (0xff < sVar5)) + cVar21,
                                                           CONCAT11(((0 < sVar3) * (sVar3 < 0x100) *
                                                                     (char)(uVar33 >> 0x10) -
                                                                    (0xff < sVar3)) + cVar20,
                                                                    ((0 < sVar1) * (sVar1 < 0x100) *
                                                                     (char)uVar33 - (0xff < sVar1))
                                                                    + cVar32)))))));
          puVar27[-1] = CONCAT17(((0 < sVar16) * (sVar16 < 0x100) * (char)(uVar42 >> 0x10) -
                                 (0xff < sVar16)) + cVar26,
                                 CONCAT16(((0 < sVar14) * (sVar14 < 0x100) * (char)uVar42 -
                                          (0xff < sVar14)) + cVar25,
                                          CONCAT15(((0 < sVar12) * (sVar12 < 0x100) *
                                                    (char)(uVar41 >> 0x10) - (0xff < sVar12)) +
                                                   cVar24,CONCAT14(((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)uVar41 - (0xff < sVar10)
                                                                   ) + cVar23,
                                                                   CONCAT13(((0 < sVar8) *
                                                                             (sVar8 < 0x100) *
                                                                             (char)(uVar40 >> 0x10)
                                                                            - (0xff < sVar8)) +
                                                                            cVar22,CONCAT12(((0 < 
                                                  sVar6) * (sVar6 < 0x100) * (char)uVar40 -
                                                  (0xff < sVar6)) + cVar21,
                                                  CONCAT11(((0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)(uVar38 >> 0x10) - (0xff < sVar4))
                                                           + cVar20,((0 < sVar2) * (sVar2 < 0x100) *
                                                                     (char)uVar38 - (0xff < sVar2))
                                                                    + cVar32)))))));
          auVar34 = psraw(*pauVar28,8);
          auVar39 = psraw(pauVar28[1],8);
          uVar33 = auVar34._0_4_ & uVar31;
          uVar35 = auVar34._4_4_ & uVar17;
          uVar36 = auVar34._8_4_ & uVar18;
          uVar37 = auVar34._12_4_ & uVar19;
          sVar1 = (short)uVar33;
          sVar3 = (short)(uVar33 >> 0x10);
          sVar5 = (short)uVar35;
          sVar7 = (short)(uVar35 >> 0x10);
          sVar9 = (short)uVar36;
          sVar11 = (short)(uVar36 >> 0x10);
          sVar13 = (short)uVar37;
          sVar15 = (short)(uVar37 >> 0x10);
          uVar38 = auVar39._0_4_ & uVar31;
          uVar40 = auVar39._4_4_ & uVar17;
          uVar41 = auVar39._8_4_ & uVar18;
          uVar42 = auVar39._12_4_ & uVar19;
          sVar2 = (short)uVar38;
          sVar4 = (short)(uVar38 >> 0x10);
          sVar6 = (short)uVar40;
          sVar8 = (short)(uVar40 >> 0x10);
          sVar10 = (short)uVar41;
          sVar12 = (short)(uVar41 >> 0x10);
          sVar14 = (short)uVar42;
          sVar16 = (short)(uVar42 >> 0x10);
          *puVar27 = CONCAT17(((0 < sVar15) * (sVar15 < 0x100) * (char)(uVar37 >> 0x10) -
                              (0xff < sVar15)) + cVar26,
                              CONCAT16(((0 < sVar13) * (sVar13 < 0x100) * (char)uVar37 -
                                       (0xff < sVar13)) + cVar25,
                                       CONCAT15(((0 < sVar11) * (sVar11 < 0x100) *
                                                 (char)(uVar36 >> 0x10) - (0xff < sVar11)) + cVar24,
                                                CONCAT14(((0 < sVar9) * (sVar9 < 0x100) *
                                                          (char)uVar36 - (0xff < sVar9)) + cVar23,
                                                         CONCAT13(((0 < sVar7) * (sVar7 < 0x100) *
                                                                   (char)(uVar35 >> 0x10) -
                                                                  (0xff < sVar7)) + cVar22,
                                                                  CONCAT12(((0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            (char)uVar35 -
                                                                           (0xff < sVar5)) + cVar21,
                                                                           CONCAT11(((0 < sVar3) *
                                                                                     (sVar3 < 0x100)
                                                                                     * (char)(uVar33
                                                                                             >> 0x10
                                                  ) - (0xff < sVar3)) + cVar20,
                                                  ((0 < sVar1) * (sVar1 < 0x100) * (char)uVar33 -
                                                  (0xff < sVar1)) + cVar32)))))));
          puVar27[1] = CONCAT17(((0 < sVar16) * (sVar16 < 0x100) * (char)(uVar42 >> 0x10) -
                                (0xff < sVar16)) + cVar26,
                                CONCAT16(((0 < sVar14) * (sVar14 < 0x100) * (char)uVar42 -
                                         (0xff < sVar14)) + cVar25,
                                         CONCAT15(((0 < sVar12) * (sVar12 < 0x100) *
                                                   (char)(uVar41 >> 0x10) - (0xff < sVar12)) +
                                                  cVar24,CONCAT14(((0 < sVar10) * (sVar10 < 0x100) *
                                                                   (char)uVar41 - (0xff < sVar10)) +
                                                                  cVar23,CONCAT13(((0 < sVar8) *
                                                                                   (sVar8 < 0x100) *
                                                                                   (char)(uVar40 >>
                                                                                         0x10) -
                                                                                  (0xff < sVar8)) +
                                                                                  cVar22,CONCAT12(((
                                                  0 < sVar6) * (sVar6 < 0x100) * (char)uVar40 -
                                                  (0xff < sVar6)) + cVar21,
                                                  CONCAT11(((0 < sVar4) * (sVar4 < 0x100) *
                                                            (char)(uVar38 >> 0x10) - (0xff < sVar4))
                                                           + cVar20,((0 < sVar2) * (sVar2 < 0x100) *
                                                                     (char)uVar38 - (0xff < sVar2))
                                                                    + cVar32)))))));
          puVar27 = puVar27 + 4;
          pauVar28 = pauVar28 + 4;
        } while (uVar29 < (param_3 & 0xffffffffffffffe0));
        if (param_3 <= uVar29) {
          return;
        }
      }
      do {
        *(char *)(param_1 + uVar29) = *(char *)(param_2 + 1 + uVar29 * 2) + -0x80;
        uVar29 = uVar29 + 1;
      } while (uVar29 < param_3);
      return;
    }
  }
  else {
    uVar29 = 0;
    if (param_3 != 0) {
      if (param_4 == 2) {
        do {
          iVar30 = DAT_18003604c * 0xbc8f;
          sVar1 = *(short *)(param_2 + uVar29 * 2);
          uVar31 = iVar30 + ((int)((longlong)iVar30 * 0x40000001 >> 0x3d) - (iVar30 >> 0x1f)) *
                            -0x7fffffff;
          iVar30 = uVar31 * 0xbc8f;
          DAT_18003604c =
               iVar30 + ((int)((longlong)iVar30 * 0x40000001 >> 0x3d) - (iVar30 >> 0x1f)) *
                        -0x7fffffff;
          iVar30 = (uVar31 / 0x1fc07f1 - 0x80) + (DAT_18003604c >> 0x19);
          if (iVar30 + sVar1 < 0x8000) {
            cVar32 = (char)((ushort)(sVar1 + (short)iVar30) >> 8);
          }
          else {
            cVar32 = '\x7f';
          }
          *(char *)(uVar29 + param_1) = cVar32 + -0x80;
          uVar29 = uVar29 + 1;
        } while (uVar29 < param_3);
        return;
      }
      do {
        sVar1 = *(short *)(param_2 + uVar29 * 2);
        iVar30 = 0;
        if (param_4 == 1) {
          iVar30 = DAT_18003604c * 0xbc8f;
          DAT_18003604c =
               iVar30 + ((int)((longlong)iVar30 * 0x40000001 >> 0x3d) - (iVar30 >> 0x1f)) *
                        -0x7fffffff;
          iVar30 = (DAT_18003604c >> 0x18) - 0x80;
        }
        if (iVar30 + sVar1 < 0x8000) {
          cVar32 = (char)((ushort)(sVar1 + (short)iVar30) >> 8);
        }
        else {
          cVar32 = '\x7f';
        }
        *(char *)(uVar29 + param_1) = cVar32 + -0x80;
        uVar29 = uVar29 + 1;
      } while (uVar29 < param_3);
    }
  }
  return;
}


