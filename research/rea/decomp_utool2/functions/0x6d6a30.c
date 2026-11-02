// rea decompile_all
// name: FUN_006d6a30
// address: 0x6d6a30
// body: available
// range: 0x6d6a30-0x6d6d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d6a30(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  float *pfVar2;
  float local_6c;
  undefined4 *local_68;
  void **local_64;
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_68 = (undefined4 *)local_14;
  local_64 = (void **)0x100ad01;
  local_6c = 1.0048247e-38;
  FUN_006e8e70();
  if (*(char *)*param_5 == '\0') {
    local_34 = (void *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 1;
    local_8 = 0;
    local_6c = 0.0;
    local_68 = (undefined4 *)0x0;
    local_64 = (void **)0x42c80000;
    FUN_0067bc00();
    local_64 = (void **)0x6d6c06;
    FUN_00682020();
    local_64 = (void **)0x6d6c2e;
    FUN_00682020();
    local_64 = (void **)0x6d6c56;
    FUN_00682020();
    local_18 = 0;
    local_68 = &param_5;
    local_64 = (void **)&stack0xffffffa0;
    local_6c = 1.004903e-38;
    FUN_006841a0();
    local_68 = (undefined4 *)0x6d6ca5;
    FUN_006842b0();
    local_64 = (void **)0x6d6caf;
    FUN_00684c50();
    local_64 = (void **)0x1;
    local_68 = (undefined4 *)((float)param_3 - 4.0);
    local_6c = (float)param_2 - 4.0;
    param_5 = (undefined4 *)FUN_0067fe30(local_4c);
    cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
      local_64 = &local_34;
      local_68 = (undefined4 *)0x6d6d2d;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    local_8 = 0xffffffff;
    local_64 = (void **)0x6d6d3c;
    FID_conflict__free(local_34);
  }
  else {
    if (((*(byte *)(param_4 + 0x69) & 0x10) == 0) &&
       ((*(int *)(param_4 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
      local_64 = (void **)&stack0xffffffa0;
      local_68 = (undefined4 *)0x6d6ad1;
      FUN_006842b0();
      local_64 = (void **)0x6d6ad8;
      FUN_00684c50();
      pfVar2 = &local_6c;
      FUN_006e6400(local_44);
      FUN_0040e4d0(pfVar2);
      FUN_00684310();
      pfVar2 = &local_6c;
      FUN_006e6400(local_44);
      FUN_0040e4d0(pfVar2);
      FUN_00683310();
    }
    local_64 = (void **)0x6d6b39;
    FUN_00684c50();
    FUN_00684bc0();
    FUN_00472d90(0,param_2 + -8,param_3);
    FUN_00682290(param_5,0x24,1,0);
  }
  if (DAT_00c8a678 == param_4) {
    local_64 = (void **)&stack0xffffffa0;
    local_68 = (undefined4 *)0x6d6d59;
    FUN_006842b0();
    local_64 = (void **)0x6d6d60;
    FUN_00684c50();
    local_64 = (void **)param_2;
    local_68 = (undefined4 *)0x0;
    local_6c = 1.0049328e-38;
    FUN_00472d90();
    FUN_0040e4d0(&local_6c);
    FUN_00677150();
  }
  ExceptionList = local_10;
  return;
}

