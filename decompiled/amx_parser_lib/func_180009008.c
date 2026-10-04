// FUN_180009008 @ 180009008

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180009008(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_180025ca8 != '\0') {
    return;
  }
  LOCK();
  DAT_180025c9c = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180025ca0 != DAT_180025040) {
      bVar1 = (byte)DAT_180025040 & 0x3f;
      (*(code *)((DAT_180025040 ^ DAT_180025ca0) >> bVar1 |
                (DAT_180025040 ^ DAT_180025ca0) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180025dd8;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_180009077;
    puVar2 = &DAT_180025df0;
  }
  FUN_1800099b0(puVar2);
LAB_180009077:
  if (*(int *)*param_1 == 0) {
    FUN_180008ddc((undefined8 *)&DAT_1800182d0,(undefined8 *)&DAT_1800182f0);
  }
  FUN_180008ddc((undefined8 *)&DAT_1800182f8,(undefined8 *)&DAT_180018300);
  if (*(int *)param_1[1] == 0) {
    DAT_180025ca8 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}


