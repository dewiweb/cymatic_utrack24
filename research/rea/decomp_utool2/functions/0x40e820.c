// rea decompile_all
// name: FUN_0040e820
// address: 0x40e820
// body: available
// range: 0x40e820-0x40e948 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040e820(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  undefined4 *extraout_ECX;
  undefined4 *puVar4;
  
  in_ECX[0x3fe] = AnimatedFlower::vftable;
  in_ECX[0x3e2] = AnimatedFlower::vftable;
  in_ECX[0x3fe] = juce::Timer::vftable;
  FUN_0063eab0();
  FUN_006ea0b0();
  in_ECX[0x148] = MyProgress::vftable;
  in_ECX[0x164] = MyProgress::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x174));
  in_ECX[0x164] = juce::Timer::vftable;
  FUN_0063eab0();
  FUN_006ea0b0();
  FUN_0040e950();
  FUN_006e4de0();
  piVar3 = (int *)(in_ECX[0x4e] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x4c] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x4d] + 0xc) = 0;
  UNLOCK();
  puVar4 = (undefined4 *)in_ECX[0x4d];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar4 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
      puVar4 = extraout_ECX;
    }
  }
  puVar1 = in_ECX + 0x1c;
  *in_ECX = BasePopupComponent::vftable;
  *puVar1 = BasePopupComponent::vftable;
  FUN_0040e370(in_ECX,puVar4);
  if (DAT_00c8a5d4 != 0) {
    FUN_00415ff0(puVar1);
  }
  FUN_004eb130();
  *puVar1 = juce::ComponentListener::vftable;
  FUN_006ea0b0();
  return;
}

