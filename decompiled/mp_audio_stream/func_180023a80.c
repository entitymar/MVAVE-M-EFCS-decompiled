// FUN_180023a80 @ 180023a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180023a80(undefined8 *param_1,uint param_2,undefined8 *param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_b8;
  local_98 = (longlong *)param_5;
  if (param_4 == 0) {
LAB_180023c57:
    uVar10 = 0xfffffffe;
  }
  else {
    uVar8 = 0;
    if ((param_3 == (undefined8 *)0x0) || (puVar1 = param_3 + 4, puVar1 == (ulonglong *)0x0)) {
LAB_180023b17:
      pcVar3 = malloc;
      pcVar9 = (code *)&DAT_180002a00;
      uVar11 = uVar8;
    }
    else {
      if (*puVar1 == 0) {
        if (param_3[7] == 0) {
          if ((param_3[5] == 0) && (param_3[6] == 0)) goto LAB_180023b17;
          goto LAB_180023aeb;
        }
      }
      else {
LAB_180023aeb:
        if (param_3[7] == 0) goto LAB_180023c57;
      }
      if ((param_3[5] == 0) && (param_3[6] == 0)) goto LAB_180023c57;
      pcVar9 = (code *)param_3[7];
      pcVar3 = (code *)param_3[5];
      uVar11 = *puVar1;
    }
    if ((pcVar3 == (code *)0x0) ||
       (local_90 = (int *)param_4, plVar4 = (longlong *)(*pcVar3)(0x2d0,uVar11),
       plVar4 == (longlong *)0x0)) {
      uVar10 = 0xfffffffc;
    }
    else {
      puVar6 = local_58;
      uVar2 = 0xc;
      local_88 = _DAT_180032180;
      uStack_80 = _UNK_180032188;
      local_68 = _DAT_1800321a0;
      uStack_60 = _UNK_1800321a8;
      local_78 = _DAT_180032190;
      uStack_70 = _UNK_180032198;
      do {
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0xf);
      puVar12 = &local_88;
      uVar2 = 0xf;
      if (param_1 != (undefined8 *)0x0) {
        puVar12 = param_1;
        uVar2 = param_2;
      }
      uVar10 = 0xffffff35;
      if (uVar2 != 0) {
        do {
          uVar5 = FUN_180020820((undefined8 *)((longlong)puVar12 + uVar8 * 4),1,param_3,plVar4);
          uVar10 = uVar5 & 0xffffffff;
          if ((int)uVar5 == 0) {
            uVar5 = FUN_180022640((longlong)plVar4,local_90,local_98);
            uVar10 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) goto LAB_180023c08;
            FUN_180020f60((longlong)plVar4);
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar2);
        if ((int)uVar10 == 0) {
LAB_180023c08:
          *(undefined1 *)((longlong)local_98 + 100) = 1;
          return uVar10;
        }
      }
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(plVar4,uVar11);
      }
    }
  }
  return uVar10;
}


