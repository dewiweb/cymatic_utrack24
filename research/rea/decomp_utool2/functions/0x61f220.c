// rea decompile_all
// name: FUN_0061f220
// address: 0x61f220
// body: available
// range: 0x61f220-0x61f2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x61f2a5 to 0x61f2b0 FUN_0061f2b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061f220(void)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  HANDLE hThread;
  int *in_ECX;
  DWORD_PTR dwThreadAffinityMask;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d0fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0061f300();
  local_8 = 0;
  *(int **)(*(int *)ThreadLocalStoragePointer + 8) = in_ECX;
  DVar3 = WaitForSingleObject((HANDLE)in_ECX[10],10000);
  if (DVar3 == 0) {
    dwThreadAffinityMask = in_ECX[0xe];
    if (dwThreadAffinityMask != 0) {
      hThread = GetCurrentThread();
      SetThreadAffinityMask(hThread,dwThreadAffinityMask);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)(*in_ECX + 4))();
    FUN_0061f2b0();
    return;
  }
  CloseHandle((HANDLE)in_ECX[2]);
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_1c + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

