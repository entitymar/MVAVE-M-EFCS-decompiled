// FUN_180008750 @ 180008750

undefined8 FUN_180008750(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar3,4,"Loading library: %s\n","dsound.dll");
  pHVar1 = LoadLibraryA("dsound.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_180025970(lVar3,3,"Failed to load library: %s\n","dsound.dll");
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x70);
    *(HMODULE *)(param_1 + 0x148) = pHVar1;
    FUN_180025970(lVar3,4,"Loading symbol: %s\n","DirectSoundCreate");
    pFVar2 = GetProcAddress(pHVar1,"DirectSoundCreate");
    if (pFVar2 == (FARPROC)0x0) {
      FUN_180025970(lVar3,2,"Failed to load symbol: %s\n","DirectSoundCreate");
    }
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    *(FARPROC *)(param_1 + 0x150) = pFVar2;
    lVar3 = *(longlong *)(param_1 + 0x70);
    FUN_180025970(lVar3,4,"Loading symbol: %s\n","DirectSoundEnumerateA");
    pFVar2 = GetProcAddress(pHVar1,"DirectSoundEnumerateA");
    if (pFVar2 == (FARPROC)0x0) {
      FUN_180025970(lVar3,2,"Failed to load symbol: %s\n","DirectSoundEnumerateA");
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x158) = pFVar2;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar3,4,"Loading symbol: %s\n","DirectSoundCaptureCreate");
    pFVar2 = GetProcAddress(pHVar1,"DirectSoundCaptureCreate");
    if (pFVar2 == (FARPROC)0x0) {
      FUN_180025970(lVar3,2,"Failed to load symbol: %s\n","DirectSoundCaptureCreate");
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x160) = pFVar2;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar3,4,"Loading symbol: %s\n","DirectSoundCaptureEnumerateA");
    pFVar2 = GetProcAddress(pHVar1,"DirectSoundCaptureEnumerateA");
    if (pFVar2 == (FARPROC)0x0) {
      FUN_180025970(lVar3,2,"Failed to load symbol: %s\n","DirectSoundCaptureEnumerateA");
    }
    *(FARPROC *)(param_1 + 0x168) = pFVar2;
    if ((((*(longlong *)(param_1 + 0x150) != 0) && (*(longlong *)(param_1 + 0x158) != 0)) &&
        (*(longlong *)(param_1 + 0x160) != 0)) && (pFVar2 != (FARPROC)0x0)) {
      param_3[6] = 0;
      *param_3 = FUN_180008750;
      param_3[1] = FUN_18000a630;
      param_3[2] = FUN_180006350;
      param_3[3] = FUN_180006c60;
      param_3[4] = FUN_180011bf0;
      param_3[5] = FUN_180017b70;
      param_3[10] = FUN_1800100c0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      return 0;
    }
  }
  return 0xffffff33;
}


