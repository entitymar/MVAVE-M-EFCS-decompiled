// FUN_180017240 @ 180017240

undefined8 FUN_180017240(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong *local_18;
  undefined8 uStack_10;
  
  iVar4 = (**(code **)(*param_1 + 0x1a0))(param_1[0x187]);
  if (iVar4 == 0) {
    uStack_10 = 1;
    local_18 = param_1;
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(&local_18);
    }
    if (((code *)local_18[5] != (code *)0x0) && ((int)uStack_10 == 1)) {
      (*(code *)local_18[5])();
    }
    return 0;
  }
  if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x70), lVar2 != 0)) {
    puVar1 = (undefined8 *)(lVar2 + 0x68);
    if (puVar1 != (undefined8 *)0x0) {
      WaitForSingleObject((HANDLE)*puVar1,0xffffffff);
    }
    uVar5 = 0;
    if (*(int *)(lVar2 + 0x40) != 0) {
      do {
        pcVar3 = *(code **)(lVar2 + (ulonglong)uVar5 * 0x10);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(lVar2 + 8 + (ulonglong)uVar5 * 0x10),1,
                    "[JACK] An error occurred when deactivating the JACK client.");
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(lVar2 + 0x40));
    }
    if (puVar1 != (undefined8 *)0x0) {
      SetEvent((HANDLE)*puVar1);
    }
  }
  return 0xffffffff;
}


