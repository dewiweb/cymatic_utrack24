// rea decompile_all
// name: FUN_0067bf60
// address: 0x67bf60
// body: available
// range: 0x67bf60-0x67bfd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067bf60(undefined4 *param_1)

{
  int iVar1;
  int *in_ECX;
  float *pfVar2;
  int iVar3;
  
  iVar3 = in_ECX[2] + -1;
  if (0 < iVar3) {
    iVar1 = *in_ECX;
    pfVar2 = (float *)(iVar1 + iVar3 * 4);
    if (*(float *)(iVar1 + iVar3 * 4) == 100005.0) {
      do {
        if (*pfVar2 == 100002.0) {
          iVar3 = iVar3 + 2;
          break;
        }
        pfVar2 = pfVar2 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    if (0 < iVar3) {
      *param_1 = *(undefined4 *)(iVar1 + -4 + iVar3 * 4);
      param_1[1] = *(undefined4 *)(iVar1 + iVar3 * 4);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

