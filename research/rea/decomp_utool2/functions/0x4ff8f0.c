// rea decompile_all
// name: FUN_004ff8f0
// address: 0x4ff8f0
// body: available
// range: 0x4ff8f0-0x4ffa13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff8f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  in_ECX[0x1c] = PopupStartModeSelector::vftable;
  *in_ECX = PopupStartModeSelector::vftable;
  in_ECX[0x1d] = PopupStartModeSelector::vftable;
  FUN_00415ff0(in_ECX + 0x1c);
  in_ECX[0x167] = juce::TextButton::vftable;
  in_ECX[0x183] = juce::TextButton::vftable;
  FUN_006e3470();
  FUN_006e4a60();
  FUN_006e5800();
  puVar3 = (undefined4 *)in_ECX[0xd7];
  in_ECX[0x9d] = CheckBoxButton::vftable;
  in_ECX[0xb9] = CheckBoxButton::vftable;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_006e3470();
  puVar3 = (undefined4 *)in_ECX[0x9a];
  in_ECX[0x60] = CheckBoxButton::vftable;
  in_ECX[0x7c] = CheckBoxButton::vftable;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_006e3470();
  puVar3 = (undefined4 *)in_ECX[0x5d];
  in_ECX[0x23] = CheckBoxButton::vftable;
  in_ECX[0x3f] = CheckBoxButton::vftable;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_006e3470();
  in_ECX[0x1d] = juce::Button::Listener::vftable;
  in_ECX[0x1c] = juce::ComponentListener::vftable;
  FUN_006ea0b0();
  return;
}

