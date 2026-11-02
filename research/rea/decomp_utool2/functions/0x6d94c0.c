// rea decompile_all
// name: FUN_006d94c0
// address: 0x6d94c0
// body: available
// range: 0x6d94c0-0x6d9970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d94c0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 **extraout_ECX;
  undefined4 **extraout_ECX_00;
  undefined4 **extraout_ECX_01;
  int *piVar5;
  undefined4 extraout_EDX;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 **ppuStack_80;
  float *pfStack_7c;
  float local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float local_44;
  undefined4 *local_40 [2];
  undefined1 local_38 [4];
  undefined4 *local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 *local_28;
  int *local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007278e5;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pfStack_7c = (float *)local_38;
  ppuStack_80 = (undefined4 **)0x6d9506;
  FUN_006d79a0();
  pfStack_7c = (float *)0x6d950d;
  FUN_0040e4d0();
  local_60 = local_1c;
  iVar3 = *(int *)(*(int *)(param_1 + 0xe0) + 0x8c);
  if ((iVar3 == 2) || (fVar8 = local_18, iVar3 == 3)) {
    local_60 = local_18;
    fVar8 = local_1c;
  }
  local_2c = fVar8 * 0.6;
  pfStack_7c = (float *)0x6d955e;
  operator_new(0x28);
  pfStack_7c = (float *)0x6d9588;
  local_40[0] = (undefined4 *)FUN_00468a40();
  if (local_40[0] != (undefined4 *)0x0) {
    LOCK();
    local_40[0][1] = local_40[0][1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  pfStack_7c = (float *)0x6d95ae;
  FUN_006809b0();
  local_58 = 1.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  local_48 = 1.0;
  local_44 = 0.0;
  switch(*(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x8c)) {
  case 0:
  case 1:
    local_44 = local_20 + 0.0;
    fStack_50 = (float)local_24 + 0.0;
    local_58 = 1.0;
    fStack_54 = 0.0;
    fStack_4c = 0.0;
    local_48 = 1.0;
    break;
  case 2:
    local_28 = (undefined4 *)(local_20 + local_18);
    fVar7 = -1.5707964;
    FUN_004363f0();
    fVar9 = -1.5707964;
    local_2c = fVar7;
    FUN_00436470();
    fVar7 = fVar9 * 0.0;
    fVar10 = local_2c * 0.0;
    local_58 = local_2c - fVar7;
    local_48 = fVar7 + local_2c;
    fStack_54 = fVar10 - fVar9;
    fStack_4c = fVar9 + fVar10;
    local_44 = fVar10 + fVar7 + (float)local_28;
    fStack_50 = (float)local_24 + (fVar10 - fVar7);
    break;
  case 3:
    local_2c = (float)local_24 + local_1c;
    puVar2 = (undefined4 *)0x3fc90fdb;
    FUN_004363f0();
    fVar7 = 1.5707964;
    local_28 = puVar2;
    FUN_00436470();
    fVar9 = fVar7 * 0.0;
    fVar10 = (float)local_28 * 0.0;
    local_58 = (float)local_28 - fVar9;
    local_48 = fVar9 + (float)local_28;
    fStack_54 = fVar10 - fVar7;
    fStack_4c = fVar7 + fVar10;
    fStack_50 = (fVar10 - fVar9) + local_2c;
    local_44 = local_20 + fVar10 + fVar9;
  }
  local_8._0_1_ = 1;
  pfStack_7c = (float *)0x6d9761;
  puVar2 = (undefined4 *)FUN_0063bf80();
  pfStack_7c = (float *)0x6d976e;
  cVar1 = (**(code **)(*(int *)*puVar2 + 0x14))();
  pfStack_7c = &local_1c;
  ppuStack_80 = (undefined4 **)0x6d977c;
  (**(code **)(*local_24 + 0x54))();
  local_8 = (uint)local_8._1_3_ << 8;
  if (cVar1 == '\0') {
LAB_006d97c4:
    ppuStack_80 = (undefined4 **)0x1005813;
    cVar1 = FUN_006d7a60();
    if (cVar1 == '\0') {
      ppuStack_80 = &local_34;
      local_34 = (undefined4 *)0x1005813;
      local_30 = 0;
      iVar3 = FUN_004ae580();
      if (iVar3 < 0) {
        ppuStack_80 = &local_28;
        FUN_006ae7f0(&local_2c);
        puVar2 = (undefined4 *)FUN_00680c60();
        ppuStack_80 = extraout_ECX;
        goto LAB_006d9828;
      }
    }
    ppuStack_80 = (undefined4 **)0x1005813;
  }
  else {
    ppuStack_80 = (undefined4 **)0x1005815;
    cVar1 = FUN_006d7a60();
    if (cVar1 == '\0') {
      ppuStack_80 = &local_34;
      local_34 = (undefined4 *)0x1005815;
      local_30 = 0;
      iVar3 = FUN_004ae580();
      if (iVar3 < 0) goto LAB_006d97c4;
    }
    ppuStack_80 = (undefined4 **)0x1005815;
  }
  puVar2 = (undefined4 *)FUN_006ab460(&local_28);
  ppuStack_80 = extraout_ECX_00;
LAB_006d9828:
  local_30 = *puVar2;
  if (((*(byte *)(param_1 + 0x69) & 0x10) == 0) &&
     (ppuStack_80 = (undefined4 **)0x0, *(int *)(param_1 + 0xc) != 0)) {
    ppuStack_80 = (undefined4 **)0x6d983f;
    FUN_006e6320();
    ppuStack_80 = extraout_ECX_01;
  }
  FUN_00684d10(&ppuStack_80);
  FUN_00684c50();
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    ppuStack_80 = (undefined4 **)0x6d9890;
    (**(code **)(*(int *)*param_2 + 0x34))();
  }
  ppuStack_80 = local_40;
  (**(code **)(*(int *)*param_2 + 0x68))();
  if (*(char *)(param_2 + 2) != '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    (**(code **)(*(int *)*param_2 + 0x34))();
  }
  (**(code **)(*(int *)*param_2 + 0xc))(&local_58);
  uVar4 = FUN_006378b0(&local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar3 = (int)fVar8 / 0xc;
  iVar6 = 1;
  if (1 < iVar3) {
    iVar6 = iVar3;
  }
  FUN_00472d90(0,(int)local_60,(int)fVar8);
  FUN_00682290(uVar4,0x24,iVar6,extraout_EDX);
  piVar5 = local_28 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (local_40[0] != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_40[0] + 1;
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*local_40[0])(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

