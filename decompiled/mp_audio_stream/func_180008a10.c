// FUN_180008a10 @ 180008a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008a10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  LPCSTR lpLibFileName;
  void *_Memory;
  int iVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  char *local_160 [3];
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_188;
  local_160[0] = "libjack.dll";
  local_160[1] = "libjack64.dll";
  uVar6 = 0;
  while( true ) {
    if (param_1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    lpLibFileName = local_160[uVar6];
    FUN_180025970(lVar5,4,"Loading library: %s\n",lpLibFileName);
    pHVar2 = LoadLibraryA(lpLibFileName);
    if (pHVar2 != (HMODULE)0x0) break;
    FUN_180025970(lVar5,3,"Failed to load library: %s\n",lpLibFileName);
    uVar6 = uVar6 + 1;
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (1 < uVar6) {
      return 0xffffff35;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(HMODULE *)(param_1 + 0x148) = pHVar2;
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_client_open");
  pFVar3 = GetProcAddress(pHVar2,"jack_client_open");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_client_open");
  }
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  *(FARPROC *)(param_1 + 0x150) = pFVar3;
  lVar5 = *(longlong *)(param_1 + 0x70);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_client_close");
  pFVar3 = GetProcAddress(pHVar2,"jack_client_close");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_client_close");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x158) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_client_name_size");
  pFVar3 = GetProcAddress(pHVar2,"jack_client_name_size");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_client_name_size");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x160) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_set_process_callback");
  pFVar3 = GetProcAddress(pHVar2,"jack_set_process_callback");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_set_process_callback");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x168) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_set_buffer_size_callback");
  pFVar3 = GetProcAddress(pHVar2,"jack_set_buffer_size_callback");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_set_buffer_size_callback");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x170) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_on_shutdown");
  pFVar3 = GetProcAddress(pHVar2,"jack_on_shutdown");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_on_shutdown");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x178) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_get_sample_rate");
  pFVar3 = GetProcAddress(pHVar2,"jack_get_sample_rate");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_get_sample_rate");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x180) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_get_buffer_size");
  pFVar3 = GetProcAddress(pHVar2,"jack_get_buffer_size");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_get_buffer_size");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x188) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_get_ports");
  pFVar3 = GetProcAddress(pHVar2,"jack_get_ports");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_get_ports");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 400) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_activate");
  pFVar3 = GetProcAddress(pHVar2,"jack_activate");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_activate");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x198) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_deactivate");
  pFVar3 = GetProcAddress(pHVar2,"jack_deactivate");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_deactivate");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x1a0) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_connect");
  pFVar3 = GetProcAddress(pHVar2,"jack_connect");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_connect");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x1a8) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_port_register");
  pFVar3 = GetProcAddress(pHVar2,"jack_port_register");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_port_register");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x1b0) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_port_name");
  pFVar3 = GetProcAddress(pHVar2,"jack_port_name");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_port_name");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x1b8) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_port_get_buffer");
  pFVar3 = GetProcAddress(pHVar2,"jack_port_get_buffer");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_port_get_buffer");
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(FARPROC *)(param_1 + 0x1c0) = pFVar3;
  pHVar2 = *(HMODULE *)(param_1 + 0x148);
  FUN_180025970(lVar5,4,"Loading symbol: %s\n","jack_free");
  pFVar3 = GetProcAddress(pHVar2,"jack_free");
  if (pFVar3 == (FARPROC)0x0) {
    FUN_180025970(lVar5,2,"Failed to load symbol: %s\n","jack_free");
  }
  *(FARPROC *)(param_1 + 0x1c8) = pFVar3;
  if (*(char **)(param_2 + 0x70) != (char *)0x0) {
    pcVar4 = FUN_18000a760(*(char **)(param_2 + 0x70),(undefined8 *)(param_1 + 0x100));
    *(char **)(param_1 + 0x1d0) = pcVar4;
  }
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x78);
  iVar1 = (**(code **)(param_1 + 0x160))();
  uVar6 = (ulonglong)iVar1;
  pcVar4 = "miniaudio";
  if (*(char **)(param_1 + 0x1d0) != (char *)0x0) {
    pcVar4 = *(char **)(param_1 + 0x1d0);
  }
  if (0x100 < uVar6) {
    uVar6 = 0x100;
  }
  FUN_18001d5f0(local_148,uVar6,(longlong)pcVar4,0xffffffffffffffff);
  lVar5 = (**(code **)(param_1 + 0x150))(local_148,*(int *)(param_1 + 0x1d8) == 0,local_168,0);
  if (lVar5 == 0) {
    _Memory = *(void **)(param_1 + 0x1d0);
    if (_Memory != (void *)0x0) {
      if ((undefined8 *)(param_1 + 0x100) == (undefined8 *)0x0) {
        free(_Memory);
      }
      else if (*(code **)(param_1 + 0x118) != (code *)0x0) {
        (**(code **)(param_1 + 0x118))(_Memory,*(undefined8 *)(param_1 + 0x100));
      }
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x148));
    return 0xffffff35;
  }
  (**(code **)(param_1 + 0x158))(lVar5);
  param_3[8] = 0;
  *param_3 = FUN_180008a10;
  param_3[1] = FUN_18000a650;
  param_3[2] = FUN_1800063c0;
  param_3[3] = FUN_180007530;
  param_3[4] = FUN_180012700;
  param_3[5] = FUN_180017bf0;
  param_3[6] = FUN_1800169f0;
  param_3[7] = FUN_180017240;
  param_3[9] = 0;
  param_3[10] = 0;
  return 0;
}


