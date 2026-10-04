// FUN_18002afc0 @ 18002afc0

undefined8
FUN_18002afc0(int param_1,int param_2,int param_3,uint param_4,int param_5,longlong param_6,
             longlong *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  size_t _Size;
  uint uVar6;
  int local_38 [8];
  
  if (param_8 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  local_38[1] = 1;
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  param_8[3] = 0;
  local_38[0] = 0;
  param_8[4] = 0;
  param_8[5] = 0;
  local_38[2] = 2;
  param_8[6] = 0;
  param_8[7] = 0;
  local_38[3] = 3;
  param_8[8] = 0;
  param_8[9] = 0;
  local_38[4] = 4;
  param_8[10] = 0;
  param_8[0xb] = 0;
  local_38[5] = 4;
  iVar5 = param_2 * local_38[param_1];
  param_8[0xc] = 0;
  param_8[0xd] = 0;
  param_8[0xe] = 0;
  param_8[0xf] = 0;
  param_8[0x10] = 0;
  param_8[0x11] = 0;
  param_8[0x12] = 0;
  if (iVar5 == 0) {
    return 0xfffffffe;
  }
  uVar6 = iVar5 * param_3;
  plVar1 = param_8 + 9;
  if (plVar1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (uVar6 == 0) {
    return 0xfffffffe;
  }
  if (param_4 == 0) {
    return 0xfffffffe;
  }
  if (0x7fffffe0 < uVar6) {
    return 0xfffffffe;
  }
  if (param_8 + 0xd == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  if (param_7 == (longlong *)0x0) {
LAB_18002b0f1:
    param_8[0xe] = malloc;
    param_8[0xf] = &DAT_180002a20;
    param_8[0x10] = &DAT_180002a00;
    goto LAB_18002b112;
  }
  if (*param_7 == 0) {
    if (param_7[3] == 0) {
      if ((param_7[1] == 0) && (param_7[2] == 0)) goto LAB_18002b0f1;
      goto LAB_18002b0c7;
    }
  }
  else {
LAB_18002b0c7:
    if (param_7[3] == 0) {
      return 0xfffffffe;
    }
  }
  if ((param_7[1] == 0) && (param_7[2] == 0)) {
    return 0xfffffffe;
  }
  uVar2 = *(undefined4 *)((longlong)param_7 + 4);
  lVar4 = param_7[1];
  uVar3 = *(undefined4 *)((longlong)param_7 + 0xc);
  *(int *)(param_8 + 0xd) = (int)*param_7;
  *(undefined4 *)((longlong)param_8 + 0x6c) = uVar2;
  *(int *)(param_8 + 0xe) = (int)lVar4;
  *(undefined4 *)((longlong)param_8 + 0x74) = uVar3;
  lVar4 = param_7[3];
  param_8[0xf] = param_7[2];
  param_8[0x10] = lVar4;
LAB_18002b112:
  *(uint *)(param_8 + 10) = uVar6;
  *(uint *)((longlong)param_8 + 0x54) = param_4;
  if (param_6 == 0) {
    uVar6 = uVar6 + 0x1f & 0xffffffdf;
    *(uint *)(param_8 + 0xb) = uVar6;
    _Size = (ulonglong)uVar6 * (ulonglong)param_4;
    if (((code *)param_8[0xe] == (code *)0x0) ||
       (lVar4 = (*(code *)param_8[0xe])(_Size + 0x27), lVar4 == 0)) {
      *plVar1 = 0;
      return 0xfffffffc;
    }
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst + -8) = lVar4;
    *plVar1 = (longlong)_Dst;
    if (_Size != 0) {
      memset(_Dst,0,_Size);
    }
    *(undefined1 *)((longlong)param_8 + 100) = 1;
  }
  else {
    *plVar1 = param_6;
    *(int *)(param_8 + 0xb) = iVar5 * param_5;
  }
  *(int *)(param_8 + 0x11) = param_1;
  *(int *)((longlong)param_8 + 0x8c) = param_2;
  *(undefined4 *)(param_8 + 0x12) = 0;
  param_8[8] = 0;
  *param_8 = &PTR_FUN_1800369a0;
  param_8[1] = 0;
  param_8[2] = 0xffffffffffffffff;
  param_8[3] = 0;
  param_8[4] = 0xffffffffffffffff;
  param_8[5] = param_8;
  param_8[6] = 0;
  param_8[7] = 0;
  return 0;
}


