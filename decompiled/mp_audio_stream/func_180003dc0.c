// FUN_180003dc0 @ 180003dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003dc0(float *param_1,byte *param_2,uint param_3,float *param_4,byte *param_5,
                  uint param_6,ulonglong param_7,int param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined *puVar21;
  float fVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_1288 [32];
  uint local_1258;
  float local_1230;
  float fStack_122c;
  float fStack_1228;
  float fStack_1224;
  float local_1220;
  float fStack_121c;
  float fStack_1218;
  float fStack_1214;
  float local_11f8 [32];
  float local_1178 [32];
  float local_10f8 [32];
  float local_1078 [32];
  float local_ff8 [32];
  float local_f78 [32];
  float local_ef8 [32];
  float local_e78 [800];
  byte local_1f8 [256];
  ulonglong local_f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x180003ddf;
  local_f8 = DAT_180036c40 ^ (ulonglong)auStackY_1288;
  uVar16 = (ulonglong)param_6;
  if (param_3 == param_6) {
    if ((param_2 != param_5) && (uVar18 = 0, param_3 != 0)) {
      pbVar15 = param_5;
      do {
        if (param_2 == (byte *)0x0) {
          uVar9 = FUN_180005500(0,param_3,uVar18);
          bVar6 = (byte)uVar9;
        }
        else {
          bVar6 = pbVar15[(longlong)param_2 - (longlong)param_5];
        }
        if (param_5 == (byte *)0x0) {
          uVar9 = FUN_180005500(0,param_3,uVar18);
          bVar7 = (byte)uVar9;
        }
        else {
          bVar7 = *pbVar15;
        }
        if (bVar6 != bVar7) {
          bVar5 = false;
          goto LAB_180003e84;
        }
        uVar18 = uVar18 + 1;
        pbVar15 = pbVar15 + 1;
      } while (uVar18 < param_3);
    }
    bVar5 = true;
LAB_180003e84:
    if (bVar5) {
      FUN_180021ed0(param_1,param_4,param_7,5,param_3);
      return;
    }
  }
  uVar18 = (uint)uVar16;
  if ((param_3 == 1) && ((param_2 == (byte *)0x0 || (*param_2 == 1)))) {
    if (((param_1 != (float *)0x0) && (param_4 != (float *)0x0)) && (uVar18 != 0)) {
      uVar20 = 0;
      uVar19 = 0;
      pbVar15 = param_5;
      if (uVar18 != 0) {
        do {
          if (param_5 == (byte *)0x0) {
            uVar9 = FUN_180005500(0,(uint)uVar16,uVar19);
            bVar6 = (byte)uVar9;
          }
          else {
            bVar6 = *pbVar15;
          }
          uVar18 = uVar20 + 1;
          if (bVar6 == 0) {
            uVar18 = uVar20;
          }
          uVar19 = uVar19 + 1;
          pbVar15 = pbVar15 + 1;
          uVar20 = uVar18;
        } while (uVar19 < (uint)uVar16);
        if (uVar18 != 0) {
          if (param_7 == 0) {
            return;
          }
          fVar23 = (float)uVar18;
          uVar9 = uVar16;
          do {
            fVar22 = 0.0;
            uVar18 = 0;
            pbVar15 = param_5;
            pfVar11 = param_4;
            do {
              if (param_5 == (byte *)0x0) {
                uVar10 = FUN_180005500(0,(uint)uVar9,uVar18);
                bVar6 = (byte)uVar10;
                fVar22 = extraout_XMM0_Da;
LAB_180003f7c:
                if (bVar6 != 0) {
                  fVar22 = fVar22 + *pfVar11;
                }
              }
              else if (uVar18 < (uint)uVar9) {
                bVar6 = *pbVar15;
                goto LAB_180003f7c;
              }
              uVar18 = uVar18 + 1;
              pbVar15 = pbVar15 + 1;
              pfVar11 = pfVar11 + 1;
            } while (uVar18 < (uint)uVar9);
            param_4 = param_4 + uVar16;
            *param_1 = fVar22 / fVar23;
            param_1 = param_1 + 1;
            param_7 = param_7 - 1;
            if (param_7 == 0) {
              return;
            }
          } while( true );
        }
      }
      for (uVar16 = param_7 * 4; uVar16 != 0; uVar16 = uVar16 - uVar9) {
        uVar9 = uVar16;
        if (0xffffffff < uVar16) {
          uVar9 = 0xffffffff;
        }
        if ((param_1 != (float *)0x0) && (uVar9 != 0)) {
          memset(param_1,0,uVar9);
        }
        param_1 = (float *)((longlong)param_1 + uVar9);
      }
    }
  }
  else if ((uVar18 == 1) && ((param_5 == (byte *)0x0 || (*param_5 == (byte)uVar16)))) {
    FUN_180004ae0(param_1,(char *)param_2,param_3,param_4,param_7,param_9);
  }
  else if (param_3 < 0xff) {
    if (param_8 == 1) {
      if ((uVar18 != 0) && (param_3 != 0)) {
        uVar18 = 0;
        if (param_3 != 0) {
          pbVar15 = local_1f8;
          do {
            *pbVar15 = 0xff;
            if (param_2 == (byte *)0x0) {
              uVar9 = FUN_180005500(0,param_3,uVar18);
              bVar6 = (byte)uVar9;
            }
            else {
              bVar6 = pbVar15[(longlong)param_2 - (longlong)local_1f8];
            }
            uVar9 = 0;
            if ((int)uVar16 != 0) {
              do {
                if (param_5 == (byte *)0x0) {
                  uVar10 = FUN_180005500(0,(uint)uVar16,(uint)uVar9);
                  bVar7 = (byte)uVar10;
                }
                else {
                  bVar7 = param_5[uVar9];
                }
                if (bVar6 == bVar7) {
                  *pbVar15 = (byte)uVar9;
                  break;
                }
                if (bVar6 == 2) {
LAB_1800040f5:
                  if ((bVar7 == 2) || (bVar7 == 0xb)) {
LAB_1800040ff:
                    *pbVar15 = (byte)uVar9;
                  }
                }
                else if (bVar6 == 3) {
LAB_1800040e9:
                  if ((bVar7 == 3) || (bVar7 == 0xc)) goto LAB_1800040ff;
                }
                else {
                  if (bVar6 == 0xb) goto LAB_1800040f5;
                  if (bVar6 == 0xc) goto LAB_1800040e9;
                }
                uVar20 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar20;
              } while (uVar20 < (uint)uVar16);
            }
            uVar18 = uVar18 + 1;
            pbVar15 = pbVar15 + 1;
          } while (uVar18 < param_3);
        }
        if ((param_1 != (float *)0x0) && (param_4 != (float *)0x0)) {
          for (; param_7 != 0; param_7 = param_7 - 1) {
            if (param_3 != 0) {
              pbVar15 = local_1f8;
              pfVar11 = param_1;
              uVar9 = (ulonglong)param_3;
              do {
                if ((uint)*pbVar15 < (uint)uVar16) {
                  fVar23 = param_4[*pbVar15];
                }
                else {
                  fVar23 = 0.0;
                }
                *pfVar11 = fVar23;
                pbVar15 = pbVar15 + 1;
                pfVar11 = pfVar11 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            param_1 = param_1 + param_3;
            param_4 = param_4 + uVar16;
          }
        }
      }
    }
    else if ((uVar18 < 0x21) && (param_3 < 0x21)) {
      if (param_3 != 0) {
        uVar18 = 0;
        pfVar11 = local_11f8;
        puVar21 = &DAT_1800364c0;
        pbVar15 = param_2;
        do {
          if (param_2 == (byte *)0x0) {
            uVar9 = FUN_180005500(0,param_3,uVar18);
            bVar6 = (byte)uVar9;
          }
          else {
            bVar6 = *pbVar15;
          }
          uVar20 = 0;
          if ((int)uVar16 != 0) {
            uVar9 = (ulonglong)bVar6;
            fVar23 = *(float *)(puVar21 + uVar9 * 0x18 + 0x14);
            fVar22 = *(float *)(puVar21 + uVar9 * 0x18 + 0x10);
            fVar24 = *(float *)(puVar21 + uVar9 * 0x18 + 0xc);
            fVar25 = *(float *)(puVar21 + uVar9 * 0x18 + 8);
            fVar26 = *(float *)(puVar21 + uVar9 * 0x18);
            fVar27 = *(float *)(puVar21 + uVar9 * 0x18 + 4);
            pbVar13 = param_5;
            pfVar12 = pfVar11;
            do {
              if (param_5 == (byte *)0x0) {
                uVar9 = FUN_180005500(0,(uint)uVar16,uVar20);
                bVar6 = (byte)uVar9;
              }
              else {
                bVar6 = *pbVar13;
              }
              uVar9 = (ulonglong)bVar6;
              uVar20 = uVar20 + 1;
              pbVar13 = pbVar13 + 1;
              *pfVar12 = fVar27 * *(float *)(puVar21 + uVar9 * 0x18 + 4) +
                         fVar26 * *(float *)(puVar21 + uVar9 * 0x18) +
                         fVar25 * *(float *)(puVar21 + uVar9 * 0x18 + 8) +
                         fVar24 * *(float *)(puVar21 + uVar9 * 0x18 + 0xc) +
                         fVar22 * *(float *)(puVar21 + uVar9 * 0x18 + 0x10) +
                         fVar23 * *(float *)(puVar21 + uVar9 * 0x18 + 0x14);
              pfVar12 = pfVar12 + 1;
            } while (uVar20 < (uint)uVar16);
          }
          pfVar11 = pfVar11 + 0x20;
          uVar18 = uVar18 + 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar18 < param_3);
      }
      uVar18 = 0;
      local_1258 = 0;
      uVar20 = (uint)uVar16;
      if (param_3 == 8) {
        if (param_7 != 0) {
          if (uVar20 == 2) {
            do {
              uVar19 = uVar18 * 8;
              fVar23 = param_4[uVar18 * 2];
              fVar22 = param_4[uVar18 * 2 + 1];
              uVar18 = uVar18 + 1;
              param_1[uVar19] = local_11f8[0] * fVar23 + 0.0 + local_11f8[1] * fVar22;
              param_1[uVar19 + 1] = local_1178[0] * fVar23 + 0.0 + local_1178[1] * fVar22;
              param_1[uVar19 + 2] = local_10f8[0] * fVar23 + 0.0 + local_10f8[1] * fVar22;
              param_1[uVar19 + 3] = local_1078[0] * fVar23 + 0.0 + local_1078[1] * fVar22;
              param_1[uVar19 + 4] = local_ff8[0] * fVar23 + 0.0 + local_ff8[1] * fVar22;
              param_1[uVar19 + 5] = local_f78[0] * fVar23 + 0.0 + local_f78[1] * fVar22;
              param_1[uVar19 + 6] = local_ef8[0] * fVar23 + 0.0 + local_ef8[1] * fVar22;
              param_1[uVar19 + 7] = local_e78[0] * fVar23 + 0.0 + fVar22 * local_e78[1];
              local_1258 = uVar18;
            } while (uVar18 < param_7);
          }
          else {
            do {
              uVar19 = 0;
              fStack_1224 = 0.0;
              fStack_1228 = 0.0;
              fStack_122c = 0.0;
              local_1230 = 0.0;
              fStack_1214 = 0.0;
              fStack_1218 = 0.0;
              fStack_121c = 0.0;
              local_1220 = 0.0;
              if (uVar20 != 0) {
                pfVar11 = local_1178;
                do {
                  uVar8 = uVar18 * uVar20 + uVar19;
                  uVar19 = uVar19 + 1;
                  fVar23 = param_4[uVar8];
                  local_1230 = local_1230 + fVar23 * pfVar11[-0x20];
                  fStack_122c = fStack_122c + fVar23 * *pfVar11;
                  fStack_1228 = fStack_1228 + fVar23 * pfVar11[0x20];
                  fStack_1224 = fStack_1224 + fVar23 * pfVar11[0x40];
                  local_1220 = local_1220 + fVar23 * pfVar11[0x60];
                  pfVar12 = pfVar11 + 0xa0;
                  pfVar3 = pfVar11 + 0xc0;
                  fStack_121c = fStack_121c + fVar23 * pfVar11[0x80];
                  pfVar11 = pfVar11 + 1;
                  fStack_1218 = fStack_1218 + fVar23 * *pfVar12;
                  fStack_1214 = fStack_1214 + fVar23 * *pfVar3;
                } while (uVar19 < uVar20);
              }
              uVar19 = uVar18 * 8;
              uVar18 = uVar18 + 1;
              param_1[uVar19] = local_1230;
              param_1[uVar19 + 1] = fStack_122c;
              param_1[uVar19 + 2] = fStack_1228;
              param_1[uVar19 + 3] = fStack_1224;
              param_1[uVar19 + 4] = local_1220;
              param_1[uVar19 + 5] = fStack_121c;
              param_1[uVar19 + 6] = fStack_1218;
              param_1[uVar19 + 7] = fStack_1214;
              local_1258 = uVar18;
            } while (uVar18 < param_7);
          }
        }
      }
      else if ((param_3 == 6) && (local_1258 = 0, param_7 != 0)) {
        do {
          uVar19 = 0;
          fVar22 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar23 = 0.0;
          fVar26 = 0.0;
          fVar27 = 0.0;
          if (uVar20 != 0) {
            pfVar11 = local_1178;
            fVar22 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
            fVar23 = 0.0;
            do {
              uVar8 = uVar18 * uVar20 + uVar19;
              uVar19 = uVar19 + 1;
              fVar4 = param_4[uVar8];
              fVar22 = fVar22 + fVar4 * pfVar11[-0x20];
              fVar24 = fVar24 + fVar4 * *pfVar11;
              fVar25 = fVar25 + fVar4 * pfVar11[0x20];
              pfVar12 = pfVar11 + 0x60;
              pfVar3 = pfVar11 + 0x80;
              fVar23 = fVar23 + fVar4 * pfVar11[0x40];
              pfVar11 = pfVar11 + 1;
              fVar26 = fVar26 + fVar4 * *pfVar12;
              fVar27 = fVar27 + fVar4 * *pfVar3;
            } while (uVar19 < uVar20);
          }
          local_1258 = uVar18 + 1;
          uVar18 = uVar18 * 6;
          param_1[uVar18 + 4] = fVar26;
          param_1[uVar18 + 5] = fVar27;
          pfVar11 = param_1 + uVar18;
          *pfVar11 = fVar22;
          pfVar11[1] = fVar24;
          pfVar11[2] = fVar25;
          pfVar11[3] = fVar23;
          uVar18 = local_1258;
        } while (local_1258 < param_7);
      }
      for (; local_1258 < param_7; local_1258 = local_1258 + 1) {
        uVar16 = 0;
        if (param_3 != 0) {
          pfVar11 = local_11f8 + 1;
          uVar9 = uVar16;
          do {
            uVar18 = 0;
            fVar23 = 0.0;
            if (uVar20 < 4) {
              if (uVar20 != 0) {
                lVar14 = 0;
                goto LAB_180004876;
              }
            }
            else {
              lVar14 = (ulonglong)((uVar20 - 4 >> 2) + 1) << 2;
              pfVar12 = pfVar11;
              do {
                uVar19 = local_1258 * uVar20 + uVar18;
                uVar18 = uVar18 + 4;
                fVar22 = *pfVar12;
                pfVar3 = pfVar12 + -1;
                pfVar1 = pfVar12 + 1;
                pfVar2 = pfVar12 + 2;
                pfVar12 = pfVar12 + 4;
                fVar23 = param_4[uVar19] * *pfVar3 + fVar23 + param_4[uVar19 + 1] * fVar22 +
                         param_4[uVar19 + 2] * *pfVar1 + param_4[uVar19 + 3] * *pfVar2;
              } while (uVar18 < uVar20 - 3);
              if (uVar18 < uVar20) {
LAB_180004876:
                pfVar12 = local_11f8 + lVar14 + uVar16;
                do {
                  uVar19 = local_1258 * uVar20 + uVar18;
                  uVar18 = uVar18 + 1;
                  fVar22 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  fVar23 = fVar23 + param_4[uVar19] * fVar22;
                } while (uVar18 < uVar20);
              }
            }
            uVar16 = uVar16 + 0x20;
            iVar17 = (int)uVar9;
            uVar18 = iVar17 + 1;
            uVar9 = (ulonglong)uVar18;
            param_1[param_3 * local_1258 + iVar17] = fVar23;
            pfVar11 = pfVar11 + 0x20;
          } while (uVar18 < param_3);
        }
      }
    }
    else {
      uVar9 = 0;
      local_1258 = 0;
      if (param_7 != 0) {
        puVar21 = &DAT_1800364c0;
        do {
          uVar20 = (uint)uVar9;
          uVar19 = 0;
          uVar18 = uVar20;
          if (param_3 != 0) {
            iVar17 = (int)uVar16;
            pbVar15 = param_2;
            do {
              fVar23 = 0.0;
              if (param_2 == (byte *)0x0) {
                uVar9 = FUN_180005500(0,param_3,uVar19);
                bVar6 = (byte)uVar9;
              }
              else {
                bVar6 = *pbVar15;
              }
              uVar18 = 0;
              if ((int)uVar16 != 0) {
                uVar9 = (ulonglong)bVar6;
                fVar22 = *(float *)(puVar21 + uVar9 * 0x18 + 0x14);
                fVar24 = *(float *)(puVar21 + uVar9 * 0x18 + 0x10);
                fVar25 = *(float *)(puVar21 + uVar9 * 0x18 + 0xc);
                fVar26 = *(float *)(puVar21 + uVar9 * 0x18 + 8);
                fVar27 = *(float *)(puVar21 + uVar9 * 0x18);
                fVar4 = *(float *)(puVar21 + uVar9 * 0x18 + 4);
                pbVar13 = param_5;
                do {
                  if (param_5 == (byte *)0x0) {
                    uVar9 = FUN_180005500(0,(uint)uVar16,uVar18);
                    bVar6 = (byte)uVar9;
                  }
                  else {
                    bVar6 = *pbVar13;
                  }
                  uVar9 = (ulonglong)bVar6;
                  pbVar13 = pbVar13 + 1;
                  uVar8 = uVar20 * iVar17 + uVar18;
                  uVar18 = uVar18 + 1;
                  fVar23 = fVar23 + (fVar4 * *(float *)(puVar21 + uVar9 * 0x18 + 4) +
                                     fVar27 * *(float *)(puVar21 + uVar9 * 0x18) +
                                     fVar26 * *(float *)(puVar21 + uVar9 * 0x18 + 8) +
                                     fVar25 * *(float *)(puVar21 + uVar9 * 0x18 + 0xc) +
                                     fVar24 * *(float *)(puVar21 + uVar9 * 0x18 + 0x10) +
                                    fVar22 * *(float *)(puVar21 + uVar9 * 0x18 + 0x14)) *
                                    param_4[uVar8];
                } while (uVar18 < (uint)uVar16);
              }
              uVar18 = param_3 * uVar20 + uVar19;
              uVar19 = uVar19 + 1;
              param_1[uVar18] = fVar23;
              pbVar15 = pbVar15 + 1;
              uVar18 = local_1258;
            } while (uVar19 < param_3);
          }
          local_1258 = uVar18 + 1;
          uVar9 = (ulonglong)local_1258;
        } while (uVar9 < param_7);
      }
    }
  }
  else {
    FUN_18002c430(param_1,param_7,5,param_3);
  }
  return;
}


