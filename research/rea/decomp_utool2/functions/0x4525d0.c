// rea decompile_all
// name: FUN_004525d0
// address: 0x4525d0
// body: available
// range: 0x4525d0-0x452669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004525d0(undefined4 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if ((param_3 != *(int *)(in_ECX + 8)) && (param_3 != *(int *)(in_ECX + 0xc))) {
    *param_1 = 0;
    return param_1;
  }
  piVar1 = (int *)FUN_00453fa0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(param_1,param_2);
    return param_1;
  }
  puVar2 = operator_new(0x18);
  puVar2[1] = 0;
  *puVar2 = juce::Expression::Helpers::Constant::vftable;
  *(undefined8 *)(puVar2 + 2) = param_4;
  *(undefined1 *)(puVar2 + 4) = 0;
  *param_1 = puVar2;
  puVar2[1] = puVar2[1] + 1;
  return param_1;
}

