// rea decompile_all
// name: FUN_0042b490
// address: 0x42b490
// body: available
// range: 0x42b490-0x42b570 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b490(LPVOID param_1)

{
  int *_Memory;
  int iVar1;
  int *in_ECX;
  int *in_EDX;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fdb59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  local_8 = 0;
  iVar1 = (**(code **)(*in_EDX + 0x10))();
  if (-1 < iVar1) {
    param_1 = (LPVOID)0x0;
    iVar1 = (**(code **)(iRam00000000 + 0x14))(0,&param_1);
    if (-1 < iVar1) {
      FUN_0045cae0(param_1);
      iVar1 = *in_ECX;
      *in_ECX = local_1c;
      _Memory = (int *)(iVar1 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      CoTaskMemFree(param_1);
    }
    (**(code **)(iRam00000000 + 8))(0);
  }
  ExceptionList = local_10;
  return;
}

