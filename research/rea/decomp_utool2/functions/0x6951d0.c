// rea decompile_all
// name: FUN_006951d0
// address: 0x6951d0
// body: available
// range: 0x6951d0-0x69523a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006951d0(undefined4 param_1)

{
  switch(param_1) {
  case 0x1002:
    FUN_00695ba0();
    return;
  case 0x1003:
    FUN_006946d0();
    return;
  case 0x1004:
    FUN_00694740();
    return;
  case 0x1005:
    FUN_00697280();
    FUN_00695c40();
    return;
  case 0x1006:
    FUN_00694640();
    return;
  case 0x1008:
    FUN_00697200(1);
    return;
  case 0x1009:
    FUN_00697200(0);
  }
  return;
}

