// FUN_180002150 @ 180002150

undefined8 FUN_180002150(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_4 != (ulonglong *)0x0) && (*param_4 = 0, param_2 != 0)) {
    uVar1 = (*(uint *)(param_2 + 0xc) * param_3) / (ulonglong)*(uint *)(param_2 + 8);
    uVar2 = uVar1 + 1;
    if (param_3 < ((ulonglong)*(uint *)(param_2 + 0x2c) + *(uint *)(param_2 + 0x24) * uVar1) /
                  (ulonglong)*(uint *)(param_2 + 0xc) + *(uint *)(param_2 + 0x20) * uVar1 +
                  (ulonglong)*(uint *)(param_2 + 0x28)) {
      uVar2 = uVar1;
    }
    *param_4 = uVar2;
    return 0;
  }
  return 0xfffffffe;
}


