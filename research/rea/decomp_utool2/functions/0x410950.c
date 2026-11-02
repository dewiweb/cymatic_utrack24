// rea decompile_all
// name: thunk_FUN_006e4a60
// address: 0x410950
// body: available
// range: 0x410950-0x410954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006e4a60(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *piStack_c;
  int *piStack_8;
  
  in_ECX[0x1f] = juce::Label::vftable;
  in_ECX[0x20] = juce::Label::vftable;
  piVar4 = in_ECX + 0x21;
  *in_ECX = juce::Label::vftable;
  in_ECX[0x1c] = juce::Label::vftable;
  in_ECX[0x1e] = juce::Label::vftable;
  FUN_00415ff0(in_ECX + 0x20);
  if ((in_ECX[0x24] == 0) &&
     (iVar1 = *piVar4, piStack_8 = piVar4, uVar3 = FUN_00447770(&piStack_8),
     uVar3 < *(uint *)(iVar1 + 0x18))) {
    FUN_00410320(uVar3);
  }
  if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
    FUN_00415ff0(in_ECX + 0x1f);
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x28] = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x2c];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar2 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  FID_conflict__free((void *)in_ECX[0x29]);
  if ((undefined4 *)in_ECX[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x28])(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar2 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  piVar5 = (int *)(in_ECX[0x25] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((0 < (int)in_ECX[0x24]) && (*piVar4 != 0)) {
    piStack_8 = (int *)(*piVar4 + 0x10);
    piStack_c = piVar4;
    uVar3 = FUN_00447770(&piStack_c);
    if (uVar3 < (uint)piStack_8[2]) {
      FUN_00410320(uVar3);
    }
  }
  FID_conflict__free((void *)in_ECX[0x22]);
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  in_ECX[0x20] = juce::Value::Listener::vftable;
  in_ECX[0x1f] = juce::ComponentListener::vftable;
  in_ECX[0x1e] = juce::TextEditor::Listener::vftable;
  piVar4 = (int *)(in_ECX[0x1d] + -8);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x1c] = juce::TooltipClient::vftable;
  FUN_006ea0b0();
  return;
}

