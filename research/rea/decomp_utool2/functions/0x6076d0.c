// rea decompile_all
// name: FUN_006076d0
// address: 0x6076d0
// body: available
// range: 0x6076d0-0x6077a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006076d0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c233;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::GenericAudioProcessorEditor::vftable;
  local_8 = 0;
  in_ECX[0x2e] = juce::PropertyPanel::vftable;
  FUN_0069bd10(uVar2);
  _Memory = (int *)(in_ECX[0x111] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_006e4de0();
  FUN_006ea0b0();
  *in_ECX = juce::AudioProcessorEditor::vftable;
  FUN_00415ff0(in_ECX[0x1e]);
  in_ECX[0x20] = juce::ComponentBoundsConstrainer::vftable;
  if ((undefined4 *)in_ECX[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1e])(1);
  }
  if ((undefined4 *)in_ECX[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1d])(1);
  }
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

