// rea decompile_all
// name: FUN_00693140
// address: 0x693140
// body: available
// range: 0x693140-0x69321c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00693140(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  
  if (*(int *)(in_ECX + 0x10c) < 0) {
    iVar3 = *(int *)(in_ECX + 0x11c) + -1;
    *(undefined4 *)(in_ECX + 0x10c) = 0;
    if (-1 < iVar3) {
      local_10 = 0;
      do {
        iVar7 = 0;
        iVar8 = 0;
        iVar6 = 0;
        iVar1 = *(int *)(*(int *)(in_ECX + 0x114) + iVar3 * 4);
        uVar5 = *(uint *)(iVar1 + 0x10);
        iVar4 = uVar5 - 1;
        if (-1 < iVar4) {
          if (1 < (int)uVar5) {
            uVar5 = uVar5 >> 1;
            iVar6 = iVar4 * 4;
            iVar4 = iVar4 + uVar5 * -2;
            piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar6);
            do {
              iVar7 = iVar7 + *(int *)(*piVar2 + 8);
              iVar8 = iVar8 + *(int *)(piVar2[-1] + 8);
              uVar5 = uVar5 - 1;
              piVar2 = piVar2 + -2;
            } while (uVar5 != 0);
          }
          iVar6 = 0;
          if (-1 < iVar4) {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 8) + iVar4 * 4) + 8);
          }
          iVar6 = iVar6 + iVar8 + iVar7;
        }
        local_10 = local_10 + iVar6;
        iVar3 = iVar3 + -1;
        *(int *)(in_ECX + 0x10c) = local_10;
      } while (-1 < iVar3);
      return local_10;
    }
  }
  return *(int *)(in_ECX + 0x10c);
}

