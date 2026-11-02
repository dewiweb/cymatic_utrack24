// rea decompile_all
// name: FUN_00458800
// address: 0x458800
// body: available
// range: 0x458800-0x458888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458800(void)

{
  char cVar1;
  char *pcVar2;
  int *in_ECX;
  char *pcVar3;
  undefined4 *in_EDX;
  
  pcVar2 = (char *)*in_EDX;
  if (*pcVar2 == '\0') {
    *in_ECX = (int)&DAT_00bfe234;
    return;
  }
  FUN_0044ec90();
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00455850(pcVar2);
  *in_EDX = pcVar2;
  FUN_0045e390(pcVar2);
  *in_ECX = (int)(pcVar2 + ((uint)(pcVar3 + (4 - (int)(pcVar2 + 1))) & 0xfffffffc));
  return;
}

