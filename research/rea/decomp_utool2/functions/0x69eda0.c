// rea decompile_all
// name: FUN_0069eda0
// address: 0x69eda0
// body: available
// range: 0x69eda0-0x69ee38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069eda0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 *local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072290a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (undefined4 *)0x0) {
    local_14 = juce::Expression::Scope::vftable;
    local_8 = 0;
    puVar4 = (undefined4 *)FUN_00624e80(&local_18,&local_14);
    uVar2 = *in_ECX;
    *in_ECX = *puVar4;
    *puVar4 = uVar2;
  }
  else {
    puVar4 = (undefined4 *)FUN_00624e80(&param_1,param_1);
    uVar2 = *in_ECX;
    *in_ECX = *puVar4;
    *puVar4 = uVar2;
    local_18 = param_1;
  }
  if (local_18 != (undefined4 *)0x0) {
    piVar1 = local_18 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_18)(1,uVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

