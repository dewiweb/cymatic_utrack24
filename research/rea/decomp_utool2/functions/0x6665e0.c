// rea decompile_all
// name: FUN_006665e0
// address: 0x6665e0
// body: available
// range: 0x6665e0-0x6666ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006665e0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_c;
  
  local_c = 0;
  iVar1 = *(int *)(in_ECX + 0x184);
  iVar2 = *(int *)(in_ECX + 0x118);
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar8 = (int *)(*(int *)(in_ECX + 0xc4) + 0xc);
    do {
      iVar6 = (piVar8[6] * *piVar8) / *(int *)(in_ECX + 0x118);
      puVar3 = *(undefined4 **)(*(int *)(iVar1 + 0x38) + local_c * 4);
      puVar7 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_c * 4);
      iVar4 = *(int *)(iVar1 + 8 + local_c * 4);
      iVar10 = (iVar2 + 2) * iVar6;
      if (0 < iVar10) {
        puVar9 = puVar7;
        do {
          uVar5 = *(undefined4 *)((iVar4 - (int)puVar7) + (int)puVar9);
          *puVar9 = uVar5;
          *(undefined4 *)((int)puVar3 + (-4 - (int)puVar7) + (int)(puVar9 + 1)) = uVar5;
          iVar10 = iVar10 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar10 != 0);
      }
      iVar10 = iVar6 * 2;
      if (0 < iVar10) {
        puVar9 = puVar7 + iVar6 * iVar2;
        puVar11 = (undefined4 *)(iVar4 + (iVar2 + -2) * iVar6 * 4);
        do {
          *(undefined4 *)((int)puVar7 + (-4 - iVar4) + (int)(puVar11 + 1)) =
               *(undefined4 *)((int)puVar9 + (iVar4 - (int)puVar7));
          *puVar9 = *puVar11;
          iVar10 = iVar10 + -1;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar10 != 0);
      }
      if (0 < iVar6) {
        puVar7 = puVar3 + -iVar6;
        do {
          *puVar7 = *puVar3;
          iVar6 = iVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar6 != 0);
      }
      local_c = local_c + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_c < *(int *)(in_ECX + 0x24));
  }
  return;
}

