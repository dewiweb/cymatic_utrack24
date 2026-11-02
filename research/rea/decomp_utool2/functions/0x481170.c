// rea decompile_all
// name: FUN_00481170
// address: 0x481170
// body: available
// range: 0x481170-0x4811fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481170(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  int iVar8;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (puVar7 = *(undefined4 **)(in_ECX + 8); puVar7 != (undefined4 *)(iVar1 * 0x10 + iVar2);
      puVar7 = puVar7 + 4) {
    uVar3 = *puVar7;
    iVar8 = puVar7[1];
    uVar4 = puVar7[2];
    iVar6 = puVar7[3] + iVar8;
    for (; iVar8 < iVar6; iVar8 = iVar8 + 1) {
      param_1[5] = ((int *)*param_1)[2] * iVar8 + *(int *)*param_1;
      piVar5 = (int *)param_1[1];
      param_1[6] = ((iVar8 - param_1[4]) % piVar5[5]) * piVar5[2] + *piVar5;
      FUN_00489b90(uVar3,uVar4);
    }
  }
  return;
}

