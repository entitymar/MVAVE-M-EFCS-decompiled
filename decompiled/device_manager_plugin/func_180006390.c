// FUN_180006390 @ 180006390

undefined8 * FUN_180006390(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<<lambda_8eee370cab40fdde7c9cc6b356495af3>,void,unsigned_char_const*___ptr64,unsigned___int64>
             ::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}


