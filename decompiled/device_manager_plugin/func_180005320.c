// FUN_180005320 @ 180005320

longlong * FUN_180005320(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *_Buf1;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong _Size;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *local_40;
  
  plVar6 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar6[1];
  local_40 = plVar6;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    uVar4 = param_3[2];
    uVar8 = param_3[3];
    do {
      plVar10 = plVar7 + 4;
      puVar5 = param_3;
      if (0xf < uVar8) {
        puVar5 = (undefined8 *)*param_3;
      }
      uVar1 = plVar7[7];
      uVar9 = plVar7[6];
      _Buf1 = plVar10;
      if (0xf < uVar1) {
        _Buf1 = (longlong *)*plVar10;
      }
      _Size = uVar9;
      if (uVar4 < uVar9) {
        _Size = uVar4;
      }
      iVar2 = memcmp(_Buf1,puVar5,_Size);
      if (iVar2 == 0) {
        if (uVar9 < (ulonglong)param_3[2]) {
          iVar2 = -1;
        }
        else if ((ulonglong)param_3[2] < uVar9) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        uVar4 = param_3[2];
        uVar8 = param_3[3];
      }
      if (iVar2 < 0) {
        plVar7 = plVar7 + 2;
      }
      else {
        local_40 = plVar7;
        if (*(char *)((longlong)plVar6 + 0x19) != '\0') {
          if (0xf < uVar1) {
            plVar10 = (longlong *)plVar7[4];
          }
          puVar5 = param_3;
          if (0xf < uVar8) {
            puVar5 = (undefined8 *)*param_3;
          }
          uVar8 = uVar4;
          if (uVar9 < uVar4) {
            uVar8 = uVar9;
          }
          uVar3 = memcmp(puVar5,plVar10,uVar8);
          if (uVar3 == 0) {
            if (uVar4 < uVar9) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (uint)(uVar9 < uVar4);
            }
          }
          if ((int)uVar3 < 0) {
            plVar6 = plVar7;
          }
        }
      }
      plVar7 = (longlong *)*plVar7;
      uVar4 = param_3[2];
      uVar8 = param_3[3];
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  plVar7 = plVar6;
  if (*(char *)((longlong)plVar6 + 0x19) != '\0') {
    plVar7 = (longlong *)(*param_1 + 8);
  }
  plVar7 = (longlong *)*plVar7;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    uVar4 = param_3[3];
    uVar8 = param_3[2];
    plVar10 = plVar6;
    do {
      plVar6 = plVar7 + 4;
      uVar1 = plVar7[6];
      if (0xf < (ulonglong)plVar7[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      puVar5 = param_3;
      if (0xf < uVar4) {
        puVar5 = (undefined8 *)*param_3;
      }
      uVar9 = uVar8;
      if (uVar1 < uVar8) {
        uVar9 = uVar1;
      }
      uVar3 = memcmp(puVar5,plVar6,uVar9);
      if (uVar3 == 0) {
        if (uVar8 < uVar1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar1 < uVar8);
        }
      }
      plVar6 = plVar7;
      if (-1 < (int)uVar3) {
        plVar7 = plVar7 + 2;
        plVar6 = plVar10;
      }
      plVar7 = (longlong *)*plVar7;
      plVar10 = plVar6;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)plVar6;
  return param_2;
}


