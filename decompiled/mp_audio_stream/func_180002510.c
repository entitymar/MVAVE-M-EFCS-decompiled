// FUN_180002510 @ 180002510

undefined8
FUN_180002510(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined1 *param_5,longlong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x48);
  *param_3 = *(undefined4 *)(param_1 + 0x4c);
  *param_4 = *(undefined4 *)(param_1 + 0x50);
  if ((param_5 != (undefined1 *)0x0) && (param_6 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x4c);
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar4 = 0, uVar1 != 0)) {
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
  }
  return 0;
}


