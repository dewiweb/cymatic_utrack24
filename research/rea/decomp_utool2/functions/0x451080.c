// rea decompile_all
// name: FUN_00451080
// address: 0x451080
// body: available
// range: 0x451080-0x451243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00451080(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_EDX;
  _locale_t unaff_EDI;
  uint uVar7;
  bool bVar8;
  ulonglong in_XMM0_Qa;
  undefined8 local_28;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  uVar1 = *in_EDX;
  local_28 = CONCAT44(uVar1,(undefined4)local_28);
  local_20 = uVar1;
  local_10 = in_EDX;
  iVar6 = FUN_00443260();
  local_8 = iVar6 - 0x30;
  uVar2 = *in_EDX;
  local_c = 0;
  local_1c = FUN_00443260();
  uVar7 = local_8;
  while (local_18 = local_1c - 0x30, local_18 < 10) {
    uVar3 = uVar7 >> 0x1e;
    bVar8 = CARRY4(uVar7,uVar7 * 4);
    uVar5 = uVar7 * 5;
    uVar4 = uVar7 * 10;
    uVar7 = uVar4 + local_18;
    local_c = ((local_c + (local_c << 2 | uVar3) + (uint)bVar8) * 2 | uVar5 >> 0x1f) +
              ((int)local_18 >> 0x1f) + (uint)CARRY4(uVar4,local_18);
    uVar2 = *local_10;
    local_1c = FUN_00443260();
    uVar1 = local_20;
  }
  local_8 = uVar7;
  if (((local_1c == 0x65) || (local_1c == 0x45)) || (local_1c == 0x2e)) {
    *local_10 = uVar1;
    FUN_0045c380();
    if (param_2 != '\0') {
      in_XMM0_Qa = in_XMM0_Qa ^ 0x8000000000000000;
    }
    local_28 = in_XMM0_Qa;
    (**(code **)(*(int *)*param_1 + 0x54))(param_1 + 2);
    *param_1 = &PTR_vftable_00c7ed2c;
    *(ulonglong *)(param_1 + 2) = local_28;
    FUN_0044eef0();
    return extraout_ECX_01;
  }
  iVar6 = FID_conflict___iswspace_l((wint_t)local_1c,unaff_EDI);
  if (((iVar6 == 0) && (local_1c != 0x2c)) &&
     ((local_1c != 0x7d && ((local_1c != 0x5d && (local_1c != 0)))))) {
    FUN_00450f80((int)&local_28 + 4);
    return local_14;
  }
  *local_10 = uVar2;
  if (param_2 == '\0') {
    local_10 = (undefined4 *)local_8;
    local_1c = local_c;
  }
  else {
    local_10 = (undefined4 *)-local_8;
    local_1c = -(local_c + (uint)(local_8 != 0));
  }
  if ((local_8 & 0x80000000) != 0 || local_c != 0) {
    (**(code **)(*(int *)*param_1 + 0x54))(param_1 + 2);
    param_1[2] = local_10;
    *param_1 = &PTR_vftable_00c7ed40;
    param_1[3] = local_1c;
    FUN_0044eef0();
    return extraout_ECX;
  }
  (**(code **)(*(int *)*param_1 + 0x54))(param_1 + 2);
  *param_1 = &PTR_vftable_00c7ed44;
  param_1[2] = local_10;
  FUN_0044eef0();
  return extraout_ECX_00;
}

