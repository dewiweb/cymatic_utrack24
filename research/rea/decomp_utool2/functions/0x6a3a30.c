// rea decompile_all
// name: FUN_006a3a30
// address: 0x6a3a30
// body: available
// range: 0x6a3a30-0x6a3fe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a3a30(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,
                 undefined4 *param_5,float param_6,undefined4 *param_7,undefined4 *param_8,
                 float param_9,undefined4 *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar1 = (int)param_10;
  puStack_38 = &uStack_2c;
  local_30 = (undefined4 *)0x0;
  puStack_34 = (undefined4 *)0x1001200;
  puStack_3c = (undefined4 *)0x6a3a4e;
  FUN_006e8e70();
  local_30 = (undefined4 *)0x6a3a58;
  FUN_00684a80();
  if (param_9 == 2.8026e-45) {
    puStack_38 = &uStack_2c;
    local_30 = (undefined4 *)0x0;
    puStack_34 = (undefined4 *)0x1001300;
    puStack_3c = (undefined4 *)0x6a3a74;
    FUN_006e8e70();
    local_30 = (undefined4 *)0x6a3a7b;
    FUN_00684c50();
    puVar2 = param_5;
    iVar1 = *(int *)*param_1;
    iVar5 = (int)param_6;
    uStack_2c = 0;
    local_30 = param_5;
    puStack_38 = (undefined4 *)param_3;
    puStack_3c = (undefined4 *)0x6a3aa0;
    puStack_34 = (undefined4 *)(iVar5 - param_2);
    local_30 = (undefined4 *)FUN_00472d90();
    puStack_34 = (undefined4 *)0x6a3aac;
    (**(code **)(iVar1 + 0x54))();
    puStack_38 = &puStack_34;
    puStack_3c = (undefined4 *)0x0;
    puStack_40 = (undefined4 *)0x1001400;
    FUN_006e8e70(&param_5);
    puStack_3c = (undefined4 *)0x6a3ad0;
    FUN_00684d10();
    puStack_38 = (undefined4 *)0x6a3ad8;
    FUN_00684c50();
    puStack_34 = puVar2;
    puStack_3c = (undefined4 *)param_3;
    puStack_40 = (undefined4 *)0x6a3ae8;
    puStack_38 = (undefined4 *)(iVar5 - param_2);
    FUN_00472d90();
    FUN_0040e4d0(&puStack_40);
    FUN_00677150();
    return;
  }
  uStack_2c = extraout_ECX;
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    uStack_2c = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      uStack_2c = 0x6a3b1a;
      cVar4 = FUN_006e6320();
      uStack_2c = extraout_ECX_00;
      if (cVar4 == '\0') goto LAB_006a3b28;
    }
    param_10 = (undefined4 *)0x3f800000;
  }
  else {
LAB_006a3b28:
    param_10 = (undefined4 *)0x3e99999a;
  }
  local_30 = &uStack_2c;
  puStack_34 = (undefined4 *)0x0;
  puStack_38 = (undefined4 *)0x1001310;
  puStack_3c = (undefined4 *)((int)&local_c + 4);
  puStack_40 = (undefined4 *)0x6a3b49;
  FUN_006e8e70();
  puStack_34 = (undefined4 *)0x6a3b55;
  FUN_00684d10();
  local_30 = (undefined4 *)0x6a3b5c;
  FUN_00684c50();
  iVar5 = *(int *)(*(int *)(iVar1 + 0x78) + 0x18);
  if ((((iVar5 == 0) || (iVar5 == 2)) || (iVar5 == 9)) || (iVar5 == 0xb)) {
    local_14 = (double)((float)(int)param_5 * 0.2) + 6755399441055744.0;
    local_30 = (undefined4 *)local_14;
    puStack_34 = param_4;
    local_c = (double)((float)(int)param_5 * 0.6) + 6755399441055744.0;
    puStack_38 = (undefined4 *)((int)local_c + param_3);
  }
  else {
    fVar8 = (float)(int)param_4;
    local_30 = param_5;
    local_14 = (double)(fVar8 * 0.2) + 6755399441055744.0;
    fVar6 = fVar8 * 0.1;
    puStack_34 = (undefined4 *)0x4;
    if ((int)(undefined4 *)local_14 < 4) {
      puStack_34 = (undefined4 *)local_14;
    }
    if (3.0 <= fVar6) {
      fVar6 = 3.0;
    }
    puStack_38 = (undefined4 *)param_3;
    local_c = (double)(fVar8 * 0.5 - fVar6) + 6755399441055744.0;
  }
  uStack_2c = 0;
  iVar5 = *(int *)*param_1;
  puStack_3c = (undefined4 *)0x6a3c3e;
  local_30 = (undefined4 *)FUN_00472d90();
  puStack_34 = (undefined4 *)0x6a3c47;
  (**(code **)(iVar5 + 0x54))();
  param_10 = (undefined4 *)0x3eb33333;
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    puStack_34 = (undefined4 *)0x0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      puStack_34 = (undefined4 *)0x6a3c66;
      cVar4 = FUN_006e6320();
      puStack_34 = extraout_ECX_01;
      if (cVar4 == '\0') goto LAB_006a3c8d;
    }
    puStack_38 = (undefined4 *)0x6a3c72;
    cVar4 = FUN_006cbfa0();
    if (cVar4 == '\0') {
      param_10 = (undefined4 *)0x3f333333;
    }
    else {
      param_10 = (undefined4 *)0x3f800000;
    }
  }
LAB_006a3c8d:
  puStack_34 = (undefined4 *)((int)&local_c + 4);
  puStack_38 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x1001300;
  puStack_40 = (undefined4 *)((int)&local_14 + 4);
  FUN_006e8e70();
  puStack_38 = (undefined4 *)0x6a3caf;
  FUN_006842b0();
  if (((*(byte *)(iVar1 + 0x69) & 0x10) == 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    puStack_34 = (undefined4 *)0x6a3cc1;
    FUN_006e6320();
  }
  puStack_34 = &param_10;
  puStack_38 = (undefined4 *)0x6a3ce8;
  FUN_006842b0();
  puVar2 = param_10;
  fVar6 = param_9;
  uVar3 = local_c._4_4_;
  if ((param_9 == 1.4013e-44) || (param_9 == 1.68156e-44)) {
    fVar8 = (float)(int)param_4;
    puStack_34 = param_10;
    puStack_38 = (undefined4 *)local_c._4_4_;
    param_9 = fVar8 * 0.3;
    fVar7 = fVar8 * 0.4;
    fVar8 = fVar8 * 0.5 + (float)param_2;
    puStack_3c = param_7;
    if (8.0 <= fVar7) {
      fVar7 = 8.0;
    }
    local_c = (double)CONCAT44(fVar8,(int)local_c);
    param_10 = (undefined4 *)(fVar8 - fVar7);
    puStack_40 = param_10;
    FUN_006a3ff0((float)param_7 - 7.0);
    puStack_3c = (undefined4 *)((float)param_8 + 7.0);
    puStack_40 = param_10;
    puVar9 = param_8;
  }
  else {
    if ((param_9 != 1.26117e-44) && (param_9 != 1.54143e-44)) goto LAB_006a3ee5;
    fVar8 = (float)(int)param_5;
    puStack_34 = param_10;
    puStack_38 = (undefined4 *)local_c._4_4_;
    param_9 = fVar8 * 0.3;
    if (4.0 <= param_9) {
      param_9 = 4.0;
    }
    param_10 = (undefined4 *)(fVar8 * 0.9 + (float)param_3);
    param_9 = (fVar8 * 0.6 + (float)param_3) - param_9;
    puStack_40 = param_7;
    puStack_3c = param_10;
    FUN_006a3ff0(param_10);
    puStack_40 = (undefined4 *)((float)param_8 + 7.0);
    puStack_3c = param_10;
    puVar9 = param_10;
  }
  puStack_34 = puVar2;
  puStack_38 = (undefined4 *)uVar3;
  FUN_006a3ff0(puVar9);
LAB_006a3ee5:
  if ((fVar6 == 0.0) || (fVar6 == 1.54143e-44)) {
    puStack_40 = (undefined4 *)(param_6 + 7.0);
    fVar6 = (float)(int)param_5 * 0.2 + (float)param_3;
    puStack_3c = (undefined4 *)fVar6;
  }
  else {
    if ((fVar6 != 1.4013e-45) && (fVar6 != 1.68156e-44)) {
      return;
    }
    fVar6 = (float)(int)param_4 * 0.4;
    if (8.0 <= fVar6) {
      fVar6 = 8.0;
    }
    puStack_40 = (undefined4 *)(fVar6 + (float)(int)param_4 * 0.5 + (float)param_2);
    fVar6 = param_6 - 7.0;
    puStack_3c = (undefined4 *)(param_6 + 7.0);
  }
  puStack_34 = puVar2;
  puStack_38 = (undefined4 *)uVar3;
  FUN_006a3ff0(fVar6);
  return;
}

