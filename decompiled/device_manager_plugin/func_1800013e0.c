// FUN_1800013e0 @ 1800013e0

longlong FUN_1800013e0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  puVar12 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)FUN_18000b2a8(0x50);
  puVar10 = puVar12;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1800069d0(puVar4,param_2);
    *puVar4 = flutter::PluginRegistrarWindows::vftable;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 1;
    puVar4[8] = 0;
    puVar4[9] = 0;
    lVar5 = FUN_18000b2a8(0x68);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    puVar4[8] = lVar5;
    lVar5 = FlutterDesktopPluginRegistrarGetView(param_2);
    puVar10 = puVar4;
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_18000b2a8(0x10);
      puVar7 = puVar12;
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = flutter::FlutterView::vftable;
        puVar6[1] = lVar5;
        puVar7 = puVar6;
      }
      puVar6 = (undefined8 *)puVar4[6];
      puVar4[6] = puVar7;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  plVar2 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar2[1];
  uStack_40 = 0;
  cVar1 = *(char *)((longlong)plVar8 + 0x19);
  plVar9 = plVar2;
  local_48 = plVar8;
  while (plVar3 = plVar8, cVar1 == '\0') {
    plVar8 = plVar3;
    plVar11 = plVar3;
    if ((ulonglong)plVar3[4] < param_2) {
      plVar8 = plVar3 + 2;
      plVar11 = plVar9;
    }
    uStack_40 = (uint)(param_2 <= (ulonglong)plVar3[4]);
    cVar1 = *(char *)(*plVar8 + 0x19);
    plVar9 = plVar11;
    plVar8 = (longlong *)*plVar8;
    local_48 = plVar3;
  }
  if ((*(char *)((longlong)plVar9 + 0x19) != '\0') || (param_2 < (ulonglong)plVar9[4])) {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_180004e90();
    }
    uStack_50 = 0;
    local_58 = param_1;
    plVar8 = (longlong *)FUN_18000b2a8(0x30);
    plVar8[4] = param_2;
    plVar8[5] = (longlong)puVar10;
    *plVar8 = (longlong)plVar2;
    plVar8[1] = (longlong)plVar2;
    plVar8[2] = (longlong)plVar2;
    *(undefined2 *)(plVar8 + 3) = 0;
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    local_58 = local_48;
    plVar9 = FUN_180004ad0(param_1,(longlong *)&local_58,plVar8);
    puVar10 = puVar12;
  }
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  FlutterDesktopPluginRegistrarSetDestructionHandler(plVar9[4],FUN_180006ed0);
  return plVar9[5];
}


