// FUN_180006b90 @ 180006b90

undefined8 FUN_180006b90(longlong param_1,longlong *param_2,void *param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  short *local_res10;
  
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2,&local_res10);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  lVar3 = 0;
  sVar1 = *local_res10;
  while (sVar1 != 0) {
    lVar3 = lVar3 + 1;
    sVar1 = local_res10[lVar3];
  }
  if (lVar3 + 1U < 0x41) {
    memcpy(param_3,local_res10,lVar3 * 2);
    *(undefined2 *)(lVar3 * 2 + (longlong)param_3) = 0;
    (**(code **)(param_1 + 0x278))(local_res10);
    return 0;
  }
  (**(code **)(param_1 + 0x278))(local_res10);
  return 0xffffffff;
}


