// rea decompile_all
// name: FUN_00618af0
// address: 0x618af0
// body: available
// range: 0x618af0-0x618b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00618af0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  int in_EDX;
  char *pcVar4;
  
  pcVar1 = (char *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x38));
  pcVar4 = (char *)(*(int *)(in_ECX + 0x38) + in_EDX);
  if ((*pcVar4 == *pcVar1) && (pcVar4[1] == pcVar1[1])) {
    pcVar4 = pcVar4 + 2;
    pcVar2 = pcVar1 + 2;
    while (((((pcVar3 = pcVar2 + 1, pcVar2[1] == pcVar4[1] &&
              (pcVar3 = pcVar2 + 2, pcVar2[2] == pcVar4[2])) &&
             (pcVar3 = pcVar2 + 3, pcVar2[3] == pcVar4[3])) &&
            ((pcVar3 = pcVar2 + 4, pcVar2[4] == pcVar4[4] &&
             (pcVar3 = pcVar2 + 5, pcVar2[5] == pcVar4[5])))) &&
           ((pcVar3 = pcVar2 + 6, pcVar2[6] == pcVar4[6] &&
            (pcVar3 = pcVar2 + 7, pcVar2[7] == pcVar4[7]))))) {
      pcVar3 = pcVar2 + 8;
      pcVar4 = pcVar4 + 8;
      if ((pcVar2[8] != *pcVar4) || (pcVar2 = pcVar3, pcVar1 + 0x102 <= pcVar3)) break;
    }
    pcVar3 = pcVar3 + (0x102 - (int)(pcVar1 + 0x102));
    if (2 < (int)pcVar3) {
      pcVar1 = *(char **)(in_ECX + 0x74);
      if (pcVar3 <= *(char **)(in_ECX + 0x74)) {
        pcVar1 = pcVar3;
      }
      *(int *)(in_ECX + 0x70) = in_EDX;
      return pcVar1;
    }
  }
  return (char *)0x2;
}

