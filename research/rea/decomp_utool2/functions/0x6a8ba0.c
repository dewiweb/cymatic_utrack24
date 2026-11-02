// rea decompile_all
// name: FUN_006a8ba0
// address: 0x6a8ba0
// body: available
// range: 0x6a8ba0-0x6a8f56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a8ba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  char cVar2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  byte bVar3;
  byte extraout_DL;
  float fVar4;
  undefined1 *puStack_7c;
  float local_78;
  void **local_74;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072337d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_7c = &stack0xffffff90;
  local_74 = (void **)0x0;
  local_78 = 2.351778e-38;
  FUN_006e8e70();
  local_74 = (void **)0x6a8be7;
  FUN_00684a80();
  if (((*(byte *)(param_9 + 0x69) & 0x10) == 0) &&
     (((*(int *)(param_9 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')) &&
      (DAT_00c8a678 == param_9)))) {
    puStack_7c = &stack0xffffff90;
    local_74 = (void **)0x0;
    local_78 = 2.3519214e-38;
    FUN_006e8e70();
    local_74 = (void **)0x6a8c2b;
    FUN_00684c50();
    local_74 = (void **)param_2;
    local_78 = 0.0;
    puStack_7c = (undefined1 *)0x6a8c3d;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_7c);
  }
  else {
    puStack_7c = &stack0xffffff90;
    local_74 = (void **)0x0;
    local_78 = 2.3518497e-38;
    FUN_006e8e70();
    local_74 = (void **)0x6a8c67;
    FUN_00684c50();
    local_74 = (void **)param_2;
    local_78 = 0.0;
    puStack_7c = (undefined1 *)0x6a8c79;
    FUN_00472d90();
    FUN_0040e4d0(&puStack_7c);
  }
  FUN_00677150();
  bVar3 = *(byte *)(param_9 + 0x69) & 0x10;
  puStack_7c = extraout_ECX;
  if ((bVar3 == 0) &&
     ((puStack_7c = (undefined1 *)0x0, *(int *)(param_9 + 0xc) == 0 ||
      (cVar2 = FUN_006e6320(), puStack_7c = extraout_ECX_00, bVar3 = extraout_DL, cVar2 != '\0'))))
  {
    if ((char)param_4 == '\0') {
      fVar4 = 0.5;
    }
    else {
      fVar4 = 1.2;
    }
  }
  else {
    fVar4 = 0.3;
  }
  if ((bVar3 == 0) && (puStack_7c = (undefined1 *)0x0, *(int *)(param_9 + 0xc) != 0)) {
    FUN_006e6320();
    puStack_7c = extraout_ECX_01;
  }
  local_74 = (void **)param_4;
  local_78 = 0.0;
  for (iVar1 = DAT_00c8a678; (iVar1 != param_9 && (iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xc)) {
  }
  FUN_006e8e70(&puStack_7c,0x1000d00,0);
  FUN_006ab370();
  local_74 = (void **)0x6a8d46;
  FUN_00684d10();
  local_74 = (void **)0x1;
  local_78 = 1.4013e-45;
  puStack_7c = (undefined1 *)0x1;
  FUN_006a59b0((float)param_8 - (fVar4 + fVar4),fVar4,0xbf800000);
  if (((*(byte *)(param_9 + 0x69) & 0x10) == 0) &&
     ((*(int *)(param_9 + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    local_5c = (void *)0x0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 1;
    local_8 = 0;
    local_78 = (float)param_8 * 0.45 + (float)param_6;
    fVar4 = (float)param_7 * 0.3 + (float)param_5;
    puStack_7c = (undefined1 *)0x6a8e88;
    local_74 = (void **)fVar4;
    FUN_006824f0();
    local_78 = (float)param_8 * 0.55 + (float)param_6;
    puStack_7c = (undefined1 *)0x6a8ede;
    local_74 = (void **)fVar4;
    FUN_006824f0();
    puStack_7c = &stack0xffffff90;
    local_74 = (void **)0x0;
    local_78 = 2.3519932e-38;
    FUN_006e8e70();
    local_74 = (void **)0x6a8ef7;
    FUN_00684c50();
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
      local_3c = 0x3f800000;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = 0x3f800000;
      local_28 = 0;
      local_74 = &local_5c;
      local_78 = 9.78594e-39;
      (**(code **)(*(int *)*param_1 + 0x5c))();
    }
    local_74 = (void **)0x6a8f40;
    FID_conflict__free(local_5c);
  }
  ExceptionList = local_10;
  return;
}

