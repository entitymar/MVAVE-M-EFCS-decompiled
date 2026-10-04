// FUN_1800081d0 @ 1800081d0

undefined8 * FUN_1800081d0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 extraout_var;
  void *pvVar2;
  ulonglong uVar3;
  size_t _Size;
  void *local_20;
  longlong lStack_18;
  longlong local_10;
  
  uVar1 = FUN_18000a840(param_1,param_3);
  local_20 = (void *)0x0;
  lStack_18 = 0;
  local_10 = 0;
  FUN_180008b80((longlong *)&local_20,CONCAT44(extraout_var,uVar1));
  (**(code **)(*param_3 + 0x18))(param_3,8);
  (**(code **)(*param_3 + 0x10))(param_3,local_20);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = lStack_18 - (longlong)local_20 >> 3;
  if (uVar3 != 0) {
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    pvVar2 = (void *)FUN_1800015d0(uVar3 * 8);
    *param_2 = pvVar2;
    param_2[1] = pvVar2;
    param_2[2] = (void *)(uVar3 * 8 + (longlong)pvVar2);
    _Size = lStack_18 - (longlong)local_20;
    memmove(pvVar2,local_20,_Size);
    param_2[1] = (void *)((longlong)pvVar2 + ((longlong)_Size >> 3) * 8);
  }
  *(undefined1 *)(param_2 + 8) = 9;
  if (local_20 != (void *)0x0) {
    pvVar2 = local_20;
    if ((0xfff < (local_10 - (longlong)local_20 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)local_20 + -8),
       0x1f < (ulonglong)((longlong)local_20 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar2);
  }
  return param_2;
}


