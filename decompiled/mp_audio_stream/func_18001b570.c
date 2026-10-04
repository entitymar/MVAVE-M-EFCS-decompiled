// FUN_18001b570 @ 18001b570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18001b570(ulonglong *param_1,void *param_2,int *param_3,int param_4)

{
  uint uVar1;
  double _X;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  void *_Dst;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint local_184;
  longlong local_170;
  longlong local_158;
  int local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  int local_118;
  uint uStack_114;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  
  if (((param_3 != (int *)0x0) && (param_1 != (ulonglong *)0x0)) &&
     ((iVar2 = (int)*param_1, iVar2 == 5 || (iVar2 == 2)))) {
    if (((*param_3 != 0) && (*param_3 != iVar2)) ||
       ((param_3[1] != 0 && (param_3[1] != *(int *)((longlong)param_1 + 4))))) {
      return 0xfffffffd;
    }
    uVar18 = (uint)param_1[3];
    if (uVar18 < 9) {
      uVar12 = uVar18 >> 1;
      uVar18 = uVar18 & 1;
      if (param_4 == 0) {
        if (param_3[3] != uVar18) {
          return 0xfffffffd;
        }
        if (param_3[4] != uVar12) {
          return 0xfffffffd;
        }
        lVar17 = 0;
        local_158 = 0;
      }
      else {
        uVar11 = FUN_18001b470((longlong)param_1,(ulonglong *)&local_150);
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        *(void **)(param_3 + 10) = param_2;
        if ((param_2 != (void *)0x0) && (CONCAT44(uStack_14c,local_150) != 0)) {
          memset(param_2,0,CONCAT44(uStack_14c,local_150));
        }
        lVar17 = CONCAT44(uStack_144,uStack_148);
        local_158 = local_140;
        *(longlong *)(param_3 + 6) = lVar17 + (longlong)param_2;
        *(longlong *)(param_3 + 8) = local_140 + (longlong)param_2;
      }
      dVar4 = DAT_180032178;
      dVar3 = DAT_180032120;
      uVar11 = 0;
      local_184 = 0;
      if (uVar18 != 0) {
        local_170 = 0;
        uVar16 = uVar11;
        do {
          uVar15 = (uint)uVar16;
          uVar14 = param_1[1];
          uVar1 = *(uint *)((longlong)param_1 + 4);
          iVar2 = (int)*param_1;
          uVar8 = *param_1;
          dVar20 = (double)param_1[2];
          local_150 = iVar2;
          uStack_14c = uVar1;
          if (param_4 == 0) {
            piVar13 = (int *)(*(longlong *)(param_3 + 6) + local_170);
            if ((piVar13 == (int *)0x0) || ((iVar2 != 5 && (iVar2 != 2)))) {
              uVar16 = 0xfffffffe;
            }
            else if ((*piVar13 == 0) || (*piVar13 == iVar2)) {
              if ((piVar13[1] == 0) || (piVar13[1] == uVar1)) {
                *piVar13 = iVar2;
                piVar13[1] = uVar1;
                dVar20 = exp((dVar20 * dVar4) / (double)(uint)uVar14);
                if (iVar2 == 5) {
                  piVar13[2] = (int)(float)dVar20;
                  uVar16 = 0;
                  uVar15 = local_184;
                }
                else {
                  piVar13[2] = (int)(dVar20 * dVar3);
                  uVar16 = 0;
                  uVar15 = local_184;
                }
              }
              else {
                uVar16 = 0xfffffffd;
              }
            }
            else {
              uVar16 = 0xfffffffd;
            }
          }
          else {
            if (uVar1 == 0) {
              uVar16 = 0xfffffffe;
              goto LAB_18001b961;
            }
            _Dst = (void *)((longlong)param_2 +
                           lVar17 + (ulonglong)uVar18 * 0x28 +
                                    ((ulonglong)uVar1 * 4 + 7 & 0xfffffffffffffff8) * uVar16);
            pauVar10 = (undefined1 (*) [16])(*(longlong *)(param_3 + 6) + local_170);
            if (pauVar10 != (undefined1 (*) [16])0x0) {
              *pauVar10 = ZEXT816(0);
              pauVar10[1] = ZEXT816(0);
              *(undefined8 *)pauVar10[2] = 0;
              if (uVar1 != 0) {
                *(void **)(pauVar10[1] + 8) = _Dst;
                uVar16 = (uVar8 >> 0x20) * 4 + 7 & 0xfffffffffffffff8;
                if ((_Dst != (void *)0x0) && (uVar16 != 0)) {
                  memset(_Dst,0,uVar16);
                }
                *(void **)pauVar10[1] = _Dst;
                if ((iVar2 == 5) || (iVar2 == 2)) {
                  if ((*(int *)*pauVar10 == 0) || (*(int *)*pauVar10 == iVar2)) {
                    if ((*(uint *)(*pauVar10 + 4) == 0) || (*(uint *)(*pauVar10 + 4) == uVar1)) {
                      *(int *)*pauVar10 = iVar2;
                      *(uint *)(*pauVar10 + 4) = uVar1;
                      dVar20 = exp((dVar20 * dVar4) / (double)(uint)uVar14);
                      if (iVar2 == 5) {
                        *(float *)(*pauVar10 + 8) = (float)dVar20;
                        uVar16 = uVar11;
                        uVar15 = local_184;
                      }
                      else {
                        *(int *)(*pauVar10 + 8) = (int)(dVar20 * dVar3);
                        uVar16 = 0;
                        uVar15 = local_184;
                      }
                    }
                    else {
                      uVar16 = 0xfffffffd;
                      uVar15 = local_184;
                    }
                  }
                  else {
                    uVar16 = 0xfffffffd;
                    uVar15 = local_184;
                  }
                }
                else {
                  uVar16 = 0xfffffffe;
                  uVar15 = local_184;
                }
                goto LAB_18001b934;
              }
            }
            uVar16 = 0xfffffffe;
          }
LAB_18001b934:
          if ((int)uVar16 != 0) {
LAB_18001b961:
            if (uVar15 != 0) {
              uVar8 = (ulonglong)uVar15;
              do {
                lVar17 = *(longlong *)(param_3 + 6) + uVar11;
                if (((lVar17 != 0) && (*(int *)(lVar17 + 0x20) != 0)) &&
                   (*(void **)(lVar17 + 0x18) != (void *)0x0)) {
                  free(*(void **)(lVar17 + 0x18));
                }
                uVar11 = uVar11 + 0x28;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
              return uVar16;
            }
            return uVar16;
          }
          local_184 = uVar15 + 1;
          uVar16 = (ulonglong)local_184;
          local_170 = local_170 + 0x28;
        } while (local_184 < uVar18);
      }
      dVar7 = DAT_180032100;
      dVar6 = DAT_1800320f8;
      dVar5 = DAT_1800320f0;
      dVar20 = DAT_1800320e0;
      dVar4 = DAT_1800320d8;
      dVar3 = DAT_1800320d0;
      uVar16 = uVar11;
      if (uVar12 != 0) {
        do {
          uVar1 = (uint)param_1[3];
          iVar9 = (int)uVar16;
          iVar2 = iVar9;
          if (uVar18 == 0) {
            uVar1 = uVar1 * 2;
            iVar2 = iVar9 * 2;
          }
          dVar21 = sin(dVar5 - (dVar6 / (double)uVar1) * (double)(iVar2 + 1));
          uStack_148 = (uint)param_1[1];
          uVar1 = *(uint *)((longlong)param_1 + 4);
          iVar2 = (int)*param_1;
          local_108 = (double)param_1[2];
          uStack_144 = 0;
          dVar21 = dVar20 / (dVar21 + dVar21);
          if (dVar21 == 0.0) {
            dVar21 = dVar4;
          }
          dStack_110 = (double)(ulonglong)uStack_148;
          local_150 = iVar2;
          uStack_14c = uVar1;
          local_118 = iVar2;
          uStack_114 = uVar1;
          dStack_100 = dVar21;
          if (param_4 == 0) {
            piVar13 = (int *)(uVar16 * 0x40 + *(longlong *)(param_3 + 8));
            if (piVar13 == (int *)0x0) {
              uVar8 = 0xfffffffe;
            }
            else {
              _X = (local_108 * dVar7) / (double)uStack_148;
              dVar22 = sin(dVar5 - _X);
              local_e8 = sin(_X);
              local_108 = dVar20 - dVar22;
              local_f0 = dVar22 * _DAT_180032170;
              local_e8 = local_e8 / (dVar21 + dVar21);
              dStack_110 = local_108 * dVar3;
              local_f8 = local_e8 + dVar20;
              local_e8 = dVar20 - local_e8;
              local_118 = iVar2;
              uStack_114 = uVar1;
              dStack_100 = dStack_110;
              uVar8 = FUN_18001ece0(&local_118,piVar13);
              uVar8 = uVar8 & 0xffffffff;
            }
          }
          else {
            if (uVar1 == 0) {
              uVar8 = 0xfffffffe;
              goto LAB_18001bc95;
            }
            uVar8 = FUN_180025e80(&local_118,
                                  (void *)((longlong)param_2 +
                                          local_158 +
                                          ((*param_1 >> 0x20) * uVar16 + (ulonglong)uVar12 * 8) * 8)
                                  ,(int *)(uVar16 * 0x40 + *(longlong *)(param_3 + 8)));
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((int)uVar8 != 0) {
LAB_18001bc95:
            if (uVar18 != 0) {
              uVar19 = (ulonglong)uVar18;
              uVar14 = uVar11;
              do {
                lVar17 = *(longlong *)(param_3 + 6) + uVar14;
                if (((lVar17 != 0) && (*(int *)(lVar17 + 0x20) != 0)) &&
                   (*(void **)(lVar17 + 0x18) != (void *)0x0)) {
                  free(*(void **)(lVar17 + 0x18));
                }
                uVar14 = uVar14 + 0x28;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            if (iVar9 != 0) {
              do {
                lVar17 = *(longlong *)(param_3 + 8) + uVar11;
                if (((lVar17 != 0) && (*(int *)(lVar17 + 0x38) != 0)) &&
                   (*(void **)(lVar17 + 0x30) != (void *)0x0)) {
                  free(*(void **)(lVar17 + 0x30));
                }
                uVar11 = uVar11 + 0x40;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
              return uVar8;
            }
            return uVar8;
          }
          uVar16 = (ulonglong)(iVar9 + 1U);
        } while (iVar9 + 1U < uVar12);
      }
      param_3[3] = uVar18;
      param_3[4] = uVar12;
      *param_3 = (int)*param_1;
      param_3[1] = *(int *)((longlong)param_1 + 4);
      param_3[2] = (int)param_1[1];
      return 0;
    }
  }
  return 0xfffffffe;
}


