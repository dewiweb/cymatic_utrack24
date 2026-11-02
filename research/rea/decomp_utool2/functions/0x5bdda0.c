// rea decompile_all
// name: FUN_005bdda0
// address: 0x5bdda0
// body: available
// range: 0x5bdda0-0x5bde39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bdda0(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  puVar1 = PTR_DAT_00c7ed68;
  switch(in_EDX) {
  case 1:
    FUN_0045c990("LP-16");
    return;
  case 2:
    FUN_0045c990("LR-16");
    return;
  case 3:
    FUN_0045c990("uTrack24");
    return;
  case 4:
    FUN_0045c990("uTrack-X32");
    return;
  }
  *in_ECX = PTR_DAT_00c7ed68;
  piVar2 = (int *)(puVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

