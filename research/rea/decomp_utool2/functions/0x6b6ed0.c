// rea decompile_all
// name: FUN_006b6ed0
// address: 0x6b6ed0
// body: available
// range: 0x6b6ed0-0x6b6fd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b6ed0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 **ppuStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072406e;
  local_10 = ExceptionList;
  uStack_24 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  ppuStack_2c = &local_14;
  local_8 = 0;
  uStack_30 = 0x6b6f14;
  FUN_006e8060();
  in_ECX[0x2b] = juce::DirectoryContentsDisplayComponent::vftable;
  in_ECX[0x2c] = param_1;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  puVar1 = in_ECX + 0x30;
  *puVar1 = juce::ListBoxModel::vftable;
  puVar2 = in_ECX + 0x31;
  *puVar2 = juce::ChangeListener::vftable;
  *in_ECX = juce::FileListComponent::vftable;
  in_ECX[0x1c] = juce::FileListComponent::vftable;
  in_ECX[0x2b] = juce::FileListComponent::vftable;
  *puVar1 = juce::FileListComponent::vftable;
  *puVar2 = juce::FileListComponent::vftable;
  in_ECX[0x32] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,6);
  if ((undefined4 *)in_ECX[0x1e] != puVar1) {
    in_ECX[0x1e] = puVar1;
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
    puStack_28 = (undefined4 *)0x6b6fb1;
    FUN_006e7e60();
  }
  if (puVar2 != (undefined4 *)0x0) {
    ppuStack_2c = (undefined1 **)0x6b6fc4;
    puStack_28 = puVar2;
    FUN_004097d0();
  }
  ExceptionList = local_10;
  return;
}

