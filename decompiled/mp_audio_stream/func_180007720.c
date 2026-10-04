// FUN_180007720 @ 180007720

undefined8 FUN_180007720(undefined8 param_1,int param_2,int *param_3,longlong param_4)

{
  char *pcVar1;
  
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    return 0xffffff34;
  }
  pcVar1 = "NULL Playback Device";
  if (param_2 != 1) {
    pcVar1 = "NULL Capture Device";
  }
  FUN_18001d5f0((char *)(param_4 + 0x100),0x100,(longlong)pcVar1,0xffffffffffffffff);
  *(undefined4 *)(param_4 + 0x200) = 1;
  *(undefined8 *)(param_4 + 0x208) = 0;
  *(undefined8 *)(param_4 + 0x210) = 0;
  *(undefined4 *)(param_4 + 0x204) = 1;
  return 0;
}


