// rea decompile_all
// name: FUN_006326f0
// address: 0x6326f0
// body: available
// range: 0x6326f0-0x63279c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_006326f0(char *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  uint *in_ECX;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)*in_ECX;
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
    pcVar2 = param_1;
  } while (*pcVar6 != '\0');
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  if ((char *)*in_ECX < pcVar6) {
    do {
      if (pcVar5 <= param_1) break;
      iVar4 = 0;
      do {
        pbVar1 = (byte *)(pcVar6 + -1);
        pcVar6 = pcVar6 + -1;
        if ((*pbVar1 & 0xc0) != 0x80) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar4 = 0;
      do {
        pbVar1 = (byte *)(pcVar5 + -1);
        pcVar5 = pcVar5 + -1;
        if ((*pbVar1 & 0xc0) != 0x80) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar4 = FUN_00426f70();
      iVar3 = FUN_00426f70();
      if (iVar3 != iVar4) {
        return false;
      }
    } while ((char *)*in_ECX < pcVar6);
  }
  return pcVar5 == param_1;
}

