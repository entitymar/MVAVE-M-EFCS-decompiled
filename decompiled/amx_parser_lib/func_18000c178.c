// FUN_18000c178 @ 18000c178

undefined4
FUN_18000c178(int *param_1,undefined1 (*param_2) [32],ulonglong param_3,ushort param_4,
             longlong *param_5)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_res10;
  ushort local_res20 [4];
  
  if ((param_2 == (undefined1 (*) [32])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    *param_1 = 0;
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (param_3 < 0x80000000) {
    if ((char)param_5[5] == '\0') {
      FUN_180008800(param_5);
    }
    uVar1 = *(uint *)(param_5[3] + 0xc);
    if (uVar1 == 0xfde9) {
      local_res10 = 0;
      uVar4 = FUN_180012784((byte *)param_2,(uint)local_res20[0],&local_res10,(longlong)param_5);
      if (param_1 != (int *)0x0) {
        *param_1 = (int)uVar4;
      }
      if ((int)uVar4 < 5) {
        return 0;
      }
      if ((char)param_5[6] != '\0') {
        return *(undefined4 *)((longlong)param_5 + 0x2c);
      }
      return 0;
    }
    if (*(longlong *)(param_5[3] + 0x138) == 0) {
      if (0xff < local_res20[0]) {
        if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
          FUN_180016230(param_2,0,param_3);
        }
        goto LAB_18000c25a;
      }
      if (param_2 == (undefined1 (*) [32])0x0) {
LAB_18000c286:
        if (param_1 != (int *)0x0) {
          *param_1 = 1;
        }
        return 0;
      }
      if (param_3 != 0) {
        (*param_2)[0] = (char)local_res20[0];
        goto LAB_18000c286;
      }
    }
    else {
      local_res10 = local_res10 & 0xffffffff00000000;
      iVar2 = FUN_18000ee5c(uVar1,0,local_res20,1);
      if (iVar2 != 0) {
        if ((int)local_res10 == 0) {
          if (param_1 == (int *)0x0) {
            return 0;
          }
          *param_1 = iVar2;
          return 0;
        }
LAB_18000c25a:
        *(undefined4 *)((longlong)param_5 + 0x2c) = 0x2a;
        *(undefined1 *)(param_5 + 6) = 1;
        return 0x2a;
      }
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) goto LAB_18000c25a;
      if ((param_2 != (undefined1 (*) [32])0x0) && (param_3 != 0)) {
        FUN_180016230(param_2,0,param_3);
      }
    }
    uVar5 = 0x22;
  }
  else {
    uVar5 = 0x16;
  }
  *(undefined4 *)((longlong)param_5 + 0x2c) = uVar5;
  *(undefined1 *)(param_5 + 6) = 1;
  FUN_18000a0c4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  return uVar5;
}


