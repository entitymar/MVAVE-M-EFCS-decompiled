// FUN_18001af30 @ 18001af30

undefined8
FUN_18001af30(longlong param_1,longlong param_2,ulonglong *param_3,short *param_4,ulonglong *param_5
             )

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
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  short *psVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong local_res10;
  short *local_res20;
  uint local_98;
  ulonglong local_88;
  ulonglong local_80;
  int local_70 [6];
  ulonglong local_58;
  
  uVar7 = *param_3;
  uVar18 = 0;
  local_80 = 0;
  local_88 = 0;
  uVar12 = *param_5;
  uVar19 = uVar18;
  local_res10 = param_2;
  local_res20 = param_4;
  local_58 = uVar12;
  if (uVar12 != 0) {
    do {
      uVar15 = 0;
      iVar2 = *(int *)(param_1 + 0x28);
      while (iVar2 != 0) {
        uVar19 = local_88;
        if (uVar7 <= uVar18) goto LAB_18001b2b0;
        if (param_2 == 0) {
          param_2 = 0;
          uVar19 = uVar15;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar13 = (int)uVar19 + 1;
              lVar20 = uVar19 * 2;
              *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x30)) =
                   *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x38));
              *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x38)) = 0;
              uVar19 = (ulonglong)uVar13;
            } while (uVar13 < *(uint *)(param_1 + 4));
          }
        }
        else {
          uVar13 = 0;
          uVar19 = uVar15;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              uVar16 = (int)uVar19 + 1;
              lVar20 = uVar19 * 2;
              *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x30)) =
                   *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x38));
              *(undefined2 *)(lVar20 + *(longlong *)(param_1 + 0x38)) =
                   *(undefined2 *)(lVar20 + param_2);
              uVar13 = *(uint *)(param_1 + 4);
              uVar19 = (ulonglong)uVar16;
            } while (uVar16 < uVar13);
          }
          param_2 = param_2 + (ulonglong)uVar13 * 2;
          local_res10 = param_2;
        }
        uVar18 = uVar18 + 1;
        piVar1 = (int *)(param_1 + 0x28);
        *piVar1 = *piVar1 + -1;
        local_80 = uVar18;
        iVar2 = *piVar1;
      }
      if (param_4 != (short *)0x0) {
        FUN_180019cd0(param_1,(longlong)param_4);
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
          local_70[0] = 0;
          local_70[1] = 1;
          local_70[2] = 2;
          local_70[3] = 3;
          local_70[4] = 4;
          local_70[5] = 4;
          memmove(param_4,param_4,
                  (ulonglong)(uint)(local_70[*(int *)(param_1 + 0x40)] * *(int *)(param_1 + 0x44)));
          uVar12 = uVar15;
          if (*(int *)(param_1 + 0x4c) != 0) {
            do {
              lVar21 = *(longlong *)(param_1 + 0x58);
              iVar2 = *(int *)(lVar21 + 8 + uVar12 * 0x28);
              lVar20 = lVar21 + uVar12 * 0x28;
              uVar13 = *(uint *)(lVar21 + 4 + uVar12 * 0x28);
              if (uVar13 != 0) {
                uVar19 = (ulonglong)uVar13;
                uVar18 = uVar15;
                psVar14 = param_4;
                do {
                  iVar10 = iVar2 * *(int *)(uVar18 + *(longlong *)(lVar20 + 0x10)) +
                           (int)*psVar14 * (0x4000 - iVar2) >> 0xe;
                  *psVar14 = (short)iVar10;
                  *(int *)(uVar18 + *(longlong *)(lVar20 + 0x10)) = iVar10;
                  uVar19 = uVar19 - 1;
                  uVar18 = uVar18 + 4;
                  psVar14 = psVar14 + 1;
                } while (uVar19 != 0);
              }
              uVar13 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar13;
            } while (uVar13 < *(uint *)(param_1 + 0x4c));
          }
          local_98 = 0;
          if (*(int *)(param_1 + 0x50) != 0) {
            do {
              lVar20 = uVar15 * 0x40 + *(longlong *)(param_1 + 0x60);
              iVar2 = *(int *)(lVar20 + 0x14);
              iVar10 = *(int *)(lVar20 + 8);
              iVar3 = *(int *)(lVar20 + 0xc);
              iVar4 = *(int *)(lVar20 + 0x10);
              iVar5 = *(int *)(lVar20 + 0x18);
              uVar13 = (uint)uVar15;
              if (*(uint *)(lVar20 + 4) != 0) {
                uVar12 = (ulonglong)*(uint *)(lVar20 + 4);
                psVar14 = param_4;
                lVar21 = 0;
                do {
                  iVar17 = (int)*psVar14;
                  iVar11 = *(int *)(lVar21 + *(longlong *)(lVar20 + 0x20)) + iVar17 * iVar10 >> 0xe;
                  iVar6 = *(int *)(lVar21 + *(longlong *)(lVar20 + 0x28));
                  iVar9 = 0x7fff;
                  if (iVar11 < 0x7fff) {
                    iVar9 = iVar11;
                  }
                  sVar8 = (short)iVar9;
                  if (iVar9 < -0x8000) {
                    sVar8 = -0x8000;
                  }
                  *psVar14 = sVar8;
                  *(int *)(lVar21 + *(longlong *)(lVar20 + 0x20)) =
                       (iVar6 - iVar11 * iVar2) + iVar17 * iVar3;
                  *(int *)(lVar21 + *(longlong *)(lVar20 + 0x28)) = iVar17 * iVar4 - iVar11 * iVar5;
                  uVar12 = uVar12 - 1;
                  param_4 = local_res20;
                  psVar14 = psVar14 + 1;
                  lVar21 = lVar21 + 4;
                  uVar13 = local_98;
                } while (uVar12 != 0);
              }
              local_98 = uVar13 + 1;
              uVar15 = (ulonglong)local_98;
              param_2 = local_res10;
            } while (local_98 < *(uint *)(param_1 + 0x50));
          }
        }
        param_4 = param_4 + *(uint *)(param_1 + 4);
        uVar18 = local_80;
        uVar12 = local_58;
        local_res20 = param_4;
      }
      uVar19 = local_88 + 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24);
      if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x2c)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_88 = uVar19;
    } while (uVar19 < uVar12);
  }
LAB_18001b2b0:
  *param_3 = uVar18;
  *param_5 = uVar19;
  return 0;
}


