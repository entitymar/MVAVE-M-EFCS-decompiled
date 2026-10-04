// FUN_180002e20 @ 180002e20

undefined8 * FUN_180002e20(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = flutter::PluginRegistrarWindows::vftable;
  FUN_180006dd0((longlong)param_1);
  puVar1 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_180001950(param_1 + 8,param_1 + 8,*(longlong **)(param_1[8] + 8));
  free((void *)param_1[8]);
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_180006b20(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


