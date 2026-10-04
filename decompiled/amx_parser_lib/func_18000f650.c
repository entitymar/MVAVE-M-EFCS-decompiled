// FUN_18000f650 @ 18000f650

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000f650(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_180025040 & 0x3f;
  pcVar3 = (code *)((DAT_180026600 ^ DAT_180025040) >> bVar2 |
                   (DAT_180026600 ^ DAT_180025040) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}


