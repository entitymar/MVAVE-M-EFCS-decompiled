// FUN_180002cd0 @ 180002cd0

undefined8 * FUN_180002cd0(undefined8 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Memory;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  lVar3 = param_1[2];
  iVar2 = *(int *)(param_1 + 3);
  *param_1 = _anon_5D82C4E7::DeviceManagerPlugin::vftable;
  local_10 = *(longlong **)(lVar3 + 0x40);
  plVar5 = (longlong *)local_10[1];
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  local_18 = local_10;
  plVar4 = plVar5;
  while (cVar1 == '\0') {
    if ((int)plVar4[4] < iVar2) {
      plVar4 = plVar4 + 2;
    }
    else {
      local_18 = plVar4;
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') && (iVar2 < (int)plVar4[4])) {
        local_10 = plVar4;
      }
    }
    plVar4 = (longlong *)*plVar4;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar5 = (longlong *)*local_10;
  }
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  while (cVar1 == '\0') {
    plVar4 = plVar5;
    if ((int)plVar5[4] <= iVar2) {
      plVar5 = plVar5 + 2;
      plVar4 = local_10;
    }
    plVar5 = (longlong *)*plVar5;
    local_10 = plVar4;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  FUN_180004540((longlong *)(lVar3 + 0x40),(longlong *)&local_18);
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    FlutterDesktopPluginRegistrarUnregisterTopLevelWindowProcDelegate
              (*(undefined8 *)(lVar3 + 8),FUN_180003940);
  }
  _Memory = (void *)param_1[1];
  if (_Memory != (void *)0x0) {
    FUN_1800050d0((longlong *)((longlong)_Memory + 8));
    free(_Memory);
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


