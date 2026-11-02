// rea decompile_all
// name: FUN_00474840
// address: 0x474840
// body: available
// range: 0x474840-0x474888 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00474840(void)

{
  int iVar1;
  int *in_ECX;
  byte *pbVar2;
  float *in_EDX;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < in_ECX[5]) {
    iVar1 = in_ECX[4];
    do {
      iVar3 = 0;
      pbVar2 = (byte *)(in_ECX[2] * iVar4 + *in_ECX);
      if (0 < iVar1) {
        do {
          iVar3 = iVar3 + 1;
          *pbVar2 = (byte)(int)((float)*pbVar2 * *in_EDX);
          pbVar2 = pbVar2 + in_ECX[3];
          iVar1 = in_ECX[4];
        } while (iVar3 < iVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[5]);
  }
  return;
}

