// rea decompile_all
// name: FUN_006e1cb0
// address: 0x6e1cb0
// body: available
// range: 0x6e1cb0-0x6e1d0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e1cb0(char param_1,char param_2)

{
  byte bVar1;
  int in_ECX;
  char cVar2;
  byte bVar3;
  
  *(char *)(in_ECX + 0xcc) = param_1;
  *(char *)(in_ECX + 0xcd) = param_2;
  *(undefined1 *)(in_ECX + 0xce) = 0;
  if ((param_1 == '\0') && (param_2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  bVar1 = *(byte *)(in_ECX + 0x68);
  bVar3 = cVar2 << 5;
  *(byte *)(in_ECX + 0x68) = bVar1 & 0xdf | bVar3;
  if ((param_1 == '\0') && (param_2 == '\0')) {
    *(byte *)(in_ECX + 0x68) = bVar1 & 0x9f | bVar3;
    return;
  }
  *(byte *)(in_ECX + 0x68) = bVar1 & 0x9f | bVar3 | 0x40;
  return;
}

