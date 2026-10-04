// FUN_1800010c0 @ 1800010c0

void FUN_1800010c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  uint *param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  longlong local_20;
  
  puVar3 = param_5;
  local_20 = 0;
  plVar2 = *(longlong **)(param_1 + 0x168);
  uVar1 = *param_5;
  if (((plVar2 != (longlong *)0x0) && (*(code **)(*plVar2 + 0x10) != (code *)0x0)) &&
     (iVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,local_res8,&param_5,0,0), iVar4 == 0)) {
    FUN_180022280(*(longlong **)(param_1 + 0x168),*param_4,(longlong *)(ulonglong)uVar1,&local_20);
    *puVar3 = (uint)local_20;
    return;
  }
  *puVar3 = 0;
  return;
}


