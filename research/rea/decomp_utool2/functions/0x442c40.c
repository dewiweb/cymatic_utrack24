// rea decompile_all
// name: FUN_00442c40
// address: 0x442c40
// body: available
// range: 0x442c40-0x442cfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442c40(float *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  puVar3 = (ushort *)
           (((((int)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0x10) >> 0x1f & 7U)) >> 3) *
              param_2 + *(int *)(in_ECX + 0x80) * param_3 + *(int *)(in_ECX + 0x70)) -
            (*(int **)(in_ECX + 0x68))[2]) + **(int **)(in_ECX + 0x68));
  if (param_5 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  iVar1 = (uint)*puVar3 << 0x10;
  iVar5 = (uint)*puVar3 << 0x10;
  while (iVar2 = iVar5, param_5 = param_5 + -1, param_5 != 0) {
    puVar3 = puVar3 + *(int *)(in_ECX + 0x20);
    iVar5 = (uint)*puVar3 * 0x10000;
    iVar4 = iVar5;
    if (iVar5 <= iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = iVar4;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  fVar7 = (float)iVar2 * 4.656613e-10;
  fVar6 = (float)iVar1 * 4.656613e-10;
  if ((float)iVar1 * 4.656613e-10 <= fVar7) {
    fVar6 = fVar7;
  }
  *param_1 = fVar7;
  param_1[1] = fVar6;
  return;
}

