// __vcrt_uninitialize @ 180004218

/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __vcrt_uninitialize(char param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == '\0') {
    FUN_1800045c4();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


