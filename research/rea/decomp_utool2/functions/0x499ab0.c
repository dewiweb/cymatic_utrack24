// rea decompile_all
// name: FUN_00499ab0
// address: 0x499ab0
// body: available
// range: 0x499ab0-0x499b6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00499ab0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  double in_XMM0_Qa;
  undefined1 local_14 [4];
  double local_10;
  
  iVar1 = FUN_0069f1b0();
  if (iVar1 == 6) {
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x18);
  }
  else {
    if (iVar1 != 7) {
      iVar1 = FUN_00499c40(local_14);
      if (iVar1 == 0) {
        FUN_00624c90(param_1,param_2);
        return param_1;
      }
      FUN_006250e0(in_ECX);
      local_10 = in_XMM0_Qa;
      puVar2 = operator_new(0x18);
      goto LAB_00499b40;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
  }
  puVar2 = operator_new(0x18);
  local_10 = (double)iVar1;
LAB_00499b40:
  puVar2[1] = 0;
  *puVar2 = juce::Expression::Helpers::Constant::vftable;
  *(double *)(puVar2 + 2) = local_10;
  *(undefined1 *)(puVar2 + 4) = 0;
  *param_1 = puVar2;
  puVar2[1] = puVar2[1] + 1;
  return param_1;
}

