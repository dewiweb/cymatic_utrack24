// rea decompile_all
// name: FUN_0069e810
// address: 0x69e810
// body: available
// range: 0x69e810-0x69e8a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0069e810(void)

{
  int iVar1;
  int in_ECX;
  int *_Memory;
  undefined **local_2c;
  undefined4 local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007228a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = *(undefined4 *)(in_ECX + 4);
  local_20 = local_15;
  local_15[0] = 1;
  local_2c = juce::RelativeCoordinatePositionerBase::DependencyFinderScope::vftable;
  local_1c = &DAT_00bfe12c;
  local_8 = 1;
  FUN_00625030(&local_2c,&local_1c);
  _Memory = (int *)(local_1c + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return local_15[0];
}

