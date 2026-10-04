// FUN_1800092b0 @ 1800092b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800092b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  DWORD DVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  INT_PTR IVar9;
  HANDLE pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *lpParameter;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStackY_1a8 [32];
  DWORD local_178 [4];
  undefined4 local_168;
  undefined8 local_164;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_1a8;
  lVar14 = 0;
  lVar13 = lVar14;
  if (param_1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar13,4,"Loading library: %s\n","kernel32.dll");
  pHVar6 = LoadLibraryA("kernel32.dll");
  if (pHVar6 == (HMODULE)0x0) {
    FUN_180025970(lVar13,3,"Failed to load library: %s\n","kernel32.dll");
    return 0xffffff35;
  }
  lVar13 = lVar14;
  if (param_1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar13,4,"Loading symbol: %s\n","VerifyVersionInfoW");
  pFVar7 = GetProcAddress(pHVar6,"VerifyVersionInfoW");
  if (pFVar7 == (FARPROC)0x0) {
    FUN_180025970(lVar13,2,"Failed to load symbol: %s\n","VerifyVersionInfoW");
  }
  lVar13 = lVar14;
  if (param_1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar13,4,"Loading symbol: %s\n","VerSetConditionMask");
  pFVar8 = GetProcAddress(pHVar6,"VerSetConditionMask");
  if (pFVar8 == (FARPROC)0x0) {
    FUN_180025970(lVar13,2,"Failed to load symbol: %s\n","VerSetConditionMask");
  }
  if ((pFVar7 == (FARPROC)0x0) || (pFVar8 == (FARPROC)0x0)) {
LAB_180009827:
    FreeLibrary(pHVar6);
    return 0xffffff35;
  }
  uVar15 = 0x11c;
  memset(&local_168,0,0x11c);
  local_168 = 0x11c;
  uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),3);
  local_54 = 1;
  local_164 = 6;
  IVar9 = (*pFVar8)(0,2,uVar15);
  uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),3);
  IVar9 = (*pFVar8)(IVar9,1,uVar15);
  IVar9 = (*pFVar8)(IVar9,0x20,CONCAT71((int7)((ulonglong)uVar15 >> 8),3));
  IVar9 = (*pFVar7)(&local_168,0x23,IVar9);
  if ((int)IVar9 == 0) goto LAB_180009827;
  FreeLibrary(pHVar6);
  _Dst = (undefined8 *)(param_1 + 0x148);
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,0x108);
  }
  lVar13 = lVar14;
  if (param_1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  pHVar6 = FUN_1800186a0(lVar13,"avrt.dll");
  *(HMODULE *)(param_1 + 0x228) = pHVar6;
  if (pHVar6 != (HMODULE)0x0) {
    if (param_1 == 0) {
      pFVar7 = FUN_180018710(0,pHVar6,"AvSetMmThreadCharacteristicsA");
    }
    else {
      pFVar7 = FUN_180018710(*(longlong *)(param_1 + 0x70),pHVar6,"AvSetMmThreadCharacteristicsA");
      lVar14 = *(longlong *)(param_1 + 0x70);
    }
    *(FARPROC *)(param_1 + 0x230) = pFVar7;
    pFVar7 = FUN_180018710(lVar14,*(HMODULE *)(param_1 + 0x228),"AvRevertMmThreadCharacteristics");
    *(FARPROC *)(param_1 + 0x238) = pFVar7;
    if ((*(longlong *)(param_1 + 0x230) == 0) || (pFVar7 == (FARPROC)0x0)) {
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      FreeLibrary(*(HMODULE *)(param_1 + 0x228));
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x150);
  if (puVar2 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  pvVar10 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
  *puVar2 = pvVar10;
  if (pvVar10 == (HANDLE)0x0) {
    DVar5 = GetLastError();
    uVar11 = FUN_18001cb40(DVar5);
    if ((int)uVar11 != 0) {
      return uVar11 & 0xffffffff;
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x158);
  if (puVar3 == (undefined8 *)0x0) {
    uVar11 = 0xfffffffe;
LAB_1800095ca:
    if ((undefined8 *)(param_1 + 0x150) == (undefined8 *)0x0) {
      return uVar11;
    }
    pvVar10 = *(HANDLE *)(param_1 + 0x150);
    goto LAB_1800095d7;
  }
  pvVar10 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCWSTR)0x0);
  *puVar3 = pvVar10;
  if (pvVar10 == (HANDLE)0x0) {
    DVar5 = GetLastError();
    uVar12 = FUN_18001cb40(DVar5);
    uVar11 = uVar12 & 0xffffffff;
    if ((int)uVar12 != 0) goto LAB_1800095ca;
  }
  plVar4 = (longlong *)(param_1 + 0x100);
  if (_Dst == (undefined8 *)0x0) {
    uVar11 = 0xfffffffe;
LAB_180009811:
    CloseHandle((HANDLE)*puVar3);
    pvVar10 = (HANDLE)*puVar2;
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      lpParameter = malloc(0x30);
LAB_18000964b:
      if (lpParameter != (undefined8 *)0x0) {
        lpParameter[1] = param_1;
        *lpParameter = FUN_180005fe0;
        plVar1 = lpParameter + 2;
        if (plVar1 != (longlong *)0x0) {
          if (plVar4 == (longlong *)0x0) {
LAB_1800096c7:
            *plVar1 = 0;
            lpParameter[3] = malloc;
            lpParameter[4] = &DAT_180002a20;
            lpParameter[5] = &DAT_180002a00;
          }
          else {
            if (*plVar4 == 0) {
              if (*(longlong *)(param_1 + 0x118) == 0) {
                if ((*(longlong *)(param_1 + 0x108) == 0) && (*(longlong *)(param_1 + 0x110) == 0))
                goto LAB_1800096c7;
                goto LAB_1800096a2;
              }
            }
            else {
LAB_1800096a2:
              if (*(longlong *)(param_1 + 0x118) == 0) goto LAB_1800096ef;
            }
            if ((*(longlong *)(param_1 + 0x108) != 0) || (*(longlong *)(param_1 + 0x110) != 0)) {
              uVar15 = *(undefined8 *)(param_1 + 0x108);
              *plVar1 = *plVar4;
              lpParameter[3] = uVar15;
              uVar15 = *(undefined8 *)(param_1 + 0x118);
              lpParameter[4] = *(undefined8 *)(param_1 + 0x110);
              lpParameter[5] = uVar15;
            }
          }
        }
LAB_1800096ef:
        pvVar10 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18001d8d0,lpParameter,0,local_178);
        *_Dst = pvVar10;
        if (pvVar10 != (HANDLE)0x0) {
          SetThreadPriority(pvVar10,0);
LAB_180009785:
          param_3[10] = 0;
          *param_3 = FUN_1800092b0;
          param_3[1] = FUN_18000a6b0;
          param_3[2] = FUN_1800065a0;
          param_3[3] = FUN_1800077a0;
          param_3[4] = FUN_180013610;
          param_3[5] = FUN_180017d90;
          param_3[6] = FUN_180016e70;
          param_3[7] = FUN_180017370;
          param_3[8] = FUN_180015ae0;
          param_3[9] = FUN_1800180c0;
          param_3[0xb] = FUN_180011a00;
          return 0;
        }
        DVar5 = GetLastError();
        uVar12 = FUN_18001cb40(DVar5);
        uVar11 = uVar12 & 0xffffffff;
        if ((int)uVar12 == 0) goto LAB_180009785;
        if (plVar4 == (longlong *)0x0) {
          free(lpParameter);
          CloseHandle((HANDLE)*puVar3);
          pvVar10 = (HANDLE)*puVar2;
          goto LAB_1800095d7;
        }
        if (*(code **)(param_1 + 0x118) != (code *)0x0) {
          (**(code **)(param_1 + 0x118))(lpParameter,*plVar4);
          CloseHandle((HANDLE)*puVar3);
          pvVar10 = (HANDLE)*puVar2;
          goto LAB_1800095d7;
        }
        goto LAB_180009811;
      }
    }
    else if (*(code **)(param_1 + 0x108) != (code *)0x0) {
      lpParameter = (undefined8 *)(**(code **)(param_1 + 0x108))();
      goto LAB_18000964b;
    }
    uVar11 = 0xfffffffc;
    CloseHandle((HANDLE)*puVar3);
    pvVar10 = (HANDLE)*puVar2;
  }
LAB_1800095d7:
  CloseHandle(pvVar10);
  return uVar11;
}


