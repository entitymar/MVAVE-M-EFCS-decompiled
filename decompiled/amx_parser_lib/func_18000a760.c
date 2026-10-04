// FUN_18000a760 @ 18000a760

bool FUN_18000a760(void)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_180029018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_180029018 == 0;
    if (!bVar2) goto LAB_18000a79a;
    pFVar1 = FUN_18000a348(3,"FlsGetValue2",(uint *)&DAT_180019ff0,(uint *)"FlsGetValue2");
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_18000a79a:
  return !bVar2;
}


