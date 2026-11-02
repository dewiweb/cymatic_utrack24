// rea decompile_all
// name: FUN_00434c00
// address: 0x434c00
// body: available
// range: 0x434c00-0x434c89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434c00(int *param_1)

{
  double *pdVar1;
  int iVar2;
  int *in_ECX;
  double *pdVar3;
  
  if (in_ECX != param_1) {
    if (param_1[2] < 1) {
      if (in_ECX[1] != 0) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
        in_ECX[1] = 0;
      }
      in_ECX[2] = 0;
      return;
    }
    iVar2 = in_ECX[2];
joined_r0x00434c4c:
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      pdVar3 = (double *)*param_1;
      pdVar1 = pdVar3 + param_1[2];
      for (; pdVar3 != pdVar1; pdVar3 = pdVar3 + 1) {
        if (*(double *)(*in_ECX + iVar2 * 8) == *pdVar3) goto joined_r0x00434c4c;
      }
      FUN_00435380(iVar2);
      goto joined_r0x00434c4c;
    }
  }
  return;
}

