// rea decompile_all
// name: FUN_006d6da0
// address: 0x6d6da0
// body: available
// range: 0x6d6da0-0x6d7051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d6da0(undefined4 *param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  char cVar2;
  undefined1 *puStack_78;
  undefined1 *local_74;
  void **local_70;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_9;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727593;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_78 = &stack0xffffff94;
  local_70 = (void **)0x0;
  local_74 = (undefined1 *)0x1000b00;
  FUN_006e8e70();
  local_70 = (void **)0x6d6de6;
  FUN_00684a80();
  local_70 = (void **)0x1000d00;
  local_74 = local_14;
  puStack_78 = (undefined1 *)0x6d6df8;
  FUN_006e8e70();
  param_9 = 0x3f800000;
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006d6e55;
    }
    if (DAT_00c8a678 != iVar1) goto LAB_006d6e55;
    local_70 = (void **)0x6d6e32;
    FUN_00684c50();
    local_70 = (void **)param_2;
    local_74 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x6d6e44;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_78);
  }
  else {
LAB_006d6e55:
    puStack_78 = &stack0xffffff94;
    local_70 = (void **)0x0;
    local_74 = (undefined1 *)0x1000c00;
    FUN_006e8e70();
    local_70 = (void **)0x6d6e6e;
    FUN_00684c50();
    local_70 = (void **)param_2;
    local_74 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x6d6e80;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_78);
  }
  FUN_00677150();
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 1;
  local_8 = 0;
  local_74 = (undefined1 *)((float)param_8 * 0.45 + (float)param_6);
  param_3 = (float)param_7 * 0.3 + (float)param_5;
  puStack_78 = (undefined1 *)0x6d6f53;
  local_70 = (void **)param_3;
  FUN_006824f0();
  local_74 = (undefined1 *)((float)param_8 * 0.55 + (float)param_6);
  local_70 = (void **)param_3;
  puStack_78 = (undefined1 *)0x6d6fa9;
  FUN_006824f0();
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) goto LAB_006d6fcc;
    cVar2 = FUN_006e6320();
    if (cVar2 != '\0') goto LAB_006d6fcc;
  }
  param_9 = 0x3e99999a;
LAB_006d6fcc:
  local_70 = (void **)&stack0xffffff94;
  local_74 = (undefined1 *)0x0;
  puStack_78 = (undefined1 *)0x1000e00;
  FUN_006e8e70(&param_3);
  local_74 = (undefined1 *)0x6d6fec;
  FUN_00684d10();
  local_70 = (void **)0x6d6ff3;
  FUN_00684c50();
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00682580();
    if (cVar2 == '\0') {
      local_3c = 0x3f800000;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = 0x3f800000;
      local_28 = 0;
      local_70 = &local_5c;
      local_74 = (undefined1 *)0x6d7034;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
  }
  local_70 = (void **)0x6d703c;
  FID_conflict__free(local_5c);
  ExceptionList = local_10;
  return;
}

