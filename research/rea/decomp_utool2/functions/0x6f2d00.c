// rea decompile_all
// name: FUN_006f2d00
// address: 0x6f2d00
// body: available
// range: 0x6f2d00-0x6f2d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f2d00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  piVar1 = (int *)*in_ECX;
  iVar3 = piVar1[2];
  if (iVar3 == 0) {
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[1] = 0;
    return;
  }
  if (iVar3 <= param_1) {
    in_ECX[2] = iVar3 + -1;
    iVar3 = *(int *)(*piVar1 + (iVar3 + -1) * 4);
    iVar2 = *(int *)(iVar3 + 0xc);
    in_ECX[3] = iVar2;
    in_ECX[1] = *(int *)(iVar3 + 4) + iVar2;
    return;
  }
  iVar3 = 0;
  if (0 < param_1) {
    iVar3 = param_1;
  }
  in_ECX[2] = iVar3;
  iVar3 = *(int *)(*piVar1 + iVar3 * 4);
  iVar2 = *(int *)(iVar3 + 0xc);
  if (0 < iVar2) {
    if (param_2 < 0) {
      in_ECX[3] = 0;
      in_ECX[1] = *(int *)(iVar3 + 4) + in_ECX[3];
      return;
    }
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
    in_ECX[3] = param_2;
    in_ECX[1] = *(int *)(iVar3 + 4) + in_ECX[3];
    return;
  }
  in_ECX[3] = 0;
  in_ECX[1] = *(int *)(iVar3 + 4) + in_ECX[3];
  return;
}

