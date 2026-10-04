// FUN_180006b20 @ 180006b20

void FUN_180006b20(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[4];
  *param_1 = flutter::PluginRegistrar::vftable;
  FUN_180006950(param_1 + 4,param_1 + 4,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  param_1[5] = 0;
  puVar2 = (undefined8 *)param_1[2];
  param_1[2] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_180006950(param_1 + 4,param_1 + 4,*(longlong **)(param_1[4] + 8));
  free((void *)param_1[4]);
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}


