// rea decompile_all
// name: FUN_00453d70
// address: 0x453d70
// body: available
// range: 0x453d70-0x453dfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00453d70(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007000cf;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar3 = operator_new(0x10);
  local_8 = 0;
  piVar1 = *(int **)(in_ECX + 8);
  iVar4 = (**(code **)(**(int **)(in_ECX + 0xc) + 8))(uVar2);
  iVar5 = (**(code **)(*piVar1 + 8))();
  puVar3[1] = 0;
  *puVar3 = juce::Expression::Helpers::BinaryTerm::vftable;
  puVar3[2] = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  }
  puVar3[3] = iVar4;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  }
  *puVar3 = juce::Expression::Helpers::Divide::vftable;
  ExceptionList = local_10;
  return puVar3;
}

