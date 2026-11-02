// rea decompile_all
// name: FUN_006a5430
// address: 0x6a5430
// body: available
// range: 0x6a5430-0x6a58cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a5430(undefined4 *param_1,int param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined1 *puVar7;
  void *local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined8 local_3c;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007230a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = 0x3ecccccd;
  local_8c = (void *)0x0;
  local_88 = 0;
  local_84 = 0;
  local_70 = 1;
  local_3c = (double)((float)*(int *)(param_2 + 0x1c) * 0.4) + 6755399441055744.0;
  dVar5 = (double)((float)*(int *)(param_2 + 0x18) * 0.4) + 6755399441055744.0;
  local_44._0_4_ = SUB84(dVar5,0);
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  if ((int)local_3c < (int)local_44) {
    local_44._0_4_ = (int)local_3c;
  }
  local_8 = 0;
  fVar6 = (float)*(int *)(param_2 + 0x18) - 4.0;
  local_14 = (float)*(int *)(param_2 + 0x1c) - 4.0;
  fVar4 = (float)(int)local_44;
  local_18 = fVar6 * 0.5;
  local_34 = local_14 * 0.5;
  if (fVar4 <= local_18) {
    local_18 = fVar4;
  }
  if (fVar4 <= local_34) {
    local_34 = fVar4;
  }
  local_1c = local_18 * 0.45;
  local_20 = local_34 * 0.45;
  local_2c = local_34 + 2.0;
  local_28 = 0x40000000;
  fVar6 = fVar6 + 2.0;
  local_14 = local_14 + 2.0;
  local_44 = dVar5;
  FUN_00682e50();
  local_30 = local_20 + 2.0;
  local_44 = (double)CONCAT44(local_1c + 2.0,(int)local_44);
  local_3c = (double)CONCAT44(local_18 + 2.0,(int)local_3c);
  FUN_0067c020(0x40000000,local_18 + 2.0);
  local_18 = fVar6 - local_18;
  FUN_00682d90();
  local_1c = fVar6 - local_1c;
  FUN_0067c020(local_30,fVar6);
  local_34 = local_14 - local_34;
  FUN_00682d90();
  local_30 = local_14 - local_20;
  FUN_0067c020(local_14,local_18);
  FUN_00682d90();
  FUN_0067c020(local_30,0x40000000);
  if ((local_84 != 0) && (*(float *)((int)local_8c + local_84 * 4 + -4) != 100005.0)) {
    if (local_88 < local_84 + 1) {
      FUN_00409cf0();
    }
    *(undefined4 *)((int)local_8c + local_84 * 4) = 0x47c35280;
    local_84 = local_84 + 1;
  }
  FUN_0067f460();
  cVar1 = param_4;
  if (param_4 != '\0') {
    if ((param_5 != '\0') || (iVar3 = FUN_00465820(), *(float *)(iVar3 + 8) <= 0.5)) {
      FUN_00684210();
    }
    else {
      FUN_006841a0();
    }
  }
  FUN_00684c50();
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    local_54 = 0x3f800000;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 5.26354424712089e-315;
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_8c);
  }
  if (cVar1 != '\0') {
    local_24 = 0x3f19999a;
  }
  puVar7 = &stack0xffffff64;
  FUN_00680c60(&param_4);
  FUN_006842b0(puVar7);
  FUN_00684c50();
  if (cVar1 == '\0') {
    local_28 = 0x3fb33333;
  }
  local_5c = 0x3f800000;
  local_6c = 0x3f800000;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_48 = local_28;
  local_44 = 0.0;
  FUN_00682be0(&local_8c,&uStack_48);
  FID_conflict__free(local_8c);
  ExceptionList = local_10;
  return;
}

