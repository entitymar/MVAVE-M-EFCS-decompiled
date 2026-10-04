// FUN_180008c80 @ 180008c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180008c80(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar14;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [16];
  undefined1 extraout_var [60];
  undefined1 extraout_var_00 [60];
  undefined1 extraout_var_01 [60];
  undefined1 extraout_var_02 [60];
  undefined1 extraout_var_03 [60];
  undefined1 extraout_var_04 [60];
  
  fVar4 = in_ZMM0._0_4_;
  auVar6._16_48_ = in_ZMM0._16_48_;
  if ((int)DAT_180026318 == 0) {
    fVar3 = ABS(fVar4);
    if ((uint)fVar3 < 0x42b00000) {
      dVar5 = DAT_180019580 * (double)fVar4;
    }
    else {
      if (0x7f7fffff < (uint)fVar3) {
        if (fVar4 == INFINITY) {
          return in_ZMM0._0_8_;
        }
        if (fVar4 != -INFINITY) {
          auVar10._0_4_ = FUN_18000d290(fVar4,(float)((uint)fVar4 | 0x400000),DAT_1800195cc);
          auVar10._4_60_ = extraout_var_01;
          return auVar10._0_8_;
        }
        return 0;
      }
      dVar5 = DAT_180019580 * (double)fVar4;
      if (DAT_180019560 <= dVar5) {
        auVar9._0_4_ = FUN_18000d290(fVar3,_DAT_180019550,DAT_1800195d4);
        auVar9._4_60_ = extraout_var_00;
        return auVar9._0_8_;
      }
      if (dVar5 < DAT_180019570) {
        auVar8._0_4_ = FUN_18000d290(fVar3,0.0,DAT_1800195d0);
        auVar8._4_60_ = extraout_var;
        return auVar8._0_8_;
      }
    }
    uVar2 = (uint)dVar5;
    dVar5 = (double)fVar4 - DAT_180019590 * (double)(int)uVar2;
    dVar14 = in_ZMM0._8_8_ - _UNK_180019598 * (double)(int)_UNK_180019588;
    auVar6._0_8_ = ((dVar5 * dVar5 * (_DAT_1800195a0 * dVar5 + DAT_1800195b0) + dVar5) *
                    *(double *)(&DAT_18001a7d0 + (ulonglong)(uVar2 & 0x3f) * 8) +
                   *(double *)(&DAT_18001a7d0 + (ulonglong)(uVar2 & 0x3f) * 8)) *
                   (double)((ulonglong)(uint)((int)(uVar2 - (uVar2 & 0x3f)) >> 6) + 0x3ff << 0x34);
    auVar6._8_8_ = ((dVar14 * dVar14 * (_UNK_1800195a8 * dVar14 + _UNK_1800195b8) + dVar14) * 0.0 +
                   0.0) * 0.0;
    auVar7._4_60_ = auVar6._4_60_;
    auVar7._0_4_ = (float)auVar6._0_8_;
    return auVar7._0_8_;
  }
  fVar3 = ABS(fVar4);
  if ((uint)fVar3 < 0x42b00000) {
    dVar5 = (double)fVar4 * DAT_180019580;
  }
  else {
    if (0x7f7fffff < (uint)fVar3) {
      if (fVar4 == INFINITY) {
        return in_ZMM0._0_8_;
      }
      if (fVar4 == -INFINITY) {
        return 0;
      }
      auVar13._0_4_ = FUN_18000d290(fVar4,(float)((uint)fVar4 | 0x400000),DAT_1800195cc);
      auVar13._4_60_ = extraout_var_04;
      return auVar13._0_8_;
    }
    dVar5 = (double)fVar4 * DAT_180019580;
    if (DAT_180019560 <= dVar5) {
      auVar12._0_4_ = FUN_18000d290(fVar3,_DAT_180019550,DAT_1800195d4);
      auVar12._4_60_ = extraout_var_03;
      return auVar12._0_8_;
    }
    if (dVar5 < DAT_180019570) {
      auVar11._0_4_ = FUN_18000d290(fVar3,0.0,DAT_1800195d0);
      auVar11._4_60_ = extraout_var_02;
      return auVar11._0_8_;
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar5;
  auVar1 = vcvtpd2dq_avx(auVar15);
  auVar15 = vcvtdq2pd_avx(auVar1);
  dVar5 = -(auVar15._0_8_ * DAT_180019590) + (double)fVar4;
  uVar2 = auVar1._0_4_ & 0x3f;
  dVar5 = (*(double *)(&DAT_18001a7d0 + (ulonglong)uVar2 * 8) *
           ((dVar5 * _DAT_1800195a0 + DAT_1800195b0) * dVar5 * dVar5 + dVar5) +
          *(double *)(&DAT_18001a7d0 + (ulonglong)uVar2 * 8)) *
          (double)((ulonglong)(uint)((int)(auVar1._0_4_ - uVar2) >> 6) + 0x3ff << 0x34);
  return CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5);
}


