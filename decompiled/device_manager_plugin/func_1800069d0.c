// FUN_1800069d0 @ 1800069d0

undefined8 * FUN_1800069d0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  *param_1 = flutter::PluginRegistrar::vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = FUN_18000b2a8(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[4] = lVar1;
  uVar2 = FlutterDesktopPluginRegistrarGetMessenger(param_1[1]);
  puVar3 = (undefined8 *)FUN_18000b2a8(0x20);
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = FUN_180005840(puVar3,uVar2);
  }
  puVar3 = (undefined8 *)param_1[2];
  param_1[2] = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  uVar2 = FlutterDesktopRegistrarGetTextureRegistrar(param_1[1]);
  puVar4 = (undefined8 *)FUN_18000b2a8(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = FUN_180005900(puVar4,uVar2);
  }
  puVar4 = (undefined8 *)param_1[3];
  param_1[3] = puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return param_1;
}


