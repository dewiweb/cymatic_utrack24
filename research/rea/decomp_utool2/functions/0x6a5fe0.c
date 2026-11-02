// rea decompile_all
// name: FUN_006a5fe0
// address: 0x6a5fe0
// body: available
// range: 0x6a5fe0-0x6a6496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a5fe0(float param_1,int param_2)

{
  char cVar1;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  float fVar2;
  float fVar3;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined4 uStack_d4;
  void **local_d0;
  void **local_cc;
  void *local_88;
  void *local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_007230df;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1 < in_XMM3_Da) {
    local_7c = (void *)0x0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_78 = 0;
    local_74 = 0;
    local_30 = in_XMM3_Da * 0.5;
    local_60 = 1;
    local_5c = local_30 + in_XMM1_Da;
    local_38 = in_XMM3_Da;
    local_34 = in_XMM1_Da;
    local_2c = in_EDX;
    local_28 = in_XMM2_Da;
    FUN_00682e50();
    local_3c = local_34 + local_38;
    local_24 = local_38 * 0.6 + local_28;
    FUN_00682d90();
    local_58 = local_28 + local_38;
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682d90();
    if ((local_74 != 0) && (*(float *)((int)local_7c + local_74 * 4 + -4) != 100005.0)) {
      if (local_78 < local_74 + 1) {
        local_cc = (void **)0x6a6138;
        FUN_00409cf0();
      }
      *(undefined4 *)((int)local_7c + local_74 * 4) = 0x47c35280;
      local_74 = local_74 + 1;
    }
    local_30 = local_30 + local_28;
    fVar2 = (float)param_2 * 1.5707964;
    local_24 = fVar2;
    FUN_004363f0();
    fVar3 = local_24;
    local_3c = fVar2;
    FUN_00436470();
    local_54 = local_3c;
    fStack_50 = -fVar3;
    local_44 = local_3c;
    fStack_4c = (fVar3 * local_30 - local_3c * local_5c) + local_5c;
    local_40 = local_30 - (fVar3 * local_5c + local_3c * local_30);
    local_cc = (void **)0x6a61f2;
    fStack_48 = fVar3;
    FUN_00680060();
    local_cc = (void **)local_58;
    local_d0 = (void **)0x0;
    FUN_00684d10(&puStack_d8);
    puStack_dc = (undefined1 *)&uStack_d4;
    FUN_00680d30();
    FUN_00684d10(&puStack_dc);
    FUN_00680d30(&puStack_d8);
    puStack_dc = (undefined1 *)0x6a625a;
    FUN_006840c0();
    local_d0 = (void **)&stack0xffffff38;
    local_cc = (void **)*local_2c;
    uStack_d4 = 0x6a6272;
    FUN_00680d30();
    local_cc = (void **)0x6a6285;
    FUN_0067edd0();
    local_cc = (void **)0x6a6293;
    FUN_00683ff0();
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        local_54 = 1.0;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        fStack_48 = 0.0;
        local_44 = 1.0;
        local_40 = 0.0;
        local_cc = &local_7c;
        local_d0 = (void **)0x6a62d4;
        (**(code **)(*(int *)*in_ECX + 0x5c))();
      }
    }
    local_cc = (void **)0x6a62dc;
    FID_conflict__free(local_88);
    local_d0 = (void **)(local_34 - local_38 * 0.2);
    puStack_d8 = (undefined1 *)&uStack_d4;
    local_cc = (void **)local_30;
    puStack_dc = (undefined1 *)0x6a633d;
    FUN_006842b0();
    puStack_d8 = DAT_00c8a948;
    puStack_dc = (undefined1 *)0x6a6357;
    FUN_006840c0();
    local_cc = (void **)0x6a6374;
    FUN_0067edd0();
    local_cc = (void **)&stack0xffffff38;
    local_d0 = (void **)0x6a638d;
    FUN_006842b0();
    local_cc = (void **)0x6a63a0;
    FUN_0067edd0();
    local_cc = (void **)0x6a63ae;
    FUN_00683ff0();
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        local_54 = 1.0;
        fStack_50 = 0.0;
        fStack_4c = 0.0;
        fStack_48 = 0.0;
        local_44 = 1.0;
        local_40 = 0.0;
        local_cc = &local_7c;
        local_d0 = (void **)0x6a63ef;
        (**(code **)(*(int *)*in_ECX + 0x5c))();
      }
    }
    local_cc = (void **)&stack0xffffff38;
    local_d0 = (void **)0x6a6416;
    FUN_006842b0();
    local_cc = (void **)0x6a641d;
    FUN_00684c50();
    local_cc = (void **)&fStack_48;
    local_d0 = &local_7c;
    fStack_48 = param_1;
    local_44 = 0.0;
    local_40 = 0.0;
    uStack_d4 = 0x6a646d;
    FUN_00682be0();
    local_cc = (void **)0x6a6475;
    FID_conflict__free(local_88);
    local_cc = (void **)0x6a6480;
    FID_conflict__free(local_7c);
  }
  ExceptionList = local_1c;
  return;
}

