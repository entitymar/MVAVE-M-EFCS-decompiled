// FUN_180013280 @ 180013280

ulonglong FUN_180013280(longlong *param_1,int *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  plVar1 = param_1 + 0x187;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
    param_1[0x18c] = 0;
    param_1[0x18d] = 0;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
  }
  if (*param_2 == 4) {
    return 0xffffff37;
  }
  uVar6 = 0;
  lVar11 = 0xfe;
  if (1 < *param_2 - 2U) goto LAB_1800133f5;
  uVar4 = 2;
  pcVar10 = (char *)(param_4 + 0x18);
  iVar7 = 5;
  if (*(int *)(param_4 + 0xc) != 0) {
    iVar7 = *(int *)(param_4 + 0xc);
  }
  *(int *)(param_4 + 0xc) = iVar7;
  if (*(uint *)(param_4 + 0x10) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_4 + 0x10);
  }
  *(int *)(param_4 + 0x10) = (int)uVar4;
  iVar7 = 48000;
  if (*(int *)(param_4 + 0x14) != 0) {
    iVar7 = *(int *)(param_4 + 0x14);
  }
  *(int *)(param_4 + 0x14) = iVar7;
  if (((*pcVar10 == '\0') && (lVar9 = 0xfe, pcVar10 != (char *)0x0)) &&
     (uVar3 = uVar6, (int)uVar4 != 0)) {
    do {
      uVar8 = (uint)uVar3;
      if (lVar9 == 0) break;
      uVar3 = FUN_180005500(0,(uint)uVar4,uVar8);
      *pcVar10 = (char)uVar3;
      lVar9 = lVar9 + -1;
      pcVar10 = pcVar10 + 1;
      uVar3 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < (uint)uVar4);
  }
  iVar7 = *(int *)(param_4 + 0x14);
  uVar8 = *(uint *)(param_4 + 0x118);
  if (iVar7 == 0) {
    iVar7 = 48000;
  }
  if (uVar8 == 0) {
    uVar8 = (uint)uVar6;
    if (*(int *)(param_4 + 0x11c) == 0) {
      if (param_2[5] == uVar8) {
        if (iVar7 != 0) {
          uVar8 = iVar7 * 10;
LAB_1800133df:
          uVar8 = uVar8 / 1000;
        }
      }
      else if (iVar7 != 0) {
        uVar8 = iVar7 * 100;
        goto LAB_1800133df;
      }
    }
    else if (iVar7 != 0) {
      uVar8 = *(int *)(param_4 + 0x11c) * iVar7;
      goto LAB_1800133df;
    }
  }
  *(uint *)(param_4 + 0x118) = uVar8;
LAB_1800133f5:
  uVar8 = (uint)uVar6;
  if ((*param_2 == 1) || (*param_2 == 3)) {
    pcVar10 = (char *)(param_3 + 0x18);
    iVar7 = 5;
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar7 = *(int *)(param_3 + 0xc);
    }
    *(int *)(param_3 + 0xc) = iVar7;
    uVar12 = 2;
    if (*(uint *)(param_3 + 0x10) != 0) {
      uVar12 = *(uint *)(param_3 + 0x10);
    }
    *(uint *)(param_3 + 0x10) = uVar12;
    iVar7 = 48000;
    if (*(int *)(param_3 + 0x14) != 0) {
      iVar7 = *(int *)(param_3 + 0x14);
    }
    *(int *)(param_3 + 0x14) = iVar7;
    if (((*pcVar10 == (char)uVar6) && (pcVar10 != (char *)0x0)) && (uVar12 != 0)) {
      uVar4 = uVar6 & 0xffffffff;
      do {
        uVar8 = (uint)uVar6;
        uVar13 = (uint)uVar4;
        if (lVar11 == 0) break;
        uVar4 = FUN_180005500(0,uVar12,uVar13);
        uVar8 = (uint)uVar6;
        *pcVar10 = (char)uVar4;
        lVar11 = lVar11 + -1;
        pcVar10 = pcVar10 + 1;
        uVar4 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < uVar12);
    }
    iVar7 = *(int *)(param_3 + 0x14);
    uVar12 = *(uint *)(param_3 + 0x118);
    if (iVar7 == 0) {
      iVar7 = 48000;
    }
    if (uVar12 == 0) {
      uVar12 = uVar8;
      if (*(int *)(param_3 + 0x11c) == 0) {
        if (param_2[5] == uVar8) {
          if (iVar7 != 0) {
            uVar12 = (uint)(iVar7 * 10) / 1000;
          }
        }
        else if (iVar7 != 0) {
          uVar12 = (uint)(iVar7 * 100) / 1000;
        }
      }
      else if (iVar7 != 0) {
        uVar12 = (uint)(*(int *)(param_3 + 0x11c) * iVar7) / 1000;
      }
    }
    *(uint *)(param_3 + 0x118) = uVar12;
  }
  if (param_1 + 0x188 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[0x188] = (longlong)pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar6 = FUN_18001cb40(DVar2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  if (param_1 + 0x189 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[0x189] = (longlong)pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    DVar2 = GetLastError();
    uVar6 = FUN_18001cb40(DVar2);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  if (param_1 + 0x18a != (longlong *)0x0) {
    pvVar5 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,1,0x7fffffff,(LPCWSTR)0x0);
    param_1[0x18a] = (longlong)pvVar5;
    if (pvVar5 == (HANDLE)0x0) {
      DVar2 = GetLastError();
      uVar6 = FUN_18001cb40(DVar2);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = FUN_18001d680(plVar1,*(undefined4 *)(*param_1 + 0xe8),0,0x180017990,(longlong)param_1,
                          (longlong *)(*param_1 + 0x100));
    return uVar6;
  }
  return 0xfffffffe;
}


