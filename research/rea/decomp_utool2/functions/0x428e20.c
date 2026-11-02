// rea decompile_all
// name: FUN_00428e20
// address: 0x428e20
// body: available
// range: 0x428e20-0x428f74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428e20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (((0 < *(int *)(in_ECX + 0x20)) || (param_3 != 0)) && (*(int *)(in_ECX + 0x98) != 0)) {
    iVar1 = param_3 - (*(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4));
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    if (0 < iVar4) {
      iVar1 = 0;
      if (0 < param_2) {
        do {
          _memset(*(void **)(param_1 + iVar1 * 4),0,iVar4 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_2);
      }
      param_3 = param_3 - iVar4;
      *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) - iVar4 / 2;
    }
    for (; 0 < param_3; param_3 = param_3 - iVar1) {
      uVar3 = *(uint *)(in_ECX + 0xa4) & *(uint *)(in_ECX + 0xa0);
      iVar5 = *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4);
      iVar2 = (*(int *)(in_ECX + 0xa0) - uVar3) + 1;
      iVar1 = param_3;
      if (iVar5 < param_3) {
        iVar1 = iVar5;
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      if (iVar1 < 1) {
        return;
      }
      iVar2 = *(int *)(in_ECX + 0x80);
      if (0 < param_2) {
        iVar5 = 0;
        do {
          (**(code **)(**(int **)(in_ECX + 0xac) + 4))
                    (*(int *)(param_1 + iVar5 * 4) + iVar4 * 4,0,
                     *(int *)(in_ECX + 0x94) + iVar2 * uVar3,
                     *(undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar5 * 4),iVar1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_2);
      }
      *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + iVar1;
      iVar4 = iVar4 + iVar1;
    }
  }
  return;
}

