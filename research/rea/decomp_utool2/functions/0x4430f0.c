// rea decompile_all
// name: FUN_004430f0
// address: 0x4430f0
// body: available
// range: 0x4430f0-0x44319b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004430f0(float *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = (uint *)(((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3)
                      * param_2 + *(int *)(in_ECX + 0x80) * param_3 + *(int *)(in_ECX + 0x70)) -
                    (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68));
  if (param_5 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  uVar1 = *puVar2;
  uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = uVar4;
  while (param_5 = param_5 + -1, param_5 != 0) {
    puVar2 = puVar2 + *(int *)(in_ECX + 0x20);
    uVar3 = *puVar2;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    if ((int)uVar4 < (int)uVar3) {
      uVar4 = uVar3;
    }
    if ((int)uVar3 < (int)uVar1) {
      uVar1 = uVar3;
    }
  }
  fVar6 = (float)(int)uVar1 * 4.656613e-10;
  fVar5 = (float)(int)uVar4 * 4.656613e-10;
  if ((float)(int)uVar4 * 4.656613e-10 <= fVar6) {
    fVar5 = fVar6;
  }
  *param_1 = fVar6;
  param_1[1] = fVar5;
  return;
}

