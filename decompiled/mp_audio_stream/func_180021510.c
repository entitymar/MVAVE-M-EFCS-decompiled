// FUN_180021510 @ 180021510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180021510(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  char cVar31;
  short sVar32;
  short sVar33;
  ulonglong uVar34;
  short sVar35;
  short sVar36;
  uint uVar37;
  undefined1 auVar42 [12];
  uint uVar49;
  undefined1 auVar45 [16];
  uint uVar50;
  uint uVar51;
  undefined1 auVar47 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar60 [16];
  char cVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar38;
  undefined6 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [12];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  int iVar56;
  int iVar59;
  
  iVar30 = _UNK_1800322dc;
  iVar29 = _UNK_1800322d8;
  iVar28 = _UNK_1800322d4;
  iVar27 = _DAT_1800322d0;
  uVar26 = _UNK_1800321dc;
  uVar25 = _UNK_1800321d8;
  uVar24 = _UNK_1800321d4;
  uVar23 = _DAT_1800321d0;
  iVar22 = _UNK_1800321cc;
  iVar21 = _UNK_1800321c8;
  iVar20 = _UNK_1800321c4;
  iVar19 = _DAT_1800321c0;
  iVar18 = _UNK_1800321bc;
  iVar17 = _UNK_1800321b8;
  iVar16 = _UNK_1800321b4;
  iVar15 = _DAT_1800321b0;
  auVar57._4_12_ = in_XMM3._4_12_;
  auVar57._0_4_ = in_XMM3._0_4_ * _DAT_18003213c;
  uVar34 = 0;
  sVar35 = (short)(int)auVar57._0_4_;
  auVar45._0_4_ = CONCAT22(sVar35,sVar35);
  auVar45._4_4_ = auVar45._0_4_;
  if (param_3 != 0) {
    if (((7 < param_3) && (1 < DAT_180036c28)) &&
       ((param_2 + (param_3 - 1) * 2 < param_1 || ((param_3 - 1) + param_1 < param_2)))) {
      auVar45._8_8_ = 0;
      auVar60 = pmovsxwd(in_XMM4,auVar45);
      do {
        auVar52 = pmovsxwd(in_XMM1,*(undefined8 *)(param_2 + uVar34 * 2));
        auVar52 = pmulld(auVar52,auVar60);
        auVar53._0_4_ = auVar52._0_4_ >> 8;
        auVar53._4_4_ = auVar52._4_4_ >> 8;
        auVar53._8_4_ = auVar52._8_4_ >> 8;
        auVar53._12_4_ = auVar52._12_4_ >> 8;
        auVar45 = pshufhw(auVar45,auVar53,0xd8);
        auVar45 = pshuflw(auVar53,auVar45,0xd8);
        auVar54 = pmovsxwd(auVar45,*(undefined8 *)(param_2 + 8 + uVar34 * 2));
        auVar52._4_4_ = auVar45._8_4_;
        auVar52._0_4_ = auVar45._0_4_;
        auVar52._8_4_ = auVar45._4_4_;
        auVar52._12_4_ = auVar45._12_4_;
        auVar45 = pmovsxwd(auVar57,auVar52);
        iVar56 = auVar45._0_4_;
        auVar58._0_4_ = (uint)(iVar15 < iVar56) * iVar15 | (uint)(iVar15 >= iVar56) * iVar56;
        iVar56 = auVar45._4_4_;
        auVar58._4_4_ = (uint)(iVar16 < iVar56) * iVar16 | (uint)(iVar16 >= iVar56) * iVar56;
        iVar56 = auVar45._8_4_;
        iVar59 = auVar45._12_4_;
        auVar58._8_4_ = (uint)(iVar17 < iVar56) * iVar17 | (uint)(iVar17 >= iVar56) * iVar56;
        auVar58._12_4_ = (uint)(iVar18 < iVar59) * iVar18 | (uint)(iVar18 >= iVar59) * iVar59;
        uVar37 = ((iVar27 < (int)auVar58._0_4_) * auVar58._0_4_ |
                 (uint)(iVar27 >= (int)auVar58._0_4_) * iVar27) + iVar19 & uVar23;
        uVar49 = ((iVar28 < (int)auVar58._4_4_) * auVar58._4_4_ |
                 (uint)(iVar28 >= (int)auVar58._4_4_) * iVar28) + iVar20 & uVar24;
        uVar50 = ((iVar29 < (int)auVar58._8_4_) * auVar58._8_4_ |
                 (uint)(iVar29 >= (int)auVar58._8_4_) * iVar29) + iVar21 & uVar25;
        uVar51 = ((iVar30 < (int)auVar58._12_4_) * auVar58._12_4_ |
                 (uint)(iVar30 >= (int)auVar58._12_4_) * iVar30) + iVar22 & uVar26;
        sVar33 = (short)uVar37;
        cVar31 = (0 < sVar33) * (sVar33 < 0x100) * (char)uVar37 - (0xff < sVar33);
        sVar32 = (short)(uVar37 >> 0x10);
        cVar11 = (char)(uVar37 >> 0x10);
        sVar36 = CONCAT11((0 < sVar32) * (sVar32 < 0x100) * cVar11 - (0xff < sVar32),cVar31);
        sVar1 = (short)uVar49;
        cVar7 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar49 - (0xff < sVar1);
        sVar2 = (short)(uVar49 >> 0x10);
        cVar12 = (char)(uVar49 >> 0x10);
        uVar38 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar12 - (0xff < sVar2),
                          CONCAT12(cVar7,sVar36));
        sVar3 = (short)uVar50;
        cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar50 - (0xff < sVar3);
        sVar4 = (short)(uVar50 >> 0x10);
        cVar13 = (char)(uVar50 >> 0x10);
        uVar39 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4),
                          CONCAT14(cVar8,uVar38));
        sVar5 = (short)uVar51;
        cVar9 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar51 - (0xff < sVar5);
        sVar6 = (short)(uVar51 >> 0x10);
        cVar14 = (char)(uVar51 >> 0x10);
        uVar40 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6),
                          CONCAT16(cVar9,uVar39));
        cVar10 = (0 < sVar33) * (sVar33 < 0x100) * (char)uVar37 - (0xff < sVar33);
        auVar41._0_10_ =
             CONCAT19((0 < sVar32) * (sVar32 < 0x100) * cVar11 - (0xff < sVar32),
                      CONCAT18(cVar10,uVar40));
        cVar11 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar49 - (0xff < sVar1);
        auVar41[10] = cVar11;
        auVar41[0xb] = (0 < sVar2) * (sVar2 < 0x100) * cVar12 - (0xff < sVar2);
        cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar50 - (0xff < sVar3);
        auVar43[0xc] = cVar12;
        auVar43._0_12_ = auVar41;
        auVar43[0xd] = (0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4);
        cVar13 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar51 - (0xff < sVar5);
        auVar46[0xe] = cVar13;
        auVar46._0_14_ = auVar43;
        auVar46[0xf] = (0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6);
        sVar33 = (short)((uint)uVar38 >> 0x10);
        sVar32 = (short)((uint6)uVar39 >> 0x20);
        sVar1 = (short)((ulonglong)uVar40 >> 0x30);
        auVar47._0_4_ =
             CONCAT13((0 < sVar1) * (sVar1 < 0x100) * cVar9 - (0xff < sVar1),
                      CONCAT12((0 < sVar32) * (sVar32 < 0x100) * cVar8 - (0xff < sVar32),
                               CONCAT11((0 < sVar33) * (sVar33 < 0x100) * cVar7 - (0xff < sVar33),
                                        (0 < sVar36) * (sVar36 < 0x100) * cVar31 - (0xff < sVar36)))
                     );
        sVar2 = (short)((unkuint10)auVar41._0_10_ >> 0x40);
        auVar47[4] = (0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2);
        sVar3 = auVar41._10_2_;
        auVar47[5] = (0 < sVar3) * (sVar3 < 0x100) * cVar11 - (0xff < sVar3);
        sVar4 = auVar43._12_2_;
        auVar47[6] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
        sVar5 = auVar46._14_2_;
        auVar47[7] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
        auVar47[8] = (0 < sVar36) * (sVar36 < 0x100) * cVar31 - (0xff < sVar36);
        auVar47[9] = (0 < sVar33) * (sVar33 < 0x100) * cVar7 - (0xff < sVar33);
        auVar47[10] = (0 < sVar32) * (sVar32 < 0x100) * cVar8 - (0xff < sVar32);
        auVar47[0xb] = (0 < sVar1) * (sVar1 < 0x100) * cVar9 - (0xff < sVar1);
        auVar47[0xc] = (0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2);
        auVar47[0xd] = (0 < sVar3) * (sVar3 < 0x100) * cVar11 - (0xff < sVar3);
        auVar47[0xe] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
        auVar47[0xf] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
        *(undefined4 *)(param_1 + uVar34) = auVar47._0_4_;
        auVar45 = pmulld(auVar54,auVar60);
        auVar55._0_4_ = auVar45._0_4_ >> 8;
        auVar55._4_4_ = auVar45._4_4_ >> 8;
        auVar55._8_4_ = auVar45._8_4_ >> 8;
        auVar55._12_4_ = auVar45._12_4_ >> 8;
        auVar45 = pshufhw(auVar47,auVar55,0xd8);
        in_XMM1 = pshuflw(auVar55,auVar45,0xd8);
        auVar54._4_4_ = in_XMM1._8_4_;
        auVar54._0_4_ = in_XMM1._0_4_;
        auVar54._8_4_ = in_XMM1._4_4_;
        auVar54._12_4_ = in_XMM1._12_4_;
        auVar45 = pmovsxwd(auVar58,auVar54);
        iVar56 = auVar45._0_4_;
        auVar57._0_4_ =
             (float)((uint)(iVar15 < iVar56) * iVar15 | (uint)(iVar15 >= iVar56) * iVar56);
        iVar56 = auVar45._4_4_;
        auVar57._4_4_ = (uint)(iVar16 < iVar56) * iVar16 | (uint)(iVar16 >= iVar56) * iVar56;
        iVar56 = auVar45._8_4_;
        iVar59 = auVar45._12_4_;
        auVar57._8_4_ = (uint)(iVar17 < iVar56) * iVar17 | (uint)(iVar17 >= iVar56) * iVar56;
        auVar57._12_4_ = (uint)(iVar18 < iVar59) * iVar18 | (uint)(iVar18 >= iVar59) * iVar59;
        uVar37 = ((uint)(iVar27 < (int)auVar57._0_4_) * (int)auVar57._0_4_ |
                 (uint)(iVar27 >= (int)auVar57._0_4_) * iVar27) + iVar19 & uVar23;
        uVar49 = ((iVar28 < (int)auVar57._4_4_) * auVar57._4_4_ |
                 (uint)(iVar28 >= (int)auVar57._4_4_) * iVar28) + iVar20 & uVar24;
        uVar50 = ((iVar29 < (int)auVar57._8_4_) * auVar57._8_4_ |
                 (uint)(iVar29 >= (int)auVar57._8_4_) * iVar29) + iVar21 & uVar25;
        uVar51 = ((iVar30 < (int)auVar57._12_4_) * auVar57._12_4_ |
                 (uint)(iVar30 >= (int)auVar57._12_4_) * iVar30) + iVar22 & uVar26;
        sVar33 = (short)uVar37;
        cVar31 = (0 < sVar33) * (sVar33 < 0x100) * (char)uVar37 - (0xff < sVar33);
        sVar32 = (short)(uVar37 >> 0x10);
        cVar11 = (char)(uVar37 >> 0x10);
        sVar36 = CONCAT11((0 < sVar32) * (sVar32 < 0x100) * cVar11 - (0xff < sVar32),cVar31);
        sVar1 = (short)uVar49;
        cVar7 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar49 - (0xff < sVar1);
        sVar2 = (short)(uVar49 >> 0x10);
        cVar12 = (char)(uVar49 >> 0x10);
        uVar38 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar12 - (0xff < sVar2),
                          CONCAT12(cVar7,sVar36));
        sVar3 = (short)uVar50;
        cVar8 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar50 - (0xff < sVar3);
        sVar4 = (short)(uVar50 >> 0x10);
        cVar13 = (char)(uVar50 >> 0x10);
        uVar39 = CONCAT15((0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4),
                          CONCAT14(cVar8,uVar38));
        sVar5 = (short)uVar51;
        cVar9 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar51 - (0xff < sVar5);
        sVar6 = (short)(uVar51 >> 0x10);
        cVar14 = (char)(uVar51 >> 0x10);
        uVar40 = CONCAT17((0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6),
                          CONCAT16(cVar9,uVar39));
        cVar10 = (0 < sVar33) * (sVar33 < 0x100) * (char)uVar37 - (0xff < sVar33);
        auVar42._0_10_ =
             CONCAT19((0 < sVar32) * (sVar32 < 0x100) * cVar11 - (0xff < sVar32),
                      CONCAT18(cVar10,uVar40));
        cVar11 = (0 < sVar1) * (sVar1 < 0x100) * (char)uVar49 - (0xff < sVar1);
        auVar42[10] = cVar11;
        auVar42[0xb] = (0 < sVar2) * (sVar2 < 0x100) * cVar12 - (0xff < sVar2);
        cVar12 = (0 < sVar3) * (sVar3 < 0x100) * (char)uVar50 - (0xff < sVar3);
        auVar44[0xc] = cVar12;
        auVar44._0_12_ = auVar42;
        auVar44[0xd] = (0 < sVar4) * (sVar4 < 0x100) * cVar13 - (0xff < sVar4);
        cVar13 = (0 < sVar5) * (sVar5 < 0x100) * (char)uVar51 - (0xff < sVar5);
        auVar48[0xe] = cVar13;
        auVar48._0_14_ = auVar44;
        auVar48[0xf] = (0 < sVar6) * (sVar6 < 0x100) * cVar14 - (0xff < sVar6);
        sVar33 = (short)((uint)uVar38 >> 0x10);
        sVar32 = (short)((uint6)uVar39 >> 0x20);
        sVar1 = (short)((ulonglong)uVar40 >> 0x30);
        auVar45._0_4_ =
             CONCAT13((0 < sVar1) * (sVar1 < 0x100) * cVar9 - (0xff < sVar1),
                      CONCAT12((0 < sVar32) * (sVar32 < 0x100) * cVar8 - (0xff < sVar32),
                               CONCAT11((0 < sVar33) * (sVar33 < 0x100) * cVar7 - (0xff < sVar33),
                                        (0 < sVar36) * (sVar36 < 0x100) * cVar31 - (0xff < sVar36)))
                     );
        sVar2 = (short)((unkuint10)auVar42._0_10_ >> 0x40);
        auVar45[4] = (0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2);
        sVar3 = auVar42._10_2_;
        auVar45[5] = (0 < sVar3) * (sVar3 < 0x100) * cVar11 - (0xff < sVar3);
        sVar4 = auVar44._12_2_;
        auVar45[6] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
        sVar5 = auVar48._14_2_;
        auVar45[7] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
        auVar45[8] = (0 < sVar36) * (sVar36 < 0x100) * cVar31 - (0xff < sVar36);
        auVar45[9] = (0 < sVar33) * (sVar33 < 0x100) * cVar7 - (0xff < sVar33);
        auVar45[10] = (0 < sVar32) * (sVar32 < 0x100) * cVar8 - (0xff < sVar32);
        auVar45[0xb] = (0 < sVar1) * (sVar1 < 0x100) * cVar9 - (0xff < sVar1);
        auVar45[0xc] = (0 < sVar2) * (sVar2 < 0x100) * cVar10 - (0xff < sVar2);
        auVar45[0xd] = (0 < sVar3) * (sVar3 < 0x100) * cVar11 - (0xff < sVar3);
        auVar45[0xe] = (0 < sVar4) * (sVar4 < 0x100) * cVar12 - (0xff < sVar4);
        auVar45[0xf] = (0 < sVar5) * (sVar5 < 0x100) * cVar13 - (0xff < sVar5);
        *(undefined4 *)(param_1 + 4 + uVar34) = auVar45._0_4_;
        uVar34 = uVar34 + 8;
      } while (uVar34 < (param_3 & 0xfffffffffffffff8));
      if (param_3 <= uVar34) {
        return;
      }
    }
    do {
      sVar32 = (short)((uint)((int)*(short *)(param_2 + uVar34 * 2) * (int)sVar35) >> 8);
      sVar33 = 0x7f;
      if (sVar32 < 0x7f) {
        sVar33 = sVar32;
      }
      cVar31 = (char)sVar33;
      if (sVar33 < -0x80) {
        cVar31 = -0x80;
      }
      *(char *)(uVar34 + param_1) = cVar31 + -0x80;
      uVar34 = uVar34 + 1;
    } while (uVar34 < param_3);
  }
  return;
}


