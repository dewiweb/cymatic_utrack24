// rea decompile_all
// name: FUN_00447d90
// address: 0x447d90
// body: available
// range: 0x447d90-0x447e81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447d90(int *param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x9c) + 0xd4);
  switch(*(undefined4 *)(in_ECX + 0x98)) {
  case 0:
    iVar2 = **(int **)(iVar1 + 0x130);
    if (*param_1 < **(int **)(iVar1 + 0x130)) {
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        FUN_00425840(iVar2,0,*(undefined4 *)(iVar1 + 0x130),iVar2,0,param_1[1]);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      return;
    }
    break;
  case 1:
    iVar2 = *(int *)(iVar1 + 0x138);
    if (*param_1 < *(int *)(iVar1 + 0x138)) {
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        FUN_004258c0(iVar2,0,param_1,iVar2,in_ECX,param_1[1],0x3f800000);
        iVar2 = iVar2 + -1;
        in_ECX = extraout_ECX;
      } while (-1 < iVar2);
      return;
    }
    break;
  case 2:
    FUN_005c60f0(*(undefined4 *)(*(int *)(in_ECX + 0x9c) + 0xd8),in_ECX,param_1[1],in_ECX);
    break;
  case 3:
    FUN_005c60f0(param_2,in_ECX,param_1[1],in_ECX);
    return;
  }
  return;
}

