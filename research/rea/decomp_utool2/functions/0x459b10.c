// rea decompile_all
// name: FUN_00459b10
// address: 0x459b10
// body: available
// range: 0x459b10-0x459ba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459b10(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700738;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = param_1;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if ((piVar1 != (int *)0x0) && (pcVar2 = *(code **)(*piVar1 + 4), pcVar2 != guard_check_icall)) {
    (*pcVar2)(uVar3);
  }
  local_8 = 0;
  if (((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
      (piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1), piVar1 != (int *)0x0)) &&
     (piVar1 != param_1)) {
    FUN_0045baa0();
  }
  *(bool *)(in_ECX + 1) = *(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0;
  ExceptionList = local_10;
  return;
}

