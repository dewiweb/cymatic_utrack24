// rea decompile_all
// name: FUN_006c3650
// address: 0x6c3650
// body: available
// range: 0x6c3650-0x6c37fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c3650(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_3c [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_3c;
  if (*(int *)(in_ECX + 0x78) != 0) {
    FUN_0069ee40(param_1);
    auVar3._4_12_ = in_XMM0._4_12_;
    auVar3._0_4_ = (float)in_XMM0._0_8_;
    local_34 = auVar3._0_4_;
    FUN_0069ee40(param_1);
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_;
    local_2c = auVar4._0_4_;
    FUN_0069ee40(param_1);
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = (float)auVar4._0_8_;
    local_30 = auVar5._0_4_;
    FUN_0069ee40(param_1);
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = (float)auVar5._0_8_;
    local_28 = auVar6._0_4_;
    FUN_0069ee40(param_1);
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = (float)auVar6._0_8_;
    local_38 = auVar7._0_4_;
    FUN_0069ee40(param_1);
    iVar1 = 0;
    if (*(int *)(in_ECX + 0x78) != 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 0xc);
    }
    iVar2 = 0;
    if (*(int *)(in_ECX + 0x78) != 0) {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + 0x10);
    }
    local_24 = (local_34 + (local_30 - local_34) / (float)iVar1) - local_34;
    fStack_1c = local_34;
    local_10 = local_2c;
    fStack_18 = (local_2c + (local_28 - local_2c) / (float)iVar1) - local_2c;
    fStack_20 = (local_34 + (local_38 - local_34) / (float)iVar2) - local_34;
    local_14 = (local_2c + ((float)auVar7._0_8_ - local_2c) / (float)iVar2) - local_2c;
    if (local_14 * local_24 - fStack_18 * fStack_20 == 0.0) {
      local_24 = 1.0;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      local_14 = 1.0;
      local_10 = 0.0;
    }
    FUN_006cf510(&local_24);
  }
  __security_check_cookie(local_c ^ (uint)auStack_3c);
  return;
}

