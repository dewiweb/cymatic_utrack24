// rea decompile_all
// name: FUN_006a64a0
// address: 0x6a64a0
// body: available
// range: 0x6a64a0-0x6a685b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a64a0(float param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  undefined4 in_XMM1_Da;
  float in_XMM2_Da;
  undefined1 *in_XMM3_Da;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  void **local_b8;
  void *local_70;
  void *pvStack_50;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_24;
  float local_20;
  undefined1 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007230fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 < (float)in_XMM3_Da) {
    local_44 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_28 = 1;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    puStack_c4 = (undefined1 *)0x6a652c;
    local_24 = in_XMM1_Da;
    local_20 = in_XMM2_Da;
    local_1c = in_XMM3_Da;
    FUN_0067bc00();
    local_b8 = (void **)(local_20 + (float)local_1c);
    local_bc = (undefined1 *)0x0;
    FUN_00684d10(&puStack_c4);
    puStack_c8 = (undefined1 *)&local_c0;
    FUN_00680d30();
    FUN_00684d10(&puStack_c8);
    FUN_00680d30(&puStack_c4);
    puStack_c8 = (undefined1 *)0x6a6594;
    FUN_006840c0();
    local_b8 = (void **)*in_EDX;
    local_bc = &stack0xffffff4c;
    local_c0 = 0x6a65a9;
    FUN_00680d30();
    local_b8 = (void **)0x6a65b9;
    FUN_0067edd0();
    local_b8 = (void **)0x6a65c4;
    FUN_00683ff0();
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        pvStack_50 = (void *)0x0;
        local_b8 = &local_44;
        local_bc = (undefined1 *)0x6a6605;
        (**(code **)(*(int *)*in_ECX + 0x5c))();
      }
    }
    local_b8 = (void **)0x6a660d;
    FID_conflict__free(local_70);
    local_b8 = (void **)((float)local_1c * 0.3 + local_20);
    local_bc = (undefined1 *)0x0;
    local_c0 = DAT_00c7ef6c;
    puStack_c4 = DAT_00c7ef94;
    puStack_c8 = (undefined1 *)0x6a6665;
    FUN_006840c0();
    local_b8 = (void **)0x6a666d;
    FUN_00683ff0();
    local_b8 = (void **)0x6a6675;
    FID_conflict__free(local_70);
    puStack_c4 = (undefined1 *)((float)local_1c * 0.4);
    puStack_c8 = (undefined1 *)0x6a66bd;
    FUN_00472db0();
    puStack_c4 = (undefined1 *)0x6a66c7;
    FUN_00677060();
    puStack_c4 = (undefined1 *)&local_c0;
    local_b8 = (void **)((float)local_1c * 0.5 + local_20);
    local_bc = (undefined1 *)local_24;
    puStack_c8 = (undefined1 *)0x6a6721;
    FUN_006842b0();
    puStack_c4 = DAT_00c8a948;
    puStack_c8 = (undefined1 *)0x6a673a;
    FUN_006840c0();
    local_b8 = (void **)0x6a6754;
    FUN_0067edd0();
    local_bc = (undefined1 *)0x6a676d;
    local_b8 = (void **)&stack0xffffff4c;
    FUN_006842b0();
    local_b8 = (void **)0x6a677d;
    FUN_0067edd0();
    local_b8 = (void **)0x6a6788;
    FUN_00683ff0();
    cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_00682580();
      if (cVar1 == '\0') {
        local_b8 = &local_44;
        local_bc = (undefined1 *)0x6a67d5;
        (**(code **)(*(int *)*in_ECX + 0x5c))();
      }
    }
    local_b8 = (void **)&stack0xffffff4c;
    local_bc = (undefined1 *)0x6a67fc;
    FUN_006842b0();
    local_b8 = (void **)0x6a6803;
    FUN_00684c50();
    puStack_c4 = local_1c;
    puStack_c8 = (undefined1 *)0x6a6825;
    FUN_00472db0();
    puStack_c4 = (undefined1 *)0x6a6834;
    FUN_00676e90();
    local_b8 = (void **)0x6a683c;
    FID_conflict__free(pvStack_50);
    local_b8 = (void **)0x6a6847;
    FID_conflict__free(local_44);
  }
  ExceptionList = local_10;
  return;
}

