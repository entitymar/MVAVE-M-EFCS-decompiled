// GetUnwindTryBlock @ 180004f58

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_1800047b4((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}


