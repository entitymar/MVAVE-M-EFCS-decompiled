// FUN_1800258b0 @ 1800258b0

undefined8 FUN_1800258b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x68);
    if (puVar1 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      do {
        pcVar2 = *(code **)(param_1 + (ulonglong)uVar3 * 0x10);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(*(undefined8 *)(param_1 + 8 + (ulonglong)uVar3 * 0x10),param_2,param_3);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x40));
    }
    if (puVar1 != (undefined8 *)0x0) {
      SetEvent((HANDLE)*puVar1);
    }
    return 0;
  }
  return 0xfffffffe;
}


