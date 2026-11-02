// rea decompile_all
// name: FUN_00666500
// address: 0x666500
// body: available
// range: 0x666500-0x6665d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666500(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(in_ECX + 0x184);
  iVar2 = *(int *)(in_ECX + 0x118);
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar3 = (int *)(*(int *)(in_ECX + 0xc4) + 0xc);
    do {
      local_c = (piVar3[6] * *piVar3) / *(int *)(in_ECX + 0x118);
      puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_10 * 4);
      if (0 < local_c) {
        iVar5 = *(int *)(*(int *)(iVar1 + 0x38) + local_10 * 4) - (int)puVar4;
        puVar6 = puVar4 + (iVar2 + 1) * local_c;
        puVar7 = puVar4 + -local_c;
        puVar8 = puVar4 + (iVar2 + 2) * local_c;
        do {
          local_c = local_c + -1;
          *(undefined4 *)(iVar5 + -4 + (int)(puVar7 + 1)) =
               *(undefined4 *)(iVar5 + -4 + (int)(puVar6 + 1));
          *puVar7 = *puVar6;
          *(undefined4 *)(iVar5 + -4 + (int)(puVar8 + 1)) =
               *(undefined4 *)(iVar5 + -4 + (int)(puVar4 + 1));
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (local_c != 0);
      }
      local_10 = local_10 + 1;
      piVar3 = piVar3 + 0x15;
    } while (local_10 < *(int *)(in_ECX + 0x24));
  }
  return;
}

