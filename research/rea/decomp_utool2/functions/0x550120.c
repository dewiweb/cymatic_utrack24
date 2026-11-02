// rea decompile_all
// name: FUN_00550120
// address: 0x550120
// body: available
// range: 0x550120-0x5501c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550120(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007104c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  uVar2 = FUN_00410ea0(&local_14);
  local_8 = 0;
  FUN_0054e940(uVar2);
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
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (*(int *)(*(int *)(in_ECX + 0x38) + 0x40) == 0) {
    *(undefined1 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  else {
    *(undefined1 *)(in_ECX + 0x28) = 1;
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(*(int *)(in_ECX + 0x38) + 0x40);
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0xffffffff;
  ExceptionList = local_10;
  return;
}

