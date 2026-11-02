// rea decompile_all
// name: FUN_004a4b50
// address: 0x4a4b50
// body: available
// range: 0x4a4b50-0x4a4bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a4baf to 0x63eab0 FUN_0063eab0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4b50(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  
  in_ECX[5] = juce::TopLevelWindowManager::vftable;
  puVar1 = in_ECX + 5;
  if (DAT_00c8a6a8 == in_ECX) {
    DAT_00c8a6a8 = (undefined4 *)0x0;
  }
  *in_ECX = juce::TopLevelWindowManager::vftable;
  FID_conflict__free((void *)in_ECX[6]);
  *puVar1 = juce::DeletedAtShutdown::vftable;
  FUN_00637f30();
  FUN_0063dc00(puVar1);
  FUN_00415ff0(puVar1);
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  *in_ECX = juce::Timer::vftable;
  FUN_0063eab0();
  return;
}

