// rea decompile_all
// name: FUN_00639eb0
// address: 0x639eb0
// body: available
// range: 0x639eb0-0x639f4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639eb0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  bool bVar5;
  int *local_8;
  
  piVar1 = in_ECX + 1;
  *in_ECX = (int)juce::ValueTreeSynchroniser::vftable;
  local_8 = in_ECX;
  FUN_00415ff0(in_ECX);
  iVar2 = in_ECX[4];
  bVar5 = false;
  if (iVar2 == 0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      local_8 = piVar1;
      uVar4 = FUN_00447770(&local_8);
      if (uVar4 < *(uint *)(iVar2 + 0x2c)) {
        FUN_00410320(uVar4);
      }
    }
    iVar2 = in_ECX[4];
    bVar5 = iVar2 == 0;
  }
  if ((!bVar5 && -1 < iVar2) && (iVar2 = *piVar1, iVar2 != 0)) {
    local_8 = piVar1;
    uVar4 = FUN_00447770(&local_8);
    if (uVar4 < *(uint *)(iVar2 + 0x2c)) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[2]);
  puVar3 = (undefined4 *)*piVar1;
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
  *in_ECX = (int)juce::ValueTree::Listener::vftable;
  return;
}

