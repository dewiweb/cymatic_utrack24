// rea decompile_all
// name: FUN_006c9fd0
// address: 0x6c9fd0
// body: available
// range: 0x6c9fd0-0x6ca0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c9fd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puStack_8c;
  int iStack_88;
  int local_84;
  int local_80;
  undefined1 local_70 [64];
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  double local_18;
  double local_10;
  
  if (param_1 != 0) {
    local_30 = *(undefined1 **)(param_1 + 0x10);
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = *(int *)(in_ECX + 8);
    local_2c = *(undefined4 *)(param_1 + 0x14);
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
      puStack_8c = local_70;
      iStack_88 = param_1;
      iVar4 = FUN_006cff90();
      local_80 = *(int *)(iVar4 + 0xc);
      local_84 = *(int *)(iVar4 + 8) - iVar1;
    }
    else {
      FUN_0048e190(&puStack_8c);
      pfVar3 = (float *)FUN_006e0ff0(local_20,0);
      local_18 = (double)pfVar3[1] + 6755399441055744.0;
      local_10 = (double)*pfVar3 + 6755399441055744.0;
      local_84 = local_10._0_4_ - iVar1;
      local_80 = local_18._0_4_;
    }
    local_80 = local_80 - iVar2;
    iStack_88 = 0x6ca08b;
    FUN_00472d00();
    if (param_3 != 0) {
      local_80 = 0;
      local_84 = 0;
      iStack_88 = 0;
      puStack_8c = (undefined1 *)0x0;
      FUN_006d14d0(param_1,&local_30);
      return;
    }
    local_80 = local_24;
    local_84 = local_28;
    iStack_88 = local_2c;
    puStack_8c = local_30;
    FUN_006e9790();
  }
  return;
}

