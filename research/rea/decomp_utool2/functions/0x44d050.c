// rea decompile_all
// name: FUN_0044d050
// address: 0x44d050
// body: available
// range: 0x44d050-0x44d0c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d050(int param_1,int param_2,char *param_3)

{
  int *in_ECX;
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (-1 < param_1) {
    cVar2 = -0x80;
    cVar1 = '\x7f';
    if (in_ECX[2] + -1 < param_2) {
      param_2 = in_ECX[2] + -1;
    }
    if (param_1 <= param_2) {
      iVar3 = (param_2 - param_1) + 1;
      pcVar4 = (char *)(*in_ECX + param_1 * 2);
      do {
        if (*pcVar4 < cVar1) {
          cVar1 = *pcVar4;
        }
        if (cVar2 < pcVar4[1]) {
          cVar2 = pcVar4[1];
        }
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar4 + 2;
      } while (iVar3 != 0);
      if (cVar1 <= cVar2) {
        param_3[1] = cVar2;
        *param_3 = cVar1;
        return;
      }
    }
  }
  param_3[0] = '\x01';
  param_3[1] = '\0';
  return;
}

