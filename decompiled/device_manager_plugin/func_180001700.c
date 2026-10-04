// FUN_180001700 @ 180001700

undefined8 *
FUN_180001700(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_18000b2a8(0xb0);
    FUN_180002570((longlong)(puVar1 + 4),(longlong)(param_2 + 4));
    FUN_180002570((longlong)(puVar1 + 0xd),(longlong)(param_2 + 0xd));
    *puVar1 = puVar2;
    puVar1[2] = puVar2;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    puVar2 = FUN_180001700(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_180001700(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
    puVar2 = puVar1;
  }
  return puVar2;
}


