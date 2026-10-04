// FUN_180007f60 @ 180007f60

ulonglong FUN_180007f60(longlong param_1,longlong *param_2,short *param_3,int param_4,
                       longlong *param_5)

{
  short *psVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_28;
  LPCWSTR pWStack_20;
  undefined8 local_18;
  
  plVar3 = param_5;
  uVar5 = FUN_180006b90(param_1,param_2,param_5);
  if (((int)uVar5 == 0) && (param_3 != (short *)0x0)) {
    sVar2 = (short)*plVar3;
    plVar7 = plVar3;
    while ((sVar2 != 0 && (sVar2 == *param_3))) {
      psVar1 = (short *)((longlong)plVar7 + 2);
      plVar7 = (longlong *)((longlong)plVar7 + 2);
      param_3 = param_3 + 1;
      sVar2 = *psVar1;
    }
    if ((short)*plVar7 == *param_3) {
      *(undefined4 *)(plVar3 + 0x40) = 1;
    }
  }
  iVar4 = (**(code **)(*param_2 + 0x20))(param_2,0,&param_5);
  lVar8 = 0;
  if (-1 < iVar4) {
    local_18 = 0;
    local_28 = 0;
    pWStack_20 = (LPCWSTR)0x0;
    iVar4 = (**(code **)(*param_5 + 0x28))(param_5,&DAT_18002f2b0,&local_28);
    if (-1 < iVar4) {
      WideCharToMultiByte(0xfde9,0,pWStack_20,-1,(LPSTR)(plVar3 + 0x20),0x100,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      (**(code **)(param_1 + 0x280))(&local_28);
    }
    (**(code **)(*param_5 + 0x10))();
  }
  if (param_4 == 0) {
    uVar5 = 0;
    iVar4 = (**(code **)(*param_2 + 0x18))(param_2,&DAT_18002f2f0,0x17,0,&param_5);
    if (iVar4 < 0) {
      if (param_1 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x70);
      }
      FUN_180025970(lVar8,1,"[WASAPI] Failed to activate audio client for device info retrieval.",
                    uVar5);
      uVar6 = FUN_18001cc60(iVar4);
    }
    else {
      uVar6 = FUN_180007b40(param_1,param_2,param_5,(longlong)plVar3);
      uVar6 = uVar6 & 0xffffffff;
      (**(code **)(*param_5 + 0x10))();
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


