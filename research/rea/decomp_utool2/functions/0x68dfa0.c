// rea decompile_all
// name: FUN_0068dfa0
// address: 0x68dfa0
// body: available
// range: 0x68dfa0-0x68e4e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068dfa0(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int in_ECX;
  int extraout_EDX;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  float *local_98;
  float local_94;
  int local_90;
  int local_8c;
  float *local_88;
  undefined4 *local_84;
  float local_80;
  float local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [4];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00721700;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_84 = param_2;
  *(undefined4 *)(in_ECX + 0xc4) = *param_1;
  *(undefined4 *)(in_ECX + 200) = param_1[1];
  *(undefined4 *)(in_ECX + 0xcc) = param_1[2];
  *(undefined4 *)(in_ECX + 0xd0) = param_1[3];
  *(undefined4 *)(in_ECX + 0xb4) = *param_2;
  *(undefined4 *)(in_ECX + 0xb8) = param_2[1];
  *(undefined4 *)(in_ECX + 0xbc) = param_2[2];
  *(undefined4 *)(in_ECX + 0xc0) = param_2[3];
  local_8 = 0;
  local_78 = in_ECX;
  iVar8 = FUN_006e9580(local_14);
  pcVar3 = *(code **)(*(int *)(iVar8 + 0x50) + 8);
  if (pcVar3 == FUN_006d7d00) {
    local_88 = (float *)0x14;
  }
  else {
    local_88 = (float *)(*pcVar3)();
  }
  iVar8 = (int)*(float *)(in_ECX + 0x84);
  if ((int)local_88 < iVar8) {
    local_88 = (float *)iVar8;
  }
  local_a8 = *(int *)(*(int *)(in_ECX + 0x88) + 0x18) + (int)local_88 * 2;
  local_a4 = *(int *)(*(int *)(in_ECX + 0x88) + 0x1c) + (int)local_88 * 2;
  local_90 = 0;
  local_8c = 0;
  local_a0 = local_a8 / 2;
  iVar9 = local_a4 / 2;
  local_7c = (float)(int)local_88 - *(float *)(in_ECX + 0x84);
  local_80 = (float)(local_a0 + (int)local_88 * -2);
  local_34[0] = (float)(*(int *)(local_78 + 0xcc) / 2 + *(int *)(local_78 + 0xc4));
  local_34[1] = (float)(*(int *)(local_78 + 0xd0) + *(int *)(local_78 + 200));
  local_34[2] = (float)(*(int *)(local_78 + 0xcc) + *(int *)(local_78 + 0xc4));
  local_34[3] = (float)(*(int *)(local_78 + 0xd0) / 2 + *(int *)(local_78 + 200));
  local_24 = (float)*(int *)(local_78 + 0xc4);
  local_20 = (float)(*(int *)(local_78 + 0xd0) / 2 + *(int *)(local_78 + 200));
  iVar8 = *(int *)(local_78 + 0xcc) / 2 + *(int *)(local_78 + 0xc4);
  local_1c = (float)iVar8;
  local_18 = (float)*(int *)(local_78 + 200);
  local_74 = local_34[0] - local_80;
  local_6c = local_34[0] + local_80;
  local_70 = local_34[1] + ((float)iVar9 - local_7c);
  local_64 = local_34[2] + ((float)local_a0 - local_7c);
  local_54 = local_24 - ((float)local_a0 - local_7c);
  local_50 = (float)(iVar9 + (int)local_88 * -2);
  local_58 = local_34[3] + local_50;
  local_60 = local_34[3] - local_50;
  local_44 = (float)iVar8;
  local_48 = local_20 + local_50;
  local_50 = local_20 - local_50;
  local_40 = (float)*(int *)(local_78 + 200) - ((float)iVar9 - local_7c);
  local_3c = local_44 + local_80;
  local_44 = local_44 - local_80;
  pfVar13 = &local_c0;
  local_8 = 1;
  local_68 = local_70;
  local_5c = local_64;
  local_4c = local_54;
  local_38 = local_40;
  FUN_00418f80(&local_d0,local_a0,iVar9);
  FUN_0040e4d0(pfVar13);
  iVar8 = *(int *)(local_78 + 0xd0);
  iVar4 = *(int *)(local_78 + 0xcc);
  iVar5 = *(int *)(local_78 + 200);
  iVar6 = *(int *)(local_78 + 0xc4);
  local_84 = (undefined4 *)0x4e6e6b28;
  local_88 = &local_70;
  local_7c = 0.0;
  do {
    fVar12 = local_88[2];
    fVar1 = local_88[1];
    fVar11 = local_bc + local_b4;
    local_c4 = local_bc;
    if ((local_bc <= fVar12) && (local_c4 = fVar11, fVar12 <= fVar11)) {
      local_c4 = fVar12;
    }
    fVar12 = local_c0 + local_b8;
    local_c8 = local_c0;
    if ((local_c0 <= fVar1) && (local_c8 = fVar12, fVar1 <= fVar12)) {
      local_c8 = fVar1;
    }
    fVar1 = *local_88;
    local_98 = local_88 + -1;
    fVar2 = *local_98;
    local_cc = local_bc;
    if ((local_bc <= fVar1) && (local_cc = fVar11, fVar1 <= fVar11)) {
      local_cc = fVar1;
    }
    local_d0 = local_c0;
    if ((local_c0 <= fVar2) && (local_d0 = fVar12, fVar2 <= fVar12)) {
      local_d0 = fVar2;
    }
    FUN_0046fc40(&local_b0,(float)(iVar4 / 2 + iVar6),(float)(iVar8 / 2 + iVar5));
    local_9c = local_ac;
    local_94 = local_b0;
    fVar10 = (float10)FUN_004c5561(local_b0 - local_34[extraout_EDX * 2],
                                   local_ac - local_34[extraout_EDX * 2 + 1]);
    local_80 = (float)fVar10;
    cVar7 = FUN_004af5e0(local_98);
    fVar12 = local_80;
    if (cVar7 == '\0') {
      fVar12 = local_80 + 1000.0;
    }
    if (fVar12 < (float)local_84) {
      *(float *)(local_78 + 0xac) = local_34[(int)local_7c * 2];
      *(float *)(local_78 + 0xb0) = local_34[(int)local_7c * 2 + 1];
      local_8c = (int)(local_9c - (float)iVar9);
      local_90 = (int)(local_94 - (float)local_a0);
      local_84 = (undefined4 *)fVar12;
    }
    local_7c = (float)((int)local_7c + 1);
    local_88 = local_88 + 4;
  } while ((int)local_7c < 4);
  FUN_006e9790(local_90,local_8c,local_a8,local_a4);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(&local_74,0x10,4,guard_check_icall);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

