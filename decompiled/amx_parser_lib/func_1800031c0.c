// FUN_1800031c0 @ 1800031c0

void FUN_1800031c0(undefined4 *param_1,longlong param_2,longlong param_3,short param_4,short param_5
                  ,short param_6,short param_7,short param_8,byte param_9)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM2 [64];
  longlong lVar13;
  longlong lVar14;
  
  if (0 < param_5) {
    uVar8 = (ulonglong)(uint)(int)param_5;
    lVar10 = (longlong)param_4;
    do {
      lVar4 = 0;
      lVar7 = 0;
      if (((0 < param_4) && (uVar9 = (uint)param_4, 3 < uVar9)) && (5 < DAT_180025008)) {
        lVar13 = 0;
        lVar14 = 0;
        lVar4 = 0;
        lVar6 = 0;
        uVar3 = uVar9 & 0x80000003;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        puVar1 = (undefined8 *)(param_2 + 8);
        do {
          auVar11 = pmovsxdq(in_XMM0,puVar1[-1]);
          auVar12 = pmovsxdq(in_ZMM2._0_16_,
                             *(undefined8 *)((param_3 - param_2) + -8 + (longlong)puVar1));
          auVar12 = vpmullq_avx512vl(auVar11,auVar12);
          in_XMM0 = pmovsxdq(auVar11,*puVar1);
          lVar13 = lVar13 + auVar12._0_8_;
          lVar14 = lVar14 + auVar12._8_8_;
          lVar7 = lVar7 + 4;
          auVar12 = pmovsxdq(auVar12,*(undefined8 *)((param_3 - param_2) + (longlong)puVar1));
          puVar1 = puVar1 + 2;
          auVar12 = vpmullq_avx512vl(in_XMM0,auVar12);
          in_ZMM2 = ZEXT1664(auVar12);
          lVar4 = lVar4 + auVar12._0_8_;
          lVar6 = lVar6 + auVar12._8_8_;
        } while (lVar7 < (int)(uVar9 - uVar3));
        auVar12._8_4_ = (int)(lVar6 + lVar14);
        auVar12._0_8_ = lVar4 + lVar13;
        auVar12._12_4_ = (int)((ulonglong)(lVar6 + lVar14) >> 0x20);
        in_XMM0 = auVar12 >> 0x40;
        lVar4 = lVar4 + lVar13 + auVar12._8_8_;
      }
      lVar6 = 0;
      lVar13 = 0;
      if (lVar7 < lVar10) {
        if (lVar10 - lVar7 < 2) {
LAB_18000330f:
          lVar4 = lVar4 + (longlong)*(int *)(param_2 + lVar7 * 4) *
                          (longlong)*(int *)(param_3 + lVar7 * 4);
        }
        else {
          lVar14 = lVar7 * 4;
          lVar5 = ((lVar10 - lVar7) - 2U >> 1) + 1;
          lVar7 = lVar7 + lVar5 * 2;
          piVar2 = (int *)(lVar14 + 4 + param_3);
          do {
            lVar6 = lVar6 + (longlong)*(int *)((param_2 - param_3) + -4 + (longlong)piVar2) *
                            (longlong)piVar2[-1];
            lVar13 = lVar13 + (longlong)*(int *)((param_2 - param_3) + -8 + (longlong)(piVar2 + 2))
                              * (longlong)*piVar2;
            lVar5 = lVar5 + -1;
            piVar2 = piVar2 + 2;
          } while (lVar5 != 0);
          if (lVar7 < lVar10) goto LAB_18000330f;
        }
        lVar4 = lVar4 + lVar13 + lVar6;
      }
      param_3 = param_3 + param_6;
      *param_1 = (int)(lVar4 >> (param_9 & 0x3f));
      param_2 = param_2 + param_7;
      param_1 = (undefined4 *)((longlong)param_1 + (longlong)param_8);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}


