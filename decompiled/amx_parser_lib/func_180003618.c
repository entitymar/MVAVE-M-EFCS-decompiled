// FUN_180003618 @ 180003618

ulonglong FUN_180003618(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_180003780(param_3 != 0);
    return uVar2;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = __scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_180003b14();
    }
    return (ulonglong)bVar1;
  }
  uVar2 = FUN_180003668(param_1,param_3);
  return uVar2;
}


