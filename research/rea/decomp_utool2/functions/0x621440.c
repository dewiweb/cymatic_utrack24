// rea decompile_all
// name: FUN_00621440
// address: 0x621440
// body: available
// range: 0x621440-0x6214d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00621440(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  if (*param_1 != '\0') {
    iVar2 = FUN_0044ec90();
    iVar3 = FUN_0044ec90();
    iVar3 = iVar3 - iVar2;
    if (-1 < iVar3) {
      iVar2 = *in_ECX;
      FUN_0044ebd0(iVar3);
      do {
        iVar4 = FUN_0045e0d0(iVar2,param_1);
        if (iVar4 == 0) {
          return iVar3;
        }
        iVar4 = 0;
        do {
          pbVar1 = (byte *)(iVar2 + -1);
          iVar2 = iVar2 + -1;
          if ((*pbVar1 & 0xc0) != 0x80) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  return -1;
}

