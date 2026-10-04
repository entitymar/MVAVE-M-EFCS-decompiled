// FUN_180020540 @ 180020540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180020540(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  char cVar23;
  short sVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  short sVar27;
  uint uVar28;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 in_XMM1 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char cVar4;
  char cVar5;
  undefined4 uVar29;
  undefined6 uVar30;
  int iVar34;
  int iVar39;
  
  iVar21 = _UNK_1800322dc;
  iVar20 = _UNK_1800322d8;
  iVar19 = _UNK_1800322d4;
  iVar18 = _DAT_1800322d0;
  uVar17 = _UNK_1800321dc;
  uVar16 = _UNK_1800321d8;
  uVar15 = _UNK_1800321d4;
  uVar14 = _DAT_1800321d0;
  iVar13 = _UNK_1800321cc;
  iVar12 = _UNK_1800321c8;
  iVar11 = _UNK_1800321c4;
  iVar10 = _DAT_1800321c0;
  iVar9 = _UNK_1800321bc;
  iVar8 = _UNK_1800321b8;
  iVar7 = _UNK_1800321b4;
  iVar6 = _DAT_1800321b0;
  uVar22 = 0;
  if (param_3 != 0) {
    if (((0xf < param_3) && (1 < DAT_180036c28)) &&
       ((param_2 + (param_3 - 1) * 2 < param_1 || ((param_3 - 1) + param_1 < param_2)))) {
      puVar25 = (undefined8 *)(param_2 + 0x10);
      puVar26 = (undefined4 *)(param_1 + 8);
      do {
        auVar35 = pmovsxwd(in_XMM1,puVar25[-2]);
        iVar34 = auVar35._0_4_;
        auVar36._0_4_ = (uint)(iVar6 < iVar34) * iVar6 | (uint)(iVar6 >= iVar34) * iVar34;
        iVar34 = auVar35._4_4_;
        auVar36._4_4_ = (uint)(iVar7 < iVar34) * iVar7 | (uint)(iVar7 >= iVar34) * iVar34;
        iVar34 = auVar35._8_4_;
        iVar39 = auVar35._12_4_;
        auVar36._8_4_ = (uint)(iVar8 < iVar34) * iVar8 | (uint)(iVar8 >= iVar34) * iVar34;
        auVar36._12_4_ = (uint)(iVar9 < iVar39) * iVar9 | (uint)(iVar9 >= iVar39) * iVar39;
        uVar22 = uVar22 + 0x10;
        uVar28 = ((iVar18 < (int)auVar36._0_4_) * auVar36._0_4_ |
                 (uint)(iVar18 >= (int)auVar36._0_4_) * iVar18) + iVar10 & uVar14;
        uVar31 = ((iVar19 < (int)auVar36._4_4_) * auVar36._4_4_ |
                 (uint)(iVar19 >= (int)auVar36._4_4_) * iVar19) + iVar11 & uVar15;
        uVar32 = ((iVar20 < (int)auVar36._8_4_) * auVar36._8_4_ |
                 (uint)(iVar20 >= (int)auVar36._8_4_) * iVar20) + iVar12 & uVar16;
        uVar33 = ((iVar21 < (int)auVar36._12_4_) * auVar36._12_4_ |
                 (uint)(iVar21 >= (int)auVar36._12_4_) * iVar21) + iVar13 & uVar17;
        sVar1 = (short)uVar28;
        cVar23 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar28 - (0xff < sVar1);
        sVar1 = (short)(uVar28 >> 0x10);
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar1),
                          cVar23);
        sVar1 = (short)uVar31;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar31 - (0xff < sVar1);
        sVar1 = (short)(uVar31 >> 0x10);
        uVar29 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar1),
                          CONCAT12(cVar3,sVar27));
        sVar1 = (short)uVar32;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar32 - (0xff < sVar1);
        sVar1 = (short)(uVar32 >> 0x10);
        uVar30 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar1),
                          CONCAT14(cVar4,uVar29));
        sVar1 = (short)uVar33;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar33 - (0xff < sVar1);
        sVar2 = (short)(uVar33 >> 0x10);
        sVar1 = (short)((uint)uVar29 >> 0x10);
        sVar24 = (short)((uint6)uVar30 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar2),CONCAT16(cVar5,uVar30)) >> 0x30);
        puVar26[-2] = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                               CONCAT12((0 < sVar24) * (sVar24 < 0x100) * cVar4 - (0xff < sVar24),
                                        CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar3 -
                                                 (0xff < sVar1),
                                                 (0 < sVar27) * (sVar27 < 0x100) * cVar23 -
                                                 (0xff < sVar27))));
        auVar35 = pmovsxwd(auVar36,puVar25[-1]);
        iVar34 = auVar35._0_4_;
        auVar37._0_4_ = (uint)(iVar6 < iVar34) * iVar6 | (uint)(iVar6 >= iVar34) * iVar34;
        iVar34 = auVar35._4_4_;
        auVar37._4_4_ = (uint)(iVar7 < iVar34) * iVar7 | (uint)(iVar7 >= iVar34) * iVar34;
        iVar34 = auVar35._8_4_;
        iVar39 = auVar35._12_4_;
        auVar37._8_4_ = (uint)(iVar8 < iVar34) * iVar8 | (uint)(iVar8 >= iVar34) * iVar34;
        auVar37._12_4_ = (uint)(iVar9 < iVar39) * iVar9 | (uint)(iVar9 >= iVar39) * iVar39;
        uVar28 = ((iVar18 < (int)auVar37._0_4_) * auVar37._0_4_ |
                 (uint)(iVar18 >= (int)auVar37._0_4_) * iVar18) + iVar10 & uVar14;
        uVar31 = ((iVar19 < (int)auVar37._4_4_) * auVar37._4_4_ |
                 (uint)(iVar19 >= (int)auVar37._4_4_) * iVar19) + iVar11 & uVar15;
        uVar32 = ((iVar20 < (int)auVar37._8_4_) * auVar37._8_4_ |
                 (uint)(iVar20 >= (int)auVar37._8_4_) * iVar20) + iVar12 & uVar16;
        uVar33 = ((iVar21 < (int)auVar37._12_4_) * auVar37._12_4_ |
                 (uint)(iVar21 >= (int)auVar37._12_4_) * iVar21) + iVar13 & uVar17;
        sVar1 = (short)uVar28;
        cVar23 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar28 - (0xff < sVar1);
        sVar1 = (short)(uVar28 >> 0x10);
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar1),
                          cVar23);
        sVar1 = (short)uVar31;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar31 - (0xff < sVar1);
        sVar1 = (short)(uVar31 >> 0x10);
        uVar29 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar1),
                          CONCAT12(cVar3,sVar27));
        sVar1 = (short)uVar32;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar32 - (0xff < sVar1);
        sVar1 = (short)(uVar32 >> 0x10);
        uVar30 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar1),
                          CONCAT14(cVar4,uVar29));
        sVar1 = (short)uVar33;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar33 - (0xff < sVar1);
        sVar2 = (short)(uVar33 >> 0x10);
        sVar1 = (short)((uint)uVar29 >> 0x10);
        sVar24 = (short)((uint6)uVar30 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar2),CONCAT16(cVar5,uVar30)) >> 0x30);
        puVar26[-1] = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                               CONCAT12((0 < sVar24) * (sVar24 < 0x100) * cVar4 - (0xff < sVar24),
                                        CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar3 -
                                                 (0xff < sVar1),
                                                 (0 < sVar27) * (sVar27 < 0x100) * cVar23 -
                                                 (0xff < sVar27))));
        auVar35 = pmovsxwd(auVar37,*puVar25);
        iVar34 = auVar35._0_4_;
        auVar38._0_4_ = (uint)(iVar6 < iVar34) * iVar6 | (uint)(iVar6 >= iVar34) * iVar34;
        iVar34 = auVar35._4_4_;
        auVar38._4_4_ = (uint)(iVar7 < iVar34) * iVar7 | (uint)(iVar7 >= iVar34) * iVar34;
        iVar34 = auVar35._8_4_;
        iVar39 = auVar35._12_4_;
        auVar38._8_4_ = (uint)(iVar8 < iVar34) * iVar8 | (uint)(iVar8 >= iVar34) * iVar34;
        auVar38._12_4_ = (uint)(iVar9 < iVar39) * iVar9 | (uint)(iVar9 >= iVar39) * iVar39;
        uVar28 = ((iVar18 < (int)auVar38._0_4_) * auVar38._0_4_ |
                 (uint)(iVar18 >= (int)auVar38._0_4_) * iVar18) + iVar10 & uVar14;
        uVar31 = ((iVar19 < (int)auVar38._4_4_) * auVar38._4_4_ |
                 (uint)(iVar19 >= (int)auVar38._4_4_) * iVar19) + iVar11 & uVar15;
        uVar32 = ((iVar20 < (int)auVar38._8_4_) * auVar38._8_4_ |
                 (uint)(iVar20 >= (int)auVar38._8_4_) * iVar20) + iVar12 & uVar16;
        uVar33 = ((iVar21 < (int)auVar38._12_4_) * auVar38._12_4_ |
                 (uint)(iVar21 >= (int)auVar38._12_4_) * iVar21) + iVar13 & uVar17;
        sVar1 = (short)uVar28;
        cVar23 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar28 - (0xff < sVar1);
        sVar1 = (short)(uVar28 >> 0x10);
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar1),
                          cVar23);
        sVar1 = (short)uVar31;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar31 - (0xff < sVar1);
        sVar1 = (short)(uVar31 >> 0x10);
        uVar29 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar1),
                          CONCAT12(cVar3,sVar27));
        sVar1 = (short)uVar32;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar32 - (0xff < sVar1);
        sVar1 = (short)(uVar32 >> 0x10);
        uVar30 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar1),
                          CONCAT14(cVar4,uVar29));
        sVar1 = (short)uVar33;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar33 - (0xff < sVar1);
        sVar2 = (short)(uVar33 >> 0x10);
        sVar1 = (short)((uint)uVar29 >> 0x10);
        sVar24 = (short)((uint6)uVar30 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar2),CONCAT16(cVar5,uVar30)) >> 0x30);
        *puVar26 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                            CONCAT12((0 < sVar24) * (sVar24 < 0x100) * cVar4 - (0xff < sVar24),
                                     CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar3 - (0xff < sVar1)
                                              ,(0 < sVar27) * (sVar27 < 0x100) * cVar23 -
                                               (0xff < sVar27))));
        auVar35 = pmovsxwd(auVar38,puVar25[1]);
        iVar34 = auVar35._0_4_;
        in_XMM1._0_4_ = (uint)(iVar6 < iVar34) * iVar6 | (uint)(iVar6 >= iVar34) * iVar34;
        iVar34 = auVar35._4_4_;
        in_XMM1._4_4_ = (uint)(iVar7 < iVar34) * iVar7 | (uint)(iVar7 >= iVar34) * iVar34;
        iVar34 = auVar35._8_4_;
        iVar39 = auVar35._12_4_;
        in_XMM1._8_4_ = (uint)(iVar8 < iVar34) * iVar8 | (uint)(iVar8 >= iVar34) * iVar34;
        in_XMM1._12_4_ = (uint)(iVar9 < iVar39) * iVar9 | (uint)(iVar9 >= iVar39) * iVar39;
        uVar28 = ((iVar18 < (int)in_XMM1._0_4_) * in_XMM1._0_4_ |
                 (uint)(iVar18 >= (int)in_XMM1._0_4_) * iVar18) + iVar10 & uVar14;
        uVar31 = ((iVar19 < (int)in_XMM1._4_4_) * in_XMM1._4_4_ |
                 (uint)(iVar19 >= (int)in_XMM1._4_4_) * iVar19) + iVar11 & uVar15;
        uVar32 = ((iVar20 < (int)in_XMM1._8_4_) * in_XMM1._8_4_ |
                 (uint)(iVar20 >= (int)in_XMM1._8_4_) * iVar20) + iVar12 & uVar16;
        uVar33 = ((iVar21 < (int)in_XMM1._12_4_) * in_XMM1._12_4_ |
                 (uint)(iVar21 >= (int)in_XMM1._12_4_) * iVar21) + iVar13 & uVar17;
        sVar1 = (short)uVar28;
        cVar23 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar28 - (0xff < sVar1);
        sVar1 = (short)(uVar28 >> 0x10);
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar28 >> 0x10) - (0xff < sVar1),
                          cVar23);
        sVar1 = (short)uVar31;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar31 - (0xff < sVar1);
        sVar1 = (short)(uVar31 >> 0x10);
        uVar29 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar31 >> 0x10) - (0xff < sVar1),
                          CONCAT12(cVar3,sVar27));
        sVar1 = (short)uVar32;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar32 - (0xff < sVar1);
        sVar1 = (short)(uVar32 >> 0x10);
        uVar30 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * (char)(uVar32 >> 0x10) - (0xff < sVar1),
                          CONCAT14(cVar4,uVar29));
        sVar1 = (short)uVar33;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar33 - (0xff < sVar1);
        sVar2 = (short)(uVar33 >> 0x10);
        sVar1 = (short)((uint)uVar29 >> 0x10);
        sVar24 = (short)((uint6)uVar30 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar33 >> 0x10) -
                                 (0xff < sVar2),CONCAT16(cVar5,uVar30)) >> 0x30);
        puVar26[1] = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2),
                              CONCAT12((0 < sVar24) * (sVar24 < 0x100) * cVar4 - (0xff < sVar24),
                                       CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar3 -
                                                (0xff < sVar1),
                                                (0 < sVar27) * (sVar27 < 0x100) * cVar23 -
                                                (0xff < sVar27))));
        puVar25 = puVar25 + 4;
        puVar26 = puVar26 + 4;
      } while (uVar22 < (param_3 & 0xfffffffffffffff0));
      if (param_3 <= uVar22) {
        return;
      }
    }
    do {
      sVar1 = *(short *)(param_2 + uVar22 * 2);
      sVar24 = 0x7f;
      if (sVar1 < 0x7f) {
        sVar24 = sVar1;
      }
      cVar23 = (char)sVar24;
      if (sVar24 < -0x80) {
        cVar23 = -0x80;
      }
      *(char *)(param_1 + uVar22) = cVar23 + -0x80;
      uVar22 = uVar22 + 1;
    } while (uVar22 < param_3);
  }
  return;
}


