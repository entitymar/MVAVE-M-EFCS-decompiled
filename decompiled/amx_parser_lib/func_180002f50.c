// FUN_180002f50 @ 180002f50

longlong FUN_180002f50(int *param_1,int *param_2)

{
  return (longlong)param_2[1] * (longlong)param_1[1] +
         (longlong)param_2[0xf] * (longlong)param_1[0xf] +
         (longlong)param_1[0xd] * (longlong)param_2[0xd] +
         (longlong)param_1[0xc] * (longlong)param_2[0xc] +
         (longlong)param_1[0xb] * (longlong)param_2[0xb] +
         (longlong)param_1[10] * (longlong)param_2[10] + (longlong)param_1[9] * (longlong)param_2[9]
         + (longlong)param_1[8] * (longlong)param_2[8] + (longlong)param_1[7] * (longlong)param_2[7]
         + (longlong)param_1[6] * (longlong)param_2[6] + (longlong)param_1[5] * (longlong)param_2[5]
         + (longlong)param_1[4] * (longlong)param_2[4] + (longlong)param_1[3] * (longlong)param_2[3]
         + (longlong)param_1[2] * (longlong)param_2[2] + (longlong)*param_1 * (longlong)*param_2 +
         (longlong)param_2[0xe] * (longlong)param_1[0xe] >> 0x15;
}


