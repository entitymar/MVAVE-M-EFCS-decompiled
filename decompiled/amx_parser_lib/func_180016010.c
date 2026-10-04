// thunk_FUN_180009da0 @ 180016010

void thunk_FUN_180009da0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800265d0,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_18000a1e4(DVar2);
    p_Var4 = FUN_18000a324();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}


