// rea decompile_all
// name: FUN_006a3ff0
// address: 0x6a3ff0
// body: available
// range: 0x6a3ff0-0x6a4124 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a3ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722fa5;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = (void *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 1;
  local_8 = 0;
  FUN_006824f0(param_1,param_2,param_3);
  FUN_00684c50(param_4);
  cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))(uVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      local_2c = 0x3f800000;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_1c = 0x3f800000;
      local_18 = 0;
      (**(code **)(*(int *)*in_ECX + 0x5c))(&local_64,&local_2c);
    }
  }
  FUN_00684c50(param_5);
  local_34 = 0x3f800000;
  local_30 = 0;
  uStack_20 = 0x3e99999a;
  local_44 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00682be0(&local_64,&uStack_20,&local_44);
  FID_conflict__free(local_64);
  ExceptionList = local_10;
  return;
}

