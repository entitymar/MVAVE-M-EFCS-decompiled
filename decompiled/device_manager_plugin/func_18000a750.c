// FUN_18000a750 @ 18000a750

ulonglong FUN_18000a750(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar6 = param_2 & 0xff;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  uVar5 = SUB168(auVar3 % auVar2,0);
  uVar4 = uVar1 / uVar6;
  if (SUB161(auVar3 % auVar2,0) != '\0') {
    *(ulonglong *)(param_1 + 0x18) = (uVar6 - uVar5) + uVar1;
    uVar4 = uVar5;
  }
  return uVar4;
}


