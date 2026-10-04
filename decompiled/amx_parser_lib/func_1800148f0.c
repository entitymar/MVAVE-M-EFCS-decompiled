// FUN_1800148f0 @ 1800148f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1800148f0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_ZMM0 [64];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  
  dVar9 = in_ZMM0._0_8_;
  auVar10 = in_ZMM0._0_16_;
  if ((int)DAT_180026318 == 0) {
    if ((double)((ulonglong)dVar9 & (ulonglong)DAT_18001ed70) == DAT_18001ed70) {
      if (dVar9 == DAT_18001ed70) {
        return dVar9;
      }
      if (dVar9 != DAT_18001ed60) {
        return (double)((ulonglong)dVar9 | _DAT_18001ed90);
      }
    }
    else {
      dVar20 = (double)(int)(((ulonglong)dVar9 >> 0x34) - _DAT_18001eda0);
      if (0.0 < dVar9) {
        dVar13 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18001edc0);
        dVar12 = dVar9;
        if (dVar20 == DAT_18001eee0) {
          dVar20 = (double)((ulonglong)dVar13 | (ulonglong)DAT_18001ee50) - DAT_18001ee50;
          dVar12 = (double)((ulonglong)dVar20 & (ulonglong)DAT_18001edc0);
          dVar20 = (double)(int)((uint)((ulonglong)dVar20 >> 0x34) - _DAT_18001eef0);
          dVar13 = dVar12;
        }
        uVar7 = ((ulonglong)dVar12 & _DAT_18001edd0) + ((ulonglong)dVar12 & _DAT_18001ede0) * 2;
        if ((double)((ulonglong)(dVar9 - DAT_18001ee50) & _DAT_18001ef40) < DAT_18001ef00) {
          dVar9 = dVar9 - DAT_18001ee50;
          dVar20 = dVar9 / (DAT_18001ee40 + dVar9);
          dVar12 = dVar20 + dVar20;
          dVar13 = dVar12 * dVar12;
          dVar14 = dVar13 * dVar12;
          dVar16 = (double)((ulonglong)dVar9 & (ulonglong)DAT_18001ef90);
          dVar9 = (((DAT_18001ef60 * dVar13 + DAT_18001ef50) * dVar14 +
                   (DAT_18001ef80 * dVar13 + DAT_18001ef70) * dVar14 * dVar14 * dVar12) -
                  dVar9 * dVar20) + (dVar9 - dVar16);
          return dVar16 * DAT_18001ee10 + dVar9 * DAT_18001ee10 + dVar9 * DAT_18001ee00 +
                 dVar16 * DAT_18001ee00;
        }
        uVar8 = uVar7 >> 0x2c;
        dVar12 = ((double)(uVar7 | (ulonglong)DAT_18001ee60) -
                 (double)((ulonglong)dVar13 | (ulonglong)DAT_18001ee60)) *
                 *(double *)(&DAT_180020030 + uVar8 * 8);
        dVar9 = dVar12 * dVar12;
        return *(double *)(&DAT_18001f010 + uVar8 * 8) + DAT_18001ee20 * dVar20 +
               *(double *)(&DAT_18001f820 + uVar8 * 8) +
               (DAT_18001ee30 * dVar20 -
               ((DAT_18001eea0 * dVar12 + _DAT_18001ee90) * dVar9 + dVar12 +
               ((DAT_18001eed0 * dVar12 + DAT_18001eec0) * dVar12 + DAT_18001eeb0) * dVar9 * dVar9)
               * DAT_18001edf0);
      }
      if (dVar9 == 0.0) {
        dVar9 = (double)FUN_180015b30(dVar9,DAT_18001ed60,DAT_18001efa0);
        return dVar9;
      }
    }
    dVar9 = (double)FUN_180015b30(dVar9,DAT_18001ed80,DAT_18001efa4);
    return dVar9;
  }
  auVar17 = vpsrlq_avx(auVar10,0x34);
  auVar1._8_8_ = _UNK_18001eda8;
  auVar1._0_8_ = _DAT_18001eda0;
  auVar17 = vpsubq_avx(auVar17,auVar1);
  auVar17 = vcvtdq2pd_avx(auVar17);
  dVar20 = auVar17._0_8_;
  auVar17._8_8_ = _UNK_18001ed78;
  auVar17._0_8_ = DAT_18001ed70;
  auVar17 = vpand_avx(auVar10,auVar17);
  if (auVar17._0_8_ == DAT_18001ed70) {
    if (dVar9 != DAT_18001ed70) {
      if (dVar9 == DAT_18001ed60) goto LAB_180014e40;
      dVar9 = (double)FUN_180015b30(dVar9,(ulonglong)dVar9 | _DAT_18001ed90,DAT_18001efa8);
    }
    return dVar9;
  }
  if (0.0 < dVar9) {
    auVar17 = vpand_avx(auVar10,_DAT_18001edc0);
    if (dVar20 == DAT_18001eee0) {
      auVar10._8_8_ = _UNK_18001ee58;
      auVar10._0_8_ = DAT_18001ee50;
      auVar10 = vpor_avx(auVar17,auVar10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar10._0_8_ - DAT_18001ee50;
      auVar17 = vpsrlq_avx(auVar15,0x34);
      auVar10 = vpand_avx(auVar15,_DAT_18001edc0);
      auVar18._4_12_ = _UNK_18001eef4;
      auVar18._0_4_ = _DAT_18001eef0;
      auVar17 = vpsubd_avx(auVar17,auVar18);
      auVar17 = vcvtdq2pd_avx(auVar17);
      dVar20 = auVar17._0_8_;
      auVar17 = auVar10;
    }
    auVar2._8_8_ = _UNK_18001edd8;
    auVar2._0_8_ = _DAT_18001edd0;
    auVar1 = vpand_avx(auVar10,auVar2);
    auVar3._8_8_ = _UNK_18001ede8;
    auVar3._0_8_ = _DAT_18001ede0;
    auVar18 = vpand_avx(auVar10,auVar3);
    auVar18 = vpsllq_avx(auVar18,1);
    auVar1 = vpaddq_avx(auVar18,auVar1);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar9 - DAT_18001ee50;
    auVar6._8_8_ = _UNK_18001ef48;
    auVar6._0_8_ = _DAT_18001ef40;
    auVar18 = vpand_avx(auVar19,auVar6);
    if (auVar18._0_8_ < DAT_18001ef00) {
      dVar13 = auVar10._0_8_ - DAT_18001ee50;
      dVar14 = dVar13 / (DAT_18001ee40 + dVar13);
      dVar9 = dVar14 + dVar14;
      dVar20 = dVar9 * dVar9;
      dVar12 = dVar20 * dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar13;
      auVar10 = vpand_avx(auVar11,_DAT_18001ef90);
      dVar16 = auVar10._0_8_;
      dVar9 = (((dVar20 * DAT_18001ef60 + DAT_18001ef50) * dVar12 +
               (dVar20 * DAT_18001ef80 + DAT_18001ef70) * dVar12 * dVar12 * dVar9) - dVar13 * dVar14
              ) + (dVar13 - dVar16);
      return dVar16 * DAT_18001ee10 + dVar9 * DAT_18001ee10 + dVar9 * DAT_18001ee00 +
             dVar16 * DAT_18001ee00;
    }
    uVar7 = auVar1._0_8_ >> 0x2c;
    auVar4._8_8_ = _UNK_18001ee68;
    auVar4._0_8_ = DAT_18001ee60;
    auVar10 = vpor_avx(auVar17,auVar4);
    auVar5._8_8_ = _UNK_18001ee68;
    auVar5._0_8_ = DAT_18001ee60;
    auVar17 = vpor_avx(auVar1,auVar5);
    dVar9 = (auVar17._0_8_ - auVar10._0_8_) * *(double *)(&DAT_180020030 + uVar7 * 8);
    dVar12 = dVar9 * dVar9;
    return dVar20 * DAT_18001ee20 + *(double *)(&DAT_18001f010 + uVar7 * 8) +
           *(double *)(&DAT_18001f820 + uVar7 * 8) +
           (dVar20 * DAT_18001ee30 -
           ((dVar9 * (dVar9 * DAT_18001eed0 + DAT_18001eec0) + DAT_18001eeb0) * dVar12 * dVar12 +
           (dVar9 * DAT_18001eea0 + DAT_18001ee60) * dVar12 + dVar9) * DAT_18001edf0);
  }
  if (dVar9 == 0.0) {
    dVar9 = (double)FUN_180015b30(dVar9,DAT_18001ed60,DAT_18001efa0);
    return dVar9;
  }
LAB_180014e40:
  dVar9 = (double)FUN_180015b30(dVar9,DAT_18001ed80,DAT_18001efa4);
  return dVar9;
}


