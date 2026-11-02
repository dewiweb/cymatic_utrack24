// rea decompile_all
// name: FUN_006c7950
// address: 0x6c7950
// body: available
// range: 0x6c7950-0x6c7a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006c7950(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int iVar6;
  double local_28 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_006e6400(&local_18);
  iVar4 = *(int *)(in_ECX + 0xe0);
  if (iVar4 != 4) {
    iVar6 = *(int *)(in_ECX + 0x108);
    local_28[0]._0_4_ = SUB84((double)((float)*(int *)(in_ECX + 0x18) * 0.3) + 6755399441055744.0,0)
    ;
    iVar5 = iVar6;
    if (local_28[0]._0_4_ < iVar6) {
      iVar5 = local_28[0]._0_4_;
    }
    local_28[0] = (double)((float)*(int *)(in_ECX + 0x1c) * 0.3) + 6755399441055744.0;
    if (local_28[0]._0_4_ < iVar6) {
      iVar6 = local_28[0]._0_4_;
    }
    iVar1 = iVar5;
    iVar2 = iVar6;
    if (iVar4 == 3) {
      iVar1 = (int)(*(int *)(in_ECX + 0x18) + (*(int *)(in_ECX + 0x18) >> 0x1f & 3U)) >> 2;
      if (iVar1 < iVar5) {
        iVar1 = iVar5;
      }
      iVar2 = (int)(*(int *)(in_ECX + 0x1c) + (*(int *)(in_ECX + 0x1c) >> 0x1f & 3U)) >> 2;
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
    }
    else if (iVar4 == 2) {
      local_28[0] = (double)((float)*(int *)(in_ECX + 0x1c) * 0.25) + 6755399441055744.0;
      iVar4 = 0x10;
      if (local_28[0]._0_4_ < 0x10) {
        iVar4 = local_28[0]._0_4_;
      }
      puVar3 = (undefined4 *)FUN_004afa10(local_28,iVar4);
      local_18 = *puVar3;
      local_14 = puVar3[1];
      local_10 = puVar3[2];
      local_c = puVar3[3];
    }
    puVar3 = (undefined4 *)FUN_00418f80(local_28,iVar1,iVar2);
    local_18 = *puVar3;
    local_14 = puVar3[1];
    local_10 = puVar3[2];
    local_c = puVar3[3];
  }
  FUN_0040e4d0(param_1);
  return extraout_EDX;
}

