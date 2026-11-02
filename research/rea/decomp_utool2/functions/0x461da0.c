// rea decompile_all
// name: FUN_00461da0
// address: 0x461da0
// body: available
// range: 0x461da0-0x461e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461da0(void)

{
  int iVar1;
  int *in_ECX;
  int *_Memory;
  int in_EDX;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700cb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_EDX != 0) {
    FUN_00461ba0(in_ECX);
    ExceptionList = local_10;
    return;
  }
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  if (*(code **)(*in_ECX + 0x4c) == FUN_0062a880) {
    iVar1 = FUN_0045d1e0(&DAT_00bfe12c);
    (**(code **)(*in_ECX + 0x10))(local_14,iVar1 + 1);
  }
  else {
    (**(code **)(*in_ECX + 0x4c))(&local_14,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  }
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  (**(code **)(*in_ECX + 0x48))(0);
  (**(code **)(*in_ECX + 0x48))(0);
  ExceptionList = local_10;
  return;
}

