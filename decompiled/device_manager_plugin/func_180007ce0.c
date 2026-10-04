// FUN_180007ce0 @ 180007ce0

/* WARNING: Removing unreachable block (ram,0x000180007d6c) */
/* WARNING: Removing unreachable block (ram,0x000180007d80) */
/* WARNING: Removing unreachable block (ram,0x000180007d95) */
/* WARNING: Removing unreachable block (ram,0x000180007dab) */

undefined8 * FUN_180007ce0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 extraout_var;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  void *local_30;
  longlong local_20;
  
  uVar1 = FUN_18000a840(param_1,param_3);
  uVar3 = CONCAT44(extraout_var,uVar1);
  local_30 = (void *)0x0;
  local_20 = 0;
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    local_30 = (void *)FUN_1800015d0(uVar3);
    memset(local_30,0,uVar3);
    memmove(local_30,(void *)0x0,0);
    local_20 = (longlong)local_30 + uVar3;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = local_20 - (longlong)local_30;
  if (uVar3 != 0) {
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    if (uVar3 < 0x1000) {
      pvVar4 = (void *)FUN_18000b2a8(uVar3);
    }
    else {
      if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180004e70();
      }
      lVar2 = FUN_18000b2a8(uVar3 + 0x27);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      pvVar4 = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar4 - 8) = lVar2;
    }
    *param_2 = pvVar4;
    param_2[1] = pvVar4;
    param_2[2] = (longlong)pvVar4 + uVar3;
    memmove(pvVar4,local_30,local_20 - (longlong)local_30);
    param_2[1] = (longlong)pvVar4 + (local_20 - (longlong)local_30);
  }
  *(undefined1 *)(param_2 + 8) = 6;
  if (local_30 != (void *)0x0) {
    pvVar4 = local_30;
    if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
       (pvVar4 = *(void **)((longlong)local_30 + -8),
       0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar4);
  }
  return param_2;
}


