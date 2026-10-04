// FUN_180008b10 @ 180008b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180008b10(undefined8 param_1)

{
  float fVar1;
  double in_XMM0_Qb;
  double dVar8;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar9;
  uint uVar10;
  float fVar2;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  
  fVar2 = (float)param_1;
  fVar1 = ABS(fVar2);
  if ((uint)fVar1 < 0x42b00000) {
    dVar9 = DAT_180019580 * (double)fVar2;
  }
  else {
    if (0x7f7fffff < (uint)fVar1) {
      if (fVar2 == INFINITY) {
        return param_1;
      }
      if (fVar2 == -INFINITY) {
        return 0;
      }
      auVar7._0_4_ = FUN_18000d290(fVar2,(float)((uint)fVar2 | 0x400000),DAT_1800195cc);
      auVar7._4_12_ = extraout_var_01;
      return auVar7._0_8_;
    }
    dVar9 = DAT_180019580 * (double)fVar2;
    if (DAT_180019560 <= dVar9) {
      auVar6._0_4_ = FUN_18000d290(fVar1,_DAT_180019550,DAT_1800195d4);
      auVar6._4_12_ = extraout_var_00;
      return auVar6._0_8_;
    }
    if (dVar9 < DAT_180019570) {
      auVar5._0_4_ = FUN_18000d290(fVar1,0.0,DAT_1800195d0);
      auVar5._4_12_ = extraout_var;
      return auVar5._0_8_;
    }
  }
  uVar10 = (uint)dVar9;
  dVar9 = (double)fVar2 - DAT_180019590 * (double)(int)uVar10;
  dVar8 = in_XMM0_Qb - _UNK_180019598 * (double)(int)_UNK_180019588;
  auVar3._0_8_ = ((dVar9 * dVar9 * (_DAT_1800195a0 * dVar9 + DAT_1800195b0) + dVar9) *
                  *(double *)(&DAT_18001a7d0 + (ulonglong)(uVar10 & 0x3f) * 8) +
                 *(double *)(&DAT_18001a7d0 + (ulonglong)(uVar10 & 0x3f) * 8)) *
                 (double)((ulonglong)(uint)((int)(uVar10 - (uVar10 & 0x3f)) >> 6) + 0x3ff << 0x34);
  auVar3._8_8_ = ((dVar8 * dVar8 * (_UNK_1800195a8 * dVar8 + _UNK_1800195b8) + dVar8) * 0.0 + 0.0) *
                 0.0;
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = (float)auVar3._0_8_;
  return auVar4._0_8_;
}


