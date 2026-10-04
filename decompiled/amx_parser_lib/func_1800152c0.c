// FUN_1800152c0 @ 1800152c0

void FUN_1800152c0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}


