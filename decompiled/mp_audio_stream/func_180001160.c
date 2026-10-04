// FUN_180001160 @ 180001160

void FUN_180001160(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  uint *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + 0x48) + 0x40);
    }
  }
  if (param_1 != 0) {
    for (; (uint)uVar2 < *(uint *)(param_1 + 0x44); uVar2 = (ulonglong)((uint)uVar2 + 1)) {
      FUN_180021ed0(*(void **)(param_4 + uVar2 * 8),(void *)*param_2,(ulonglong)*param_5,5,uVar1);
    }
  }
  return;
}


