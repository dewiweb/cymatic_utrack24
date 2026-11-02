// rea decompile_all
// name: FUN_0069c5e0
// address: 0x69c5e0
// body: available
// range: 0x69c5e0-0x69c6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_0069c5e0(float *param_1,int param_2)

{
  double in_XMM0_Qa;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined **local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007223e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    local_18[0] = juce::RelativeRectangleLocalScope::vftable;
    local_8 = param_2;
    FUN_0069c5e0(param_1,local_18);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_0069ee40(param_2);
  dVar2 = in_XMM0_Qa;
  FUN_0069ee40(param_2);
  dVar1 = dVar2;
  FUN_0069ee40(param_2);
  dVar3 = dVar1;
  FUN_0069ee40(param_2);
  dVar3 = dVar3 - dVar1;
  param_1[1] = (float)dVar1;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar2 = dVar2 - in_XMM0_Qa;
  *param_1 = (float)in_XMM0_Qa;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  param_1[2] = (float)dVar2;
  param_1[3] = (float)dVar3;
  ExceptionList = local_10;
  return param_1;
}

