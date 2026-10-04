// FUN_180009840 @ 180009840

undefined8 FUN_180009840(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  HMODULE pHVar1;
  undefined8 uVar2;
  FARPROC pFVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar4,4,"Loading library: %s\n","winmm.dll");
  pHVar1 = LoadLibraryA("winmm.dll");
  if (pHVar1 == (HMODULE)0x0) {
    FUN_180025970(lVar4,3,"Failed to load library: %s\n","winmm.dll");
    uVar2 = 0xffffff35;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(HMODULE *)(param_1 + 0x148) = pHVar1;
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutGetNumDevs");
    pFVar3 = GetProcAddress(pHVar1,"waveOutGetNumDevs");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutGetNumDevs");
    }
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    *(FARPROC *)(param_1 + 0x150) = pFVar3;
    lVar4 = *(longlong *)(param_1 + 0x70);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutGetDevCapsA");
    pFVar3 = GetProcAddress(pHVar1,"waveOutGetDevCapsA");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutGetDevCapsA");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x158) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutOpen");
    pFVar3 = GetProcAddress(pHVar1,"waveOutOpen");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutOpen");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x160) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutClose");
    pFVar3 = GetProcAddress(pHVar1,"waveOutClose");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutClose");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x168) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutPrepareHeader");
    pFVar3 = GetProcAddress(pHVar1,"waveOutPrepareHeader");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutPrepareHeader");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x170) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutUnprepareHeader");
    pFVar3 = GetProcAddress(pHVar1,"waveOutUnprepareHeader");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutUnprepareHeader");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x178) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutWrite");
    pFVar3 = GetProcAddress(pHVar1,"waveOutWrite");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutWrite");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x180) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveOutReset");
    pFVar3 = GetProcAddress(pHVar1,"waveOutReset");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveOutReset");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x188) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInGetNumDevs");
    pFVar3 = GetProcAddress(pHVar1,"waveInGetNumDevs");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInGetNumDevs");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 400) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInGetDevCapsA");
    pFVar3 = GetProcAddress(pHVar1,"waveInGetDevCapsA");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInGetDevCapsA");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x198) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInOpen");
    pFVar3 = GetProcAddress(pHVar1,"waveInOpen");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInOpen");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1a0) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInClose");
    pFVar3 = GetProcAddress(pHVar1,"waveInClose");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInClose");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1a8) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInPrepareHeader");
    pFVar3 = GetProcAddress(pHVar1,"waveInPrepareHeader");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInPrepareHeader");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1b0) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInUnprepareHeader");
    pFVar3 = GetProcAddress(pHVar1,"waveInUnprepareHeader");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInUnprepareHeader");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1b8) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInAddBuffer");
    pFVar3 = GetProcAddress(pHVar1,"waveInAddBuffer");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInAddBuffer");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1c0) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInStart");
    pFVar3 = GetProcAddress(pHVar1,"waveInStart");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInStart");
    }
    lVar4 = *(longlong *)(param_1 + 0x70);
    *(FARPROC *)(param_1 + 0x1c8) = pFVar3;
    pHVar1 = *(HMODULE *)(param_1 + 0x148);
    FUN_180025970(lVar4,4,"Loading symbol: %s\n","waveInReset");
    pFVar3 = GetProcAddress(pHVar1,"waveInReset");
    if (pFVar3 == (FARPROC)0x0) {
      FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","waveInReset");
    }
    *(FARPROC *)(param_1 + 0x1d0) = pFVar3;
    *param_3 = FUN_180009840;
    param_3[1] = FUN_18000a630;
    param_3[2] = FUN_180006670;
    param_3[3] = FUN_180007970;
    param_3[4] = FUN_180014260;
    param_3[5] = FUN_180017eb0;
    param_3[6] = FUN_180016fb0;
    param_3[7] = FUN_1800177c0;
    param_3[8] = FUN_180015f50;
    param_3[9] = FUN_1800183e0;
    uVar2 = 0;
    param_3[10] = 0;
  }
  return uVar2;
}


