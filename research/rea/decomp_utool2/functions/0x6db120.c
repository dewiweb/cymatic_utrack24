// rea decompile_all
// name: FUN_006db120
// address: 0x6db120
// body: available
// range: 0x6db120-0x6db7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006db120(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,float param_6,
                 float param_7,float param_8,int param_9)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char extraout_DL;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *puVar8;
  void *_Memory;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
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
  float local_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_9;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727aa4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = param_4 / 2;
  if (param_5 / 2 < param_4 / 2) {
    iVar4 = param_5 / 2;
  }
  local_58 = (float)param_4 * 0.5 + (float)param_2;
  local_5c = (float)param_5 * 0.5 + (float)param_3;
  local_2c = (float)iVar4 - 2.0;
  local_54 = local_58 - local_2c;
  local_50 = local_5c - local_2c;
  fVar5 = local_2c + local_2c;
  fVar6 = (param_8 - param_7) * param_6 + param_7;
  cVar2 = FUN_006cbfa0();
  if (((cVar2 == '\0') || ((*(byte *)(iVar1 + 0x69) & 0x10) != 0)) ||
     ((*(int *)(iVar1 + 0xc) != 0 && (cVar2 = FUN_006e6320(), cVar2 == '\0')))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (local_2c <= 12.0) {
    param_7 = 1.0;
    if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) &&
       ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar2 = extraout_DL, cVar3 != '\0'))
       )) {
      if (cVar2 == '\0') {
        param_7 = 0.7;
      }
      puVar8 = &stack0xffffff5c;
      FUN_006e8e70(&param_8,0x1001311,0);
      FUN_006842b0(puVar8);
    }
    FUN_00684c50();
    local_4c = (void *)0x0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 1;
    local_8 = 3;
    FUN_0067bc00(fVar5 * -0.4,fVar5 * -0.4,fVar5 * 0.8);
    local_84 = 0x3f800000;
    local_94 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    local_80 = 0;
    FUN_00677cd0(&local_4c,&local_4c,&local_94,0x3f800000);
    local_14 = -local_2c;
    fStack_20 = 0.0;
    fStack_1c = 0.0;
    local_18 = 0.0;
    FUN_00681a00();
    fVar5 = fVar6;
    FUN_004363f0();
    FUN_00436470();
    fStack_24 = -fVar6;
    fStack_20 = local_58 + 0.0;
    local_14 = local_5c + 0.0;
    local_28 = fVar5;
    fStack_1c = fVar6;
    local_18 = fVar5;
    cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    _Memory = local_4c;
    if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), _Memory = local_4c, cVar2 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_4c);
      _Memory = local_4c;
    }
  }
  else {
    if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) &&
       ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
      puVar8 = &stack0xffffff5c;
      FUN_006e8e70(&param_6,0x1001311,0);
      FUN_006842b0(puVar8);
    }
    FUN_00684c50();
    local_4c = (void *)0x0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 1;
    local_8 = 0;
    FUN_00683a90(fVar5,param_7,fVar6);
    cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar3 == '\0') && (cVar3 = FUN_00682580(), cVar3 == '\0')) {
      local_28 = 1.0;
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 0.0;
      local_18 = 1.0;
      local_14 = 0.0;
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_4c);
    }
    FID_conflict__free(local_4c);
    local_4c = (void *)0x0;
    fVar7 = local_2c * 0.2;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 1;
    local_8 = 1;
    FUN_006824f0(local_2c * -0.7 * 1.1,fVar7);
    FUN_0067bc00(-fVar7,-fVar7,fVar7 + fVar7);
    fVar7 = fVar6;
    FUN_004363f0();
    FUN_00436470();
    fStack_20 = local_58 + 0.0;
    local_14 = local_5c + 0.0;
    fStack_24 = -fVar6;
    local_28 = fVar7;
    fStack_1c = fVar6;
    local_18 = fVar7;
    cVar3 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar3 == '\0') && (cVar3 = FUN_00682580(), cVar3 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_4c);
    }
    local_8 = 0xffffffff;
    FID_conflict__free(local_4c);
    if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) &&
       ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
      FUN_006e8e70(&stack0xffffff5c,0x1001312,0);
    }
    FUN_00684c50();
    local_7c = (void *)0x0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_60 = 1;
    local_8 = 2;
    FUN_00683a90(fVar5,param_7,param_8);
    if ((local_74 != 0) && (*(float *)((int)local_7c + local_74 * 4 + -4) != 100005.0)) {
      if (local_78 < local_74 + 1) {
        FUN_00409cf0();
      }
      *(undefined4 *)((int)local_7c + local_74 * 4) = 0x47c35280;
      local_74 = local_74 + 1;
    }
    if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) &&
       ((*(int *)(iVar1 + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
      if (cVar2 == '\0') {
        fStack_1c = 1.2;
      }
      else {
        fStack_1c = 2.0;
      }
    }
    else {
      fStack_1c = 0.3;
    }
    local_84 = 0x3f800000;
    local_80 = 0;
    local_94 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    local_18 = 0.0;
    local_14 = 0.0;
    FUN_00682be0(&local_7c,&fStack_1c);
    _Memory = local_7c;
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

