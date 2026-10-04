// ma_stream_push @ 18002dbd0

undefined8 ma_stream_push(void *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x2dbd0  2  ma_stream_push */
  uVar1 = *(int *)(DAT_180036ca0 + 0xd00) - *(uint *)(DAT_180036ca0 + 0xd04);
  if (*(uint *)(DAT_180036ca0 + 0xcf0) < uVar1 + param_2) {
    *(int *)(DAT_180036ca0 + 0xd18) = *(int *)(DAT_180036ca0 + 0xd18) + 1;
    return 0xffffffff;
  }
  if (*(uint *)(DAT_180036ca0 + 0xcf0) < (uint)(*(int *)(DAT_180036ca0 + 0xd00) + param_2)) {
    memcpy(*(void **)(DAT_180036ca0 + 0xcf8),
           (void *)((longlong)*(void **)(DAT_180036ca0 + 0xcf8) +
                   (ulonglong)*(uint *)(DAT_180036ca0 + 0xd04) * 4),(ulonglong)uVar1 << 2);
    *(int *)(DAT_180036ca0 + 0xd00) =
         *(int *)(DAT_180036ca0 + 0xd00) - *(int *)(DAT_180036ca0 + 0xd04);
    *(undefined4 *)(DAT_180036ca0 + 0xd04) = 0;
  }
  memcpy((void *)(*(longlong *)(DAT_180036ca0 + 0xcf8) +
                 (ulonglong)*(uint *)(DAT_180036ca0 + 0xd00) * 4),param_1,(longlong)param_2 << 2);
  *(int *)(DAT_180036ca0 + 0xd00) = *(int *)(DAT_180036ca0 + 0xd00) + param_2;
  return 0;
}


