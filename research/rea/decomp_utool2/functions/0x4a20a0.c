// rea decompile_all
// name: FUN_004a20a0
// address: 0x4a20a0
// body: available
// range: 0x4a20a0-0x4a2151 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a20a0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  
  iVar2 = 0x10;
  iVar5 = *(int *)(in_ECX + 0x20) + -1;
  local_c = 0x10;
  if (-1 < iVar5) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x18) + iVar5 * 4);
    do {
      iVar1 = *piVar3;
      iVar2 = 0;
      iVar8 = 0;
      iVar9 = 0;
      uVar6 = *(uint *)(iVar1 + 0x10);
      iVar7 = uVar6 - 1;
      if (-1 < iVar7) {
        if (1 < (int)uVar6) {
          uVar6 = uVar6 >> 1;
          iVar2 = iVar7 * 4;
          iVar7 = iVar7 + uVar6 * -2;
          piVar4 = (int *)(*(int *)(iVar1 + 8) + iVar2);
          do {
            iVar8 = iVar8 + *(int *)(*piVar4 + 8);
            iVar9 = iVar9 + *(int *)(piVar4[-1] + 8);
            uVar6 = uVar6 - 1;
            piVar4 = piVar4 + -2;
          } while (uVar6 != 0);
        }
        iVar2 = 0;
        if (-1 < iVar7) {
          iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar7 * 4) + 8);
        }
        iVar2 = iVar2 + iVar9 + iVar8;
      }
      iVar5 = iVar5 + -1;
      iVar2 = local_c + iVar2;
      piVar3 = piVar3 + -1;
      local_c = iVar2;
    } while (-1 < iVar5);
  }
  return iVar2;
}

