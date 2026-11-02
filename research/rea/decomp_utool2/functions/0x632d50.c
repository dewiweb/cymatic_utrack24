// rea decompile_all
// name: FUN_00632d50
// address: 0x632d50
// body: available
// range: 0x632d50-0x632daa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00632d50(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  pcVar2 = (char *)*in_ECX;
  if (*(char *)*in_ECX == '\0') {
    return false;
  }
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  iVar4 = 0;
  do {
    pbVar1 = (byte *)(pcVar3 + -1);
    pcVar3 = pcVar3 + -1;
    if ((*pbVar1 & 0xc0) != 0x80) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = FUN_00426f70(pcVar3);
  return iVar4 == param_1;
}

