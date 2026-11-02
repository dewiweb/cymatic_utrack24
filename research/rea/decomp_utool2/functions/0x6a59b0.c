// rea decompile_all
// name: FUN_006a59b0
// address: 0x6a59b0
// body: available
// range: 0x6a59b0-0x6a5fdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a59b0(float param_1,float param_2,undefined1 *param_3,char param_4,char param_5,
                 char param_6,char param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint3 uVar4;
  uint3 extraout_var;
  float in_XMM1_Da;
  double dVar5;
  float in_XMM2_Da;
  float in_XMM3_Da;
  undefined1 *local_e4;
  uint local_e0;
  void **local_dc;
  void *local_ac;
  void *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  void *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  float local_60;
  float local_58;
  void *local_4c;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_2c;
  uint local_28;
  float local_24;
  undefined8 local_20;
  float local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007230c1;
  local_10 = ExceptionList;
  if (in_XMM3_Da <= param_2) {
    return;
  }
  if (param_1 <= param_2) {
    return;
  }
  local_28 = (uint)in_XMM1_Da;
  local_34 = (float)(int)in_XMM2_Da;
  local_3c = (int)param_1;
  if ((float)param_3 < 0.0) {
    param_3 = (undefined1 *)(param_1 * 0.5);
    if (in_XMM3_Da * 0.5 <= param_1 * 0.5) {
      param_3 = (undefined1 *)(in_XMM3_Da * 0.5);
    }
  }
  local_a0 = (void *)0x0;
  local_9c = 0;
  local_98 = 0;
  local_84 = 1;
  local_2c = (param_1 - ((float)param_3 + (float)param_3)) + param_1 * 0.75;
  local_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_40 = (int)local_2c;
  if (param_5 == '\0') {
    local_20._0_5_ = CONCAT14(1,(uint)local_20);
    if (param_7 != '\0') goto LAB_006a5ac0;
  }
  else {
LAB_006a5ac0:
    local_20._0_5_ = (uint5)(uint)local_20;
  }
  if ((param_5 == '\0') && (param_6 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  local_dc = (void **)CONCAT31((int3)((uint)in_ECX >> 8),uVar3);
  if ((param_4 == '\0') && (param_6 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  local_e0 = CONCAT31((int3)((uint)local_40 >> 8),uVar3);
  ExceptionList = &local_10;
  local_e4 = param_3;
  local_38 = in_XMM1_Da;
  local_18[0] = in_XMM3_Da;
  FUN_00680ef0(param_1,param_3);
  local_e4 = (undefined1 *)&local_e0;
  local_dc = (void **)0x0;
  FUN_006841a0();
  FUN_006841a0(&local_e4);
  FUN_006840c0();
  local_dc = (void **)0x6a5b82;
  FUN_00684d10();
  FUN_0067edd0();
  FUN_0067edd0();
  local_dc = (void **)0x6a5bbe;
  FUN_00684d10();
  FUN_0067edd0();
  FUN_00683ff0();
  FUN_006839e0();
  FID_conflict__free(local_4c);
  local_e4 = (undefined1 *)&local_e0;
  local_dc = (void **)local_38;
  FUN_006841a0();
  local_e4 = DAT_00c8a948;
  FUN_006840c0();
  FUN_0067edd0();
  dVar5 = 1.0 - (double)(((float)param_3 * 0.25) / local_2c);
  if ((0.0 <= dVar5) && (local_20 = 1.0, dVar5 <= 1.0)) {
    local_20 = dVar5;
  }
  local_dc = (void **)((int)&local_20 + 4);
  local_e0 = 0x6a5ce1;
  FUN_006841a0();
  local_dc = (void **)0x6a5cf0;
  FUN_00684d10();
  uVar1 = FUN_0067edd0();
  uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),param_4);
  uVar1 = extraout_ECX;
  if (((param_4 == '\0') && (param_6 == '\0')) && (param_7 == '\0')) {
    FUN_00683ef0();
    FUN_00683ff0();
    local_dc = (void **)local_34;
    local_e0 = local_28;
    local_e4 = (undefined1 *)0x6a5d2f;
    FUN_00680670();
    FUN_006839e0();
    uVar2 = FUN_00683ed0();
    uVar2 = uVar2 & 0xffffff00;
    uVar1 = extraout_ECX_00;
  }
  uVar4 = (uint3)((uint)uVar1 >> 8);
  if (((param_5 == '\0') && (param_6 == '\0')) && (param_7 == '\0')) {
    local_58 = local_38 + local_18[0];
    local_60 = local_58 - local_2c;
    FUN_00683ef0();
    FUN_00683ff0();
    local_e0 = ((int)in_XMM3_Da - local_40) + local_28;
    local_dc = (void **)local_34;
    local_e4 = (undefined1 *)0x6a5daa;
    FUN_00680670();
    FUN_006839e0();
    uVar1 = FUN_00683ed0();
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),param_4);
    param_5 = '\0';
    uVar4 = extraout_var;
  }
  local_80 = (void *)0x0;
  local_7c = 0;
  local_78 = 0;
  local_64 = CONCAT31(local_64._1_3_,1);
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  if (param_5 == '\0') {
    local_28 = CONCAT31(local_28._1_3_,1);
    if (param_7 == '\0') goto LAB_006a5e39;
  }
  local_28 = local_28 & 0xffffff00;
LAB_006a5e39:
  if ((param_5 == '\0') && (param_6 == '\0')) {
    local_dc = (void **)CONCAT31(uVar4,1);
  }
  else {
    local_dc = (void **)((uint)uVar4 << 8);
  }
  uVar4 = (uint3)(uVar2 >> 8);
  if (((char)uVar2 == '\0') && (param_6 == '\0')) {
    local_e0 = CONCAT31(uVar4,1);
  }
  else {
    local_e0 = (uint)uVar4 << 8;
  }
  local_34 = param_1 * 0.4;
  local_e4 = (undefined1 *)((float)param_3 * 0.4);
  FUN_00680ef0(local_34,local_e4);
  local_e4 = (undefined1 *)&local_e0;
  local_dc = (void **)0x0;
  local_e0 = DAT_00c7ef6c;
  FUN_00684210(&local_e4);
  FUN_006840c0();
  FUN_00683ff0();
  FID_conflict__free(local_ac);
  FUN_006839e0();
  FID_conflict__free(local_80);
  local_dc = (void **)local_18;
  local_e0 = 0x6a5f58;
  FUN_006841a0();
  local_dc = (void **)0x6a5f67;
  FUN_00684d10();
  FUN_00684c50();
  uStack_68 = 0x3f800000;
  local_78 = 0x3f800000;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_dc = &local_a0;
  local_64 = 0;
  local_24 = param_2;
  local_20 = 0.0;
  local_e0 = 0x6a5fb5;
  FUN_00682be0();
  FID_conflict__free(local_4c);
  local_dc = (void **)0x6a5fc8;
  FID_conflict__free(local_a0);
  ExceptionList = local_10;
  return;
}

