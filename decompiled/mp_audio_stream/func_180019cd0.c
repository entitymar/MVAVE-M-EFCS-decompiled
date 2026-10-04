// FUN_180019cd0 @ 180019cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019cd0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = (uint)(*(int *)(param_1 + 0x2c) << 0xc) / *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  auVar13._4_4_ = uVar4;
  auVar13._0_4_ = uVar4;
  auVar13._8_4_ = uVar4;
  auVar13._12_4_ = uVar4;
  if (7 < uVar1) {
    if (DAT_180036c28 < 2) goto LAB_180019da7;
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x30);
    auVar14._0_4_ = _DAT_1800321e0 - uVar4;
    auVar14._4_4_ = _UNK_1800321e4 - uVar4;
    auVar14._8_4_ = _UNK_1800321e8 - uVar4;
    auVar14._12_4_ = _UNK_1800321ec - uVar4;
    do {
      auVar10 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar3 + uVar7 * 2));
      auVar9 = pmovsxwd(in_XMM1,*(undefined8 *)(lVar2 + uVar7 * 2));
      auVar11 = pmulld(auVar10,auVar14);
      auVar10 = pmulld(auVar9,auVar13);
      uVar8 = (ulonglong)((int)uVar7 + 4);
      auVar9._0_4_ = auVar11._0_4_ + auVar10._0_4_ >> 0xc;
      auVar9._4_4_ = auVar11._4_4_ + auVar10._4_4_ >> 0xc;
      auVar9._8_4_ = auVar11._8_4_ + auVar10._8_4_ >> 0xc;
      auVar9._12_4_ = auVar11._12_4_ + auVar10._12_4_ >> 0xc;
      auVar9 = pshufhw(in_XMM0,auVar9,0xd8);
      auVar10 = pshuflw(auVar10,auVar9,0xd8);
      auVar11._0_8_ = CONCAT44(auVar10._8_4_,auVar10._0_4_);
      auVar11._8_4_ = auVar10._4_4_;
      auVar11._12_4_ = auVar10._12_4_;
      auVar10 = pmovsxwd(auVar10,*(undefined8 *)(lVar2 + uVar8 * 2));
      *(undefined8 *)(param_2 + uVar7 * 2) = auVar11._0_8_;
      uVar6 = (int)uVar7 + 8;
      uVar7 = (ulonglong)uVar6;
      auVar11 = pmovsxwd(auVar11,*(undefined8 *)(lVar3 + uVar8 * 2));
      auVar11 = pmulld(auVar11,auVar14);
      auVar10 = pmulld(auVar10,auVar13);
      auVar12._0_4_ = auVar11._0_4_ + auVar10._0_4_ >> 0xc;
      auVar12._4_4_ = auVar11._4_4_ + auVar10._4_4_ >> 0xc;
      auVar12._8_4_ = auVar11._8_4_ + auVar10._8_4_ >> 0xc;
      auVar12._12_4_ = auVar11._12_4_ + auVar10._12_4_ >> 0xc;
      in_XMM0 = pshufhw(auVar9,auVar12,0xd8);
      in_XMM1 = pshuflw(auVar10,in_XMM0,0xd8);
      in_XMM2._0_8_ = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
      in_XMM2._8_4_ = in_XMM1._4_4_;
      in_XMM2._12_4_ = in_XMM1._12_4_;
      *(undefined8 *)(param_2 + uVar8 * 2) = in_XMM2._0_8_;
    } while (uVar6 < (uVar1 & 0xfffffff8));
  }
  if (uVar1 <= (uint)uVar7) {
    return;
  }
LAB_180019da7:
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar8 = (ulonglong)(uVar1 - (int)uVar7);
  lVar5 = uVar7 * 2;
  do {
    *(short *)(lVar5 + param_2) =
         (short)((int)((int)*(short *)(lVar5 + lVar3) * (0x1000 - uVar4) +
                      (int)*(short *)(lVar5 + lVar2) * uVar4) >> 0xc);
    uVar8 = uVar8 - 1;
    lVar5 = lVar5 + 2;
  } while (uVar8 != 0);
  return;
}


