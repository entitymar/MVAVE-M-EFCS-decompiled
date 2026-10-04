// FUN_18000c0a8 @ 18000c0a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000c0a8(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x18000c0d3;
  FUN_18000c17c((PCONTEXT)&DAT_180015f00);
  _DAT_180015e70 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180015f98 = puVar3 + 0x40;
  _DAT_180015f80 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180015e60 = 0xc0000409;
  _DAT_180015e64 = 1;
  _DAT_180015e78 = 1;
  DAT_180015e80 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180015040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180015080;
  *(undefined8 *)(puVar3 + -8) = 0x18000c175;
  DAT_180015ff8 = _DAT_180015e70;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180010098);
  return;
}


