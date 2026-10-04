// FUN_180026dd0 @ 180026dd0

undefined8 FUN_180026dd0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  longlong lVar16;
  float *pfVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  float fVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong local_res18;
  ulonglong local_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  ulonglong local_a0;
  float local_98;
  float local_90 [6];
  longlong local_78;
  ulonglong uVar17;
  
  uVar12 = 0;
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  fVar21 = DAT_18003214c;
  dVar6 = DAT_180032130;
  dVar26 = DAT_180032110;
  dVar25 = DAT_180032108;
  dVar3 = DAT_1800320e8;
  if ((param_3 == 0) || (param_1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 != 0) {
    iVar9 = *(int *)(param_1 + 0x50);
    uVar13 = 0;
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 0x48);
      uVar4 = *(uint *)(param_1 + 0x4c);
      uVar17 = (ulonglong)uVar4;
      iVar11 = *(int *)(param_1 + 0x60);
      if (iVar9 == 5) {
        if (iVar11 == 0) {
          uVar10 = uVar12;
          if (param_3 != 0) {
            do {
              if (uVar4 < 4) {
                uVar20 = uVar12;
                uVar7 = uVar13;
                if (uVar4 != 0) goto LAB_180028434;
              }
              else {
                uVar8 = (uVar4 - 4 >> 2) + 1;
                uVar20 = (ulonglong)uVar8;
                pfVar18 = (float *)(param_2 + (uVar17 * uVar10 + 2) * 4);
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  pfVar18[-2] = (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  pfVar18[-1] = (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  *pfVar18 = (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  pfVar18[1] = (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58));
                  uVar20 = uVar20 - 1;
                  pfVar18 = pfVar18 + 4;
                } while (uVar20 != 0);
                uVar20 = (ulonglong)uVar8 * 4;
                uVar7 = uVar8 * 4;
                if (uVar8 * 4 < uVar4) {
LAB_180028434:
                  uVar22 = (ulonglong)(uVar4 - uVar7);
                  pfVar18 = (float *)(param_2 + (uVar17 * uVar10 + uVar20) * 4);
                  do {
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    *pfVar18 = (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58));
                    uVar22 = uVar22 - 1;
                    pfVar18 = pfVar18 + 1;
                  } while (uVar22 != 0);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_3);
          }
        }
        else if (param_3 != 0) {
          do {
            iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar3 = *(double *)(param_1 + 0x58);
            if (uVar4 != 0) {
              pfVar18 = (float *)(param_2 + uVar17 * uVar12 * 4);
              for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pfVar18 = (float)(((double)iVar9 / dVar6) * dVar3);
                pfVar18 = pfVar18 + 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
      }
      else if (iVar9 == 2) {
        if (iVar11 == 0) {
          uVar10 = uVar12;
          if (param_3 != 0) {
            do {
              if (uVar4 < 4) {
                uVar20 = uVar12;
                uVar7 = uVar13;
                if (uVar4 != 0) goto LAB_1800286c0;
              }
              else {
                uVar8 = (uVar4 - 4 >> 2) + 1;
                uVar20 = (ulonglong)uVar8;
                puVar19 = (undefined2 *)(param_2 + (uVar17 * uVar10 + 2) * 2);
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  puVar19[-2] = (short)(int)((float)(((double)iVar9 / dVar6) *
                                                    *(double *)(param_1 + 0x58)) * fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  puVar19[-1] = (short)(int)((float)(((double)iVar9 / dVar6) *
                                                    *(double *)(param_1 + 0x58)) * fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  *puVar19 = (short)(int)((float)(((double)iVar9 / dVar6) *
                                                 *(double *)(param_1 + 0x58)) * fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  puVar19[1] = (short)(int)((float)(((double)iVar9 / dVar6) *
                                                   *(double *)(param_1 + 0x58)) * fVar21);
                  uVar20 = uVar20 - 1;
                  puVar19 = puVar19 + 4;
                } while (uVar20 != 0);
                uVar20 = (ulonglong)uVar8 * 4;
                uVar7 = uVar8 * 4;
                if (uVar8 * 4 < uVar4) {
LAB_1800286c0:
                  uVar22 = (ulonglong)(uVar4 - uVar7);
                  puVar19 = (undefined2 *)(param_2 + (uVar17 * uVar10 + uVar20) * 2);
                  do {
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    *puVar19 = (short)(int)((float)(((double)iVar9 / dVar6) *
                                                   *(double *)(param_1 + 0x58)) * fVar21);
                    uVar22 = uVar22 - 1;
                    puVar19 = puVar19 + 1;
                  } while (uVar22 != 0);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_3);
          }
        }
        else if (param_3 != 0) {
          do {
            iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar3 = *(double *)(param_1 + 0x58);
            if (uVar4 != 0) {
              puVar19 = (undefined2 *)(param_2 + uVar17 * uVar12 * 2);
              for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar19 = (short)(int)((float)(((double)iVar9 / dVar6) * dVar3) * fVar21);
                puVar19 = puVar19 + 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
      }
      else {
        local_90[0] = 0.0;
        local_90[1] = 1.4013e-45;
        local_90[2] = 2.8026e-45;
        local_90[3] = 4.2039e-45;
        local_90[4] = 5.60519e-45;
        local_90[5] = 5.60519e-45;
        local_b0 = local_90[iVar9];
        fVar21 = (float)((int)local_b0 * uVar4);
        local_a8[0] = fVar21;
        if (iVar11 == 0) {
          local_a0 = 0;
          if (param_3 != 0) {
            do {
              fVar5 = local_b0;
              if (uVar4 != 0) {
                local_78 = (uint)fVar21 * local_a0;
                uVar17 = uVar12;
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  local_b8 = CONCAT44(local_b8._4_4_,
                                      (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58))
                                     );
                  FUN_180028b70((undefined1 (*) [16])
                                ((ulonglong)(uint)((int)fVar5 * (int)uVar17) + local_78 + param_2),
                                *(int *)(param_1 + 0x48),&local_b8,5,1,0);
                  uVar13 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar13;
                  fVar21 = local_a8[0];
                } while (uVar13 < uVar4);
              }
              local_a0 = local_a0 + 1;
            } while (local_a0 < param_3);
          }
        }
        else {
          local_a0 = 0;
          if (param_3 != 0) {
            do {
              fVar5 = local_b0;
              iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar9;
              local_b8 = CONCAT44(local_b8._4_4_,
                                  (float)(((double)iVar9 / dVar6) * *(double *)(param_1 + 0x58)));
              if (uVar4 != 0) {
                local_78 = (uint)fVar21 * local_a0;
                uVar17 = uVar12;
                do {
                  FUN_180028b70((undefined1 (*) [16])
                                ((ulonglong)(uint)((int)fVar5 * (int)uVar17) + local_78 + param_2),
                                *(int *)(param_1 + 0x48),&local_b8,5,1,0);
                  uVar13 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar13;
                  fVar21 = local_a8[0];
                } while (uVar13 < uVar4);
              }
              local_a0 = local_a0 + 1;
            } while (local_a0 < param_3);
          }
        }
      }
    }
    else if (iVar9 == 1) {
      iVar9 = *(int *)(param_1 + 0x48);
      fVar5 = *(float *)(param_1 + 0x4c);
      uVar17 = (ulonglong)(uint)fVar5;
      iVar11 = *(int *)(param_1 + 0x60);
      if (iVar9 == 5) {
        if (iVar11 == 0) {
          local_b8 = 0;
          if (param_3 != 0) {
            do {
              if (fVar5 != 0.0) {
                uVar10 = uVar12;
                uVar20 = uVar12;
                uVar22 = uVar17;
                do {
                  uVar4 = *(uint *)(uVar20 + *(longlong *)(param_1 + 0x80));
                  uVar7 = uVar13;
                  if ((uVar4 & 1) == 0) {
                    if (uVar4 == 0) {
                      uVar7 = 0;
                    }
                    else {
                      iVar9 = 0x11;
                      if ((uVar4 & 0xffff) != 0) {
                        iVar9 = 1;
                      }
                      uVar7 = uVar4 >> 0x10;
                      if ((uVar4 & 0xffff) != 0) {
                        uVar7 = uVar4;
                      }
                      if ((char)uVar7 == '\0') {
                        uVar7 = uVar7 >> 8;
                        iVar9 = iVar9 + 8;
                      }
                      iVar11 = iVar9 + 4;
                      if ((uVar7 & 0xf) != 0) {
                        iVar11 = iVar9;
                      }
                      uVar4 = uVar7 >> 4;
                      if ((uVar7 & 0xf) != 0) {
                        uVar4 = uVar7;
                      }
                      uVar7 = uVar4 >> 2;
                      if ((uVar4 & 3) != 0) {
                        uVar7 = uVar4;
                      }
                      iVar9 = iVar11 + 2;
                      if ((uVar4 & 3) != 0) {
                        iVar9 = iVar11;
                      }
                      uVar7 = iVar9 - (uVar7 & 1);
                    }
                  }
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  dVar3 = *(double *)
                           (*(longlong *)(uVar10 + *(longlong *)(param_1 + 0x70)) +
                           (ulonglong)(uVar7 & 0xf) * 8);
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar26 = (double)iVar9 / dVar6;
                  *(double *)
                   (*(longlong *)(uVar10 + *(longlong *)(param_1 + 0x70)) +
                   (ulonglong)(uVar7 & 0xf) * 8) = dVar26;
                  *(double *)(*(longlong *)(param_1 + 0x78) + uVar10) =
                       (dVar26 - dVar3) + *(double *)(*(longlong *)(param_1 + 0x78) + uVar10);
                  piVar1 = (int *)(uVar20 + *(longlong *)(param_1 + 0x80));
                  *piVar1 = *piVar1 + 1;
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  pdVar2 = (double *)(*(longlong *)(param_1 + 0x78) + uVar10);
                  uVar10 = uVar10 + 8;
                  *(float *)(uVar20 + param_2 + uVar17 * local_b8 * 4) =
                       (float)((((double)iVar9 / dVar6 + *pdVar2) / dVar25) *
                              *(double *)(param_1 + 0x58));
                  uVar20 = uVar20 + 4;
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
              local_b8 = local_b8 + 1;
            } while (local_b8 < param_3);
          }
        }
        else if (param_3 != 0) {
          iVar9 = *(int *)(param_1 + 0x68);
          do {
            uVar4 = **(uint **)(param_1 + 0x80);
            uVar7 = uVar13;
            if ((uVar4 & 1) == 0) {
              if (uVar4 == 0) {
                uVar7 = 0;
              }
              else {
                iVar11 = 0x11;
                if ((uVar4 & 0xffff) != 0) {
                  iVar11 = 1;
                }
                uVar7 = uVar4 >> 0x10;
                if ((uVar4 & 0xffff) != 0) {
                  uVar7 = uVar4;
                }
                if ((char)uVar7 == '\0') {
                  uVar7 = uVar7 >> 8;
                  iVar11 = iVar11 + 8;
                }
                iVar14 = iVar11 + 4;
                if ((uVar7 & 0xf) != 0) {
                  iVar14 = iVar11;
                }
                uVar4 = uVar7 >> 4;
                if ((uVar7 & 0xf) != 0) {
                  uVar4 = uVar7;
                }
                uVar7 = uVar4 >> 2;
                if ((uVar4 & 3) != 0) {
                  uVar7 = uVar4;
                }
                iVar11 = iVar14 + 2;
                if ((uVar4 & 3) != 0) {
                  iVar11 = iVar14;
                }
                uVar7 = iVar11 - (uVar7 & 1);
              }
            }
            iVar9 = iVar9 * 0xbc8f;
            dVar3 = *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8);
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar26 = (double)iVar9 / dVar6;
            *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8) = dVar26;
            **(double **)(param_1 + 0x78) = (dVar26 - dVar3) + **(double **)(param_1 + 0x78);
            **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
            iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar3 = **(double **)(param_1 + 0x78);
            dVar26 = *(double *)(param_1 + 0x58);
            if (fVar5 != 0.0) {
              pfVar18 = (float *)(param_2 + uVar17 * uVar12 * 4);
              for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pfVar18 = (float)((((double)iVar9 / dVar6 + dVar3) / dVar25) * dVar26);
                pfVar18 = pfVar18 + 1;
              }
              iVar9 = *(int *)(param_1 + 0x68);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
      }
      else {
        uVar13 = 0;
        if (iVar9 == 2) {
          if (iVar11 == 0) {
            local_b8 = 0;
            if (param_3 != 0) {
              do {
                if (fVar5 != 0.0) {
                  puVar19 = (undefined2 *)(param_2 + uVar17 * local_b8 * 2);
                  uVar10 = uVar12;
                  uVar20 = uVar12;
                  local_res18 = uVar17;
                  do {
                    uVar4 = *(uint *)(uVar20 + *(longlong *)(param_1 + 0x80));
                    uVar7 = uVar13;
                    if ((uVar4 & 1) == 0) {
                      if (uVar4 == 0) {
                        uVar7 = 0;
                      }
                      else {
                        iVar9 = 0x11;
                        if ((uVar4 & 0xffff) != 0) {
                          iVar9 = 1;
                        }
                        uVar7 = uVar4 >> 0x10;
                        if ((uVar4 & 0xffff) != 0) {
                          uVar7 = uVar4;
                        }
                        if ((char)uVar7 == '\0') {
                          uVar7 = uVar7 >> 8;
                          iVar9 = iVar9 + 8;
                        }
                        iVar11 = iVar9 + 4;
                        if ((uVar7 & 0xf) != 0) {
                          iVar11 = iVar9;
                        }
                        uVar4 = uVar7 >> 4;
                        if ((uVar7 & 0xf) != 0) {
                          uVar4 = uVar7;
                        }
                        uVar7 = uVar4 >> 2;
                        if ((uVar4 & 3) != 0) {
                          uVar7 = uVar4;
                        }
                        iVar9 = iVar11 + 2;
                        if ((uVar4 & 3) != 0) {
                          iVar9 = iVar11;
                        }
                        uVar7 = iVar9 - (uVar7 & 1);
                      }
                    }
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    dVar3 = *(double *)
                             (*(longlong *)(uVar10 + *(longlong *)(param_1 + 0x70)) +
                             (ulonglong)(uVar7 & 0xf) * 8);
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    dVar26 = (double)iVar9 / dVar6;
                    *(double *)
                     (*(longlong *)(uVar10 + *(longlong *)(param_1 + 0x70)) +
                     (ulonglong)(uVar7 & 0xf) * 8) = dVar26;
                    *(double *)(uVar10 + *(longlong *)(param_1 + 0x78)) =
                         (dVar26 - dVar3) + *(double *)(uVar10 + *(longlong *)(param_1 + 0x78));
                    piVar1 = (int *)(uVar20 + *(longlong *)(param_1 + 0x80));
                    *piVar1 = *piVar1 + 1;
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    uVar20 = uVar20 + 4;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    pdVar2 = (double *)(uVar10 + *(longlong *)(param_1 + 0x78));
                    uVar10 = uVar10 + 8;
                    *puVar19 = (short)(int)((float)((((double)iVar9 / dVar6 + *pdVar2) / dVar25) *
                                                   *(double *)(param_1 + 0x58)) * fVar21);
                    puVar19 = puVar19 + 1;
                    local_res18 = local_res18 - 1;
                  } while (local_res18 != 0);
                }
                local_b8 = local_b8 + 1;
              } while (local_b8 < param_3);
            }
          }
          else if (param_3 != 0) {
            iVar9 = *(int *)(param_1 + 0x68);
            do {
              uVar4 = **(uint **)(param_1 + 0x80);
              uVar7 = uVar13;
              if ((uVar4 & 1) == 0) {
                if (uVar4 == 0) {
                  uVar7 = 0;
                }
                else {
                  iVar11 = 0x11;
                  if ((uVar4 & 0xffff) != 0) {
                    iVar11 = 1;
                  }
                  uVar7 = uVar4 >> 0x10;
                  if ((uVar4 & 0xffff) != 0) {
                    uVar7 = uVar4;
                  }
                  if ((char)uVar7 == '\0') {
                    uVar7 = uVar7 >> 8;
                    iVar11 = iVar11 + 8;
                  }
                  iVar14 = iVar11 + 4;
                  if ((uVar7 & 0xf) != 0) {
                    iVar14 = iVar11;
                  }
                  uVar4 = uVar7 >> 4;
                  if ((uVar7 & 0xf) != 0) {
                    uVar4 = uVar7;
                  }
                  uVar7 = uVar4 >> 2;
                  if ((uVar4 & 3) != 0) {
                    uVar7 = uVar4;
                  }
                  iVar11 = iVar14 + 2;
                  if ((uVar4 & 3) != 0) {
                    iVar11 = iVar14;
                  }
                  uVar7 = iVar11 - (uVar7 & 1);
                }
              }
              iVar9 = iVar9 * 0xbc8f;
              dVar3 = *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8);
              iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar9;
              dVar26 = (double)iVar9 / dVar6;
              *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8) = dVar26;
              **(double **)(param_1 + 0x78) = (dVar26 - dVar3) + **(double **)(param_1 + 0x78);
              **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
              iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar9;
              dVar3 = **(double **)(param_1 + 0x78);
              dVar26 = *(double *)(param_1 + 0x58);
              if (fVar5 != 0.0) {
                puVar19 = (undefined2 *)(param_2 + uVar17 * uVar12 * 2);
                for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar19 = (short)(int)((float)((((double)iVar9 / dVar6 + dVar3) / dVar25) *
                                                 dVar26) * fVar21);
                  puVar19 = puVar19 + 1;
                }
                iVar9 = *(int *)(param_1 + 0x68);
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < param_3);
          }
        }
        else {
          local_90[0] = 0.0;
          local_90[1] = 1.4013e-45;
          local_90[2] = 2.8026e-45;
          local_90[3] = 4.2039e-45;
          local_90[4] = 5.60519e-45;
          local_90[5] = 5.60519e-45;
          fVar21 = local_90[iVar9];
          local_b0 = (float)((int)fVar21 * (int)fVar5);
          uVar10 = (ulonglong)(uint)local_b0;
          local_ac = fVar21;
          if (iVar11 == 0) {
            local_a0 = 0;
            local_a8[0] = fVar5;
            if (param_3 != 0) {
              do {
                local_98 = 0.0;
                if ((int)uVar17 != 0) {
                  local_78 = uVar10 * local_a0;
                  uVar17 = uVar12;
                  uVar10 = uVar12;
                  uVar20 = uVar12;
                  do {
                    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x80) + uVar10);
                    uVar7 = uVar13;
                    if ((uVar4 & 1) == 0) {
                      if (uVar4 == 0) {
                        uVar7 = 0;
                      }
                      else {
                        iVar9 = 0x11;
                        if ((uVar4 & 0xffff) != 0) {
                          iVar9 = 1;
                        }
                        uVar7 = uVar4 >> 0x10;
                        if ((uVar4 & 0xffff) != 0) {
                          uVar7 = uVar4;
                        }
                        if ((char)uVar7 == '\0') {
                          uVar7 = uVar7 >> 8;
                          iVar9 = iVar9 + 8;
                        }
                        iVar11 = iVar9 + 4;
                        if ((uVar7 & 0xf) != 0) {
                          iVar11 = iVar9;
                        }
                        uVar4 = uVar7 >> 4;
                        if ((uVar7 & 0xf) != 0) {
                          uVar4 = uVar7;
                        }
                        uVar7 = uVar4 >> 2;
                        if ((uVar4 & 3) != 0) {
                          uVar7 = uVar4;
                        }
                        iVar9 = iVar11 + 2;
                        if ((uVar4 & 3) != 0) {
                          iVar9 = iVar11;
                        }
                        uVar7 = iVar9 - (uVar7 & 1);
                      }
                    }
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    dVar3 = *(double *)
                             (*(longlong *)(uVar20 + *(longlong *)(param_1 + 0x70)) +
                             (ulonglong)(uVar7 & 0xf) * 8);
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    dVar26 = (double)iVar9 / dVar6;
                    *(double *)
                     (*(longlong *)(uVar20 + *(longlong *)(param_1 + 0x70)) +
                     (ulonglong)(uVar7 & 0xf) * 8) = dVar26;
                    *(double *)(uVar20 + *(longlong *)(param_1 + 0x78)) =
                         (dVar26 - dVar3) + *(double *)(uVar20 + *(longlong *)(param_1 + 0x78));
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + uVar10);
                    *piVar1 = *piVar1 + 1;
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    local_b8 = CONCAT44(local_b8._4_4_,
                                        (float)((((double)iVar9 / dVar6 +
                                                 *(double *)(uVar20 + *(longlong *)(param_1 + 0x78))
                                                 ) / dVar25) * *(double *)(param_1 + 0x58)));
                    FUN_180028b70((undefined1 (*) [16])
                                  ((ulonglong)(uint)((int)fVar21 * (int)uVar17) + local_78 + param_2
                                  ),*(int *)(param_1 + 0x48),&local_b8,5,1,0);
                    uVar10 = uVar10 + 4;
                    local_98 = (float)((int)local_98 + 1);
                    uVar17 = (ulonglong)(uint)local_98;
                    uVar20 = uVar20 + 8;
                    fVar21 = local_ac;
                  } while ((uint)local_98 < (uint)local_a8[0]);
                  uVar17 = (ulonglong)(uint)local_a8[0];
                  uVar10 = (ulonglong)(uint)local_b0;
                }
                local_a0 = local_a0 + 1;
              } while (local_a0 < param_3);
            }
          }
          else {
            local_b8 = 0;
            if (param_3 != 0) {
              do {
                uVar4 = **(uint **)(param_1 + 0x80);
                uVar7 = uVar13;
                if ((uVar4 & 1) == 0) {
                  if (uVar4 == 0) {
                    uVar7 = 0;
                  }
                  else {
                    iVar9 = 0x11;
                    if ((uVar4 & 0xffff) != 0) {
                      iVar9 = 1;
                    }
                    uVar7 = uVar4 >> 0x10;
                    if ((uVar4 & 0xffff) != 0) {
                      uVar7 = uVar4;
                    }
                    if ((char)uVar7 == '\0') {
                      uVar7 = uVar7 >> 8;
                      iVar9 = iVar9 + 8;
                    }
                    iVar11 = iVar9 + 4;
                    if ((uVar7 & 0xf) != 0) {
                      iVar11 = iVar9;
                    }
                    uVar4 = uVar7 >> 4;
                    if ((uVar7 & 0xf) != 0) {
                      uVar4 = uVar7;
                    }
                    uVar7 = uVar4 >> 2;
                    if ((uVar4 & 3) != 0) {
                      uVar7 = uVar4;
                    }
                    iVar9 = iVar11 + 2;
                    if ((uVar4 & 3) != 0) {
                      iVar9 = iVar11;
                    }
                    uVar7 = iVar9 - (uVar7 & 1);
                  }
                }
                iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                dVar3 = *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8);
                iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar9;
                dVar26 = (double)iVar9 / dVar6;
                *(double *)(**(longlong **)(param_1 + 0x70) + (ulonglong)(uVar7 & 0xf) * 8) = dVar26
                ;
                **(double **)(param_1 + 0x78) = (dVar26 - dVar3) + **(double **)(param_1 + 0x78);
                **(int **)(param_1 + 0x80) = **(int **)(param_1 + 0x80) + 1;
                iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                -0x7fffffff;
                *(int *)(param_1 + 0x68) = iVar9;
                local_a8[0] = (float)((((double)iVar9 / dVar6 + **(double **)(param_1 + 0x78)) /
                                      dVar25) * *(double *)(param_1 + 0x58));
                if (fVar5 != 0.0) {
                  lVar16 = uVar10 * local_b8;
                  uVar17 = uVar12;
                  do {
                    FUN_180028b70((undefined1 (*) [16])
                                  ((ulonglong)(uint)((int)fVar21 * (int)uVar17) + lVar16 + param_2),
                                  *(int *)(param_1 + 0x48),local_a8,5,1,0);
                    fVar15 = (float)((int)uVar17 + 1);
                    uVar17 = (ulonglong)(uint)fVar15;
                    fVar21 = local_ac;
                  } while ((uint)fVar15 < (uint)fVar5);
                  uVar10 = (ulonglong)(uint)local_b0;
                }
                local_b8 = local_b8 + 1;
              } while (local_b8 < param_3);
            }
          }
        }
      }
    }
    else {
      if (iVar9 != 2) {
        return 0xfffffffd;
      }
      iVar9 = *(int *)(param_1 + 0x48);
      uVar4 = *(uint *)(param_1 + 0x4c);
      uVar17 = (ulonglong)uVar4;
      iVar11 = *(int *)(param_1 + 0x60);
      if (iVar9 == 5) {
        if (iVar11 == 0) {
          uVar10 = uVar12;
          if (param_3 != 0) {
            do {
              uVar20 = uVar12;
              if (uVar4 < 4) {
                uVar7 = uVar13;
                if (uVar4 != 0) goto LAB_18002714c;
              }
              else {
                uVar7 = (uVar4 - 4 >> 2) + 1;
                uVar23 = (ulonglong)uVar7;
                pfVar18 = (float *)(param_2 + (uVar10 * uVar17 + 2) * 4);
                uVar7 = uVar7 * 4;
                uVar22 = uVar12;
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + uVar22)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + uVar20 * 8) = dVar25;
                  pfVar18[-2] = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 8 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 8 + uVar20 * 8) = dVar25;
                  pfVar18[-1] = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar20 * 8) = dVar25;
                  *pfVar18 = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 0x18 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 0x18 + uVar20 * 8) = dVar25;
                  uVar20 = uVar20 + 4;
                  uVar22 = uVar22 + 0x20;
                  pfVar18[1] = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                  pfVar18 = pfVar18 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
                if (uVar7 < uVar4) {
LAB_18002714c:
                  lVar16 = uVar20 * 8;
                  pfVar18 = (float *)(param_2 + (uVar10 * uVar17 + uVar20) * 4);
                  uVar20 = (ulonglong)(uVar4 - uVar7);
                  do {
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    dVar25 = ((double)iVar9 / dVar6 +
                             *(double *)(*(longlong *)(param_1 + 0x70) + lVar16)) / dVar3;
                    *(double *)(*(longlong *)(param_1 + 0x70) + lVar16) = dVar25;
                    lVar16 = lVar16 + 8;
                    *pfVar18 = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                    pfVar18 = pfVar18 + 1;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_3);
          }
        }
        else if (param_3 != 0) {
          do {
            iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar24 = ((double)iVar9 / dVar6 + **(double **)(param_1 + 0x70)) / dVar3;
            **(double **)(param_1 + 0x70) = dVar24;
            dVar25 = *(double *)(param_1 + 0x58);
            if (uVar4 != 0) {
              pfVar18 = (float *)(param_2 + uVar12 * uVar17 * 4);
              for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pfVar18 = (float)((dVar24 / dVar26) * dVar25);
                pfVar18 = pfVar18 + 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
      }
      else if (iVar9 == 2) {
        if (iVar11 == 0) {
          uVar10 = uVar12;
          if (param_3 != 0) {
            do {
              uVar20 = uVar12;
              if (uVar4 < 4) {
                uVar7 = uVar13;
                if (uVar4 != 0) goto LAB_1800274b8;
              }
              else {
                uVar7 = (uVar4 - 4 >> 2) + 1;
                uVar23 = (ulonglong)uVar7;
                puVar19 = (undefined2 *)(param_2 + (uVar10 * uVar17 + 2) * 2);
                uVar7 = uVar7 * 4;
                uVar22 = uVar12;
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + uVar22)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + uVar20 * 8) = dVar25;
                  puVar19[-2] = (short)(int)((float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58)
                                                    ) * fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 8 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 8 + uVar20 * 8) = dVar25;
                  puVar19[-1] = (short)(int)((float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58)
                                                    ) * fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 0x10 + uVar20 * 8) = dVar25;
                  *puVar19 = (short)(int)((float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58)) *
                                         fVar21);
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  uVar22 = uVar22 + 0x20;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + 0x18 + uVar20 * 8)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + 0x18 + uVar20 * 8) = dVar25;
                  uVar20 = uVar20 + 4;
                  puVar19[1] = (short)(int)((float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58))
                                           * fVar21);
                  puVar19 = puVar19 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
                if (uVar7 < uVar4) {
LAB_1800274b8:
                  lVar16 = uVar20 * 8;
                  puVar19 = (undefined2 *)(param_2 + (uVar10 * uVar17 + uVar20) * 2);
                  uVar20 = (ulonglong)(uVar4 - uVar7);
                  do {
                    iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                    iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f))
                                    * -0x7fffffff;
                    *(int *)(param_1 + 0x68) = iVar9;
                    dVar25 = ((double)iVar9 / dVar6 +
                             *(double *)(lVar16 + *(longlong *)(param_1 + 0x70))) / dVar3;
                    *(double *)(lVar16 + *(longlong *)(param_1 + 0x70)) = dVar25;
                    lVar16 = lVar16 + 8;
                    *puVar19 = (short)(int)((float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58))
                                           * fVar21);
                    puVar19 = puVar19 + 1;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < param_3);
          }
        }
        else if (param_3 != 0) {
          do {
            iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
            iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                            -0x7fffffff;
            *(int *)(param_1 + 0x68) = iVar9;
            dVar24 = ((double)iVar9 / dVar6 + **(double **)(param_1 + 0x70)) / dVar3;
            **(double **)(param_1 + 0x70) = dVar24;
            dVar25 = *(double *)(param_1 + 0x58);
            if (uVar4 != 0) {
              puVar19 = (undefined2 *)(param_2 + uVar12 * uVar17 * 2);
              for (uVar10 = uVar17; uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar19 = (short)(int)((float)((dVar24 / dVar26) * dVar25) * fVar21);
                puVar19 = puVar19 + 1;
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
      }
      else {
        local_90[0] = 0.0;
        local_90[1] = 1.4013e-45;
        local_90[2] = 2.8026e-45;
        local_90[3] = 4.2039e-45;
        local_90[4] = 5.60519e-45;
        local_90[5] = 5.60519e-45;
        fVar21 = local_90[iVar9];
        local_98 = (float)((int)fVar21 * uVar4);
        local_a0 = (ulonglong)(uint)local_98;
        local_ac = fVar21;
        if (iVar11 == 0) {
          local_b8 = 0;
          if (param_3 != 0) {
            do {
              if (uVar4 != 0) {
                local_a0 = local_a0 * local_b8;
                uVar17 = uVar12;
                uVar10 = uVar12;
                do {
                  iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
                  iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                                  -0x7fffffff;
                  *(int *)(param_1 + 0x68) = iVar9;
                  dVar25 = ((double)iVar9 / dVar6 +
                           *(double *)(*(longlong *)(param_1 + 0x70) + uVar10)) / dVar3;
                  *(double *)(*(longlong *)(param_1 + 0x70) + uVar10) = dVar25;
                  local_b0 = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
                  FUN_180028b70((undefined1 (*) [16])
                                ((uint)((int)fVar21 * (int)uVar17) + local_a0 + param_2),
                                *(int *)(param_1 + 0x48),&local_b0,5,1,0);
                  uVar13 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar13;
                  uVar10 = uVar10 + 8;
                  fVar21 = local_ac;
                } while (uVar13 < uVar4);
                local_a0 = (ulonglong)(uint)local_98;
              }
              local_b8 = local_b8 + 1;
            } while (local_b8 < param_3);
          }
        }
        else {
          local_b8 = 0;
          if (param_3 != 0) {
            do {
              fVar21 = local_ac;
              iVar9 = *(int *)(param_1 + 0x68) * 0xbc8f;
              iVar9 = iVar9 + ((int)((longlong)iVar9 * 0x40000001 >> 0x3d) - (iVar9 >> 0x1f)) *
                              -0x7fffffff;
              *(int *)(param_1 + 0x68) = iVar9;
              dVar25 = ((double)iVar9 / dVar6 + **(double **)(param_1 + 0x70)) / dVar3;
              **(double **)(param_1 + 0x70) = dVar25;
              local_b0 = (float)((dVar25 / dVar26) * *(double *)(param_1 + 0x58));
              if (uVar4 != 0) {
                local_a0 = local_a0 * local_b8;
                uVar17 = uVar12;
                do {
                  FUN_180028b70((undefined1 (*) [16])
                                ((uint)((int)fVar21 * (int)uVar17) + local_a0 + param_2),
                                *(int *)(param_1 + 0x48),&local_b0,5,1,0);
                  uVar13 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar13;
                } while (uVar13 < uVar4);
                local_a0 = (ulonglong)(uint)local_98;
              }
              local_b8 = local_b8 + 1;
            } while (local_b8 < param_3);
          }
        }
      }
    }
  }
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = param_3;
  }
  return 0;
}


