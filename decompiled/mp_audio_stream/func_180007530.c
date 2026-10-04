// FUN_180007530 @ 180007530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180007530(longlong param_1,int param_2,int *param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStack_168;
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    pcVar9 = "Default Playback Device";
    if (param_2 != 1) {
      pcVar9 = "Default Capture Device";
    }
    FUN_18001d5f0((char *)(param_4 + 0x100),0x100,(longlong)pcVar9,0xffffffffffffffff);
    *(undefined4 *)(param_4 + 0x200) = 1;
    *(undefined4 *)(param_4 + 0x208) = 5;
    iVar1 = (**(code **)(param_1 + 0x160))();
    uVar7 = (ulonglong)iVar1;
    pcVar9 = "miniaudio";
    if (*(char **)(param_1 + 0x1d0) != (char *)0x0) {
      pcVar9 = *(char **)(param_1 + 0x1d0);
    }
    if (0x100 < uVar7) {
      uVar7 = 0x100;
    }
    FUN_18001d5f0(local_138,uVar7,(longlong)pcVar9,0xffffffffffffffff);
    lVar8 = 0;
    uVar7 = 0;
    lVar5 = (**(code **)(param_1 + 0x150))(local_138,*(int *)(param_1 + 0x1d8) == 0,local_148);
    if (lVar5 == 0) {
      if (param_1 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x70);
      }
      pcVar9 = "[JACK] Failed to open client.";
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x180))(lVar5);
      *(undefined4 *)(param_4 + 0x210) = uVar2;
      *(undefined4 *)(param_4 + 0x20c) = 0;
      uVar7 = (ulonglong)((param_2 != 1) + 5);
      lVar6 = (**(code **)(param_1 + 400))(lVar5,0,"32 bit float mono audio");
      if (lVar6 != 0) {
        uVar7 = (ulonglong)*(uint *)(param_4 + 0x20c);
        lVar8 = *(longlong *)(lVar6 + uVar7 * 8);
        while (lVar8 != 0) {
          uVar3 = (int)uVar7 + 1;
          *(uint *)(param_4 + 0x20c) = uVar3;
          uVar7 = (ulonglong)uVar3;
          lVar8 = *(longlong *)(lVar6 + (ulonglong)uVar3 * 8);
        }
        *(undefined4 *)(param_4 + 0x214) = 0;
        *(undefined4 *)(param_4 + 0x204) = 1;
        (**(code **)(param_1 + 0x1c8))(lVar6);
        (**(code **)(param_1 + 0x158))(lVar5);
        return 0;
      }
      (**(code **)(param_1 + 0x158))(lVar5);
      if (param_1 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x70);
      }
      pcVar9 = "[JACK] Failed to query physical ports.";
    }
    FUN_180025970(lVar8,1,pcVar9,uVar7);
    uVar4 = 0xfffffe6f;
  }
  else {
    uVar4 = 0xffffff34;
  }
  return uVar4;
}


