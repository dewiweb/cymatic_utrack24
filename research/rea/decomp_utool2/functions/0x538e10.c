// rea decompile_all
// name: FUN_00538e10
// address: 0x538e10
// body: available
// range: 0x538e10-0x538f15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538e10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_ECX;
  
  puVar3 = in_ECX + 0x1e;
  *puVar3 = ViewPort_RelatedLocalPlaylist::vftable;
  *in_ECX = ViewPort_RelatedLocalPlaylist::vftable;
  in_ECX[0x1c] = ViewPort_RelatedLocalPlaylist::vftable;
  in_ECX[0x25] = ViewPort_RelatedLocalPlaylist::vftable;
  puVar2 = (undefined4 *)in_ECX[0x86];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x86] = 0;
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x86];
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
  FUN_006e7fa0();
  FUN_006e4a60();
  iVar1 = DAT_00c8a5c4;
  in_ECX[0x25] = juce::ListBoxModel::vftable;
  *puVar3 = PlaylistProjectSubSet::vftable;
  if (iVar1 != 0) {
    FUN_00415ff0(puVar3);
  }
  puVar3 = (undefined4 *)in_ECX[0x24];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar3 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  *in_ECX = ViewPortContainerItem::vftable;
  in_ECX[0x1c] = ViewPortContainerItem::vftable;
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

