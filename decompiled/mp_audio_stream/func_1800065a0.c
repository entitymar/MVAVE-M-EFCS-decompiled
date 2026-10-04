// FUN_1800065a0 @ 1800065a0

undefined8 FUN_1800065a0(longlong param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong *local_res8;
  
  puVar3 = &DAT_18002f360;
  iVar1 = (**(code **)(param_1 + 0x270))(&DAT_18002f350,0,0x17,&DAT_18002f360,&local_res8);
  if (iVar1 < 0) {
    FUN_180025970(*(longlong *)(param_1 + 0x70),1,"[WASAPI] Failed to create device enumerator.",
                  puVar3);
    uVar2 = FUN_18001cc60(iVar1);
  }
  else {
    FUN_1800068a0(param_1,local_res8,1,param_2,param_3);
    FUN_1800068a0(param_1,local_res8,2,param_2,param_3);
    (**(code **)(*local_res8 + 0x10))();
    uVar2 = 0;
  }
  return uVar2;
}


