// rea decompile_all
// name: FUN_00684310
// address: 0x684310
// body: available
// range: 0x684310-0x684600 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00684310(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *in_ECX;
  float in_XMM1_Da;
  void *local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00720b4b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 1;
  local_8 = 0;
  local_14 = param_1 + param_3;
  local_20 = param_3 * 0.5;
  if (in_XMM1_Da <= param_3 * 0.5) {
    local_20 = in_XMM1_Da;
  }
  local_18 = param_2 + param_4;
  local_38 = param_4 * 0.5;
  if (in_XMM1_Da <= param_4 * 0.5) {
    local_38 = in_XMM1_Da;
  }
  local_1c = param_2;
  local_2c = param_1;
  local_24 = local_20 * 0.45;
  local_30 = local_38 + param_2;
  local_28 = local_38 * 0.45;
  FUN_00682e50(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_3c = local_20 + local_2c;
  local_34 = local_28 + local_1c;
  local_40 = local_24 + local_2c;
  FUN_0067c020(local_1c,local_3c,local_1c);
  local_20 = local_14 - local_20;
  FUN_00682d90();
  local_24 = local_14 - local_24;
  FUN_0067c020(local_34,local_14,local_30);
  local_38 = local_18 - local_38;
  FUN_00682d90();
  local_34 = local_18 - local_28;
  FUN_0067c020(local_18,local_20,local_18);
  FUN_00682d90();
  FUN_0067c020(local_34,local_2c,local_38);
  if ((local_70 != 0) && (*(float *)((int)local_78 + local_70 * 4 + -4) != 100005.0)) {
    iVar1 = local_70 + 1;
    if (local_74 < iVar1) {
      FUN_00409cf0(iVar1 / 2 + 8 + iVar1 & 0xfffffff8);
    }
    *(undefined4 *)((int)local_78 + local_70 * 4) = 0x47c35280;
    local_70 = local_70 + 1;
  }
  cVar2 = (**(code **)(*(int *)*in_ECX + 0x30))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00682580();
    if (cVar2 == '\0') {
      local_58 = 0x3f800000;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_48 = 0x3f800000;
      local_44 = 0;
      (**(code **)(*(int *)*in_ECX + 0x5c))(&local_78,&local_58);
    }
  }
  FID_conflict__free(local_78);
  ExceptionList = local_10;
  return;
}

