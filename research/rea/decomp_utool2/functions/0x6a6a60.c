// rea decompile_all
// name: FUN_006a6a60
// address: 0x6a6a60
// body: available
// range: 0x6a6a60-0x6a6d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a6a60(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 *local_6c;
  undefined4 *local_68;
  void **local_64;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2c [24];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072313e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_68 = &local_14;
  local_64 = (void **)0x100ad01;
  local_6c = (undefined4 *)0x6a6a9d;
  FUN_006e8e70();
  if (*(char *)*param_5 == '\0') {
    local_4c = (void *)0x0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 1;
    local_8 = 0;
    local_6c = (undefined4 *)0x0;
    local_68 = (undefined4 *)0x0;
    local_64 = (void **)0x42c80000;
    FUN_0067bc00();
    local_64 = (void **)0x6a6c1c;
    FUN_00682020();
    local_64 = (void **)0x6a6c44;
    FUN_00682020();
    local_64 = (void **)0x6a6c6c;
    FUN_00682020();
    local_30 = 0;
    local_64 = (void **)&stack0xffffffa0;
    local_68 = (undefined4 *)0x6a6ca5;
    FUN_006842b0();
    local_64 = (void **)0x6a6caf;
    FUN_00684c50();
    local_64 = (void **)0x1;
    local_68 = (undefined4 *)((float)param_3 - 4.0);
    local_6c = (undefined4 *)((float)param_2 - 4.0);
    FUN_0067fe30(local_2c);
    cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
      local_64 = &local_4c;
      local_68 = (undefined4 *)0x6a6d2b;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    local_8 = 0xffffffff;
    local_64 = (void **)0x6a6d3a;
    FID_conflict__free(local_4c);
  }
  else {
    if (((*(byte *)(param_4 + 0x69) & 0x10) == 0) &&
       ((*(int *)(param_4 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
      local_64 = (void **)&stack0xffffffa0;
      local_68 = (undefined4 *)0x6a6afe;
      FUN_006842b0();
      local_64 = (void **)0x6a6b05;
      FUN_00684a80();
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      local_64 = (void **)0x6a6b25;
      (**(code **)(*(int *)*param_1 + 0x48))();
      local_68 = &DAT_00c7ef90;
      local_6c = &DAT_00c7ef94;
      FUN_006e4430(extraout_ECX,param_2,param_3,2);
    }
    local_64 = (void **)0x6a6b52;
    FUN_00684c50();
    FUN_00684bc0();
    FUN_00472d90(0,param_2 + -6,param_3);
    FUN_00682290(param_5,0x24,1,0);
  }
  if (DAT_00c8a678 == param_4) {
    local_64 = (void **)&stack0xffffffa0;
    local_68 = (undefined4 *)0x6a6d57;
    FUN_006842b0();
    local_64 = (void **)0x6a6d5e;
    FUN_00684c50();
    local_64 = (void **)param_2;
    local_68 = (undefined4 *)0x0;
    local_6c = (undefined4 *)0x6a6d6e;
    FUN_00472d90();
    FUN_0040e4d0(&local_6c);
    FUN_00677150();
  }
  ExceptionList = local_10;
  return;
}

