// rea decompile_all
// name: FUN_0065bb50
// address: 0x65bb50
// body: available
// range: 0x65bb50-0x65bbee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x65bbe8 to 0x65bd10 FUN_0065bd10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bb50(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x6a] = (int)puVar1;
  *puVar1 = FUN_0065bc20;
  puVar1[2] = &DAT_0065bc10;
  puVar1[3] = FUN_0065bbf0;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  if (4 < in_ECX[0x19]) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x37;
    *(undefined4 *)(*in_ECX + 0x18) = 4;
    (**(code **)*in_ECX)();
  }
  if (0x100 < in_ECX[0x15]) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x39;
    *(undefined4 *)(*in_ECX + 0x18) = 0x100;
    (**(code **)*in_ECX)();
  }
  FUN_0065c4d0();
  FUN_0065c390();
  if (in_ECX[0x13] == 2) {
    FUN_0065bd10();
    return;
  }
  return;
}

