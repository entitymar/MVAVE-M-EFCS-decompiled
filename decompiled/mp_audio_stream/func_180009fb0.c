// FUN_180009fb0 @ 180009fb0

undefined8 FUN_180009fb0(longlong param_1)

{
  undefined4 uVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x70);
  }
  FUN_180025970(lVar4,4,"Loading library: %s\n","user32.dll");
  pHVar2 = LoadLibraryA("user32.dll");
  if (pHVar2 == (HMODULE)0x0) {
    FUN_180025970(lVar4,3,"Failed to load library: %s\n","user32.dll");
    *(undefined8 *)(param_1 + 0x290) = 0;
    return 0xfffffe70;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(HMODULE *)(param_1 + 0x290) = pHVar2;
  FUN_180025970(lVar4,4,"Loading symbol: %s\n","GetForegroundWindow");
  pFVar3 = GetProcAddress(pHVar2,"GetForegroundWindow");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","GetForegroundWindow");
  }
  pHVar2 = *(HMODULE *)(param_1 + 0x290);
  *(FARPROC *)(param_1 + 0x298) = pFVar3;
  lVar4 = *(longlong *)(param_1 + 0x70);
  FUN_180025970(lVar4,4,"Loading symbol: %s\n","GetDesktopWindow");
  pFVar3 = GetProcAddress(pHVar2,"GetDesktopWindow");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","GetDesktopWindow");
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x2a0) = pFVar3;
  FUN_180025970(lVar4,4,"Loading library: %s\n","advapi32.dll");
  pHVar2 = LoadLibraryA("advapi32.dll");
  if (pHVar2 == (HMODULE)0x0) {
    FUN_180025970(lVar4,3,"Failed to load library: %s\n","advapi32.dll");
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    return 0xfffffe70;
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(HMODULE *)(param_1 + 0x2a8) = pHVar2;
  FUN_180025970(lVar4,4,"Loading symbol: %s\n","RegOpenKeyExA");
  pFVar3 = GetProcAddress(pHVar2,"RegOpenKeyExA");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","RegOpenKeyExA");
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x2b0) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x2a8);
  FUN_180025970(lVar4,4,"Loading symbol: %s\n","RegCloseKey");
  pFVar3 = GetProcAddress(pHVar2,"RegCloseKey");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","RegCloseKey");
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x2b8) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x2a8);
  FUN_180025970(lVar4,4,"Loading symbol: %s\n","RegQueryValueExA");
  pFVar3 = GetProcAddress(pHVar2,"RegQueryValueExA");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar4,2,"Failed to load symbol: %s\n","RegQueryValueExA");
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x2c0) = pFVar3;
  FUN_180025970(lVar4,4,"Loading library: %s\n","ole32.dll");
  pHVar2 = LoadLibraryA("ole32.dll");
  if (pHVar2 == (HMODULE)0x0) {
    FUN_180025970(lVar4,3,"Failed to load library: %s\n","ole32.dll");
    *(undefined8 *)(param_1 + 0x250) = 0;
    return 0xfffffe70;
  }
  *(HMODULE *)(param_1 + 0x250) = pHVar2;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),pHVar2,"CoInitialize");
  *(FARPROC *)(param_1 + 600) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),
                         "CoInitializeEx");
  *(FARPROC *)(param_1 + 0x260) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),
                         "CoUninitialize");
  *(FARPROC *)(param_1 + 0x268) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),
                         "CoCreateInstance");
  *(FARPROC *)(param_1 + 0x270) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),"CoTaskMemFree"
                        );
  *(FARPROC *)(param_1 + 0x278) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),
                         "PropVariantClear");
  *(FARPROC *)(param_1 + 0x280) = pFVar3;
  pFVar3 = FUN_180018710(*(longlong *)(param_1 + 0x70),*(HMODULE *)(param_1 + 0x250),
                         "StringFromGUID2");
  *(FARPROC *)(param_1 + 0x288) = pFVar3;
  if (*(code **)(param_1 + 0x260) == (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 600))(0);
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x260))(0,0);
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar1;
  return 0;
}


