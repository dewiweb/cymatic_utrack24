// rea decompile_all
// name: FUN_006ba5c0
// address: 0x6ba5c0
// body: available
// range: 0x6ba5c0-0x6ba782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ba5c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007246ac;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::FileBrowserComponent::vftable;
  in_ECX[0x1c] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1d] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1e] = juce::FileBrowserComponent::vftable;
  in_ECX[0x1f] = juce::FileBrowserComponent::vftable;
  in_ECX[0x20] = juce::FileBrowserComponent::vftable;
  in_ECX[0x22] = juce::FileBrowserComponent::vftable;
  puVar2 = (undefined4 *)in_ECX[0x31];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x31] = 0;
    (**(code **)*puVar2)(1,uVar3);
  }
  puVar2 = (undefined4 *)in_ECX[0x27];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x27] = 0;
    (**(code **)*puVar2)(1);
  }
  FUN_006322a0(10000);
  FUN_006321e0();
  if ((undefined4 *)in_ECX[0xf3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xf3])(1);
  }
  FUN_006e4a60();
  FUN_006e5800();
  FUN_006e2980();
  if ((undefined4 *)in_ECX[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x31])(1);
  }
  FID_conflict__free((void *)in_ECX[0x2e]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x2b]);
  piVar4 = (int *)(in_ECX[0x2a] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if ((undefined4 *)in_ECX[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x27])(1);
  }
  in_ECX[0x22] = juce::Timer::vftable;
  FUN_0063eab0();
  piVar4 = (int *)(in_ECX[0x21] + -8);
  in_ECX[0x20] = juce::FileFilter::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x1f] = juce::ComboBox::Listener::vftable;
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  in_ECX[0x1d] = juce::TextEditor::Listener::vftable;
  in_ECX[0x1c] = juce::FileBrowserListener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

