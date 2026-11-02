// rea decompile_all
// name: FUN_006acf60
// address: 0x6acf60
// body: available
// range: 0x6acf60-0x6ad059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006acf60(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723631;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::TabbedComponent::vftable;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  uVar4 = 0xc0;
  in_ECX[0x21] = 0x1e;
  in_ECX[0x22] = 1;
  in_ECX[0x23] = 0;
  puVar3 = operator_new(0xc0);
  local_8._0_1_ = 4;
  FUN_006ae1d0(uVar4);
  *puVar3 = juce::TabbedComponent::ButtonBar::vftable;
  puVar3[0x1c] = juce::TabbedComponent::ButtonBar::vftable;
  puVar3[0x2e] = in_ECX;
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar1 = (undefined4 *)in_ECX[0x1c];
  if ((puVar1 != puVar3) && (in_ECX[0x1c] = puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = (int *)in_ECX[0x1c];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}

