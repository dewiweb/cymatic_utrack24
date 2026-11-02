// rea decompile_all
// name: FUN_0060c3e0
// address: 0x60c3e0
// body: available
// range: 0x60c3e0-0x60c63a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060c3e0(undefined4 *param_1,int param_2,int param_3,char param_4,char param_5,
                 float param_6)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c571;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8e70(&stack0xffffffa4,0x1005006,0);
  FUN_00684a80();
  iVar1 = *(int *)(in_ECX + 0xb4);
  if (iVar1 == 0) {
    if (param_6._0_1_ == '\0') {
      param_6 = 0.5;
    }
    else {
      param_6 = 0.0;
    }
    goto LAB_0060c470;
  }
  if (iVar1 == 1) {
    if (param_6._0_1_ != '\0') {
LAB_0060c453:
      param_6 = 0.25;
      goto LAB_0060c470;
    }
  }
  else {
    if (iVar1 != 2) {
      param_6 = 0.0;
      goto LAB_0060c470;
    }
    if (param_6._0_1_ == '\0') goto LAB_0060c453;
  }
  param_6 = 0.75;
LAB_0060c470:
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 1;
  local_8 = 0;
  FUN_006824f0(0x3f800000,0x3f800000);
  fVar3 = param_6 * 6.2831855;
  param_6 = fVar3;
  FUN_004363f0();
  fVar4 = param_6;
  FUN_00436470();
  local_28 = -fVar4;
  local_24 = (fVar4 * 0.5 - fVar3 * 0.5) + 0.5;
  local_18 = 0.5 - (fVar3 * 0.5 + fVar4 * 0.5);
  local_2c = fVar3;
  local_20 = fVar4;
  local_1c = fVar3;
  FUN_00680060();
  if (param_5 == '\0') {
    if (param_4 == '\0') {
      param_6 = 0.4;
    }
    else {
      param_6 = 0.6;
    }
  }
  else {
    param_6 = 1.0;
  }
  puVar5 = &stack0xffffffa4;
  FUN_006e8e70(&param_5,0x1005007,0);
  FUN_006842b0(puVar5);
  FUN_00684c50();
  FUN_0067fe30(&local_2c,(float)param_2 - 2.0,(float)param_3 - 2.0,1);
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00682580();
    if (cVar2 == '\0') {
      (**(code **)(*(int *)*param_1 + 0x5c))(&local_4c);
    }
  }
  FID_conflict__free(local_4c);
  ExceptionList = local_10;
  return;
}

