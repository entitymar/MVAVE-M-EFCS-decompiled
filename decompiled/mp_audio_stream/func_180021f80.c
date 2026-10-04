// FUN_180021f80 @ 180021f80

undefined8 FUN_180021f80(int *param_1,void *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  size_t local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  int iStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == (int *)0x0) {
    return 0xfffffffe;
  }
  memset(param_3,0,0x138);
  uVar3 = FUN_18000a7e0(param_1,&local_a8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(void **)(param_3 + 0x4c) = param_2;
  if ((param_2 != (void *)0x0) && (local_a8 != 0)) {
    memset(param_2,0,local_a8);
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  param_3[6] = param_1[10];
  if ((param_1[0x10] == 0) && (param_1[4] == param_1[5])) {
    bVar2 = false;
LAB_180022071:
    iVar5 = param_1[1];
    if ((((iVar5 == 2) || (iVar5 == 5)) || (iVar5 = *param_1, iVar5 == 2)) || (iVar5 == 5))
    goto LAB_18002208d;
  }
  else {
    bVar2 = true;
    if (param_1[0x16] == 0) goto LAB_180022071;
  }
  iVar5 = 5;
LAB_18002208d:
  if ((((param_1[0x10] != 0) || (param_1[4] != param_1[5])) && (param_1[0x16] != 0)) ||
     (((local_90 = param_1[1], local_90 != 2 && (local_90 != 5)) &&
      ((local_90 = *param_1, local_90 != 2 && (local_90 != 5)))))) {
    local_90 = 5;
  }
  iStack_8c = param_1[2];
  uStack_88 = param_1[3];
  local_80 = *(undefined8 *)(param_1 + 6);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  local_70 = param_1[0xb];
  uStack_38 = *(undefined8 *)(param_1 + 0xe);
  uStack_84 = 0;
  local_60 = CONCAT44(iStack_8c,local_90);
  uStack_58 = (ulonglong)uStack_88;
  uStack_68 = (undefined4)uStack_38;
  uStack_64 = (undefined4)((ulonglong)uStack_38 >> 0x20);
  iStack_6c = param_1[0xc];
  local_40 = *(undefined8 *)(param_1 + 0xb);
  local_50 = local_80;
  uStack_48 = uStack_78;
  uVar3 = FUN_18001f460((int *)&local_60,(void *)(local_a0 + (longlong)param_2),param_3 + 8);
  if ((int)uVar3 == 0) {
    if (param_3[0xc] != 1) {
      *(undefined1 *)((longlong)param_3 + 0x12a) = 1;
    }
    if (bVar2) {
      puVar4 = FUN_18001ca70((undefined8 *)&local_90,param_1);
      local_60 = *puVar4;
      uStack_58 = puVar4[1];
      local_50 = puVar4[2];
      uStack_48 = puVar4[3];
      local_40 = puVar4[4];
      uStack_38 = puVar4[5];
      uVar3 = FUN_18002c340((undefined4 *)&local_60,local_98 + (longlong)param_2,param_3 + 0x1a);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *(undefined1 *)((longlong)param_3 + 299) = 1;
    }
    if ((*(char *)((longlong)param_3 + 0x12a) == '\0') &&
       (*(char *)((longlong)param_3 + 299) == '\0')) {
      *(undefined1 *)(param_3 + 0x4a) = 0;
      *(bool *)((longlong)param_3 + 0x129) = *param_3 != param_3[1];
    }
    else {
      if (*param_3 != iVar5) {
        *(undefined1 *)(param_3 + 0x4a) = 1;
      }
      if (param_3[1] != iVar5) {
        *(undefined1 *)((longlong)param_3 + 0x129) = 1;
      }
    }
    if (((((char)param_3[0x4a] == '\0') && (*(char *)((longlong)param_3 + 0x129) == '\0')) &&
        (*(char *)((longlong)param_3 + 0x12a) == '\0')) &&
       (*(char *)((longlong)param_3 + 299) == '\0')) {
      *(undefined1 *)(param_3 + 0x4b) = 1;
    }
    iVar5 = 0;
    if ((char)param_3[0x4b] == '\0') {
      cVar1 = *(char *)((longlong)param_3 + 299);
      if ((uint)param_3[2] < (uint)param_3[3]) {
        iVar5 = 4;
        if (cVar1 == '\0') {
          iVar5 = 2;
        }
      }
      else if (*(char *)((longlong)param_3 + 0x12a) == '\0') {
        iVar5 = 1;
        if (cVar1 != '\0') {
          iVar5 = 3;
        }
      }
      else {
        iVar5 = 5;
        if (cVar1 == '\0') {
          iVar5 = 2;
        }
      }
    }
    param_3[7] = iVar5;
    uVar3 = 0;
  }
  return uVar3;
}


