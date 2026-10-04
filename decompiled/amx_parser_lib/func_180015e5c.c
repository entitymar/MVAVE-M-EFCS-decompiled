// FUN_180015e5c @ 180015e5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180015e5c(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x180015e87;
  FUN_180015f30((PCONTEXT)&DAT_1800266c0);
  _DAT_180026630 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180026758 = puVar3 + 0x40;
  _DAT_180026740 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180026620 = 0xc0000409;
  _DAT_180026624 = 1;
  _DAT_180026638 = 1;
  DAT_180026640 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180025040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180025080;
  *(undefined8 *)(puVar3 + -8) = 0x180015f29;
  DAT_1800267b8 = _DAT_180026630;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180020850);
  return;
}


