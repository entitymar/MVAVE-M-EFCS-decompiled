// FUN_1800061d0 @ 1800061d0

undefined8 FUN_1800061d0(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18 [2];
  
  if (param_2 == 1) {
    return 0xffffff36;
  }
  *param_4 = 0;
  local_18[0] = 0;
  iVar1 = (**(code **)(param_1 + 0x160))(param_3,local_18,0);
  if (iVar1 < 0) {
    FUN_180025970(*(longlong *)(param_1 + 0x70),1,
                  "[DirectSound] DirectSoundCaptureCreate() failed for capture device.",param_3);
    uVar2 = FUN_18001cc60(iVar1);
    return uVar2;
  }
  *param_4 = local_18[0];
  return 0;
}


