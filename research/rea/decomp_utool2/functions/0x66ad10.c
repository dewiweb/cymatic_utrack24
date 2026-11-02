// rea decompile_all
// name: FUN_0066ad10
// address: 0x66ad10
// body: available
// range: 0x66ad10-0x66ae37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ad10(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *local_14;
  int local_10;
  
  iVar9 = *(int *)(in_ECX + 0x144);
  iVar1 = *(int *)(in_ECX + 0xdc);
  iVar3 = (*(code *)**(undefined4 **)(in_ECX + 4))();
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x3c)) {
    piVar7 = (int *)(*(int *)(in_ECX + 0x44) + 8);
    local_14 = (int *)(iVar9 + 8);
    do {
      puVar4 = (undefined4 *)
               (**(code **)(*(int *)(in_ECX + 4) + 8))
                         (in_ECX,1,(piVar7[5] * *(int *)(in_ECX + 0xd8) * 8) / *piVar7,iVar1 * 3);
      FUN_004c2c30(iVar1 * 4 + iVar3,puVar4,iVar1 * 0xc);
      if (0 < iVar1) {
        puVar6 = puVar4 + iVar1 * 2;
        puVar5 = (undefined4 *)(iVar1 * 0x10 + iVar3);
        puVar8 = puVar4;
        iVar9 = iVar1;
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          *(undefined4 *)((iVar3 - (int)puVar4) + (int)puVar8) = uVar2;
          *puVar5 = *puVar8;
          iVar9 = iVar9 + -1;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar9 != 0);
      }
      iVar9 = iVar1 * 4 + iVar3;
      iVar3 = iVar3 + iVar1 * 0x14;
      piVar7 = piVar7 + 0x15;
      *local_14 = iVar9;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(in_ECX + 0x3c));
  }
  return;
}

