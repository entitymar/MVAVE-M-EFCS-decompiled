// FUN_180023c60 @ 180023c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180023c60(longlong *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 auStack_658 [32];
  undefined1 local_638 [256];
  char local_538 [1296];
  ulonglong local_28;
  uint uVar5;
  
  local_28 = DAT_180036c40 ^ (ulonglong)auStack_658;
  if (param_1 == (longlong *)0x0) {
LAB_180024064:
    uVar3 = 0xfffffffe;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    if (param_2 - 2U < 3) {
      if ((((param_4 == (longlong *)0x0) || (*(int *)((longlong)param_4 + 0xc) == 0)) ||
          (*(uint *)(param_4 + 2) == 0)) ||
         ((0xfe < *(uint *)(param_4 + 2) || (*(int *)((longlong)param_4 + 0x14) == 0))))
      goto LAB_180024064;
      *(int *)((longlong)param_1 + 0x9d4) = *(int *)((longlong)param_4 + 0xc);
      *(int *)(param_1 + 0x13b) = (int)param_4[2];
      *(undefined4 *)((longlong)param_1 + 0x9dc) = *(undefined4 *)((longlong)param_4 + 0x14);
      lVar2 = param_4[4];
      param_1[0x13c] = param_4[3];
      param_1[0x13d] = lVar2;
      lVar2 = param_4[6];
      param_1[0x13e] = param_4[5];
      param_1[0x13f] = lVar2;
      lVar2 = param_4[8];
      param_1[0x140] = param_4[7];
      param_1[0x141] = lVar2;
      lVar2 = param_4[10];
      param_1[0x142] = param_4[9];
      param_1[0x143] = lVar2;
      lVar2 = param_4[0xc];
      param_1[0x144] = param_4[0xb];
      param_1[0x145] = lVar2;
      lVar2 = param_4[0xe];
      param_1[0x146] = param_4[0xd];
      param_1[0x147] = lVar2;
      lVar2 = param_4[0x10];
      param_1[0x148] = param_4[0xf];
      param_1[0x149] = lVar2;
      lVar2 = param_4[0x12];
      param_1[0x14a] = param_4[0x11];
      param_1[0x14b] = lVar2;
      lVar2 = param_4[0x14];
      param_1[0x14c] = param_4[0x13];
      param_1[0x14d] = lVar2;
      lVar2 = param_4[0x16];
      param_1[0x14e] = param_4[0x15];
      param_1[0x14f] = lVar2;
      lVar2 = param_4[0x18];
      param_1[0x150] = param_4[0x17];
      param_1[0x151] = lVar2;
      lVar2 = param_4[0x1a];
      param_1[0x152] = param_4[0x19];
      param_1[0x153] = lVar2;
      lVar2 = param_4[0x1c];
      param_1[0x154] = param_4[0x1b];
      param_1[0x155] = lVar2;
      lVar2 = param_4[0x1e];
      param_1[0x156] = param_4[0x1d];
      param_1[0x157] = lVar2;
      lVar2 = param_4[0x20];
      param_1[0x158] = param_4[0x1f];
      param_1[0x159] = lVar2;
      param_1[0x15a] = param_4[0x21];
      *(int *)(param_1 + 0x15b) = (int)param_4[0x22];
      *(undefined2 *)((longlong)param_1 + 0xadc) = *(undefined2 *)((longlong)param_4 + 0x114);
      lVar2 = param_4[0x23];
      *(int *)(param_1 + 0x15c) = (int)lVar2;
      *(int *)((longlong)param_1 + 0xae4) = (int)param_4[0x24];
      if ((int)lVar2 == 0) {
        if (*(int *)((longlong)param_4 + 0x14) != 0) {
          uVar5 = (uint)(*(int *)((longlong)param_4 + 0x14) * *(int *)((longlong)param_4 + 0x11c)) /
                  1000;
        }
        *(uint *)(param_1 + 0x15c) = uVar5;
      }
    }
    if ((param_2 - 1U & 0xfffffffd) == 0) {
      if (((param_3 == (longlong *)0x0) || (*(int *)((longlong)param_3 + 0xc) == 0)) ||
         ((*(uint *)(param_3 + 2) == 0 ||
          ((0xfe < *(uint *)(param_3 + 2) || (*(int *)((longlong)param_3 + 0x14) == 0))))))
      goto LAB_180024064;
      *(int *)((longlong)param_1 + 0x43c) = *(int *)((longlong)param_3 + 0xc);
      *(int *)(param_1 + 0x88) = (int)param_3[2];
      *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar2 = param_3[4];
      param_1[0x89] = param_3[3];
      param_1[0x8a] = lVar2;
      lVar2 = param_3[6];
      param_1[0x8b] = param_3[5];
      param_1[0x8c] = lVar2;
      lVar2 = param_3[8];
      param_1[0x8d] = param_3[7];
      param_1[0x8e] = lVar2;
      lVar2 = param_3[10];
      param_1[0x8f] = param_3[9];
      param_1[0x90] = lVar2;
      lVar2 = param_3[0xc];
      param_1[0x91] = param_3[0xb];
      param_1[0x92] = lVar2;
      lVar2 = param_3[0xe];
      param_1[0x93] = param_3[0xd];
      param_1[0x94] = lVar2;
      lVar2 = param_3[0x10];
      param_1[0x95] = param_3[0xf];
      param_1[0x96] = lVar2;
      lVar2 = param_3[0x12];
      param_1[0x97] = param_3[0x11];
      param_1[0x98] = lVar2;
      lVar2 = param_3[0x14];
      param_1[0x99] = param_3[0x13];
      param_1[0x9a] = lVar2;
      lVar2 = param_3[0x16];
      param_1[0x9b] = param_3[0x15];
      param_1[0x9c] = lVar2;
      lVar2 = param_3[0x18];
      param_1[0x9d] = param_3[0x17];
      param_1[0x9e] = lVar2;
      lVar2 = param_3[0x1a];
      param_1[0x9f] = param_3[0x19];
      param_1[0xa0] = lVar2;
      lVar2 = param_3[0x1c];
      param_1[0xa1] = param_3[0x1b];
      param_1[0xa2] = lVar2;
      lVar2 = param_3[0x1e];
      param_1[0xa3] = param_3[0x1d];
      param_1[0xa4] = lVar2;
      lVar2 = param_3[0x20];
      param_1[0xa5] = param_3[0x1f];
      param_1[0xa6] = lVar2;
      param_1[0xa7] = param_3[0x21];
      *(int *)(param_1 + 0xa8) = (int)param_3[0x22];
      *(undefined2 *)((longlong)param_1 + 0x544) = *(undefined2 *)((longlong)param_3 + 0x114);
      lVar2 = param_3[0x23];
      *(int *)(param_1 + 0xa9) = (int)lVar2;
      *(int *)((longlong)param_1 + 0x54c) = (int)param_3[0x24];
      if ((int)lVar2 == 0) {
        if (*(int *)((longlong)param_3 + 0x14) != 0) {
          uVar4 = (uint)(*(int *)((longlong)param_3 + 0x14) * *(int *)((longlong)param_3 + 0x11c)) /
                  1000;
        }
        *(uint *)(param_1 + 0xa9) = uVar4;
      }
    }
    if (param_2 - 2U < 3) {
      iVar6 = (param_2 != 4) + 1;
      memset(local_638,0,0x608);
      pcVar1 = *(code **)(*param_1 + 0x60);
      if (pcVar1 == (code *)0x0) {
        if (param_2 == 4) {
          puVar7 = (undefined8 *)param_1[0x25];
        }
        else {
          puVar7 = (undefined8 *)param_1[0xd8];
        }
        iVar6 = FUN_1800206c0(*param_1,iVar6,puVar7,local_638);
      }
      else {
        iVar6 = (*pcVar1)(param_1,iVar6,local_638);
      }
      if (iVar6 == 0) {
        pcVar8 = local_538;
      }
      else {
        pcVar8 = "Default Capture Device";
        if (*param_4 != 0) {
          pcVar8 = "Capture Device";
        }
      }
      FUN_18001d5f0((char *)(param_1 + 0xf9),0x100,(longlong)pcVar8,0xffffffffffffffff);
    }
    if ((param_2 - 1U & 0xfffffffd) == 0) {
      memset(local_638,0,0x608);
      pcVar1 = *(code **)(*param_1 + 0x60);
      if (pcVar1 == (code *)0x0) {
        iVar6 = FUN_1800206c0(*param_1,1,(undefined8 *)param_1[0x25],local_638);
      }
      else {
        iVar6 = (*pcVar1)(param_1,1,local_638);
      }
      if (iVar6 == 0) {
        pcVar8 = local_538;
      }
      else {
        pcVar8 = "Default Playback Device";
        if (*param_3 != 0) {
          pcVar8 = "Playback Device";
        }
      }
      FUN_18001d5f0((char *)(param_1 + 0x46),0x100,(longlong)pcVar8,0xffffffffffffffff);
    }
    uVar3 = FUN_18000ded0(param_1,param_2);
  }
  return uVar3;
}


