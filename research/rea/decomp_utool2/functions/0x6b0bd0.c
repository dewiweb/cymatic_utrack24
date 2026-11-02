// rea decompile_all
// name: FUN_006b0bd0
// address: 0x6b0bd0
// body: available
// range: 0x6b0bd0-0x6b0cde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0bd0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  uint local_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)(in_ECX + 0x70) != 0) && (*(int *)(*(int *)(in_ECX + 0x70) + 8) != 0)) {
    uVar2 = FUN_006c9b30(local_18);
    FUN_004b1a10(&local_28,*(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c),
                 *(undefined4 *)(in_ECX + 0x90),*(undefined4 *)(in_ECX + 0x94),uVar2);
    if (*(int *)(in_ECX + 0x74) != 0) {
      uVar1 = *(uint *)(in_ECX + 0x98);
      param_1 = CONCAT31(param_1._1_3_,(char)(uVar1 >> 2)) & 0xffffff01;
      local_8 = CONCAT31(local_8._1_3_,(char)(uVar1 >> 3)) & 0xffffff01;
      local_c = CONCAT31(local_c._1_3_,(char)uVar1) & 0xffffff01;
      local_10 = CONCAT31(local_10._1_3_,(char)(uVar1 >> 1)) & 0xffffff01;
      if (*(int *)(in_ECX + 0x70) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 8);
      }
      FUN_006d14d0(uVar2,&local_28,local_10,local_c,local_8,param_1);
      return;
    }
    if (*(int *)(in_ECX + 0x70) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x70) + 8);
    }
    if (*(int **)(iVar3 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x20) + 4))(&local_28);
      return;
    }
    FUN_006e9790(local_28,local_24,local_20,local_1c);
  }
  return;
}

