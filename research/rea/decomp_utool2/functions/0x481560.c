// rea decompile_all
// name: FUN_00481560
// address: 0x481560
// body: available
// range: 0x481560-0x4815e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481560(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = *(int *)(in_ECX + 8);
  for (puVar6 = *(undefined4 **)(in_ECX + 8); puVar6 != (undefined4 *)(iVar1 * 0x10 + iVar2);
      puVar6 = puVar6 + 4) {
    uVar3 = puVar6[2];
    iVar7 = puVar6[1];
    uVar4 = *puVar6;
    iVar5 = puVar6[3] + iVar7;
    for (; iVar7 < iVar5; iVar7 = iVar7 + 1) {
      param_1[5] = ((int *)*param_1)[2] * iVar7 + *(int *)*param_1;
      param_1[6] = (iVar7 - param_1[4]) * ((int *)param_1[1])[2] + *(int *)param_1[1];
      FUN_00488390(uVar4,uVar3);
    }
  }
  return;
}

