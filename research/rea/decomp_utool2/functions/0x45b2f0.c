// rea decompile_all
// name: FUN_0045b2f0
// address: 0x45b2f0
// body: available
// range: 0x45b2f0-0x45b37a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_0045b2f0(undefined4 param_1,undefined1 *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((param_4 & 8) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  if (*param_3 == 'L') {
    pcVar1[0] = 'I';
    pcVar1[1] = '6';
    pcVar1 = pcVar1 + 2;
    *pcVar1 = '4';
  }
  else {
    *pcVar1 = *param_3;
  }
  if ((param_4 & 0xe00) == 0x400) {
    pcVar1[1] = 'o';
    pcVar1[2] = '\0';
    return param_2;
  }
  if ((param_4 & 0xe00) != 0x800) {
    pcVar1[1] = param_3[1];
    pcVar1[2] = '\0';
    return param_2;
  }
  pcVar1[1] = ~((char)param_4 << 3) & 0x20U | 0x58;
  pcVar1[2] = '\0';
  return param_2;
}

