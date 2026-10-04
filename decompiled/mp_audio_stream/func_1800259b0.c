// FUN_1800259b0 @ 1800259b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800259b0(longlong param_1,undefined4 param_2,char *param_3,va_list param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  char *_DstBuf;
  ulonglong uVar6;
  size_t _Size;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  va_list local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_478;
  if ((param_1 == 0) || (param_3 == (char *)0x0)) {
    return 0xfffffffe;
  }
  puVar5 = (ulonglong *)FUN_18001e620();
  uVar6 = 0;
  local_458 = 0;
  local_450 = param_4;
  uVar3 = __stdio_common_vsprintf(*puVar5 | 2,local_448,0x400,param_3);
  if ((int)uVar3 < 0) {
    uVar3 = 0xffffffff;
  }
  if ((int)uVar3 < 0) {
LAB_180025b33:
    uVar6 = 0xfffffffd;
  }
  else {
    if (uVar3 < 0x400) {
      puVar1 = (undefined8 *)(param_1 + 0x68);
      if (puVar1 != (undefined8 *)0x0) {
        WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
      }
      if (*(int *)(param_1 + 0x40) != 0) {
        do {
          pcVar2 = *(code **)(param_1 + uVar6 * 0x10);
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(*(undefined8 *)(param_1 + 8 + uVar6 * 0x10),param_2,local_448);
          }
          uVar3 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x40));
      }
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      SetEvent((HANDLE)*puVar1);
      return 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x48);
    _Size = (size_t)(int)(uVar3 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      _DstBuf = malloc(_Size);
LAB_180025ac5:
      if (_DstBuf != (char *)0x0) {
        iVar4 = vsnprintf(_DstBuf,_Size,param_3,param_4);
        if (-1 < iVar4) {
          uVar6 = FUN_1800258b0(param_1,param_2,(longlong)_DstBuf);
          uVar6 = uVar6 & 0xffffffff;
          if (puVar1 == (undefined8 *)0x0) {
            free(_DstBuf);
            return uVar6;
          }
          if (*(code **)(param_1 + 0x60) == (code *)0x0) {
            return uVar6;
          }
          (**(code **)(param_1 + 0x60))(_DstBuf,*puVar1);
          return uVar6;
        }
        if (puVar1 == (undefined8 *)0x0) {
          free(_DstBuf);
          return 0xfffffffd;
        }
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))(_DstBuf,*puVar1);
        }
        goto LAB_180025b33;
      }
    }
    else if (*(code **)(param_1 + 0x50) != (code *)0x0) {
      _DstBuf = (char *)(**(code **)(param_1 + 0x50))(_Size,*puVar1);
      goto LAB_180025ac5;
    }
    uVar6 = 0xfffffffc;
  }
  return uVar6;
}


