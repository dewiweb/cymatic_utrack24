// rea decompile_all
// name: FUN_00635430
// address: 0x635430
// body: available
// range: 0x635430-0x6354cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00635430(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  int in_EDX;
  char *pcVar4;
  uint uVar5;
  
  pcVar3 = param_1;
  if (0 < in_EDX) {
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    uVar5 = ((int)pcVar4 - (int)param_1) * in_EDX + 4U & 0xfffffffc;
    puVar2 = (undefined4 *)FUN_004bfe22(uVar5 + 0xb);
    *puVar2 = 0;
    puVar2[1] = uVar5;
    pcVar3 = (char *)(puVar2 + 2);
    while (pcVar4 = pcVar3, in_EDX = in_EDX + -1, -1 < in_EDX) {
      cVar1 = *param_1;
      *pcVar4 = cVar1;
      pcVar3 = pcVar4;
      if (cVar1 != '\0') {
        do {
          cVar1 = pcVar3[(int)(param_1 + (1 - (int)pcVar4))];
          pcVar3 = pcVar3 + 1;
          *pcVar3 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    *in_ECX = puVar2 + 2;
    return in_ECX;
  }
  *in_ECX = &DAT_00bfe12c;
  return in_ECX;
}

