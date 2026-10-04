// FUN_180001020 @ 180001020

undefined8
FUN_180001020(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined1 *param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x48);
  *param_3 = *(undefined4 *)(param_1 + 0x4c);
  *param_4 = 0;
  if (((param_5 != (undefined1 *)0x0) && (param_6 != 0)) &&
     (uVar2 = (ulonglong)*(uint *)(param_1 + 0x4c), *(uint *)(param_1 + 0x4c) != 0)) {
    do {
      if (param_6 == 0) {
        return 0;
      }
      uVar1 = FUN_180005500(0,(uint)uVar2,uVar3);
      *param_5 = (char)uVar1;
      param_6 = param_6 + -1;
      param_5 = param_5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)uVar2);
  }
  return 0;
}


