// FUN_180003fe0 @ 180003fe0

undefined8 * FUN_180003fe0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18000b2a8(0x40);
  *puVar2 = std::
            _Func_impl_no_alloc<<lambda_a7e5c5c9b6b04193c20a21573dea4e4a>,void,unsigned_char_const*___ptr64,unsigned___int64>
            ::vftable;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_1800023e0(puVar2 + 4,(undefined8 *)(param_1 + 0x20));
  return puVar2;
}


