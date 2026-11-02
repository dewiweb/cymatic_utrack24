// rea decompile_all
// name: FUN_006048a0
// address: 0x6048a0
// body: available
// range: 0x6048a0-0x60498d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006048a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *local_8;
  
  piVar4 = (int *)(in_ECX[0xe] + -8);
  *in_ECX = juce::AudioProcessorValueTreeState::vftable;
  in_ECX[5] = juce::AudioProcessorValueTreeState::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[0xd] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX[0xc] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = in_ECX + 7;
  if ((0 < (int)in_ECX[10]) && (iVar1 = *piVar4, iVar1 != 0)) {
    local_8 = piVar4;
    uVar3 = FUN_00447770(&local_8);
    if (uVar3 < *(uint *)(iVar1 + 0x2c)) {
      FUN_00410320(uVar3);
    }
  }
  FID_conflict__free((void *)in_ECX[8]);
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
  in_ECX[5] = juce::ValueTree::Listener::vftable;
  *in_ECX = juce::Timer::vftable;
  FUN_0063eab0();
  return;
}

