// FUN_18000c994 @ 18000c994

ulonglong FUN_18000c994(FILE *param_1)

{
  byte bVar1;
  uint uVar2;
  FILE *pFVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  pFVar3 = (FILE *)FUN_1800068b8(2);
  if (param_1 == pFVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)pFVar3 >> 8),1);
  }
  else {
    pFVar3 = (FILE *)FUN_1800068b8(1);
    if (param_1 == pFVar3) {
      uVar2 = _fileno(param_1);
      bVar1 = FUN_180012a90(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)pFVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}


