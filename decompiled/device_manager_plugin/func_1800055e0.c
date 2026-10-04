// FUN_1800055e0 @ 1800055e0

undefined8 * FUN_1800055e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *_Buf2;
  longlong *plVar7;
  ulonglong _Size;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  plVar5 = (longlong *)*param_1;
  plVar4 = (longlong *)plVar5[1];
  uStack_40 = 0;
  plVar7 = plVar5;
  local_48 = plVar4;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    uVar1 = param_3[2];
    do {
      plVar6 = plVar4 + 4;
      _Buf2 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        _Buf2 = (undefined8 *)*param_3;
      }
      uVar2 = plVar4[6];
      if (0xf < (ulonglong)plVar4[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      _Size = uVar2;
      if (uVar1 < uVar2) {
        _Size = uVar1;
      }
      local_48 = plVar4;
      uVar3 = memcmp(plVar6,_Buf2,_Size);
      if (uVar3 == 0) {
        if (uVar2 < uVar1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar1 < uVar2);
        }
      }
      uStack_40 = (uint)(-1 < (int)uVar3);
      plVar6 = plVar4 + 2;
      if (-1 < (int)uVar3) {
        plVar6 = plVar4;
        plVar7 = plVar4;
      }
      plVar4 = (longlong *)*plVar6;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
     (uVar3 = FUN_180005ab0(param_1,param_3,plVar7 + 4), (char)uVar3 == '\0')) {
    *param_2 = plVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x1ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180004e90();
    }
    plStack_50 = (longlong *)0x0;
    local_58 = param_1;
    plVar4 = (longlong *)FUN_18000b2a8(0x80);
    plStack_50 = plVar4;
    FUN_1800023e0(plVar4 + 4,param_3);
    plVar4[0xf] = 0;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_50 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    local_58 = local_48;
    plVar5 = FUN_180004ad0(param_1,(longlong *)&local_58,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}


