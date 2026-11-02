// rea decompile_all
// name: FUN_006a91d0
// address: 0x6a91d0
// body: available
// range: 0x6a91d0-0x6a92a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a91d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_34;
  int local_30;
  int local_8;
  
  local_30 = 0x1000700;
  local_34 = &local_8;
  puStack_38 = (undefined1 *)0x6a91ef;
  FUN_006ab460();
  puVar2 = param_1;
  local_30 = local_8;
  local_34 = (undefined4 *)0x6a9201;
  FUN_00684a80();
  puStack_38 = (undefined1 *)&local_30;
  local_34 = (undefined4 *)0x2badd8e6;
  puStack_3c = (undefined4 *)0x6a9216;
  FUN_00680d30();
  local_34 = (undefined4 *)0x6a921d;
  FUN_00684c50();
  puVar3 = (undefined4 *)0x0;
  if (0 < param_3) {
    do {
      local_30 = 0;
      local_34 = (undefined4 *)0x1;
      puStack_38 = (undefined1 *)param_2;
      iVar1 = *(int *)*puVar2;
      puStack_3c = puVar3;
      local_34 = (undefined4 *)FUN_00472d90();
      puStack_38 = (undefined1 *)0x6a9243;
      (**(code **)(iVar1 + 0x54))();
      puVar3 = (undefined4 *)((int)puVar3 + 3);
    } while ((int)puVar3 < param_3);
  }
  local_34 = &local_30;
  puStack_3c = &param_1;
  puStack_38 = (undefined1 *)0x1000600;
  FUN_006ab460();
  puStack_38 = (undefined1 *)0x6a926d;
  FUN_006842b0();
  local_34 = (undefined4 *)0x6a9274;
  FUN_00684c50();
  local_30 = param_3;
  local_34 = (undefined4 *)param_2;
  puStack_38 = (undefined1 *)0x0;
  puStack_3c = (undefined4 *)0x6a9286;
  FUN_00472d90();
  FUN_0040e4d0(&puStack_3c);
  FUN_00677150();
  return;
}

