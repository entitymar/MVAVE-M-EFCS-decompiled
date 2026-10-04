// ma_stream_init @ 18002d900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ma_stream_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  int *piVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 local_278 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_158;
  undefined4 uStack_154;
  code *local_138;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_38;
  
                    /* 0x2d900  1  ma_stream_init */
  uVar15 = (undefined4)param_4;
  local_38 = DAT_180036c40 ^ (ulonglong)auStack_2c8;
  if (DAT_180036ca0 == (longlong *)0x0) {
    DAT_180036ca0 = calloc(1,0xd20);
    *(undefined4 *)(DAT_180036ca0 + 0x19e) = 0x20000;
    DAT_180036ca0[0x19f] = 0;
    *(undefined4 *)(DAT_180036ca0 + 0x1a0) = 0;
    *(undefined4 *)((longlong)DAT_180036ca0 + 0xd04) = 0;
    *(undefined1 *)((longlong)DAT_180036ca0 + 0xd0c) = 0;
    *(undefined4 *)(DAT_180036ca0 + 0x1a2) = 0x2800;
    *(undefined4 *)((longlong)DAT_180036ca0 + 0xd14) = 0;
    *(undefined4 *)(DAT_180036ca0 + 0x1a3) = 0;
  }
  else {
    FUN_180024310(DAT_180036ca0);
  }
  memset(local_278,0,0x118);
  local_2a8 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_2a0 = 0;
  local_284 = 0;
  local_280 = 4;
  lVar12 = 2;
  local_238 = 0;
  uStack_230 = 0;
  local_298 = 0;
  local_278[0]._0_4_ = 1;
  local_218 = 0;
  uStack_210 = 4;
  local_228 = 0;
  uStack_220 = 0;
  puVar5 = local_278;
  piVar13 = &local_158;
  do {
    piVar11 = piVar13;
    puVar7 = puVar5;
    uVar9 = puVar7[1];
    uVar1 = puVar7[2];
    uVar2 = puVar7[3];
    *(undefined8 *)piVar11 = *puVar7;
    *(undefined8 *)(piVar11 + 2) = uVar9;
    uVar9 = puVar7[4];
    uVar3 = puVar7[5];
    *(undefined8 *)(piVar11 + 4) = uVar1;
    *(undefined8 *)(piVar11 + 6) = uVar2;
    uVar1 = puVar7[6];
    uVar2 = puVar7[7];
    *(undefined8 *)(piVar11 + 8) = uVar9;
    *(undefined8 *)(piVar11 + 10) = uVar3;
    uVar9 = puVar7[8];
    uVar3 = puVar7[9];
    *(undefined8 *)(piVar11 + 0xc) = uVar1;
    *(undefined8 *)(piVar11 + 0xe) = uVar2;
    uVar1 = puVar7[10];
    uVar2 = puVar7[0xb];
    *(undefined8 *)(piVar11 + 0x10) = uVar9;
    *(undefined8 *)(piVar11 + 0x12) = uVar3;
    uVar9 = puVar7[0xc];
    uVar3 = puVar7[0xd];
    *(undefined8 *)(piVar11 + 0x14) = uVar1;
    *(undefined8 *)(piVar11 + 0x16) = uVar2;
    uVar1 = puVar7[0xe];
    uVar2 = puVar7[0xf];
    *(undefined8 *)(piVar11 + 0x18) = uVar9;
    *(undefined8 *)(piVar11 + 0x1a) = uVar3;
    *(undefined8 *)(piVar11 + 0x1c) = uVar1;
    *(undefined8 *)(piVar11 + 0x1e) = uVar2;
    lVar12 = lVar12 + -1;
    puVar5 = puVar7 + 0x10;
    piVar13 = piVar11 + 0x20;
  } while (lVar12 != 0);
  uVar1 = puVar7[0x11];
  uVar9 = puVar7[0x12];
  piVar13 = &local_158;
  *(undefined8 *)(piVar11 + 0x20) = puVar7[0x10];
  *(undefined8 *)(piVar11 + 0x22) = uVar1;
  *(undefined8 *)(piVar11 + 0x24) = uVar9;
  local_138 = FUN_1800028d0;
  uStack_e0 = 5;
  plVar14 = DAT_180036ca0;
  uStack_154 = uVar15;
  uStack_dc = param_3;
  uVar8 = FUN_180022640(0,piVar13,DAT_180036ca0);
  if ((int)uVar8 == 0) {
    *(undefined4 *)(DAT_180036ca0 + 0x19e) = param_1;
    *(undefined4 *)(DAT_180036ca0 + 0x1a2) = param_2;
    if ((void *)DAT_180036ca0[0x19f] != (void *)0x0) {
      free((void *)DAT_180036ca0[0x19f]);
    }
    plVar4 = DAT_180036ca0;
    uVar9 = 4;
    pvVar10 = calloc((ulonglong)*(uint *)(DAT_180036ca0 + 0x19e),4);
    plVar4[0x19f] = (longlong)pvVar10;
    *(undefined4 *)(DAT_180036ca0 + 0x1a0) = 0;
    *(undefined4 *)((longlong)DAT_180036ca0 + 0xd04) = 0;
    *(undefined4 *)(DAT_180036ca0 + 0x1a1) = param_3;
    iVar6 = FUN_1800240a0(DAT_180036ca0);
    if (iVar6 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_18002dd00("Failed to start playback device.\n",uVar9,plVar14,param_4);
      FUN_180024310(DAT_180036ca0);
      uVar9 = 0xfffffffb;
    }
  }
  else {
    FUN_18002dd00("Failed to open playback device.\n",piVar13,plVar14,param_4);
    uVar9 = 0xfffffffc;
  }
  return uVar9;
}


