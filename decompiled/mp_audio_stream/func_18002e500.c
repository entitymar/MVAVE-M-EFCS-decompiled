// FUN_18002e500 @ 18002e500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18002e500(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18002e52b;
  FUN_18002e5d4((PCONTEXT)&DAT_180036d90);
  _DAT_180036d00 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180036e28 = puVar3 + 0x40;
  _DAT_180036e10 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180036cf0 = 0xc0000409;
  _DAT_180036cf4 = 1;
  _DAT_180036d08 = 1;
  DAT_180036d10 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180036c40;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180036c80;
  *(undefined8 *)(puVar3 + -8) = 0x18002e5cd;
  DAT_180036e88 = _DAT_180036d00;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800322e8);
  return;
}


