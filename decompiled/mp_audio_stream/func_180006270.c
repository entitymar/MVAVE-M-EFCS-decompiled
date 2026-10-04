// FUN_180006270 @ 180006270

undefined8 FUN_180006270(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *local_res8;
  
  *param_4 = 0;
  local_res8 = (longlong *)0x0;
  puVar4 = param_4;
  iVar1 = (**(code **)(param_1 + 0x150))(param_3,&local_res8,0);
  if (iVar1 < 0) {
    FUN_180025970(*(longlong *)(param_1 + 0x70),1,
                  "[DirectSound] DirectSoundCreate() failed for playback device.",puVar4);
    uVar2 = 0xfffffe6f;
  }
  else {
    lVar3 = (**(code **)(param_1 + 0x298))();
    if (lVar3 == 0) {
      lVar3 = (**(code **)(param_1 + 0x2a0))();
    }
    pcVar5 = *(code **)(*local_res8 + 0x30);
    iVar1 = (*pcVar5)(local_res8,lVar3,(param_2 == 1) + '\x02');
    if (iVar1 < 0) {
      FUN_180025970(*(longlong *)(param_1 + 0x70),1,
                    "[DirectSound] IDirectSound_SetCooperateiveLevel() failed for playback device.",
                    pcVar5);
      uVar2 = FUN_18001cc60(iVar1);
    }
    else {
      *param_4 = local_res8;
      uVar2 = 0;
    }
  }
  return uVar2;
}


