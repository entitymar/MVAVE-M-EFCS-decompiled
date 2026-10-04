// FUN_180006c60 @ 180006c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180006c60(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_108 [32];
  short local_d8 [2];
  ushort local_d4 [2];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStackY_108;
  plVar9 = (longlong *)0x0;
  if (param_3 == (longlong *)0x0) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      param_4[1] = 0;
    }
    puVar11 = (undefined8 *)0xffffffffffffffff;
    pcVar10 = "Default Playback Device";
    if (param_2 != 1) {
      pcVar10 = "Default Capture Device";
    }
    FUN_18001d5f0((char *)(param_4 + 0x20),0x100,(longlong)pcVar10,0xffffffffffffffff);
    *(undefined4 *)(param_4 + 0x40) = 1;
  }
  else {
    local_b0 = 0;
    uVar8 = *(undefined4 *)((longlong)param_3 + 4);
    lVar5 = param_3[1];
    uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(int *)param_4 = (int)*param_3;
    *(undefined4 *)((longlong)param_4 + 4) = uVar8;
    *(int *)(param_4 + 1) = (int)lVar5;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar1;
    if (param_2 == 1) {
      pcVar4 = *(code **)(param_1 + 0x158);
    }
    else {
      pcVar4 = *(code **)(param_1 + 0x168);
    }
    puVar11 = param_4;
    local_c0 = param_3;
    local_b8 = param_4;
    (*pcVar4)(FUN_180007a70,&local_c0);
    if (local_b0 == 0) {
      return 0xffffff34;
    }
  }
  if (param_2 != 1) {
    local_c8 = (longlong *)0x0;
    plVar7 = plVar9;
    if (param_3 != (longlong *)0x0) {
      plVar7 = param_3;
    }
    iVar3 = (**(code **)(param_1 + 0x160))(plVar7,&local_c8,0);
    plVar7 = local_c8;
    if (iVar3 < 0) {
      plVar7 = plVar9;
      if (param_1 != 0) {
        plVar7 = *(longlong **)(param_1 + 0x70);
      }
      FUN_180025970((longlong)plVar7,1,
                    "[DirectSound] DirectSoundCaptureCreate() failed for capture device.",puVar11);
      uVar6 = FUN_18001cc60(iVar3);
      plVar7 = plVar9;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = FUN_180008540(param_1,plVar7,local_d4,local_d8,(undefined4 *)&local_d0);
    if ((int)uVar6 != 0) {
      (**(code **)(*plVar7 + 0x10))();
      return uVar6 & 0xffffffff;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if (local_d8[0] == 8) {
      *(undefined4 *)(param_4 + 0x41) = 1;
    }
    else if (local_d8[0] == 0x10) {
      *(undefined4 *)(param_4 + 0x41) = 2;
    }
    else if (local_d8[0] == 0x18) {
      *(undefined4 *)(param_4 + 0x41) = 3;
    }
    else {
      if (local_d8[0] != 0x20) {
        return 0xffffff38;
      }
      *(undefined4 *)(param_4 + 0x41) = 4;
    }
    *(uint *)((longlong)param_4 + 0x20c) = (uint)local_d4[0];
    *(undefined4 *)(param_4 + 0x42) = local_d0._0_4_;
    *(undefined4 *)((longlong)param_4 + 0x214) = 0;
    *(undefined4 *)((longlong)param_4 + 0x204) = 1;
    return 0;
  }
  local_d0 = (longlong *)0x0;
  plVar7 = plVar9;
  if (param_3 != (longlong *)0x0) {
    plVar7 = param_3;
  }
  iVar3 = (**(code **)(param_1 + 0x150))(plVar7,&local_d0,0);
  if (iVar3 < 0) {
    if (param_1 != 0) {
      plVar9 = *(longlong **)(param_1 + 0x70);
    }
    FUN_180025970((longlong)plVar9,1,"[DirectSound] DirectSoundCreate() failed for playback device."
                  ,puVar11);
    return 0xfffffe6f;
  }
  lVar5 = (**(code **)(param_1 + 0x298))();
  if (lVar5 == 0) {
    lVar5 = (**(code **)(param_1 + 0x2a0))(extraout_XMM0_Da,0);
  }
  uVar8 = 2;
  pcVar4 = *(code **)(*local_d0 + 0x30);
  iVar3 = (*pcVar4)(local_d0,lVar5,2);
  plVar7 = local_d0;
  if (iVar3 < 0) {
    plVar7 = plVar9;
    if (param_1 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x70);
    }
    FUN_180025970((longlong)plVar7,1,
                  "[DirectSound] IDirectSound_SetCooperateiveLevel() failed for playback device.",
                  pcVar4);
    uVar6 = FUN_18001cc60(iVar3);
    plVar7 = plVar9;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  local_a8 = 0x60;
  local_a4 = 0;
  uStack_9c = 0;
  local_54 = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_4c = 0;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0;
  uStack_5c = 0;
  iVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_a8);
  if (iVar3 < 0) {
    if (param_1 != 0) {
      plVar9 = *(longlong **)(param_1 + 0x70);
    }
    FUN_180025970((longlong)plVar9,1,
                  "[DirectSound] IDirectSound_GetCaps() failed for playback device.",pcVar4);
    uVar6 = FUN_18001cc60(iVar3);
    return uVar6;
  }
  if ((local_a4 & 2) == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = (**(code **)(*plVar7 + 0x40))(plVar7,local_d4);
    if (-1 < iVar3) {
      uVar8 = 2;
      switch((undefined1)local_d4[0]) {
      case 2:
        uVar8 = 1;
        break;
      case 3:
      case 5:
        uVar8 = 4;
        break;
      case 6:
      case 9:
        uVar8 = 6;
      default:
        break;
      case 7:
      case 8:
        uVar8 = 8;
      }
    }
  }
  uVar2 = DAT_180036000;
  if (((uint)local_a4 & 0x10) == 0) {
    *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
    *(undefined4 *)
     ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
    *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) =
         (uint)uStack_9c;
  }
  else {
    if ((local_a4._4_4_ <= DAT_180036000) && (DAT_180036000 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036004;
    if ((local_a4._4_4_ <= DAT_180036004) && (DAT_180036004 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036008;
    if ((local_a4._4_4_ <= DAT_180036008) && (DAT_180036008 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_18003600c;
    if ((local_a4._4_4_ <= DAT_18003600c) && (DAT_18003600c <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036010;
    if ((local_a4._4_4_ <= DAT_180036010) && (DAT_180036010 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036014;
    if ((local_a4._4_4_ <= DAT_180036014) && (DAT_180036014 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036018;
    if ((local_a4._4_4_ <= DAT_180036018) && (DAT_180036018 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_18003601c;
    if ((local_a4._4_4_ <= DAT_18003601c) && (DAT_18003601c <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036020;
    if ((local_a4._4_4_ <= DAT_180036020) && (DAT_180036020 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036024;
    if ((local_a4._4_4_ <= DAT_180036024) && (DAT_180036024 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036028;
    if ((local_a4._4_4_ <= DAT_180036028) && (DAT_180036028 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_18003602c;
    if ((local_a4._4_4_ <= DAT_18003602c) && (DAT_18003602c <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036030;
    if ((local_a4._4_4_ <= DAT_180036030) && (DAT_180036030 <= (uint)uStack_9c)) {
      *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
      *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
      *(undefined4 *)
       ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
      *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
    }
    uVar2 = DAT_180036034;
    if ((DAT_180036034 < local_a4._4_4_) || ((uint)uStack_9c < DAT_180036034)) goto LAB_1800073ce;
    *(undefined4 *)(param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 2 + 0x41) = 0;
    *(undefined4 *)
     ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x20c) = uVar8;
    *(uint *)(param_4 + ((ulonglong)*(uint *)((longlong)param_4 + 0x204) + 0x21) * 2) = uVar2;
  }
  *(undefined4 *)
   ((longlong)param_4 + (ulonglong)*(uint *)((longlong)param_4 + 0x204) * 0x10 + 0x214) = 0;
  *(int *)((longlong)param_4 + 0x204) = *(int *)((longlong)param_4 + 0x204) + 1;
LAB_1800073ce:
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return 0;
}


