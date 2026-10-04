// FUN_180002a30 @ 180002a30

void FUN_180002a30(short *param_1,int param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined7 extraout_var;
  undefined4 uVar2;
  ulonglong uVar3;
  short *psVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_3 + 0x204);
  if (*(uint *)(param_3 + 0x204) < 0x40) {
    psVar4 = param_1;
    uVar1 = FUN_180018fb0(param_1);
    *(int *)(param_3 + 0x208 + uVar3 * 0x10) = (int)CONCAT71(extraout_var,uVar1);
    *(uint *)(param_3 + 0x20c + (ulonglong)*(uint *)(param_3 + 0x204) * 0x10) =
         (uint)(ushort)param_1[1];
    *(undefined4 *)(param_3 + ((ulonglong)*(uint *)(param_3 + 0x204) + 0x21) * 0x10) =
         *(undefined4 *)(psVar4 + 2);
    uVar2 = 0;
    if (param_2 == 1) {
      uVar2 = 2;
    }
    *(undefined4 *)(param_3 + 0x214 + (ulonglong)*(uint *)(param_3 + 0x204) * 0x10) = uVar2;
    *(int *)(param_3 + 0x204) = *(int *)(param_3 + 0x204) + 1;
  }
  return;
}


