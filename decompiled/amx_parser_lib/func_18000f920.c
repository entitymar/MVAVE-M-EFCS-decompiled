// FUN_18000f920 @ 18000f920

undefined8 FUN_18000f920(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_18001085c(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_180025ed0)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180010968(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_18000f997;
    DVar3 = GetLastError();
    p_Var4 = FUN_18000a300();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_18000a324();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_18000f997:
  FUN_180010884(*param_4);
  return uVar5;
}


