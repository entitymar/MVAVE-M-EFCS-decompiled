// FUN_18002a8e0 @ 18002a8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002a8e0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  auVar12 = _DAT_1800322c0;
  dVar10 = _UNK_180032268;
  dVar9 = _DAT_180032260;
  auVar11 = _DAT_180032250;
  uVar15 = 0;
  dVar3 = DAT_1800320e0;
  dVar4 = DAT_180032130;
  dVar5 = DAT_180032168;
  if ((3 < param_3) &&
     ((uVar13 = (ulonglong)((int)param_3 - 1), param_2 + uVar13 * 4 < param_1 ||
      (param_1 + uVar13 * 4 < param_2)))) {
    uVar13 = uVar15;
    do {
      uVar1 = *(undefined8 *)(param_2 + uVar13 * 4);
      dVar3 = (double)(float)uVar1;
      dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
      uVar14 = (ulonglong)((int)uVar13 + 2);
      uVar15 = (ulonglong)((int)uVar13 + 4);
      auVar18._8_4_ = SUB84(dVar5,0);
      auVar18._0_8_ = dVar3;
      auVar18._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar18 = minpd(auVar11,auVar18);
      uVar1 = *(undefined8 *)(param_2 + uVar14 * 4);
      dVar4 = (double)(float)uVar1;
      dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
      lVar16 = -(ulonglong)(dVar3 < auVar12._0_8_);
      lVar17 = -(ulonglong)(dVar5 < auVar12._8_8_);
      uVar22 = (uint)lVar16;
      uVar23 = (uint)((ulonglong)lVar16 >> 0x20);
      uVar24 = (uint)lVar17;
      uVar25 = (uint)((ulonglong)lVar17 >> 0x20);
      auVar20._0_4_ = ~uVar22 & auVar18._0_4_;
      auVar20._4_4_ = ~uVar23 & auVar18._4_4_;
      auVar20._8_4_ = ~uVar24 & auVar18._8_4_;
      auVar20._12_4_ = ~uVar25 & auVar18._12_4_;
      auVar7._4_4_ = uVar23 & auVar12._4_4_;
      auVar7._0_4_ = uVar22 & auVar12._0_4_;
      auVar7._8_4_ = uVar24 & auVar12._8_4_;
      auVar7._12_4_ = uVar25 & auVar12._12_4_;
      lVar16 = -(ulonglong)(dVar4 < auVar12._0_8_);
      lVar17 = -(ulonglong)(dVar6 < auVar12._8_8_);
      uVar22 = (uint)lVar16;
      uVar23 = (uint)((ulonglong)lVar16 >> 0x20);
      uVar24 = (uint)lVar17;
      uVar25 = (uint)((ulonglong)lVar17 >> 0x20);
      *(ulonglong *)(param_1 + uVar13 * 4) =
           CONCAT44((int)(SUB168(auVar20 | auVar7,8) * dVar10),
                    (int)(SUB168(auVar20 | auVar7,0) * dVar9));
      auVar2._8_4_ = SUB84(dVar6,0);
      auVar2._0_8_ = dVar4;
      auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar18 = minpd(auVar11,auVar2);
      auVar21._0_4_ = ~uVar22 & auVar18._0_4_;
      auVar21._4_4_ = ~uVar23 & auVar18._4_4_;
      auVar21._8_4_ = ~uVar24 & auVar18._8_4_;
      auVar21._12_4_ = ~uVar25 & auVar18._12_4_;
      auVar8._4_4_ = uVar23 & auVar12._4_4_;
      auVar8._0_4_ = uVar22 & auVar12._0_4_;
      auVar8._8_4_ = uVar24 & auVar12._8_4_;
      auVar8._12_4_ = uVar25 & auVar12._12_4_;
      *(ulonglong *)(param_1 + uVar14 * 4) =
           CONCAT44((int)(SUB168(auVar21 | auVar8,8) * dVar10),
                    (int)(SUB168(auVar21 | auVar8,0) * dVar9));
      uVar13 = uVar15;
      dVar3 = DAT_1800320e0;
      dVar4 = DAT_180032130;
      dVar5 = DAT_180032168;
    } while (uVar15 < (param_3 & 0xfffffffffffffffc));
  }
  for (; dVar6 = DAT_180032168, dVar10 = DAT_180032130, dVar9 = DAT_1800320e0, uVar15 < param_3;
      uVar15 = (ulonglong)((int)uVar15 + 1)) {
    dVar19 = (double)*(float *)(param_2 + uVar15 * 4);
    if ((DAT_180032168 <= dVar19) && (DAT_180032168 = DAT_1800320e0, dVar19 <= DAT_1800320e0)) {
      DAT_180032168 = dVar19;
    }
    dVar19 = DAT_180032168 * DAT_180032130;
    DAT_1800320e0 = dVar3;
    DAT_180032130 = dVar4;
    DAT_180032168 = dVar5;
    *(int *)(param_1 + uVar15 * 4) = (int)dVar19;
    dVar3 = DAT_1800320e0;
    dVar4 = DAT_180032130;
    dVar5 = DAT_180032168;
    DAT_180032168 = dVar6;
    DAT_180032130 = dVar10;
    DAT_1800320e0 = dVar9;
  }
  DAT_1800320e0 = dVar3;
  DAT_180032130 = dVar4;
  DAT_180032168 = dVar5;
  return;
}


