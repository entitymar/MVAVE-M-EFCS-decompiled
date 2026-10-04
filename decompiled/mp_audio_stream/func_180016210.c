// FUN_180016210 @ 180016210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_180016210(longlong *param_1,uint param_2)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined8 local_49c;
  undefined8 uStack_494;
  undefined8 local_48c;
  undefined8 uStack_484;
  undefined8 local_47c;
  undefined8 uStack_474;
  undefined8 local_46c;
  undefined8 uStack_464;
  undefined8 local_45c;
  undefined8 uStack_454;
  undefined8 local_44c;
  undefined8 uStack_444;
  undefined8 local_43c;
  undefined8 uStack_434;
  undefined8 local_42c;
  undefined8 uStack_424;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined8 local_40c;
  undefined8 uStack_404;
  undefined8 local_3fc;
  undefined8 uStack_3f4;
  undefined8 local_3ec;
  undefined8 uStack_3e4;
  undefined8 local_3dc;
  undefined8 uStack_3d4;
  undefined8 local_3cc;
  undefined8 uStack_3c4;
  undefined8 local_3bc;
  undefined8 uStack_3b4;
  undefined8 local_3ac;
  undefined4 local_3a4;
  undefined2 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  undefined4 local_37c;
  uint local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  longlong local_34c;
  longlong lStack_344;
  longlong local_33c;
  longlong lStack_334;
  longlong local_32c;
  longlong lStack_324;
  longlong local_31c;
  longlong lStack_314;
  longlong local_30c;
  longlong lStack_304;
  longlong local_2fc;
  longlong lStack_2f4;
  longlong local_2ec;
  longlong lStack_2e4;
  longlong local_2dc;
  longlong lStack_2d4;
  longlong local_2cc;
  longlong lStack_2c4;
  longlong local_2bc;
  longlong lStack_2b4;
  longlong local_2ac;
  longlong lStack_2a4;
  longlong local_29c;
  longlong lStack_294;
  longlong local_28c;
  longlong lStack_284;
  longlong local_27c;
  longlong lStack_274;
  longlong local_26c;
  longlong lStack_264;
  longlong local_25c;
  undefined4 local_254;
  undefined2 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 local_240 [256];
  short local_140 [132];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStack_4c8;
  if (param_2 == 3) {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar6 = 0;
    if ((param_2 - 2 & 0xfffffffd) == 0) {
      if ((longlong *)param_1[0x18a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x18a] + 0x10))();
        param_1[0x18a] = 0;
      }
      if (param_1[0x188] != 0) {
        param_1[0x188] = 0;
      }
    }
    if (param_2 == 1) {
      plVar7 = (longlong *)param_1[0x189];
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
        param_1[0x189] = 0;
      }
      if (param_1[0x187] != 0) {
        param_1[0x187] = 0;
      }
      local_4a8 = *(undefined4 *)((longlong)param_1 + 0x334);
      local_49c = *(undefined8 *)((longlong)param_1 + 0x33c);
      uStack_494 = *(undefined8 *)((longlong)param_1 + 0x344);
      local_48c = *(undefined8 *)((longlong)param_1 + 0x34c);
      uStack_484 = *(undefined8 *)((longlong)param_1 + 0x354);
      local_4a4 = (undefined4)param_1[0x67];
      local_3ac = *(undefined8 *)((longlong)param_1 + 0x42c);
      local_47c = *(undefined8 *)((longlong)param_1 + 0x35c);
      uStack_474 = *(undefined8 *)((longlong)param_1 + 0x364);
      local_46c = *(undefined8 *)((longlong)param_1 + 0x36c);
      uStack_464 = *(undefined8 *)((longlong)param_1 + 0x374);
      local_45c = *(undefined8 *)((longlong)param_1 + 0x37c);
      uStack_454 = *(undefined8 *)((longlong)param_1 + 900);
      local_44c = *(undefined8 *)((longlong)param_1 + 0x38c);
      uStack_444 = *(undefined8 *)((longlong)param_1 + 0x394);
      local_43c = *(undefined8 *)((longlong)param_1 + 0x39c);
      uStack_434 = *(undefined8 *)((longlong)param_1 + 0x3a4);
      local_41c = *(undefined8 *)((longlong)param_1 + 0x3bc);
      uStack_414 = *(undefined8 *)((longlong)param_1 + 0x3c4);
      local_42c = *(undefined8 *)((longlong)param_1 + 0x3ac);
      uStack_424 = *(undefined8 *)((longlong)param_1 + 0x3b4);
      local_40c = *(undefined8 *)((longlong)param_1 + 0x3cc);
      uStack_404 = *(undefined8 *)((longlong)param_1 + 0x3d4);
      local_3fc = *(undefined8 *)((longlong)param_1 + 0x3dc);
      uStack_3f4 = *(undefined8 *)((longlong)param_1 + 0x3e4);
      local_3ec = *(undefined8 *)((longlong)param_1 + 0x3ec);
      uStack_3e4 = *(undefined8 *)((longlong)param_1 + 0x3f4);
      local_3dc = *(undefined8 *)((longlong)param_1 + 0x3fc);
      uStack_3d4 = *(undefined8 *)((longlong)param_1 + 0x404);
      local_3cc = *(undefined8 *)((longlong)param_1 + 0x40c);
      uStack_3c4 = *(undefined8 *)((longlong)param_1 + 0x414);
      local_3bc = *(undefined8 *)((longlong)param_1 + 0x41c);
      uStack_3b4 = *(undefined8 *)((longlong)param_1 + 0x424);
      local_3a4 = *(undefined4 *)((longlong)param_1 + 0x434);
      local_3a0 = (undefined2)param_1[0x87];
      local_390 = (undefined4)param_1[0x66];
    }
    else {
      local_4a8 = *(undefined4 *)((longlong)param_1 + 0x8cc);
      local_49c = *(undefined8 *)((longlong)param_1 + 0x8d4);
      uStack_494 = *(undefined8 *)((longlong)param_1 + 0x8dc);
      local_48c = *(undefined8 *)((longlong)param_1 + 0x8e4);
      uStack_484 = *(undefined8 *)((longlong)param_1 + 0x8ec);
      local_4a4 = (undefined4)param_1[0x11a];
      local_3ac = *(undefined8 *)((longlong)param_1 + 0x9c4);
      local_47c = *(undefined8 *)((longlong)param_1 + 0x8f4);
      uStack_474 = *(undefined8 *)((longlong)param_1 + 0x8fc);
      local_46c = *(undefined8 *)((longlong)param_1 + 0x904);
      uStack_464 = *(undefined8 *)((longlong)param_1 + 0x90c);
      local_45c = *(undefined8 *)((longlong)param_1 + 0x914);
      uStack_454 = *(undefined8 *)((longlong)param_1 + 0x91c);
      local_44c = *(undefined8 *)((longlong)param_1 + 0x924);
      uStack_444 = *(undefined8 *)((longlong)param_1 + 0x92c);
      local_43c = *(undefined8 *)((longlong)param_1 + 0x934);
      uStack_434 = *(undefined8 *)((longlong)param_1 + 0x93c);
      local_41c = *(undefined8 *)((longlong)param_1 + 0x954);
      uStack_414 = *(undefined8 *)((longlong)param_1 + 0x95c);
      local_42c = *(undefined8 *)((longlong)param_1 + 0x944);
      uStack_424 = *(undefined8 *)((longlong)param_1 + 0x94c);
      local_40c = *(undefined8 *)((longlong)param_1 + 0x964);
      uStack_404 = *(undefined8 *)((longlong)param_1 + 0x96c);
      local_3fc = *(undefined8 *)((longlong)param_1 + 0x974);
      uStack_3f4 = *(undefined8 *)((longlong)param_1 + 0x97c);
      local_3ec = *(undefined8 *)((longlong)param_1 + 0x984);
      uStack_3e4 = *(undefined8 *)((longlong)param_1 + 0x98c);
      local_3dc = *(undefined8 *)((longlong)param_1 + 0x994);
      uStack_3d4 = *(undefined8 *)((longlong)param_1 + 0x99c);
      local_3cc = *(undefined8 *)((longlong)param_1 + 0x9a4);
      uStack_3c4 = *(undefined8 *)((longlong)param_1 + 0x9ac);
      local_3bc = *(undefined8 *)((longlong)param_1 + 0x9b4);
      uStack_3b4 = *(undefined8 *)((longlong)param_1 + 0x9bc);
      local_3a4 = *(undefined4 *)((longlong)param_1 + 0x9cc);
      local_3a0 = (undefined2)param_1[0x13a];
      local_390 = (undefined4)param_1[0x119];
    }
    local_4a0 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_39c = (undefined4)param_1[0x192];
    local_398 = *(undefined4 *)((longlong)param_1 + 0xc94);
    local_394 = (undefined4)param_1[0x193];
    local_38c = *(undefined4 *)((longlong)param_1 + 0xc9c);
    local_388 = (uint)*(byte *)((longlong)param_1 + 0xcd5);
    local_384 = (uint)*(byte *)((longlong)param_1 + 0xcd6);
    local_380 = (uint)*(byte *)((longlong)param_1 + 0xcd7);
    local_37c = (undefined4)param_1[0x19a];
    local_378 = (uint)*(byte *)((longlong)param_1 + 0xcd4);
    uVar3 = FUN_180014c00(*param_1,param_2,(undefined8 *)0x0,(longlong)&local_4a8);
    if (uVar3 == 0) {
      if ((param_2 == 2) || (param_2 == 4)) {
        param_1[0x188] = local_370;
        param_1[0x18a] = local_360;
        *(undefined4 *)((longlong)param_1 + 0x9d4) = local_358;
        *(undefined4 *)(param_1 + 0x13b) = local_354;
        *(undefined4 *)((longlong)param_1 + 0x9dc) = local_350;
        param_1[0x13c] = local_34c;
        param_1[0x13d] = lStack_344;
        param_1[0x13e] = local_33c;
        param_1[0x13f] = lStack_334;
        param_1[0x140] = local_32c;
        param_1[0x141] = lStack_324;
        param_1[0x142] = local_31c;
        param_1[0x143] = lStack_314;
        param_1[0x144] = local_30c;
        param_1[0x145] = lStack_304;
        param_1[0x146] = local_2fc;
        param_1[0x147] = lStack_2f4;
        param_1[0x148] = local_2ec;
        param_1[0x149] = lStack_2e4;
        param_1[0x14a] = local_2dc;
        param_1[0x14b] = lStack_2d4;
        param_1[0x14c] = local_2cc;
        param_1[0x14d] = lStack_2c4;
        param_1[0x14e] = local_2bc;
        param_1[0x14f] = lStack_2b4;
        param_1[0x150] = local_2ac;
        param_1[0x151] = lStack_2a4;
        param_1[0x152] = local_29c;
        param_1[0x153] = lStack_294;
        param_1[0x154] = local_28c;
        param_1[0x155] = lStack_284;
        param_1[0x156] = local_27c;
        param_1[0x157] = lStack_274;
        param_1[0x158] = local_26c;
        param_1[0x159] = lStack_264;
        param_1[0x15a] = local_25c;
        *(undefined4 *)(param_1 + 0x15b) = local_254;
        *(undefined2 *)((longlong)param_1 + 0xadc) = local_250;
        *(undefined4 *)(param_1 + 0x15c) = local_24c;
        *(undefined4 *)((longlong)param_1 + 0xae4) = local_248;
        FUN_18001d590((char *)(param_1 + 0xf9),0x100,(longlong)local_240);
        (**(code **)(*(longlong *)param_1[0x188] + 0x68))((longlong *)param_1[0x188],param_1[400]);
        *(undefined4 *)((longlong)param_1 + 0xca4) = local_24c;
        (**(code **)(*(longlong *)param_1[0x188] + 0x20))
                  ((longlong *)param_1[0x188],(longlong)param_1 + 0xc8c);
        plVar7 = param_1 + 0xd9;
        uVar5 = uVar6;
        if (plVar7 != (longlong *)0x0) {
          do {
            if (local_140[uVar5] == 0) {
LAB_1800166b9:
              *(undefined2 *)((longlong)plVar7 + uVar5 * 2) = 0;
              goto LAB_1800166cc;
            }
            sVar2 = local_140[uVar5 + 1];
            *(short *)((longlong)plVar7 + uVar5 * 2) = local_140[uVar5];
            if (sVar2 == 0) {
              uVar5 = uVar5 + 1;
              if (uVar5 < 0x80) goto LAB_1800166b9;
              *(undefined2 *)plVar7 = 0;
              goto LAB_1800166cc;
            }
            uVar4 = uVar5 + 2;
            *(short *)((longlong)plVar7 + uVar5 * 2 + 2) = sVar2;
            uVar5 = uVar4;
          } while (uVar4 < 0x80);
          *(undefined2 *)plVar7 = 0;
        }
      }
LAB_1800166cc:
      plVar7 = param_1 + 0x187;
      if (param_2 == 1) {
        *plVar7 = local_370;
        param_1[0x189] = local_368;
        *(undefined4 *)((longlong)param_1 + 0x43c) = local_358;
        param_1[0x89] = local_34c;
        param_1[0x8a] = lStack_344;
        *(undefined4 *)(param_1 + 0x88) = local_354;
        param_1[0x8b] = local_33c;
        param_1[0x8c] = lStack_334;
        *(undefined4 *)((longlong)param_1 + 0x444) = local_350;
        param_1[0x8d] = local_32c;
        param_1[0x8e] = lStack_324;
        param_1[0x8f] = local_31c;
        param_1[0x90] = lStack_314;
        param_1[0x91] = local_30c;
        param_1[0x92] = lStack_304;
        param_1[0x93] = local_2fc;
        param_1[0x94] = lStack_2f4;
        param_1[0x95] = local_2ec;
        param_1[0x96] = lStack_2e4;
        param_1[0x97] = local_2dc;
        param_1[0x98] = lStack_2d4;
        param_1[0x99] = local_2cc;
        param_1[0x9a] = lStack_2c4;
        param_1[0x9b] = local_2bc;
        param_1[0x9c] = lStack_2b4;
        param_1[0x9d] = local_2ac;
        param_1[0x9e] = lStack_2a4;
        param_1[0x9f] = local_29c;
        param_1[0xa0] = lStack_294;
        param_1[0xa1] = local_28c;
        param_1[0xa2] = lStack_284;
        param_1[0xa3] = local_27c;
        param_1[0xa4] = lStack_274;
        param_1[0xa5] = local_26c;
        param_1[0xa6] = lStack_264;
        param_1[0xa7] = local_25c;
        *(undefined4 *)(param_1 + 0xa8) = local_254;
        *(undefined2 *)((longlong)param_1 + 0x544) = local_250;
        *(undefined4 *)(param_1 + 0xa9) = local_24c;
        *(undefined4 *)((longlong)param_1 + 0x54c) = local_248;
        FUN_18001d590((char *)(param_1 + 0x46),0x100,(longlong)local_240);
        (**(code **)(*(longlong *)*plVar7 + 0x68))((longlong *)*plVar7,param_1[399]);
        *(undefined4 *)(param_1 + 0x194) = local_24c;
        (**(code **)(*(longlong *)*plVar7 + 0x20))((longlong *)*plVar7,param_1 + 0x191);
        plVar7 = param_1 + 0x26;
        if (plVar7 != (longlong *)0x0) {
          do {
            if (local_140[uVar6] == 0) {
LAB_180016882:
              *(undefined2 *)((longlong)plVar7 + uVar6 * 2) = 0;
              goto LAB_180016887;
            }
            sVar2 = local_140[uVar6 + 1];
            *(short *)((longlong)plVar7 + uVar6 * 2) = local_140[uVar6];
            if (sVar2 == 0) {
              uVar6 = uVar6 + 1;
              if (uVar6 < 0x80) goto LAB_180016882;
              *(undefined2 *)plVar7 = 0;
              goto LAB_180016887;
            }
            lVar1 = uVar6 * 2;
            uVar6 = uVar6 + 2;
            *(short *)((longlong)plVar7 + lVar1 + 2) = sVar2;
          } while (uVar6 < 0x80);
          *(undefined2 *)plVar7 = 0;
        }
      }
LAB_180016887:
      uVar3 = 0;
    }
  }
  return uVar3;
}


