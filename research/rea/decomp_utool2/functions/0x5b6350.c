// rea decompile_all
// name: FUN_005b6350
// address: 0x5b6350
// body: available
// range: 0x5b6350-0x5b647e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6350(_LIST_ENTRY *param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  PRTL_CRITICAL_SECTION_DEBUG in_ECX;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007194c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063ea10(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  (in_ECX->ProcessLocksList).Flink = param_1;
  *(undefined ***)in_ECX = GlobalProgressThread::MyThreadPool::vftable;
  _eh_vector_constructor_iterator_
            (&(in_ECX->ProcessLocksList).Blink,0x4c,4,FUN_005b5630,FUN_005b55a0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&in_ECX[9].CreatorBackTraceIndexHigh);
  lpCriticalSection = (LPCRITICAL_SECTION)&in_ECX->CreatorBackTraceIndexHigh;
  in_ECX[10].ContentionCount = 0;
  in_ECX[10].Flags = 0;
  in_ECX[10].CreatorBackTraceIndexHigh = 0;
  in_ECX[10].SpareWORD = 0;
  in_ECX[0xb].Type = 0;
  in_ECX[0xb].CreatorBackTraceIndex = 0;
  in_ECX[0xb].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  in_ECX[0xb].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined2 *)&in_ECX[0xb].ProcessLocksList.Blink = 0x101;
  param_1 = (_LIST_ENTRY *)0x4;
  do {
    lpCriticalSection[2].DebugInfo = in_ECX;
    DVar1 = GetCurrentThreadId();
    if (DVar1 == lpCriticalSection[-1].SpinCount) {
      pvVar2 = GetCurrentThread();
      SetThreadPriority(pvVar2,0);
    }
    else {
      EnterCriticalSection(lpCriticalSection);
      if (lpCriticalSection[-1].LockSemaphore == (HANDLE)0x0) {
LAB_005b6456:
        lpCriticalSection[1].RecursionCount = 6;
      }
      else {
        pvVar2 = lpCriticalSection[-1].LockSemaphore;
        if (pvVar2 == (HANDLE)0x0) {
          pvVar2 = GetCurrentThread();
        }
        BVar3 = SetThreadPriority(pvVar2,0);
        if (BVar3 != 0) goto LAB_005b6456;
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[3].LockCount;
    param_1 = (_LIST_ENTRY *)((int)param_1 + -1);
    if (param_1 == (_LIST_ENTRY *)0x0) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

