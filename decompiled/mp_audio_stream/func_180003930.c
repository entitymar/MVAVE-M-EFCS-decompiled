// FUN_180003930 @ 180003930

undefined8 FUN_180003930(int *param_1,void *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  void *_Dst;
  ulonglong uVar15;
  int local_48 [8];
  
  local_48[0] = 0;
  local_48[1] = 1;
  local_48[2] = 2;
  local_48[3] = 3;
  local_48[4] = 4;
  local_48[5] = 4;
  _Dst = param_2;
  for (uVar15 = (uint)(local_48[*param_1] * param_1[2]) * param_4; uVar15 != 0;
      uVar15 = uVar15 - uVar10) {
    uVar10 = uVar15;
    if (0xffffffff < uVar15) {
      uVar10 = 0xffffffff;
    }
    if ((_Dst != (void *)0x0) && (uVar10 != 0)) {
      memset(_Dst,0,uVar10);
    }
    _Dst = (void *)((longlong)_Dst + uVar10);
  }
  puVar14 = (uint *)(param_1 + 2);
  iVar8 = *param_1;
  if (iVar8 == 1) {
    uVar13 = 0;
    if (param_4 != 0) {
      do {
        uVar15 = 0;
        if (param_1[1] != 0) {
          uVar1 = *puVar14;
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                uVar11 = (ulonglong)((int)uVar10 + uVar1 * uVar13);
                iVar8 = (uint)*(byte *)(uVar11 + (longlong)param_2) +
                        ((int)((*(byte *)((ulonglong)(uVar13 * param_1[1] + (int)uVar15) + param_3)
                               - 0x80) *
                              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + uVar15 * 8) +
                                      uVar10 * 4)) >> 0xc) + -0x80;
                if (iVar8 < 0x7f) {
                  if (iVar8 < -0x80) {
                    iVar8 = -0x80;
                  }
                  sVar7 = (short)iVar8;
                }
                else {
                  sVar7 = 0x7f;
                }
                sVar4 = 0x7f;
                if (sVar7 < 0x7f) {
                  sVar4 = sVar7;
                }
                cVar3 = (char)sVar4;
                if (sVar4 < -0x80) {
                  cVar3 = -0x80;
                }
                uVar12 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar12;
                *(char *)(uVar11 + (longlong)param_2) = cVar3 + -0x80;
                uVar1 = *puVar14;
              } while (uVar12 < uVar1);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < (uint)param_1[1]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
  }
  else if (iVar8 == 2) {
    uVar13 = 0;
    if (param_4 != 0) {
      do {
        uVar15 = 0;
        if (param_1[1] != 0) {
          uVar1 = *puVar14;
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                uVar11 = (ulonglong)((int)uVar10 + uVar1 * uVar13);
                iVar5 = ((int)*(short *)(param_3 +
                                        (ulonglong)(uVar13 * param_1[1] + (int)uVar15) * 2) *
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + uVar15 * 8) +
                                 uVar10 * 4) >> 0xc) +
                        (int)*(short *)((longlong)param_2 + uVar11 * 2);
                iVar8 = 0x7fff;
                if (iVar5 < 0x7fff) {
                  iVar8 = iVar5;
                }
                if (iVar8 < -0x8000) {
                  iVar8 = -0x8000;
                }
                uVar12 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar12;
                *(short *)((longlong)param_2 + uVar11 * 2) = (short)iVar8;
                uVar1 = *puVar14;
              } while (uVar12 < uVar1);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < (uint)param_1[1]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
  }
  else if (iVar8 == 3) {
    uVar13 = 0;
    if (param_4 != 0) {
      do {
        uVar15 = 0;
        if (param_1[1] != 0) {
          uVar1 = *puVar14;
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                uVar11 = (ulonglong)((uVar1 * uVar13 + (int)uVar10) * 3);
                uVar1 = (uVar13 * param_1[1] + (int)uVar15) * 3;
                lVar9 = ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + uVar15 * 8) +
                                 uVar10 * 4) *
                         ((longlong)
                          ((ulonglong)
                           CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar1 + 2 + param_3),
                                             *(undefined1 *)((ulonglong)uVar1 + 1 + param_3)),
                                    *(undefined1 *)((ulonglong)uVar1 + param_3)) << 0x28) >> 0x28)
                        >> 0xc) + ((longlong)
                                   ((ulonglong)
                                    CONCAT21(CONCAT11(*(undefined1 *)
                                                       (uVar11 + 2 + (longlong)param_2),
                                                      *(undefined1 *)
                                                       (uVar11 + 1 + (longlong)param_2)),
                                             *(undefined1 *)(uVar11 + (longlong)param_2)) << 0x28)
                                  >> 0x28);
                if (lVar9 < 0x7fffff) {
                  if (lVar9 < -0x800000) {
                    lVar9 = -0x800000;
                  }
                  uVar2 = (undefined4)lVar9;
                }
                else {
                  uVar2 = 0x7fffff;
                }
                *(char *)(uVar11 + (longlong)param_2) = (char)uVar2;
                uVar12 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar12;
                *(char *)(uVar11 + 1 + (longlong)param_2) = (char)((uint)uVar2 >> 8);
                *(char *)(uVar11 + 2 + (longlong)param_2) = (char)((uint)uVar2 >> 0x10);
                uVar1 = *puVar14;
              } while (uVar12 < uVar1);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < (uint)param_1[1]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
  }
  else if (iVar8 == 4) {
    uVar13 = 0;
    if (param_4 != 0) {
      do {
        uVar15 = 0;
        if (param_1[1] != 0) {
          uVar1 = *puVar14;
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                uVar11 = (ulonglong)((int)uVar10 + uVar1 * uVar13);
                lVar6 = ((longlong)
                         *(int *)(param_3 + (ulonglong)(uVar13 * param_1[1] + (int)uVar15) * 4) *
                         (longlong)
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + uVar15 * 8) +
                                 uVar10 * 4) >> 0xc) +
                        (longlong)*(int *)((longlong)param_2 + uVar11 * 4);
                lVar9 = 0x7fffffff;
                if (lVar6 < 0x7fffffff) {
                  lVar9 = lVar6;
                }
                uVar2 = (undefined4)lVar9;
                if (lVar9 < -0x80000000) {
                  uVar2 = 0x80000000;
                }
                uVar12 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar12;
                *(undefined4 *)((longlong)param_2 + uVar11 * 4) = uVar2;
                uVar1 = *puVar14;
              } while (uVar12 < uVar1);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < (uint)param_1[1]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
  }
  else {
    if (iVar8 != 5) {
      return 0xfffffffd;
    }
    uVar13 = 0;
    if (param_4 != 0) {
      do {
        uVar15 = 0;
        if (param_1[1] != 0) {
          uVar1 = param_1[2];
          do {
            uVar10 = 0;
            if (uVar1 != 0) {
              do {
                uVar11 = (ulonglong)((int)uVar10 + uVar1 * uVar13);
                lVar9 = uVar10 * 4;
                uVar12 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar12;
                *(float *)((longlong)param_2 + uVar11 * 4) =
                     *(float *)(*(longlong *)(*(longlong *)(param_1 + 0xc) + uVar15 * 8) + lVar9) *
                     *(float *)(param_3 + (ulonglong)(uVar13 * param_1[1] + (int)uVar15) * 4) +
                     *(float *)((longlong)param_2 + uVar11 * 4);
                uVar1 = param_1[2];
              } while (uVar12 < uVar1);
            }
            uVar12 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar12;
          } while (uVar12 < (uint)param_1[1]);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_4);
    }
  }
  return 0;
}


