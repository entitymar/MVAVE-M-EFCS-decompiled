// FUN_1800026a0 @ 1800026a0

undefined8
FUN_1800026a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined1 *param_5,longlong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *param_2 = **(undefined4 **)(param_1 + 0x48);
  uVar4 = 0;
  *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 4);
  *param_4 = 0;
  if (((param_5 != (undefined1 *)0x0) && (param_6 != 0)) &&
     (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 4), uVar3 = (ulonglong)uVar1, uVar1 != 0)) {
    do {
      if (param_6 == 0) {
        return 0;
      }
      uVar2 = FUN_180005500(0,(uint)uVar3,uVar4);
      *param_5 = (char)uVar2;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)uVar3);
  }
  return 0;
}


