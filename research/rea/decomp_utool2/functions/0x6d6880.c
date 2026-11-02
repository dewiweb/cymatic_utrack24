// rea decompile_all
// name: FUN_006d6880
// address: 0x6d6880
// body: available
// range: 0x6d6880-0x6d69af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d6880(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 local_44;
  void *pvStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072754d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8e70();
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = param_2;
  iStack_18 = param_3;
  FUN_00680c60();
  FUN_00684c50();
  FUN_0040dd60();
  (**(code **)(*(int *)*param_1 + 0x54))();
  FUN_00418d70();
  (**(code **)(*(int *)*param_1 + 0x54))();
  puStack_78 = (undefined4 *)(float)param_3;
  uStack_7c = 0;
  FUN_006841a0(auStack_80);
  FUN_006840c0(local_14);
  local_8 = 0;
  puStack_78 = (undefined4 *)0x6d6976;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  puStack_78 = (undefined4 *)0x6d6985;
  FID_conflict__free(pvStack_40);
  puStack_78 = &local_44;
  local_44 = local_24;
  pvStack_40 = (void *)uStack_20;
  uStack_3c = uStack_1c;
  iStack_38 = iStack_18;
  uStack_7c = 0x6d699d;
  (**(code **)(*(int *)*param_1 + 0x54))();
  ExceptionList = local_10;
  return;
}

