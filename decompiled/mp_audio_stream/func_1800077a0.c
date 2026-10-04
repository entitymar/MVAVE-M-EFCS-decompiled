// FUN_1800077a0 @ 1800077a0

ulonglong FUN_1800077a0(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar4;
  short *psVar5;
  char *pcVar6;
  longlong **pplVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong *local_res8;
  longlong *local_28 [2];
  undefined8 uVar3;
  
  pplVar7 = (longlong **)&DAT_18002f360;
  local_res8 = (longlong *)0x0;
  iVar1 = (**(code **)(param_1 + 0x270))(&DAT_18002f350,0,0x17,&DAT_18002f360,local_28);
  if (iVar1 < 0) {
    uVar3 = FUN_18001cc60(iVar1);
    uVar2 = (uint)uVar3;
    pcVar6 = "[WASAPI] Failed to create IMMDeviceEnumerator.\n";
LAB_18000786a:
    FUN_180025970(*(longlong *)(param_1 + 0x70),1,pcVar6,pplVar7);
    if (uVar2 != 0) {
      return (ulonglong)uVar2;
    }
  }
  else {
    if (param_3 == 0) {
      pplVar7 = &local_res8;
      iVar1 = (**(code **)(*local_28[0] + 0x20))(local_28[0],param_2 == 2,0);
    }
    else {
      pplVar7 = *(longlong ***)(*local_28[0] + 0x28);
      iVar1 = (*(code *)pplVar7)(local_28[0],param_3,&local_res8);
    }
    (**(code **)(*local_28[0] + 0x10))();
    if (iVar1 < 0) {
      uVar3 = FUN_18001cc60(iVar1);
      uVar2 = (uint)uVar3;
      pcVar6 = "[WASAPI] Failed to retrieve IMMDevice.\n";
      goto LAB_18000786a;
    }
  }
  puVar8 = &DAT_18002f360;
  iVar1 = (**(code **)(param_1 + 0x270))(&DAT_18002f350,0,0x17,&DAT_18002f360,local_28);
  plVar9 = local_28[0];
  if (iVar1 < 0) {
    FUN_180025970(*(longlong *)(param_1 + 0x70),1,"[WASAPI] Failed to create device enumerator.",
                  puVar8);
    uVar3 = FUN_18001cc60(iVar1);
    plVar9 = (longlong *)0x0;
    if ((int)uVar3 != 0) {
      uVar4 = FUN_180007f60(param_1,local_res8,(short *)0x0,0,param_4);
      uVar4 = uVar4 & 0xffffffff;
      goto LAB_18000793f;
    }
  }
  psVar5 = (short *)FUN_180006b10(param_1,plVar9,param_2);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar4 = FUN_180007f60(param_1,local_res8,psVar5,0,param_4);
  uVar4 = uVar4 & 0xffffffff;
  if (psVar5 != (short *)0x0) {
    (**(code **)(param_1 + 0x278))(psVar5);
  }
LAB_18000793f:
  (**(code **)(*local_res8 + 0x10))();
  return uVar4;
}


