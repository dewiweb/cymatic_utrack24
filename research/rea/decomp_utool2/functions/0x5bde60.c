// rea decompile_all
// name: FUN_005bde60
// address: 0x5bde60
// body: available
// range: 0x5bde60-0x5bdf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bde60(void)

{
  undefined4 in_EDX;
  
  switch(in_EDX) {
  case 1:
    FUN_0045c990("stereo");
    return;
  case 2:
    FUN_0045c990("multitrack");
    return;
  case 3:
    FUN_0045c990("stereoplaylist");
    return;
  case 4:
    FUN_0045c990("multitrackplaylist");
    return;
  case 5:
    FUN_0045c990("playlist");
    return;
  default:
    FUN_0045c990(&DAT_00749a4c);
    return;
  }
}

