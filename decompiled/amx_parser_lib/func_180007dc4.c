// FUN_180007dc4 @ 180007dc4

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180007dc4(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  ushort uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 extraout_var;
  byte bVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  undefined8 local_48;
  byte local_40 [8];
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  uVar8 = DAT_180025040 ^ (ulonglong)auStackY_88;
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  uVar12 = 0x78;
  local_38 = uVar8;
  if (cVar3 < 'e') {
    if (cVar3 == 'd') {
LAB_180007ea7:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_180007eab:
      uVar8 = FUN_180006ee0((longlong)param_1,0);
    }
    else if (cVar3 < 'T') {
      if (cVar3 == 'S') {
LAB_180007eed:
        uVar8 = FUN_180008760((longlong)param_1);
      }
      else {
        if (cVar3 != 'A') {
          if (cVar3 == 'C') {
LAB_180007e61:
            uVar8 = FUN_1800085d4((longlong)param_1);
            goto LAB_180007f0f;
          }
          if (((cVar3 != 'E') && (cVar3 != 'F')) && (cVar3 != 'G')) goto LAB_180007f16;
        }
LAB_180007e38:
        uVar8 = FUN_180008378(param_1);
      }
    }
    else {
      if (cVar3 == 'X') goto LAB_180007f05;
      if (cVar3 != 'Z') {
        if (cVar3 != 'a') {
          if (cVar3 != 'c') goto LAB_180007f16;
          goto LAB_180007e61;
        }
        goto LAB_180007e38;
      }
      uVar8 = FUN_1800082fc((longlong)param_1);
    }
  }
  else if (cVar3 < 'p') {
    if (cVar3 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar8 = FUN_180006cdc((longlong)param_1);
    }
    else {
      if (((cVar3 == 'e') || (cVar3 == 'f')) || (cVar3 == 'g')) goto LAB_180007e38;
      if (cVar3 == 'i') goto LAB_180007ea7;
      if (cVar3 != 'n') goto LAB_180007f16;
      uVar8 = FUN_1800086a8((longlong)param_1);
    }
  }
  else {
    if (cVar3 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_180007f05:
      bVar11 = 1;
    }
    else {
      if (cVar3 == 's') goto LAB_180007eed;
      if (cVar3 == 'u') goto LAB_180007eab;
      if (cVar3 != 'x') goto LAB_180007f16;
      bVar11 = 0;
    }
    uVar8 = FUN_1800070e4((longlong)param_1,bVar11);
  }
LAB_180007f0f:
  uVar15 = 0;
  if ((char)uVar8 == '\0') {
LAB_180007f16:
    return uVar8 & 0xffffffffffffff00;
  }
  if ((char)param_1[7] != '\0') goto LAB_1800082d0;
  uVar8 = local_50 & 0xffffffffff000000;
  uVar13 = (uint)param_1[5];
  uVar14 = uVar15;
  if ((uVar13 >> 4 & 1) != 0) {
    local_50._1_7_ = (undefined7)(uVar8 >> 8);
    if ((uVar13 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar13 >> 1 & 1) == 0) goto LAB_180007f6b;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    uVar14 = 1;
    uVar8 = local_50;
  }
LAB_180007f6b:
  local_50 = uVar8;
  cVar3 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar3 + 0xa8U & 0xdf) != 0) || (bVar6 = true, (uVar13 >> 5 & 1) == 0)) {
    bVar6 = false;
  }
  if ((bVar6) || ((cVar3 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_50 + uVar14) = 0x30;
    if ((cVar3 == 'X') || (cVar3 == 'A')) {
      uVar12 = 0x58;
    }
    *(undefined1 *)((longlong)&local_50 + uVar14 + 1) = uVar12;
    uVar14 = uVar14 + 2;
  }
  iVar7 = (int)uVar14;
  iVar17 = (*(int *)((longlong)param_1 + 0x2c) - (int)param_1[9]) - iVar7;
  if (((uVar13 & 0xc) == 0) && (uVar8 = param_1[1], uVar14 = uVar15, 0 < iVar17)) {
    while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
           (uVar9 = FUN_18000c97c(0x20,(FILE *)param_1[0x8c],uVar8), (int)uVar9 != -1))) {
      uVar9 = param_1[4];
      *(int *)(param_1 + 4) = (int)uVar9 + 1;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_180008020;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
LAB_180008020:
  puVar2 = param_1 + 0x8c;
  puVar1 = param_1 + 4;
  if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*puVar2 + 8) != 0)) {
    FUN_180008914((longlong *)puVar2,(byte *)&local_50,iVar7,(int *)puVar1,param_1[1]);
  }
  else {
    *(int *)puVar1 = (int)*puVar1 + iVar7;
  }
  if (((((uint)param_1[5] >> 3 & 1) != 0) && (((uint)param_1[5] >> 2 & 1) == 0)) &&
     (uVar8 = param_1[1], uVar14 = uVar15, 0 < iVar17)) {
    while ((((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*puVar2 + 8) == 0)) ||
           (uVar9 = FUN_18000c97c(0x30,(FILE *)*puVar2,uVar8), (int)uVar9 != -1))) {
      uVar9 = *puVar1;
      *(int *)puVar1 = (int)uVar9 + 1;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_1800080c7;
    }
    *(int *)puVar1 = -1;
  }
LAB_1800080c7:
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    puVar2 = param_1 + 0x8c;
    puVar1 = param_1 + 4;
    if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
       (uVar8 = *puVar2, *(longlong *)(uVar8 + 8) != 0)) {
      uVar8 = FUN_180008914((longlong *)puVar2,(byte *)param_1[8],(int)param_1[9],(int *)puVar1,
                            param_1[1]);
    }
    else {
      *(int *)puVar1 = (int)*puVar1 + (int)param_1[9];
    }
  }
  else {
    plVar5 = (longlong *)param_1[1];
    if ((char)plVar5[5] == '\0') {
      FUN_180008800(plVar5);
    }
    puVar16 = (ushort *)param_1[8];
    uVar8 = plVar5[3];
    if (*(int *)(uVar8 + 0xc) == 0xfde9) {
      local_50 = 0;
      if ((int)param_1[9] != 0) {
        puVar1 = param_1 + 4;
        puVar2 = param_1 + 0x8c;
        uVar14 = uVar15;
        do {
          uVar4 = *puVar16;
          puVar16 = puVar16 + 1;
          lVar10 = FUN_18000c698(local_40,(uint)uVar4,(int *)&local_50,param_1[1]);
          if (lVar10 == -1) {
            *(int *)puVar1 = -1;
            uVar8 = 0xffffffffffffffff;
            break;
          }
          if (((*(uint *)(*puVar2 + 0x14) >> 0xc & 1) == 0) ||
             (uVar8 = *puVar2, *(longlong *)(uVar8 + 8) != 0)) {
            uVar8 = FUN_180008914((longlong *)puVar2,local_40,(int)lVar10,(int *)puVar1,param_1[1]);
          }
          else {
            *(int *)puVar1 = (int)*puVar1 + (int)lVar10;
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 != (uint)param_1[9]);
      }
    }
    else if ((int)param_1[9] != 0) {
      puVar1 = param_1 + 0x8c;
      uVar14 = uVar15;
      do {
        local_50 = local_50 & 0xffffffff00000000;
        uVar4 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar7 = FUN_18000c178((int *)&local_50,(undefined1 (*) [32])local_40,6,uVar4,
                              (longlong *)param_1[1]);
        uVar8 = CONCAT44(extraout_var,iVar7);
        if ((iVar7 != 0) || ((int)local_50 == 0)) {
          *(undefined4 *)(param_1 + 4) = 0xffffffff;
          break;
        }
        if (((*(uint *)(*puVar1 + 0x14) >> 0xc & 1) == 0) ||
           (uVar8 = *puVar1, *(longlong *)(uVar8 + 8) != 0)) {
          uVar8 = FUN_180008914((longlong *)puVar1,local_40,(int)local_50,(int *)(param_1 + 4),
                                param_1[1]);
        }
        else {
          *(int *)(param_1 + 4) = (int)param_1[4] + (int)local_50;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 != (uint)param_1[9]);
    }
  }
  if (((-1 < (int)param_1[4]) &&
      (uVar13 = (uint)param_1[5] >> 2, uVar8 = (ulonglong)uVar13, (uVar13 & 1) != 0)) &&
     (uVar14 = param_1[1], 0 < iVar17)) {
    while ((((*(uint *)(param_1[0x8c] + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(param_1[0x8c] + 8) == 0)) ||
           (uVar8 = FUN_18000c97c(0x20,(FILE *)param_1[0x8c],uVar14), (int)uVar8 != -1))) {
      uVar9 = param_1[4];
      uVar13 = (int)uVar9 + 1;
      uVar8 = (ulonglong)uVar13;
      *(uint *)(param_1 + 4) = uVar13;
      if (((int)uVar9 == -2) ||
         (uVar13 = (int)uVar15 + 1, uVar15 = (ulonglong)uVar13, iVar17 <= (int)uVar13))
      goto LAB_1800082d0;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
LAB_1800082d0:
  return CONCAT71((int7)(uVar8 >> 8),1);
}


