// FUN_18000a8b0 @ 18000a8b0

ulonglong FUN_18000a8b0(longlong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_2 & 0xff;
  uVar5 = ((longlong *)param_1[1])[1] - *(longlong *)param_1[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  auVar2 = auVar2 % auVar1;
  uVar5 = uVar5 / uVar4;
  if ((auVar2[0] != '\0') &&
     (uVar3 = (int)uVar4 - auVar2._0_4_, uVar5 = auVar2._0_8_, 0 < (int)uVar3)) {
    uVar4 = (ulonglong)uVar3;
    do {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,0);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar5;
}


