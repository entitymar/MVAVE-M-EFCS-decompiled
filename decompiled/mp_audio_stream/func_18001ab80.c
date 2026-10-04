// FUN_18001ab80 @ 18001ab80

undefined8
FUN_18001ab80(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,
             ulonglong *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  short *_Dst;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong local_res10;
  longlong local_res20;
  uint local_98;
  ulonglong local_90;
  ulonglong local_88;
  int local_78 [6];
  short *local_60;
  ulonglong local_58;
  
  uVar7 = *param_3;
  uVar11 = 0;
  local_88 = 0;
  local_90 = 0;
  uVar14 = *param_5;
  local_58 = uVar14;
  uVar16 = uVar11;
  local_res10 = param_2;
  local_res20 = param_4;
  if (uVar14 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      lVar20 = local_res10;
      uVar11 = local_90;
      while (iVar2 != 0) {
        uVar14 = 0;
        uVar16 = local_88;
        if (uVar7 <= uVar11) goto LAB_18001af0f;
        if (lVar20 == 0) {
          lVar20 = 0;
          uVar16 = uVar14;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar15 = (int)uVar16 + 1;
              lVar22 = uVar16 * 2;
              *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x30)) =
                   *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x38));
              *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x38)) = 0;
              uVar16 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar15 = 0;
          uVar16 = uVar14;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar17 = (int)uVar16 + 1;
              lVar22 = uVar16 * 2;
              *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x30)) =
                   *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x38));
              *(undefined2 *)(lVar22 + *(longlong *)(param_1 + 0x38)) =
                   *(undefined2 *)(lVar22 + lVar20);
              uVar15 = *(uint *)(param_1 + 4);
              uVar16 = (ulonglong)uVar17;
            } while (uVar17 < uVar15);
          }
          lVar20 = lVar20 + (ulonglong)uVar15 * 2;
          local_res10 = lVar20;
        }
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          _Dst = *(short **)(param_1 + 0x38);
          local_78[0] = 0;
          local_78[1] = 1;
          local_78[2] = 2;
          local_78[3] = 3;
          local_78[4] = 4;
          local_78[5] = 4;
          local_60 = _Dst;
          memmove(_Dst,_Dst,
                  (ulonglong)(uint)(local_78[*(int *)(param_1 + 0x40)] * *(int *)(param_1 + 0x44)));
          uVar16 = uVar14;
          if (*(int *)(param_1 + 0x4c) != 0) {
            do {
              lVar22 = *(longlong *)(param_1 + 0x58);
              iVar2 = *(int *)(lVar22 + 8 + uVar16 * 0x28);
              lVar20 = lVar22 + uVar16 * 0x28;
              uVar15 = *(uint *)(lVar22 + 4 + uVar16 * 0x28);
              if (uVar15 != 0) {
                uVar21 = (ulonglong)uVar15;
                psVar10 = _Dst;
                uVar18 = uVar14;
                do {
                  iVar12 = iVar2 * *(int *)(uVar18 + *(longlong *)(lVar20 + 0x10)) +
                           (int)*psVar10 * (0x4000 - iVar2) >> 0xe;
                  *psVar10 = (short)iVar12;
                  *(int *)(uVar18 + *(longlong *)(lVar20 + 0x10)) = iVar12;
                  uVar21 = uVar21 - 1;
                  psVar10 = psVar10 + 1;
                  uVar18 = uVar18 + 4;
                } while (uVar21 != 0);
              }
              uVar15 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar15;
            } while (uVar15 < *(uint *)(param_1 + 0x4c));
          }
          local_98 = 0;
          lVar20 = local_res10;
          if (*(int *)(param_1 + 0x50) != 0) {
            do {
              lVar22 = uVar14 * 0x40 + *(longlong *)(param_1 + 0x60);
              iVar2 = *(int *)(lVar22 + 8);
              iVar12 = *(int *)(lVar22 + 0xc);
              iVar3 = *(int *)(lVar22 + 0x10);
              iVar4 = *(int *)(lVar22 + 0x14);
              iVar5 = *(int *)(lVar22 + 0x18);
              uVar15 = (uint)uVar14;
              if (*(uint *)(lVar22 + 4) != 0) {
                uVar14 = (ulonglong)*(uint *)(lVar22 + 4);
                psVar10 = _Dst;
                lVar23 = 0;
                do {
                  iVar19 = (int)*psVar10;
                  iVar13 = *(int *)(lVar23 + *(longlong *)(lVar22 + 0x20)) + iVar19 * iVar2 >> 0xe;
                  iVar6 = *(int *)(lVar23 + *(longlong *)(lVar22 + 0x28));
                  iVar9 = 0x7fff;
                  if (iVar13 < 0x7fff) {
                    iVar9 = iVar13;
                  }
                  sVar8 = (short)iVar9;
                  if (iVar9 < -0x8000) {
                    sVar8 = -0x8000;
                  }
                  *psVar10 = sVar8;
                  *(int *)(lVar23 + *(longlong *)(lVar22 + 0x20)) =
                       (iVar6 - iVar13 * iVar4) + iVar19 * iVar12;
                  *(int *)(lVar23 + *(longlong *)(lVar22 + 0x28)) = iVar19 * iVar3 - iVar13 * iVar5;
                  uVar14 = uVar14 - 1;
                  _Dst = local_60;
                  psVar10 = psVar10 + 1;
                  lVar23 = lVar23 + 4;
                  uVar15 = local_98;
                } while (uVar14 != 0);
              }
              local_98 = uVar15 + 1;
              uVar14 = (ulonglong)local_98;
            } while (local_98 < *(uint *)(param_1 + 0x50));
          }
        }
        uVar11 = uVar11 + 1;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        uVar14 = local_58;
        param_4 = local_res20;
        iVar2 = *piVar1;
      }
      if (param_4 != 0) {
        FUN_180019cd0(param_1,param_4);
        param_4 = param_4 + (ulonglong)*(uint *)(param_1 + 4) * 2;
        local_res20 = param_4;
      }
      uVar16 = local_88 + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x2c)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_90 = uVar11;
      local_88 = uVar16;
    } while (uVar16 < uVar14);
  }
LAB_18001af0f:
  *param_3 = uVar11;
  *param_5 = uVar16;
  return 0;
}


