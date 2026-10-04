// FUN_18002bbf0 @ 18002bbf0

void FUN_18002bbf0(ulonglong param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_4 != 0) {
    uVar6 = 0;
    if (param_3 == 0) {
      return;
    }
    if (param_4 == 2) {
      do {
        iVar7 = DAT_18003604c * 0xbc8f;
        iVar2 = *(int *)(param_2 + uVar6 * 4);
        uVar8 = iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) *
                        -0x7fffffff;
        iVar7 = uVar8 * 0xbc8f;
        DAT_18003604c =
             iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) * -0x7fffffff;
        iVar7 = uVar8 / 0x1fffd + ((DAT_18003604c >> 0x11) - 0x8000);
        if ((longlong)iVar7 + (longlong)iVar2 < 0x80000000) {
          uVar9 = (undefined2)((uint)(iVar2 + iVar7) >> 0x10);
        }
        else {
          uVar9 = 0x7fff;
        }
        *(undefined2 *)(param_1 + uVar6 * 2) = uVar9;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_3);
      return;
    }
    do {
      iVar2 = *(int *)(param_2 + uVar6 * 4);
      iVar7 = 0;
      if (param_4 == 1) {
        iVar7 = DAT_18003604c * 0xbc8f;
        DAT_18003604c =
             iVar7 + ((int)((longlong)iVar7 * 0x40000001 >> 0x3d) - (iVar7 >> 0x1f)) * -0x7fffffff;
        iVar7 = (DAT_18003604c >> 0x10) - 0x8000;
      }
      if ((longlong)iVar7 + (longlong)iVar2 < 0x80000000) {
        uVar9 = (undefined2)((uint)(iVar2 + iVar7) >> 0x10);
      }
      else {
        uVar9 = 0x7fff;
      }
      *(undefined2 *)(param_1 + uVar6 * 2) = uVar9;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
    return;
  }
  uVar6 = 0;
  if (param_3 == 0) {
    return;
  }
  if ((param_3 < 2) ||
     ((param_1 <= param_2 + (param_3 - 1) * 4 && (param_2 <= param_1 + (param_3 - 1) * 2))))
  goto LAB_18002bd42;
  if (param_3 < 0x10) {
LAB_18002bd03:
    do {
      uVar1 = *(undefined8 *)(param_2 + uVar6 * 4);
      auVar12._0_4_ = (int)uVar1 >> 0x10;
      auVar12._4_4_ = (int)((longlong)uVar1 >> 0x30);
      auVar12._8_8_ = 0;
      auVar10 = pshufhw(auVar12,auVar12,0xd8);
      in_XMM1 = pshuflw(in_XMM1,auVar10,0xd8);
      *(int *)(param_1 + uVar6 * 2) = in_XMM1._0_4_;
      uVar6 = uVar6 + 2;
    } while (uVar6 < (param_3 & 0xfffffffffffffffe));
  }
  else {
    uVar5 = (ulonglong)((uint)param_3 & 0xf);
    puVar3 = (undefined8 *)(param_1 + 0x10);
    piVar4 = (int *)(param_2 + 0x20);
    do {
      uVar6 = uVar6 + 0x10;
      auVar10._0_4_ = piVar4[-8] >> 0x10;
      auVar10._4_4_ = piVar4[-7] >> 0x10;
      auVar10._8_4_ = piVar4[-6] >> 0x10;
      auVar10._12_4_ = piVar4[-5] >> 0x10;
      auVar10 = pshufhw(auVar10,auVar10,0xd8);
      auVar13 = pshuflw(in_XMM1,auVar10,0xd8);
      puVar3[-2] = CONCAT44(auVar13._8_4_,auVar13._0_4_);
      auVar14._0_4_ = piVar4[-4] >> 0x10;
      auVar14._4_4_ = piVar4[-3] >> 0x10;
      auVar14._8_4_ = piVar4[-2] >> 0x10;
      auVar14._12_4_ = piVar4[-1] >> 0x10;
      auVar10 = pshufhw(auVar14,auVar14,0xd8);
      auVar14 = pshuflw(auVar13,auVar10,0xd8);
      puVar3[-1] = CONCAT44(auVar14._8_4_,auVar14._0_4_);
      auVar13._0_4_ = *piVar4 >> 0x10;
      auVar13._4_4_ = piVar4[1] >> 0x10;
      auVar13._8_4_ = piVar4[2] >> 0x10;
      auVar13._12_4_ = piVar4[3] >> 0x10;
      auVar10 = pshufhw(auVar13,auVar13,0xd8);
      auVar14 = pshuflw(auVar14,auVar10,0xd8);
      *puVar3 = CONCAT44(auVar14._8_4_,auVar14._0_4_);
      auVar11._0_4_ = piVar4[4] >> 0x10;
      auVar11._4_4_ = piVar4[5] >> 0x10;
      auVar11._8_4_ = piVar4[6] >> 0x10;
      auVar11._12_4_ = piVar4[7] >> 0x10;
      auVar10 = pshufhw(auVar11,auVar11,0xd8);
      in_XMM1 = pshuflw(auVar14,auVar10,0xd8);
      puVar3[1] = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
      puVar3 = puVar3 + 4;
      piVar4 = piVar4 + 0x10;
    } while (uVar6 < param_3 - uVar5);
    if (1 < uVar5) goto LAB_18002bd03;
  }
  if (param_3 <= uVar6) {
    return;
  }
LAB_18002bd42:
  do {
    *(undefined2 *)(param_1 + uVar6 * 2) = *(undefined2 *)(param_2 + 2 + uVar6 * 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < param_3);
  return;
}


