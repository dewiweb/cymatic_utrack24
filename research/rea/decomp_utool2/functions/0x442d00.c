// rea decompile_all
// name: FUN_00442d00
// address: 0x442d00
// body: available
// range: 0x442d00-0x442da9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442d00(float *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  
  piVar3 = (int *)(((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3)
                     * param_2 + *(int *)(in_ECX + 0x80) * param_3 + *(int *)(in_ECX + 0x70)) -
                   (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68));
  if (param_5 != 0) {
    iVar4 = *piVar3;
    iVar2 = iVar4;
    while (param_5 = param_5 + -1, param_5 != 0) {
      piVar3 = piVar3 + *(int *)(in_ECX + 0x20);
      iVar1 = *piVar3;
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
      }
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
    }
    fVar6 = (float)iVar2 * 4.656613e-10;
    fVar5 = (float)iVar4 * 4.656613e-10;
    if ((float)iVar4 * 4.656613e-10 <= fVar6) {
      fVar5 = fVar6;
    }
    *param_1 = fVar6;
    param_1[1] = fVar5;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  return;
}

