// rea decompile_all
// name: FUN_005a9050
// address: 0x5a9050
// body: available
// range: 0x5a9050-0x5a92f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a9050(undefined4 *param_1,undefined4 param_2,float param_3,int param_4,
                 undefined4 param_5,float param_6,int param_7)

{
  char cVar1;
  int in_ECX;
  undefined1 *puStack_7c;
  undefined1 *local_78;
  void **local_74;
  void *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717b33;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_7c = &stack0xffffff90;
  local_74 = (void **)0x0;
  local_78 = (undefined1 *)0x1000b00;
  FUN_006e8e70();
  local_74 = (void **)0x5a9093;
  FUN_00684a80();
  local_74 = (void **)0x1000d00;
  local_78 = local_14;
  puStack_7c = (undefined1 *)0x5a90a5;
  FUN_006e8e70();
  if (((*(byte *)(in_ECX + 0x69) & 0x10) == 0) &&
     (((*(int *)(in_ECX + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')) &&
      (DAT_00c8a678 == in_ECX)))) {
    local_74 = (void **)0x5a90df;
    FUN_00684c50();
    local_74 = (void **)param_2;
    local_78 = (undefined1 *)0x0;
    puStack_7c = (undefined1 *)0x5a90f1;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_7c);
  }
  else {
    puStack_7c = &stack0xffffff90;
    local_74 = (void **)0x0;
    local_78 = (undefined1 *)0x1000c00;
    FUN_006e8e70();
    local_74 = (void **)0x5a911b;
    FUN_00684c50();
    local_74 = (void **)param_2;
    local_78 = (undefined1 *)0x0;
    puStack_7c = (undefined1 *)0x5a912d;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_7c);
  }
  FUN_00677150();
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 1;
  local_8 = 0;
  local_78 = (undefined1 *)((float)param_7 * 0.45 + 0.0);
  param_3 = (float)(int)param_6 * 0.3 + (float)param_4;
  param_6 = (float)(int)param_6 * 0.5 + (float)param_4;
  puStack_7c = (undefined1 *)0x5a91fb;
  local_74 = (void **)param_3;
  FUN_006824f0();
  local_78 = (undefined1 *)((float)param_7 * 0.55 + 0.0);
  local_74 = (void **)param_3;
  puStack_7c = (undefined1 *)0x5a924f;
  FUN_006824f0();
  if (((*(byte *)(in_ECX + 0x69) & 0x10) == 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    FUN_006e6320();
  }
  local_74 = (void **)&stack0xffffff90;
  local_78 = (undefined1 *)0x0;
  puStack_7c = (undefined1 *)0x1000e00;
  FUN_006e8e70(&param_3);
  local_78 = (undefined1 *)0x5a9292;
  FUN_00684d10();
  local_74 = (void **)0x5a9299;
  FUN_00684c50();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    local_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 0x3f800000;
    local_2c = 0;
    local_74 = &local_60;
    local_78 = (undefined1 *)0x5a92da;
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  local_74 = (void **)0x5a92e2;
  FID_conflict__free(local_60);
  ExceptionList = local_10;
  return;
}

