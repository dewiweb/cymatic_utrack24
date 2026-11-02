// rea decompile_all
// name: FUN_006b2bc0
// address: 0x6b2bc0
// body: available
// range: 0x6b2bc0-0x6b2c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006b2bc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  void *local_20 [3];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723b7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x74) + iVar2 * 4) + 0x70) == param_1)
      goto LAB_006b2c10;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x7c));
  }
  iVar2 = -1;
LAB_006b2c10:
  iVar4 = iVar2 * 0xc;
  iVar1 = *(int *)(**(int **)(in_ECX + 0x70) + iVar4);
  local_14 = in_ECX;
  uVar3 = FUN_00495510(local_20,iVar2,param_2 + *(int *)(**(int **)(in_ECX + 0x70) + 4 + iVar4),
                       *(undefined4 *)(in_ECX + 0x1c));
  local_8 = 0;
  FUN_006b2990(uVar3,1);
  FID_conflict__free(local_20[0]);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)**(int **)(local_14 + 0x70) >> 8),
                  iVar1 != *(int *)(iVar4 + **(int **)(local_14 + 0x70)));
}

