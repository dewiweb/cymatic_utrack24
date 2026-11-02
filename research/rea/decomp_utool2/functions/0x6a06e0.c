// rea decompile_all
// name: FUN_006a06e0
// address: 0x6a06e0
// body: available
// range: 0x6a06e0-0x6a0767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a06e0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722b61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  operator_new(0x28);
  local_8 = 0;
  uVar1 = FUN_006a0770(param_1);
  iVar2 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar2) {
    FUN_00409cf0(iVar2 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar2 = in_ECX[2];
  in_ECX[2] = iVar2 + 1;
  *(undefined4 *)(*in_ECX + iVar2 * 4) = uVar1;
  ExceptionList = local_10;
  return;
}

