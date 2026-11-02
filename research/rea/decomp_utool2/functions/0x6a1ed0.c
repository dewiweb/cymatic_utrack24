// rea decompile_all
// name: FUN_006a1ed0
// address: 0x6a1ed0
// body: available
// range: 0x6a1ed0-0x6a24d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a1ed0(float param_1,undefined4 *param_2,char param_3,char param_4)

{
  int **ppiVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int **ppiVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 *puStack_d0;
  int **ppiStack_c8;
  int **ppiStack_c4;
  void *local_90;
  int *local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float local_50;
  int *local_4c;
  int **ppiStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 local_3c;
  int local_38;
  float local_30;
  float local_2c;
  int **local_28;
  int *local_24;
  int **ppiStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722d80;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = param_1;
  FUN_006d79e0();
  local_38 = *(int *)(*(int *)((int)param_1 + 0xe0) + 0x8c);
  FUN_006ae7f0();
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_0063bf80();
  cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  (**(code **)(*local_24 + 0x54))();
  local_8 = 0xffffffff;
  if (cVar2 == '\0') {
    piVar6 = (int *)0x0;
    ppiVar7 = (int **)0x0;
    switch(local_38) {
    case 0:
      piVar6 = local_4c;
      ppiVar7 = (int **)((int)fStack_40 + (int)ppiStack_48);
      break;
    case 1:
      piVar6 = local_4c;
      ppiVar7 = ppiStack_48;
      break;
    case 2:
      piVar6 = (int *)((int)fStack_44 + (int)local_4c);
      ppiVar7 = ppiStack_48;
      break;
    case 3:
      piVar6 = local_4c;
      ppiVar7 = ppiStack_48;
    }
    ppiStack_c4 = (int **)(float)(int)ppiVar7;
    puStack_d0 = (undefined4 *)&stack0xffffff34;
    ppiStack_c8 = (int **)(float)(int)piVar6;
    FUN_006841a0();
    FUN_00684210(&puStack_d0);
    FUN_006840c0();
    local_8 = 1;
    ppiStack_c4 = (int **)0x6a2040;
    FUN_00683ff0();
    local_8 = 0xffffffff;
    ppiStack_c4 = (int **)0x6a2052;
    FID_conflict__free(local_90);
    param_1 = local_30;
  }
  else {
    ppiStack_c4 = (int **)0x6a1f7f;
    FUN_00684c50();
  }
  ppiStack_c4 = &local_24;
  local_24 = local_4c;
  ppiStack_20 = ppiStack_48;
  fStack_1c = fStack_44;
  fStack_18 = fStack_40;
  ppiStack_c8 = (int **)0x6a206d;
  (**(code **)(*(int *)*param_2 + 0x54))();
  puStack_d0 = (undefined4 *)0x1005812;
  FUN_006e8e70(&ppiStack_c8);
  FUN_00684c50();
  iVar4 = local_38;
  local_24 = local_4c;
  ppiStack_20 = ppiStack_48;
  fStack_1c = fStack_44;
  fStack_18 = fStack_40;
  if (local_38 != 1) {
    ppiStack_c8 = (int **)0x1;
    puStack_d0 = (undefined4 *)0x6a20a7;
    FUN_0040dd60();
    ppiStack_c8 = (int **)0x0;
    puStack_d0 = (undefined4 *)0x6a20b7;
    (**(code **)(*(int *)*param_2 + 0x54))();
  }
  if (iVar4 != 0) {
    ppiStack_c8 = (int **)0x1;
    puStack_d0 = (undefined4 *)0x6a20cc;
    FUN_00418d70();
    ppiStack_c8 = (int **)0x0;
    puStack_d0 = (undefined4 *)0x6a20dc;
    (**(code **)(*(int *)*param_2 + 0x54))();
  }
  if (iVar4 != 3) {
    ppiStack_c8 = (int **)0x1;
    puStack_d0 = (undefined4 *)0x6a20f2;
    FUN_0040dd10();
    ppiStack_c8 = (int **)0x0;
    puStack_d0 = (undefined4 *)0x6a2102;
    (**(code **)(*(int *)*param_2 + 0x54))();
  }
  if (iVar4 != 2) {
    ppiStack_c8 = (int **)0x1;
    puStack_d0 = (undefined4 *)0x6a2118;
    FUN_0040dcd0();
    ppiStack_c8 = (int **)0x0;
    puStack_d0 = (undefined4 *)0x6a2128;
    (**(code **)(*(int *)*param_2 + 0x54))();
  }
  uVar9 = 0x3f800000;
  if ((*(byte *)((int)param_1 + 0x69) & 0x10) == 0) {
    if (*(int *)((int)param_1 + 0xc) != 0) {
      ppiStack_c8 = (int **)0x6a2142;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006a2163;
    }
    local_2c = (float)uVar9;
    if ((param_3 == '\0') && (param_4 == '\0')) {
      local_2c = (float)0x3f4ccccd;
    }
  }
  else {
LAB_006a2163:
    local_2c = (float)0x3e99999a;
  }
  ppiStack_c8 = (int **)&local_28;
  puStack_d0 = (undefined4 *)0x6a2180;
  FUN_00680c60();
  FUN_00684d10();
  ppiStack_c8 = (int **)0x6a2193;
  iVar4 = FUN_004b1b60();
  ppiVar7 = local_28;
  if (iVar4 != 0) {
    ppiStack_c8 = &local_24;
    local_8 = 2;
    puVar3 = (undefined4 *)FUN_0063bf80();
    ppiStack_c8 = (int **)(puVar3 + 2);
    cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
    puStack_d0 = (undefined4 *)0x6a21cb;
    (**(code **)(*local_24 + 0x54))();
    local_8 = 0xffffffff;
    ppiVar1 = (int **)((uint)(cVar2 != '\0') * 2 + 0x1005813);
    ppiStack_c8 = ppiVar1;
    cVar2 = FUN_006d7a60();
    if (cVar2 == '\0') {
      ppiStack_c8 = (int **)&ppiStack_20;
      fStack_1c = 0.0;
      ppiStack_20 = ppiVar1;
      iVar4 = FUN_004ae580();
      ppiVar7 = local_28;
      if (-1 < iVar4) {
        puStack_d0 = (undefined4 *)0x6a2230;
        ppiStack_c8 = ppiVar1;
        pfVar5 = (float *)FUN_006ab460();
        ppiVar7 = (int **)*pfVar5;
      }
    }
    else {
      ppiStack_c8 = (int **)0x0;
      puStack_d0 = &local_3c;
      pfVar5 = (float *)FUN_006e8e70();
      ppiVar7 = (int **)*pfVar5;
    }
  }
  fVar8 = local_30;
  ppiStack_c8 = &local_24;
  puStack_d0 = (undefined4 *)0x6a224c;
  FUN_006d79a0();
  FUN_0040e4d0();
  local_30 = fStack_1c;
  iVar4 = *(int *)(*(int *)((int)fVar8 + 0xe0) + 0x8c);
  local_2c = fStack_18;
  if ((iVar4 == 2) || (iVar4 == 3)) {
    local_30 = fStack_18;
    local_2c = fStack_1c;
  }
  local_8 = 3;
  ppiStack_c8 = ppiVar7;
  FUN_006a2500();
  local_54 = 1.0;
  local_50 = 0.0;
  local_64 = (int *)0x3f800000;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  switch(local_38) {
  case 0:
  case 1:
    local_50 = (float)ppiStack_20 + 0.0;
    fStack_5c = (float)local_24 + 0.0;
    local_64 = (int *)0x3f800000;
    fStack_60 = 0.0;
    fStack_58 = 0.0;
    local_54 = 1.0;
    break;
  case 2:
    ppiVar7 = (int **)0xbfc90fdb;
    ppiStack_c8 = (int **)0x6a230f;
    FUN_004363f0();
    fVar8 = -1.5707964;
    ppiStack_c8 = (int **)0x6a2321;
    local_28 = ppiVar7;
    FUN_00436470();
    fVar10 = fVar8 * 0.0;
    fVar11 = (float)local_28 * 0.0;
    local_64 = (int *)((float)local_28 - fVar10);
    local_54 = fVar10 + (float)local_28;
    fStack_60 = fVar11 - fVar8;
    fStack_58 = fVar8 + fVar11;
    fStack_5c = (fVar11 - fVar10) + (float)local_24;
    local_50 = (float)ppiStack_20 + fStack_18 + fVar11 + fVar10;
    break;
  case 3:
    ppiVar7 = (int **)0x3fc90fdb;
    ppiStack_c8 = (int **)0x6a23a1;
    FUN_004363f0();
    fVar8 = 1.5707964;
    ppiStack_c8 = (int **)0x6a23b3;
    local_28 = ppiVar7;
    FUN_00436470();
    fVar10 = fVar8 * 0.0;
    fVar11 = (float)local_28 * 0.0;
    local_64 = (int *)((float)local_28 - fVar10);
    local_54 = fVar10 + (float)local_28;
    fStack_60 = fVar11 - fVar8;
    fStack_58 = fVar8 + fVar11;
    local_50 = fVar11 + fVar10 + (float)ppiStack_20;
    fStack_5c = (float)local_24 + fStack_1c + (fVar11 - fVar10);
  }
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    ppiStack_c8 = (int **)0x6a246a;
    (**(code **)(*(int *)*param_2 + 0x34))();
  }
  ppiStack_c8 = &local_64;
  (**(code **)(*(int *)*param_2 + 0xc))();
  fStack_1c = local_30;
  puStack_d0 = param_2;
  local_24 = (int *)0x0;
  ppiStack_20 = (int **)0x0;
  fStack_18 = local_2c;
  FUN_00684760();
  FUN_00471a50();
  puStack_d0 = (undefined4 *)0x6a24b4;
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

