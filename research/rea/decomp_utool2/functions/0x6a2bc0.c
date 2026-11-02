// rea decompile_all
// name: FUN_006a2bc0
// address: 0x6a2bc0
// body: available
// range: 0x6a2bc0-0x6a31ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a2bc0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,char param_7,int param_8,float param_9,char param_10,char param_11)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00722e2e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_5c = 1;
  local_8 = 0;
  if (0 < (int)param_9) {
    iVar2 = param_6;
    if (param_7 != '\0') {
      iVar2 = param_5;
    }
    fVar4 = (float)iVar2 * 0.25;
    fVar5 = fVar4 + fVar4;
    if (param_7 == '\0') {
      local_20 = ((float)param_6 - fVar5) * 0.5;
      local_14 = (float)param_8 + fVar4;
      fVar7 = ((float)(int)param_9 - fVar5) * 0.5;
      fVar6 = ((float)(int)param_9 - fVar5) + local_14;
      if (local_20 <= fVar7) {
        fVar7 = local_20;
      }
      param_9 = (float)param_4 + fVar4;
      local_28 = local_20 + param_9;
      fVar5 = ((float)param_6 - fVar5) + param_9;
      fVar4 = local_20 * 0.45;
      FUN_00682e50();
      local_1c = fVar7 + local_14;
      local_18 = fVar7 * 0.45 + local_14;
      local_24 = fVar4 + param_9;
      FUN_0067c020(param_9,local_1c);
      FUN_00682d90();
      FUN_0067c020(local_24,fVar6);
      param_9 = fVar5 - local_20;
      FUN_00682d90();
      fVar4 = fVar5 - fVar4;
      FUN_0067c020(fVar5,fVar6 - fVar7);
      FUN_00682d90();
    }
    else {
      fVar7 = (float)(int)param_9;
      fVar6 = ((float)param_5 - fVar5) * 0.5;
      param_9 = (float)param_8 + fVar4;
      local_20 = (fVar7 - fVar5) * 0.5;
      local_14 = (float)param_3 + fVar4;
      fVar7 = param_9 + (fVar7 - fVar5);
      if (fVar6 <= local_20) {
        local_20 = fVar6;
      }
      fVar5 = ((float)param_5 - fVar5) + local_14;
      local_18 = local_20 + param_9;
      fVar4 = local_20 * 0.45;
      FUN_00682e50();
      local_24 = fVar6 + local_14;
      local_28 = fVar6 * 0.45 + local_14;
      local_1c = fVar4 + param_9;
      FUN_0067c020(param_9,local_24);
      FUN_00682d90();
      FUN_0067c020(local_1c,fVar5);
      param_9 = fVar7 - local_20;
      FUN_00682d90();
      fVar4 = fVar7 - fVar4;
      FUN_0067c020(fVar7,fVar5 - fVar6);
      FUN_00682d90();
    }
    FUN_0067c020(fVar4,local_14);
    if ((local_70 != 0) && (*(float *)((int)local_78 + local_70 * 4 + -4) != 100005.0)) {
      if (local_74 < local_70 + 1) {
        FUN_00409cf0();
      }
      *(undefined4 *)((int)local_78 + local_70 * 4) = 0x47c35280;
      local_70 = local_70 + 1;
    }
  }
  FUN_006e8e70(&param_8,0x1000400);
  if ((param_10 != '\0') || (param_11 != '\0')) {
    piVar3 = (int *)FUN_00684d10();
    param_8 = *piVar3;
  }
  FUN_00684c50();
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    local_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 0x3f800000;
    local_2c = 0;
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_78);
  }
  FUN_00680c60(&stack0xffffff78);
  FUN_00684c50();
  local_48 = 0x3f800000;
  local_44 = 0;
  uStack_34 = 0x3f800000;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_00682be0(&local_78,&uStack_34);
  FID_conflict__free(local_78);
  ExceptionList = local_10;
  return;
}

