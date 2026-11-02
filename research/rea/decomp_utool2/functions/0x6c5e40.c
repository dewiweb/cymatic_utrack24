// rea decompile_all
// name: FUN_006c5e40
// address: 0x6c5e40
// body: available
// range: 0x6c5e40-0x6c60ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5e40(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  char cVar6;
  uint uVar7;
  int in_ECX;
  float in_XMM2_Da;
  float fVar8;
  float fVar9;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  undefined4 *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725dac;
  local_10 = ExceptionList;
  uVar7 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  local_1c = in_XMM2_Da;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))(uVar7);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  local_8 = 0;
  pfVar5 = *(float **)(in_ECX + 0x24);
  if (pfVar5 == (float *)0x0) {
    local_40 = 1.0;
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    local_30 = 1.0;
    local_2c = 0.0;
  }
  else {
    local_40 = *pfVar5;
    fStack_3c = pfVar5[1];
    fStack_38 = pfVar5[2];
    fStack_34 = pfVar5[3];
    local_30 = pfVar5[4];
    local_2c = pfVar5[5];
  }
  local_20 = fStack_3c * 0.0 + local_40;
  fVar8 = local_40 * (float)(undefined *)0x0 + fStack_3c;
  local_14 = local_40 * (float)-*(int *)(in_ECX + 0x70) +
             fStack_3c * (float)-*(int *)(in_ECX + 0x74) + fStack_38;
  local_24 = fStack_34 * 0.0 + local_30;
  fVar1 = param_2[1];
  fVar9 = local_30 * 0.0 + fStack_34;
  fVar2 = *param_2;
  local_18 = fStack_34 * (float)-*(int *)(in_ECX + 0x70) +
             local_30 * (float)-*(int *)(in_ECX + 0x74) + local_2c;
  local_40 = fVar2 * local_20 + fVar1 * fVar9;
  fVar3 = param_2[3];
  fVar4 = param_2[4];
  fStack_3c = fVar2 * fVar8 + fVar1 * local_24;
  fStack_38 = fVar2 * local_14 + fVar1 * local_18 + param_2[2];
  fStack_34 = fVar3 * local_20 + fVar4 * fVar9;
  local_30 = fVar3 * fVar8 + fVar4 * local_24;
  local_2c = fVar3 * local_14 + fVar4 * local_18 + param_2[5];
  *(undefined1 *)(param_1 + 2) = 0;
  (**(code **)(*(int *)*param_1 + 0x34))();
  (**(code **)(*(int *)*param_1 + 0xc))(&local_40);
  cVar6 = (**(code **)(*(int *)*param_1 + 0x30))();
  if (cVar6 == '\0') {
    if (1.0 <= local_1c) {
      FUN_006ce360(param_1,1);
    }
    else {
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      (**(code **)(*(int *)*param_1 + 0x3c))(local_1c);
      FUN_006ce360(param_1,1);
      (**(code **)(*(int *)*param_1 + 0x40))();
    }
  }
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*(int *)*param_1 + 0x38))();
  ExceptionList = local_10;
  return;
}

