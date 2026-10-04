// FUN_1800041a0 @ 1800041a0

void FUN_1800041a0(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_180009da0(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}


