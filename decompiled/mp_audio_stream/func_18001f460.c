// FUN_18001f460 @ 18001f460

undefined8 FUN_18001f460(int *param_1,void *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  byte *pbVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  size_t local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  if (param_3 == (int *)0x0) {
    return 0xfffffffe;
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  uVar8 = FUN_1800030c0((longlong)param_1,&local_68);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  *(void **)(param_3 + 0xe) = param_2;
  if ((param_2 != (void *)0x0) && (local_68 != 0)) {
    memset(param_2,0,local_68);
  }
  uVar25 = 0;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[8];
  if (*(longlong *)(param_1 + 4) == 0) {
    param_3[6] = 0;
    param_3[7] = 0;
  }
  else {
    puVar22 = (undefined1 *)(local_60 + (longlong)param_2);
    *(undefined1 **)(param_3 + 6) = puVar22;
    uVar18 = param_1[1];
    uVar9 = (ulonglong)uVar18;
    if ((puVar22 != (undefined1 *)0x0) && (uVar18 != 0)) {
      if (*(void **)(param_1 + 4) == (void *)0x0) {
        uVar19 = uVar25;
        if (uVar18 != 0) {
          do {
            if (uVar9 == 0) break;
            uVar10 = FUN_180005500(0,uVar18,uVar19);
            *puVar22 = (char)uVar10;
            uVar9 = uVar9 - 1;
            puVar22 = puVar22 + 1;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar18);
        }
      }
      else {
        memcpy(puVar22,*(void **)(param_1 + 4),(ulonglong)uVar18);
      }
    }
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    param_3[8] = 0;
    param_3[9] = 0;
  }
  else {
    puVar22 = (undefined1 *)(local_58 + (longlong)param_2);
    *(undefined1 **)(param_3 + 8) = puVar22;
    uVar18 = param_1[2];
    uVar9 = (ulonglong)uVar18;
    if ((puVar22 != (undefined1 *)0x0) && (uVar18 != 0)) {
      if (*(void **)(param_1 + 6) == (void *)0x0) {
        uVar19 = uVar25;
        if (uVar18 != 0) {
          do {
            if (uVar9 == 0) break;
            uVar10 = FUN_180005500(0,uVar18,uVar19);
            *puVar22 = (char)uVar10;
            uVar9 = uVar9 - 1;
            puVar22 = puVar22 + 1;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar18);
        }
      }
      else {
        memcpy(puVar22,*(void **)(param_1 + 6),(ulonglong)uVar18);
      }
    }
  }
  uVar8 = FUN_180002e60((longlong)param_1);
  param_3[4] = (int)uVar8;
  if ((int)uVar8 == 4) {
    lVar1 = *(longlong *)(param_3 + 8);
    puVar22 = (undefined1 *)(local_50 + (longlong)param_2);
    uVar18 = param_3[1];
    lVar2 = *(longlong *)(param_3 + 6);
    uVar19 = param_3[2];
    *(undefined1 **)(param_3 + 10) = puVar22;
    if (((puVar22 != (undefined1 *)0x0) && (uVar18 != 0)) && (uVar19 != 0)) {
      lVar24 = lVar1 - (longlong)puVar22;
      do {
        *puVar22 = 0xff;
        if (lVar1 == 0) {
          uVar9 = FUN_180005500(0,uVar19,uVar25);
          cVar5 = (char)uVar9;
        }
        else {
          cVar5 = puVar22[lVar24];
        }
        uVar9 = 0;
        if (uVar18 != 0) {
          do {
            if (lVar2 == 0) {
              uVar10 = FUN_180005500(0,uVar18,(uint)uVar9);
              cVar6 = (char)uVar10;
            }
            else {
              cVar6 = *(char *)(uVar9 + lVar2);
            }
            if (cVar5 == cVar6) {
              *puVar22 = (char)uVar9;
              break;
            }
            if (cVar5 == '\x02') {
LAB_18001f684:
              if ((cVar6 == '\x02') || (cVar6 == '\v')) {
LAB_18001f68e:
                *puVar22 = (char)uVar9;
              }
            }
            else if (cVar5 == '\x03') {
LAB_18001f678:
              if ((cVar6 == '\x03') || (cVar6 == '\f')) goto LAB_18001f68e;
            }
            else {
              if (cVar5 == '\v') goto LAB_18001f684;
              if (cVar5 == '\f') goto LAB_18001f678;
            }
            uVar20 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar20;
          } while (uVar20 < uVar18);
        }
        uVar25 = uVar25 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar25 < uVar19);
    }
  }
  uVar9 = 0;
  if (param_3[4] != 5) {
    return 0;
  }
  uVar25 = param_3[1];
  *(longlong *)(param_3 + 0xc) = local_48 + (longlong)param_2;
  if (*param_3 == 5) {
    uVar10 = uVar9;
    if (uVar25 != 0) {
      do {
        uVar18 = (int)uVar10 + 1;
        *(ulonglong *)(*(longlong *)(param_3 + 0xc) + uVar10 * 8) =
             local_48 + ((uint)param_3[2] * uVar10 + (ulonglong)uVar25 * 2) * 4 + (longlong)param_2;
        uVar25 = param_3[1];
        uVar10 = (ulonglong)uVar18;
      } while (uVar18 < uVar25);
    }
  }
  else {
    uVar10 = uVar9;
    if (uVar25 != 0) {
      do {
        uVar18 = (int)uVar10 + 1;
        *(ulonglong *)(*(longlong *)(param_3 + 0xc) + uVar10 * 8) =
             local_48 + ((uint)param_3[2] * uVar10 + (ulonglong)uVar25 * 2) * 4 + (longlong)param_2;
        uVar25 = param_3[1];
        uVar10 = (ulonglong)uVar18;
      } while (uVar18 < uVar25);
    }
  }
  uVar18 = 0;
  uVar10 = uVar9;
  if (uVar25 != 0) {
    do {
      uVar11 = uVar9;
      if (param_3[2] != 0) {
        do {
          uVar25 = (int)uVar11 + 1;
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_3 + 0xc) + uVar10 * 8) + uVar11 * 4) = 0
          ;
          uVar11 = (ulonglong)uVar25;
        } while (uVar25 < (uint)param_3[2]);
      }
      uVar25 = param_3[1];
      uVar18 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar18;
    } while (uVar18 < uVar25);
    uVar18 = 0;
    uVar10 = uVar9;
    if (uVar25 != 0) {
      do {
        if (*(longlong *)(param_3 + 6) == 0) {
          uVar11 = FUN_180005500(0,uVar25,(uint)uVar10);
          cVar5 = (char)uVar11;
        }
        else if ((uint)uVar10 < uVar25) {
          cVar5 = *(char *)(uVar10 + *(longlong *)(param_3 + 6));
        }
        else {
          cVar5 = '\0';
        }
        iVar21 = (int)uVar10;
        uVar25 = param_3[2];
        uVar11 = uVar9;
        if (uVar25 != 0) {
          do {
            if (*(longlong *)(param_3 + 8) == 0) {
              uVar12 = FUN_180005500(0,uVar25,(uint)uVar11);
              cVar6 = (char)uVar12;
            }
            else if ((uint)uVar11 < uVar25) {
              cVar6 = *(char *)(uVar11 + *(longlong *)(param_3 + 8));
            }
            else {
              cVar6 = '\0';
            }
            iVar21 = (int)uVar10;
            if (cVar5 == cVar6) {
              lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xc) + (uVar10 & 0xffffffff) * 8);
              if (*param_3 == 5) {
                *(undefined4 *)(lVar1 + (uVar11 & 0xffffffff) * 4) = 0x3f800000;
              }
              else {
                *(undefined4 *)(lVar1 + (uVar11 & 0xffffffff) * 4) = 0x1000;
              }
            }
            uVar25 = param_3[2];
            uVar18 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar18;
          } while (uVar18 < uVar25);
        }
        uVar18 = param_3[1];
        uVar10 = (ulonglong)(iVar21 + 1U);
        uVar25 = uVar18;
      } while (iVar21 + 1U < uVar18);
    }
  }
  fVar28 = DAT_180032148;
  iVar21 = param_3[3];
  if (iVar21 != 0) {
    if (iVar21 == 1) {
      return 0;
    }
    if (iVar21 == 2) {
      if (*(longlong *)(param_1 + 10) == 0) {
        return 0xfffffffe;
      }
      uVar10 = uVar9;
      if (uVar18 != 0) {
        do {
          uVar11 = uVar9;
          if (param_3[2] != 0) {
            do {
              fVar26 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 10) + uVar10 * 8) +
                                 uVar11 * 4);
              lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xc) + uVar10 * 8);
              if (*param_3 == 5) {
                *(float *)(lVar1 + uVar11 * 4) = fVar26;
              }
              else {
                *(int *)(lVar1 + uVar11 * 4) = (int)(fVar26 * fVar28);
              }
              uVar25 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar25;
            } while (uVar25 < (uint)param_3[2]);
          }
          uVar25 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar25;
        } while (uVar25 < (uint)param_3[1]);
        return 0;
      }
      return 0;
    }
  }
  fVar26 = 0.0;
  uVar10 = uVar9;
  if (uVar18 != 0) {
LAB_18001f8e1:
    uVar25 = (uint)uVar10;
    if (*(longlong *)(param_3 + 6) == 0) {
      uVar11 = FUN_180005500(0,uVar18,uVar25);
      uVar11 = uVar11 & 0xff;
LAB_18001f909:
      if ((((uVar11 & 0xfa) != 0) || ((char)uVar11 == '\x04')) &&
         (0x1f < (byte)((char)uVar11 - 0x14U))) {
        pfVar14 = (float *)(&DAT_1800364c0 + uVar11 * 0x18);
        uVar12 = uVar9;
        do {
          if (*pfVar14 != fVar26) {
            uVar13 = (ulonglong)(uint)param_3[2];
            pcVar4 = *(char **)(param_3 + 8);
            pcVar17 = pcVar4;
            uVar12 = uVar9;
            if (param_3[2] != 0) goto LAB_18001f966;
            break;
          }
          uVar12 = uVar12 + 1;
          pfVar14 = pfVar14 + 1;
        } while ((longlong)uVar12 < 6);
      }
    }
    else if (uVar25 < uVar18) {
      uVar11 = (ulonglong)*(byte *)(uVar10 + *(longlong *)(param_3 + 6));
      goto LAB_18001f909;
    }
    goto LAB_18001faea;
  }
LAB_18001faf7:
  uVar25 = param_3[2];
  uVar10 = uVar9;
  if (uVar25 != 0) {
LAB_18001fb05:
    uVar18 = (uint)uVar10;
    if (*(longlong *)(param_3 + 8) == 0) {
      uVar11 = FUN_180005500(0,uVar25,uVar18);
      uVar11 = uVar11 & 0xff;
LAB_18001fb2d:
      if ((((uVar11 & 0xfa) != 0) || ((char)uVar11 == '\x04')) &&
         (0x1f < (byte)((char)uVar11 - 0x14U))) {
        pfVar14 = (float *)(&DAT_1800364c0 + uVar11 * 0x18);
        uVar12 = uVar9;
        do {
          if (*pfVar14 != fVar26) {
            uVar13 = (ulonglong)(uint)param_3[1];
            pcVar4 = *(char **)(param_3 + 6);
            pcVar17 = pcVar4;
            uVar12 = uVar9;
            if (param_3[1] != 0) goto LAB_18001fb92;
            break;
          }
          uVar12 = uVar12 + 1;
          pfVar14 = pfVar14 + 1;
        } while ((longlong)uVar12 < 6);
      }
    }
    else if (uVar18 < uVar25) {
      uVar11 = (ulonglong)*(byte *)(uVar10 + *(longlong *)(param_3 + 8));
      goto LAB_18001fb2d;
    }
    goto LAB_18001fd1a;
  }
LAB_18001fd27:
  if (param_1[9] != 0) {
    uVar25 = param_3[1];
    pbVar3 = *(byte **)(param_3 + 6);
    uVar10 = uVar9;
    pbVar23 = pbVar3;
    if (uVar25 != 0) {
      do {
        uVar18 = (uint)uVar10;
        if (pbVar3 == (byte *)0x0) {
          uVar10 = FUN_180005500(0,uVar25,uVar18);
          bVar7 = (byte)uVar10;
        }
        else {
          bVar7 = *pbVar23;
        }
        if (bVar7 == 5) {
          return 0;
        }
        uVar11 = uVar9;
        pbVar16 = pbVar3;
        uVar12 = uVar9;
        uVar10 = (ulonglong)(uVar18 + 1);
        pbVar23 = pbVar23 + 1;
      } while (uVar18 + 1 < uVar25);
      do {
        if (pbVar3 == (byte *)0x0) {
          uVar10 = FUN_180005500(0,uVar25,(uint)uVar11);
          uVar10 = uVar10 & 0xff;
        }
        else {
          uVar10 = (ulonglong)*pbVar16;
        }
        if ((((uVar10 & 0xfa) != 0) || ((char)uVar10 == '\x04')) &&
           (0x1f < (byte)((char)uVar10 - 0x14U))) {
          pfVar14 = (float *)(&DAT_1800364c0 + uVar10 * 0x18);
          uVar10 = uVar9;
          do {
            if (*pfVar14 != fVar26) {
              uVar12 = (ulonglong)((int)uVar12 + 1);
              break;
            }
            uVar10 = uVar10 + 1;
            pfVar14 = pfVar14 + 1;
          } while ((longlong)uVar10 < 6);
        }
        uVar18 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar18;
        pbVar16 = pbVar16 + 1;
      } while (uVar18 < uVar25);
      if ((int)uVar12 != 0) {
        uVar11 = (ulonglong)(uint)param_3[2];
        pcVar4 = *(char **)(param_3 + 8);
        uVar10 = uVar9;
        pcVar17 = pcVar4;
        if (param_3[2] != 0) {
          while( true ) {
            if (pcVar4 == (char *)0x0) {
              uVar13 = FUN_180005500(0,(uint)uVar11,(uint)uVar10);
              cVar5 = (char)uVar13;
            }
            else {
              cVar5 = *pcVar17;
            }
            if (cVar5 == '\x05') break;
            uVar25 = (uint)uVar10 + 1;
            uVar10 = (ulonglong)uVar25;
            pcVar17 = pcVar17 + 1;
            if ((uint)uVar11 <= uVar25) {
              return 0;
            }
          }
          uVar25 = param_3[1];
          fVar27 = DAT_1800320cc / (float)(uVar12 & 0xffffffff);
          uVar11 = uVar9;
          do {
            uVar18 = (uint)uVar11;
            if (*(longlong *)(param_3 + 6) == 0) {
              uVar12 = FUN_180005500(0,uVar25,uVar18);
              uVar12 = uVar12 & 0xff;
LAB_18001fe7e:
              uVar18 = (uint)uVar11;
              if ((((uVar12 & 0xfa) != 0) || ((char)uVar12 == '\x04')) &&
                 (0x1f < (byte)((char)uVar12 - 0x14U))) {
                pfVar14 = (float *)(&DAT_1800364c0 + uVar12 * 0x18);
                uVar12 = uVar9;
                do {
                  if (*pfVar14 != fVar26) {
                    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xc) + (uVar11 & 0xffffffff) * 8);
                    if (*param_3 == 5) {
                      if (*(float *)(lVar1 + uVar10 * 4) == fVar26) {
                        *(float *)(lVar1 + uVar10 * 4) = fVar27;
                      }
                    }
                    else if (*(int *)(lVar1 + uVar10 * 4) == 0) {
                      *(int *)(lVar1 + uVar10 * 4) = (int)(fVar27 * fVar28);
                    }
                    break;
                  }
                  uVar12 = uVar12 + 1;
                  pfVar14 = pfVar14 + 1;
                } while ((longlong)uVar12 < 6);
              }
            }
            else if (uVar18 < uVar25) {
              uVar12 = (ulonglong)*(byte *)(uVar11 + *(longlong *)(param_3 + 6));
              goto LAB_18001fe7e;
            }
            uVar25 = param_3[1];
            uVar11 = (ulonglong)(uVar18 + 1);
          } while (uVar18 + 1 < uVar25);
        }
      }
    }
  }
  return 0;
  while( true ) {
    uVar11 = uVar11 & 0xff;
    pcVar17 = pcVar17 + 1;
    uVar12 = (ulonglong)(uVar18 + 1);
    if ((uint)uVar13 <= uVar18 + 1) break;
LAB_18001f966:
    uVar18 = (uint)uVar12;
    if (pcVar4 == (char *)0x0) {
      uVar12 = FUN_180005500(0,(uint)uVar13,uVar18);
      cVar5 = (char)uVar12;
    }
    else {
      cVar5 = *pcVar17;
    }
    uVar15 = uVar11 & 0xff;
    if (cVar5 == (char)uVar11) goto LAB_18001faea;
  }
  uVar18 = param_3[2];
  uVar11 = uVar9;
  do {
    uVar19 = (uint)uVar11;
    if (*(longlong *)(param_3 + 8) == 0) {
      uVar12 = FUN_180005500(0,uVar18,uVar19);
      uVar12 = uVar12 & 0xff;
LAB_18001f9ca:
      uVar19 = (uint)uVar11;
      if ((((uVar12 & 0xfa) != 0) || ((char)uVar12 == '\x04')) &&
         (0x1f < (byte)((char)uVar12 - 0x14U))) {
        pfVar14 = (float *)(&DAT_1800364c0 + uVar12 * 0x18);
        uVar13 = uVar9;
        do {
          if (*pfVar14 != fVar26) {
            fVar27 = fVar26;
            if (param_3[3] == 0) {
              fVar27 = *(float *)(&DAT_1800364c4 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c4 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364c0 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c0 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364c8 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c8 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364cc + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364cc + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364d0 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364d0 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364d4 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364d4 + uVar15 * 0x18);
            }
            uVar11 = uVar11 & 0xffffffff;
            lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xc) + uVar10 * 8);
            if (*param_3 == 5) {
              if (*(float *)(lVar1 + uVar11 * 4) == fVar26) {
                *(float *)(lVar1 + uVar11 * 4) = fVar27;
              }
            }
            else if (*(int *)(lVar1 + uVar11 * 4) == 0) {
              *(int *)(lVar1 + uVar11 * 4) = (int)(fVar27 * fVar28);
            }
            break;
          }
          uVar13 = uVar13 + 1;
          pfVar14 = pfVar14 + 1;
        } while ((longlong)uVar13 < 6);
      }
    }
    else if (uVar19 < uVar18) {
      uVar12 = (ulonglong)*(byte *)(uVar11 + *(longlong *)(param_3 + 8));
      goto LAB_18001f9ca;
    }
    uVar18 = param_3[2];
    uVar11 = (ulonglong)(uVar19 + 1);
  } while (uVar19 + 1 < uVar18);
LAB_18001faea:
  uVar18 = param_3[1];
  uVar10 = (ulonglong)(uVar25 + 1);
  if (uVar18 <= uVar25 + 1) goto LAB_18001faf7;
  goto LAB_18001f8e1;
  while( true ) {
    uVar11 = uVar11 & 0xff;
    pcVar17 = pcVar17 + 1;
    uVar12 = (ulonglong)(uVar25 + 1);
    if ((uint)uVar13 <= uVar25 + 1) break;
LAB_18001fb92:
    uVar25 = (uint)uVar12;
    if (pcVar4 == (char *)0x0) {
      uVar12 = FUN_180005500(0,(uint)uVar13,uVar25);
      cVar5 = (char)uVar12;
    }
    else {
      cVar5 = *pcVar17;
    }
    uVar15 = uVar11 & 0xff;
    if (cVar5 == (char)uVar11) goto LAB_18001fd1a;
  }
  uVar25 = param_3[1];
  uVar11 = uVar9;
  do {
    uVar19 = (uint)uVar11;
    if (*(longlong *)(param_3 + 6) == 0) {
      uVar12 = FUN_180005500(0,uVar25,uVar19);
      uVar12 = uVar12 & 0xff;
LAB_18001fbfa:
      uVar19 = (uint)uVar11;
      if ((((uVar12 & 0xfa) != 0) || ((char)uVar12 == '\x04')) &&
         (0x1f < (byte)((char)uVar12 - 0x14U))) {
        pfVar14 = (float *)(&DAT_1800364c0 + uVar12 * 0x18);
        uVar13 = uVar9;
        do {
          if (*pfVar14 != fVar26) {
            fVar27 = fVar26;
            if (param_3[3] == 0) {
              fVar27 = *(float *)(&DAT_1800364c4 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c4 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364c0 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c0 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364c8 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364c8 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364cc + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364cc + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364d0 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364d0 + uVar15 * 0x18) +
                       *(float *)(&DAT_1800364d4 + uVar12 * 0x18) *
                       *(float *)(&DAT_1800364d4 + uVar15 * 0x18);
            }
            lVar1 = *(longlong *)(*(longlong *)(param_3 + 0xc) + (uVar11 & 0xffffffff) * 8);
            if (*param_3 == 5) {
              if (*(float *)(lVar1 + uVar10 * 4) == fVar26) {
                *(float *)(lVar1 + uVar10 * 4) = fVar27;
              }
            }
            else if (*(int *)(lVar1 + uVar10 * 4) == 0) {
              *(int *)(lVar1 + uVar10 * 4) = (int)(fVar27 * fVar28);
            }
            break;
          }
          uVar13 = uVar13 + 1;
          pfVar14 = pfVar14 + 1;
        } while ((longlong)uVar13 < 6);
      }
    }
    else if (uVar19 < uVar25) {
      uVar12 = (ulonglong)*(byte *)(uVar11 + *(longlong *)(param_3 + 6));
      goto LAB_18001fbfa;
    }
    uVar25 = param_3[1];
    uVar11 = (ulonglong)(uVar19 + 1);
  } while (uVar19 + 1 < uVar25);
LAB_18001fd1a:
  uVar25 = param_3[2];
  uVar10 = (ulonglong)(uVar18 + 1);
  if (uVar25 <= uVar18 + 1) goto LAB_18001fd27;
  goto LAB_18001fb05;
}


