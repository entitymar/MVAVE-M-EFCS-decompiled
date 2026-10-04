// FUN_180004ae0 @ 180004ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180004ae0(float *param_1,char *param_2,uint param_3,float *param_4,ulonglong param_5,int param_6
             )

{
  float fVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *pcVar17;
  float fVar18;
  undefined1 auStack_178 [32];
  uint local_158;
  longlong local_150;
  char local_148 [256];
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_178;
  uVar15 = (ulonglong)param_3;
  if (((param_1 == (float *)0x0) || (param_3 == 0)) || (param_4 == (float *)0x0)) {
    return 0xfffffffe;
  }
  if (param_6 == 1) {
    uVar10 = 0;
    uVar5 = uVar10;
    uVar16 = uVar10;
    pcVar17 = param_2;
    if (param_3 != 0) {
      do {
        if (param_2 == (char *)0x0) {
          uVar6 = FUN_180005500(0,(uint)uVar15,(uint)uVar5);
          cVar4 = (char)uVar6;
        }
        else {
          cVar4 = *pcVar17;
        }
        if (cVar4 != '\0') {
          uVar10 = (ulonglong)((int)uVar10 + 1);
        }
        uVar11 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar11;
        pcVar17 = pcVar17 + 1;
      } while (uVar11 < (uint)uVar15);
    }
    fVar18 = DAT_1800320cc / (float)uVar10;
    uVar5 = uVar15;
    for (; param_5 != 0; param_5 = param_5 - 1) {
      uVar10 = uVar16 & 0xffffffff;
      pfVar7 = param_1;
      pcVar17 = param_2;
      if ((int)uVar5 != 0) {
        do {
          if (param_2 == (char *)0x0) {
            uVar6 = FUN_180005500(0,(uint)uVar5,(uint)uVar10);
            cVar4 = (char)uVar6;
          }
          else {
            cVar4 = *pcVar17;
          }
          if (cVar4 != '\0') {
            *pfVar7 = fVar18 * *param_4;
          }
          uVar11 = (uint)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
          pfVar7 = pfVar7 + 1;
          pcVar17 = pcVar17 + 1;
        } while (uVar11 < (uint)uVar5);
      }
      param_1 = param_1 + uVar15;
      param_4 = param_4 + 1;
    }
  }
  else {
    uVar16 = 0;
    if ((param_6 == 2) && (1 < param_3)) {
      uVar11 = 0xffffffff;
      local_158 = 0xffffffff;
      uVar5 = 0xffffffff;
      uVar10 = uVar16;
      pcVar17 = param_2;
      do {
        uVar6 = uVar10;
        uVar13 = (uint)uVar6;
        if (param_2 == (char *)0x0) {
          uVar5 = FUN_180005500(0,(uint)uVar15,uVar13);
          cVar4 = (char)uVar5;
          uVar5 = (ulonglong)local_158;
        }
        else {
          cVar4 = *pcVar17;
        }
        uVar3 = uVar13;
        if ((cVar4 != '\v') && (uVar6 = uVar5, uVar3 = local_158, cVar4 == '\f')) {
          uVar11 = uVar13;
        }
        local_158 = uVar3;
        pcVar17 = pcVar17 + 1;
        uVar5 = uVar6;
        uVar10 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < (uint)uVar15);
      uVar5 = uVar16 & 0xffffffff;
      pcVar17 = param_2;
      do {
        uVar10 = uVar5;
        uVar13 = (uint)uVar10;
        if (param_2 == (char *)0x0) {
          uVar5 = FUN_180005500(0,(uint)uVar15,uVar13);
          cVar4 = (char)uVar5;
          uVar6 = (ulonglong)local_158;
        }
        else {
          cVar4 = *pcVar17;
        }
        uVar3 = uVar13;
        if ((cVar4 != '\x02') && (uVar10 = uVar6, uVar3 = local_158, cVar4 == '\x03')) {
          uVar11 = uVar13;
        }
        local_158 = uVar3;
        pcVar17 = pcVar17 + 1;
        uVar6 = uVar10;
        uVar5 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < (uint)uVar15);
      if (((int)uVar10 != -1) && (uVar11 != 0xffffffff)) {
        if (param_5 == 0) {
          return 0;
        }
        local_150 = uVar15 << 2;
        do {
          uVar5 = uVar16 & 0xffffffff;
          pcVar17 = param_2;
          pfVar7 = param_1;
          do {
            uVar13 = (uint)uVar5;
            if (param_2 == (char *)0x0) {
              uVar5 = FUN_180005500(0,(uint)uVar15,uVar13);
              cVar4 = (char)uVar5;
              uVar10 = (ulonglong)local_158;
            }
            else {
              cVar4 = *pcVar17;
            }
            if (cVar4 != '\0') {
              if ((uVar13 == (uint)uVar10) || (uVar13 == uVar11)) {
                *pfVar7 = *param_4;
              }
              else {
                *pfVar7 = (float)uVar16;
              }
            }
            uVar5 = (ulonglong)(uVar13 + 1);
            pcVar17 = pcVar17 + 1;
            pfVar7 = pfVar7 + 1;
          } while (uVar13 + 1 < (uint)uVar15);
          param_1 = (float *)((longlong)param_1 + local_150);
          param_4 = param_4 + 1;
          param_5 = param_5 - 1;
        } while (param_5 != 0);
        return 0;
      }
    }
    if ((uint)uVar15 < 0xff) {
      uVar10 = uVar16 & 0xffffffff;
      uVar5 = uVar16 & 0xffffffff;
      if ((uint)uVar15 != 0) {
        pcVar17 = local_148;
        do {
          if (param_2 == (char *)0x0) {
            uVar6 = FUN_180005500(0,(uint)uVar15,(uint)uVar5);
            cVar4 = (char)uVar6;
          }
          else {
            cVar4 = pcVar17[(longlong)param_2 - (longlong)local_148];
          }
          *pcVar17 = cVar4;
          if (cVar4 == '\0') {
            uVar10 = 1;
          }
          uVar11 = (uint)uVar5 + 1;
          uVar5 = (ulonglong)uVar11;
          pcVar17 = pcVar17 + 1;
          uVar13 = (uint)uVar15;
        } while (uVar11 < uVar13);
        if ((int)uVar10 != 0) {
          uVar5 = uVar16;
          if (param_5 == 0) {
            return 0;
          }
          do {
            uVar11 = (uint)uVar16;
            cVar4 = (char)uVar16;
            uVar10 = uVar16;
            if (uVar13 < 4) {
LAB_180004d8c:
              uVar6 = (ulonglong)(uVar13 - uVar11);
              do {
                if (local_148[uVar10] != cVar4) {
                  param_1[uVar15 * uVar5 + uVar10] = *param_4;
                }
                uVar10 = uVar10 + 1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            else {
              uVar11 = (uVar13 - 4 >> 2) + 1;
              uVar6 = (ulonglong)uVar11;
              uVar11 = uVar11 * 4;
              do {
                if (local_148[uVar10] != cVar4) {
                  param_1[uVar15 * uVar5 + uVar10] = *param_4;
                }
                if (local_148[uVar10 + 1] != cVar4) {
                  param_1[uVar15 * uVar5 + uVar10 + 1] = *param_4;
                }
                if (local_148[uVar10 + 2] != cVar4) {
                  param_1[uVar15 * uVar5 + uVar10 + 2] = *param_4;
                }
                if (local_148[uVar10 + 3] != cVar4) {
                  param_1[uVar15 * uVar5 + uVar10 + 3] = *param_4;
                }
                uVar10 = uVar10 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              if (uVar11 < uVar13) goto LAB_180004d8c;
            }
            uVar5 = uVar5 + 1;
            param_4 = param_4 + 1;
            if (param_5 <= uVar5) {
              return 0;
            }
          } while( true );
        }
      }
      iVar14 = (int)uVar15;
      if (iVar14 == 2) {
        uVar5 = param_5 >> 1;
        if (3 < uVar5) {
          lVar12 = (uVar5 - 4 >> 2) + 1;
          uVar16 = lVar12 * 4;
          pfVar7 = param_4 + 3;
          pfVar9 = param_1 + 8;
          do {
            fVar18 = pfVar7[-2];
            fVar1 = pfVar7[-3];
            fVar2 = *pfVar7;
            pfVar9[-8] = fVar1;
            pfVar9[-7] = fVar1;
            pfVar9[-6] = fVar18;
            pfVar9[-5] = fVar18;
            fVar18 = pfVar7[-1];
            fVar1 = pfVar7[2];
            pfVar9[-4] = fVar18;
            pfVar9[-3] = fVar18;
            pfVar9[-2] = fVar2;
            pfVar9[-1] = fVar2;
            fVar18 = pfVar7[1];
            fVar2 = pfVar7[4];
            *pfVar9 = fVar18;
            pfVar9[1] = fVar18;
            pfVar9[2] = fVar1;
            pfVar9[3] = fVar1;
            fVar18 = pfVar7[3];
            pfVar9[4] = fVar18;
            pfVar9[5] = fVar18;
            pfVar9[6] = fVar2;
            pfVar9[7] = fVar2;
            lVar12 = lVar12 + -1;
            pfVar7 = pfVar7 + 8;
            pfVar9 = pfVar9 + 0x10;
          } while (lVar12 != 0);
        }
        if (uVar16 < uVar5) {
          pfVar7 = param_1 + uVar16 * 4;
          do {
            fVar18 = param_4[uVar16 * 2 + 1];
            fVar1 = param_4[uVar16 * 2];
            uVar16 = uVar16 + 1;
            *pfVar7 = fVar1;
            pfVar7[1] = fVar1;
            pfVar7[2] = fVar18;
            pfVar7[3] = fVar18;
            pfVar7 = pfVar7 + 4;
          } while (uVar16 < uVar5);
        }
        uVar16 = uVar5 * 2;
      }
      else if (iVar14 == 6) {
        uVar5 = param_5 >> 1;
        if (3 < uVar5) {
          lVar12 = (uVar5 - 4 >> 2) + 1;
          uVar16 = lVar12 * 4;
          pfVar7 = param_1 + 8;
          pfVar9 = param_4 + 2;
          do {
            fVar18 = pfVar9[-1];
            fVar1 = pfVar9[-2];
            pfVar7[-8] = fVar1;
            pfVar7[-7] = fVar1;
            pfVar7[-6] = fVar1;
            pfVar7[-5] = fVar1;
            fVar2 = pfVar9[1];
            pfVar7[-4] = fVar1;
            pfVar7[-3] = fVar1;
            pfVar7[-2] = fVar18;
            pfVar7[-1] = fVar18;
            fVar1 = *pfVar9;
            *pfVar7 = fVar18;
            pfVar7[1] = fVar18;
            pfVar7[2] = fVar18;
            pfVar7[3] = fVar18;
            pfVar7[4] = fVar1;
            pfVar7[5] = fVar1;
            pfVar7[6] = fVar1;
            pfVar7[7] = fVar1;
            fVar18 = pfVar9[3];
            pfVar7[8] = fVar1;
            pfVar7[9] = fVar1;
            pfVar7[10] = fVar2;
            pfVar7[0xb] = fVar2;
            fVar1 = pfVar9[2];
            pfVar7[0xc] = fVar2;
            pfVar7[0xd] = fVar2;
            pfVar7[0xe] = fVar2;
            pfVar7[0xf] = fVar2;
            pfVar7[0x10] = fVar1;
            pfVar7[0x11] = fVar1;
            pfVar7[0x12] = fVar1;
            pfVar7[0x13] = fVar1;
            fVar2 = pfVar9[5];
            pfVar7[0x14] = fVar1;
            pfVar7[0x15] = fVar1;
            pfVar7[0x16] = fVar18;
            pfVar7[0x17] = fVar18;
            fVar1 = pfVar9[4];
            pfVar7[0x18] = fVar18;
            pfVar7[0x19] = fVar18;
            pfVar7[0x1a] = fVar18;
            pfVar7[0x1b] = fVar18;
            pfVar7[0x1c] = fVar1;
            pfVar7[0x1d] = fVar1;
            pfVar7[0x1e] = fVar1;
            pfVar7[0x1f] = fVar1;
            pfVar7[0x20] = fVar1;
            pfVar7[0x21] = fVar1;
            pfVar7[0x22] = fVar2;
            pfVar7[0x23] = fVar2;
            pfVar7[0x24] = fVar2;
            pfVar7[0x25] = fVar2;
            pfVar7[0x26] = fVar2;
            pfVar7[0x27] = fVar2;
            lVar12 = lVar12 + -1;
            pfVar7 = pfVar7 + 0x30;
            pfVar9 = pfVar9 + 8;
          } while (lVar12 != 0);
        }
        if (uVar16 < uVar5) {
          pfVar7 = param_1 + uVar16 * 0xc + 8;
          do {
            fVar18 = param_4[uVar16 * 2 + 1];
            fVar1 = param_4[uVar16 * 2];
            uVar16 = uVar16 + 1;
            pfVar7[-8] = fVar1;
            pfVar7[-7] = fVar1;
            pfVar7[-6] = fVar1;
            pfVar7[-5] = fVar1;
            pfVar7[-4] = fVar1;
            pfVar7[-3] = fVar1;
            pfVar7[-2] = fVar18;
            pfVar7[-1] = fVar18;
            *pfVar7 = fVar18;
            pfVar7[1] = fVar18;
            pfVar7[2] = fVar18;
            pfVar7[3] = fVar18;
            pfVar7 = pfVar7 + 0xc;
          } while (uVar16 < uVar5);
        }
        uVar16 = uVar5 * 2;
      }
      else if (iVar14 == 8) {
        if (3 < param_5) {
          lVar12 = (param_5 - 4 >> 2) + 1;
          uVar16 = lVar12 * 4;
          pfVar7 = param_1 + 8;
          pfVar9 = param_4 + 2;
          do {
            fVar18 = pfVar9[-2];
            fVar1 = pfVar9[-1];
            pfVar7[-8] = fVar18;
            pfVar7[-7] = fVar18;
            pfVar7[-6] = fVar18;
            pfVar7[-5] = fVar18;
            pfVar7[-4] = fVar18;
            pfVar7[-3] = fVar18;
            pfVar7[-2] = fVar18;
            pfVar7[-1] = fVar18;
            fVar18 = *pfVar9;
            *pfVar7 = fVar1;
            pfVar7[1] = fVar1;
            pfVar7[2] = fVar1;
            pfVar7[3] = fVar1;
            pfVar7[4] = fVar1;
            pfVar7[5] = fVar1;
            pfVar7[6] = fVar1;
            pfVar7[7] = fVar1;
            fVar1 = pfVar9[1];
            pfVar7[8] = fVar18;
            pfVar7[9] = fVar18;
            pfVar7[10] = fVar18;
            pfVar7[0xb] = fVar18;
            pfVar7[0xc] = fVar18;
            pfVar7[0xd] = fVar18;
            pfVar7[0xe] = fVar18;
            pfVar7[0xf] = fVar18;
            pfVar7[0x10] = fVar1;
            pfVar7[0x11] = fVar1;
            pfVar7[0x12] = fVar1;
            pfVar7[0x13] = fVar1;
            pfVar7[0x14] = fVar1;
            pfVar7[0x15] = fVar1;
            pfVar7[0x16] = fVar1;
            pfVar7[0x17] = fVar1;
            lVar12 = lVar12 + -1;
            pfVar7 = pfVar7 + 0x20;
            pfVar9 = pfVar9 + 4;
          } while (lVar12 != 0);
        }
        if (param_5 <= uVar16) {
          return 0;
        }
        pfVar7 = param_1 + uVar16 * 8;
        do {
          fVar18 = param_4[uVar16];
          uVar16 = uVar16 + 1;
          *pfVar7 = fVar18;
          pfVar7[1] = fVar18;
          pfVar7[2] = fVar18;
          pfVar7[3] = fVar18;
          pfVar7[4] = fVar18;
          pfVar7[5] = fVar18;
          pfVar7[6] = fVar18;
          pfVar7[7] = fVar18;
          pfVar7 = pfVar7 + 8;
        } while (uVar16 < param_5);
        return 0;
      }
      for (; uVar16 < param_5; uVar16 = uVar16 + 1) {
        if (iVar14 != 0) {
          fVar18 = param_4[uVar16];
          pfVar7 = param_1 + uVar15 * uVar16;
          for (uVar5 = uVar15; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pfVar7 = fVar18;
            pfVar7 = pfVar7 + 1;
          }
        }
      }
    }
    else {
      uVar5 = uVar16;
      if (param_5 != 0) {
        do {
          uVar6 = uVar5 & 0xffffffff;
          uVar10 = uVar5;
          do {
            if (param_2 == (char *)0x0) {
              uVar8 = FUN_180005500(0,(uint)uVar15,(uint)uVar6);
              cVar4 = (char)uVar8;
            }
            else {
              cVar4 = param_2[uVar5];
            }
            if (cVar4 != '\0') {
              param_1[uVar15 * uVar16 + uVar5] = *param_4;
            }
            uVar11 = (uint)uVar6 + 1;
            uVar6 = (ulonglong)uVar11;
            uVar5 = uVar5 + 1;
          } while (uVar11 < (uint)uVar15);
          uVar16 = uVar16 + 1;
          param_4 = param_4 + 1;
          uVar5 = uVar10;
        } while (uVar16 < param_5);
      }
    }
  }
  return 0;
}


