// FUN_18001d680 @ 18001d680

ulonglong FUN_18001d680(undefined8 *param_1,undefined4 param_2,SIZE_T param_3,longlong param_4,
                       longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  DWORD DVar5;
  longlong *lpParameter;
  HANDLE hThread;
  ulonglong uVar6;
  int nPriority;
  ulonglong uVar7;
  DWORD local_res8 [2];
  
  if ((param_1 == (undefined8 *)0x0) || (param_4 == 0)) {
    return 0xfffffffe;
  }
  if (param_6 == (longlong *)0x0) {
    lpParameter = malloc(0x30);
  }
  else {
    if ((code *)param_6[1] == (code *)0x0) {
      return 0xfffffffc;
    }
    lpParameter = (longlong *)(*(code *)param_6[1])(0x30,*param_6);
  }
  if (lpParameter == (longlong *)0x0) {
    return 0xfffffffc;
  }
  lpParameter[1] = param_5;
  plVar1 = lpParameter + 2;
  *lpParameter = param_4;
  nPriority = 0;
  if (plVar1 == (longlong *)0x0) goto LAB_18001d77e;
  if (param_6 == (longlong *)0x0) {
LAB_18001d75a:
    *plVar1 = 0;
    lpParameter[3] = (longlong)malloc;
    lpParameter[4] = (longlong)&DAT_180002a20;
    lpParameter[5] = (longlong)&DAT_180002a00;
    goto LAB_18001d77e;
  }
  if (*param_6 == 0) {
    if (param_6[3] == 0) {
      if ((param_6[1] == 0) && (param_6[2] == 0)) goto LAB_18001d75a;
      goto LAB_18001d738;
    }
  }
  else {
LAB_18001d738:
    if (param_6[3] == 0) goto LAB_18001d77e;
  }
  if ((param_6[1] != 0) || (param_6[2] != 0)) {
    uVar2 = *(undefined4 *)((longlong)param_6 + 4);
    lVar4 = param_6[1];
    uVar3 = *(undefined4 *)((longlong)param_6 + 0xc);
    *(int *)plVar1 = (int)*param_6;
    *(undefined4 *)((longlong)lpParameter + 0x14) = uVar2;
    *(int *)(lpParameter + 3) = (int)lVar4;
    *(undefined4 *)((longlong)lpParameter + 0x1c) = uVar3;
    lVar4 = param_6[3];
    lpParameter[4] = param_6[2];
    lpParameter[5] = lVar4;
  }
LAB_18001d77e:
  hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_3,FUN_18001d8d0,lpParameter,0,local_res8);
  *param_1 = hThread;
  if (hThread == (HANDLE)0x0) {
    DVar5 = GetLastError();
    uVar6 = FUN_18001cb40(DVar5);
    uVar7 = uVar6 & 0xffffffff;
    if ((int)uVar6 != 0) {
      if (param_6 == (longlong *)0x0) {
        free(lpParameter);
        return uVar7;
      }
      if ((code *)param_6[3] != (code *)0x0) {
        (*(code *)param_6[3])(lpParameter,*param_6);
        return uVar7;
      }
      return uVar7;
    }
  }
  else {
    switch(param_2) {
    case 0:
      SetThreadPriority(hThread,2);
      return 0;
    case 1:
      nPriority = 0xf;
      break;
    case 0xfffffffb:
      SetThreadPriority(hThread,-0xf);
      return 0;
    case 0xfffffffc:
      SetThreadPriority(hThread,-2);
      return 0;
    case 0xfffffffd:
      SetThreadPriority(hThread,-1);
      return 0;
    case 0xffffffff:
      SetThreadPriority(hThread,1);
      return 0;
    }
    SetThreadPriority(hThread,nPriority);
  }
  return 0;
}


