// FUN_18000f3c4 @ 18000f3c4

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000f3c4(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  __acrt_ptd *p_Var9;
  undefined4 local_res10;
  __acrt_ptd *p_Var10;
  
  p_Var10 = (__acrt_ptd *)0x0;
  p_Var9 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_18000f41b:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_1800265e0;
    }
    else if (param_1 == 6) {
LAB_18000f4bd:
      puVar8 = &DAT_1800265f0;
      p_Var9 = p_Var10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_1800265f8;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_1800265e8;
      p_Var9 = p_Var10;
    }
    else {
      if (param_1 == 0x16) goto LAB_18000f4bd;
      puVar8 = (ulonglong *)0x0;
      p_Var9 = p_Var10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18000f44b;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_18000f49d;
      }
      goto LAB_18000f41b;
    }
LAB_18000f44b:
    p_Var9 = FUN_18000cfc8();
    if (p_Var9 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *(longlong *)p_Var9;
    lVar2 = DAT_1800196a0 * 0x10 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_18000f498;
    }
    lVar3 = 0;
LAB_18000f498:
    if (lVar3 == 0) {
LAB_18000f49d:
      p_Var9 = FUN_18000a324();
      *(undefined4 *)p_Var9 = 0x16;
      FUN_18000a17c();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar3 + 8);
    bVar1 = false;
  }
  lVar3 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_180025040 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_180025040) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_180025040) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_18000f5a6;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_180009258(3);
    pcVar7 = (code *)swi(3);
    uVar4 = (*pcVar7)();
    return uVar4;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(p_Var9 + 8);
    *(longlong *)(p_Var9 + 8) = 0;
    if (param_1 == 8) {
      lVar2 = FUN_18000cf68();
      local_res10 = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = FUN_18000cf68();
      *(undefined4 *)(lVar2 + 0x10) = 0x8c;
      goto LAB_18000f55e;
    }
  }
  else {
LAB_18000f55e:
    if (param_1 == 8) {
      lVar2 = DAT_1800196a8 * 0x10 + *(longlong *)p_Var9;
      lVar6 = DAT_1800196b0 * 0x10 + lVar2;
      for (; lVar2 != lVar6; lVar2 = lVar2 + 0x10) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      goto LAB_18000f5a6;
    }
  }
  *puVar8 = DAT_180025040;
LAB_18000f5a6:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar2 = FUN_18000cf68();
      (*pcVar7)(8,*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var9 + 8) = lVar3, param_1 == 8)) {
      lVar3 = FUN_18000cf68();
      *(undefined4 *)(lVar3 + 0x10) = local_res10;
    }
  }
  return 0;
}


