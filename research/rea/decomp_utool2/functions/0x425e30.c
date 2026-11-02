// rea decompile_all
// name: FUN_00425e30
// address: 0x425e30
// body: available
// range: 0x425e30-0x425ea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425e30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  
  FUN_00403320(*param_1,param_1[1],0,0,0);
  if (*(char *)(param_1 + 0x25) == '\0') {
    iVar5 = 0;
    if (0 < *in_ECX) {
      iVar4 = in_ECX[1];
      do {
        iVar1 = *(int *)(in_ECX[3] + iVar5 * 4);
        iVar2 = *(int *)(param_1[3] + iVar5 * 4);
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            *(float *)(iVar1 + iVar3 * 4) = (float)*(double *)(iVar2 + iVar3 * 8);
            iVar3 = iVar3 + 1;
            iVar4 = in_ECX[1];
          } while (iVar3 < iVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *in_ECX);
    }
    return;
  }
  FUN_004032e0();
  return;
}

