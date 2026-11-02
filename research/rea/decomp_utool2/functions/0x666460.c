// rea decompile_all
// name: FUN_00666460
// address: 0x666460
// body: available
// range: 0x666460-0x6664f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00666460(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar2 = *(int *)(in_ECX + 0x184);
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar6 = (int *)(*(int *)(in_ECX + 0xc4) + 0xc);
    do {
      uVar5 = piVar6[6] * *piVar6;
      iVar3 = (int)uVar5 / *(int *)(in_ECX + 0x118);
      uVar7 = (uint)piVar6[8] % uVar5;
      if ((uint)piVar6[8] % uVar5 == 0) {
        uVar7 = uVar5;
      }
      if (iVar8 == 0) {
        *(int *)(iVar2 + 0x48) = (int)(uVar7 - 1) / iVar3 + 1;
      }
      iVar3 = iVar3 * 2;
      if (0 < iVar3) {
        puVar1 = (undefined4 *)
                 (*(int *)(*(int *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4) + iVar8 * 4) +
                 uVar7 * 4);
        puVar4 = puVar1;
        do {
          *puVar4 = puVar1[-1];
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 1;
        } while (iVar3 != 0);
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar8 < *(int *)(in_ECX + 0x24));
  }
  return;
}

