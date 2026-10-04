// FUN_180024b10 @ 180024b10

void FUN_180024b10(longlong param_1,float param_2,undefined4 param_3,ulonglong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (param_2 < 0.0) {
      uVar1 = *(ulonglong *)(param_1 + 0x20);
      param_2 = DAT_1800320cc;
      if (-1 < (longlong)uVar1) {
        if (uVar1 == 0) {
          param_2 = *(float *)(param_1 + 0xc);
        }
        else {
          param_2 = *(float *)(param_1 + 0x10);
          if (uVar1 < *(ulonglong *)(param_1 + 0x18)) {
            param_2 = ((float)(uVar1 & 0xffffffff) /
                      (float)(*(ulonglong *)(param_1 + 0x18) & 0xffffffff)) *
                      (param_2 - *(float *)(param_1 + 0xc)) + *(float *)(param_1 + 0xc);
          }
        }
      }
    }
    *(float *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    uVar1 = 0xffffffff;
    if (param_4 < 0x100000000) {
      uVar1 = param_4;
    }
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    lVar2 = 0x7fffffff;
    if (param_5 < 0x80000000) {
      lVar2 = param_5;
    }
    *(ulonglong *)(param_1 + 0x20) = -lVar2;
  }
  return;
}


