// rea decompile_all
// name: FUN_00674f60
// address: 0x674f60
// body: available
// range: 0x674f60-0x6753a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674f60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  void *local_c4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [35];
  undefined1 local_75 [32];
  undefined1 local_55 [41];
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007205f3;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)(in_ECX + 0x20);
  if (iVar3 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
  }
  if ((*(int *)(iVar4 + 0x18) == 0) && (*(int *)(iVar4 + 0x1c) == 0)) {
    FUN_00675f90();
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00409cf0();
      FUN_004c2c30();
    }
    local_8 = 0;
    iVar3 = *(int *)(in_ECX + 0x20);
    if (iVar3 < 1) {
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
      iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
    }
    local_2c = *param_2;
    local_28 = param_2[1];
    local_24 = (float)*(int *)(iVar3 + 0xc) + (float)param_2[2];
    local_20 = param_2[3];
    local_1c = param_2[4];
    local_18 = (float)*(int *)(iVar4 + 0x10) + (float)param_2[5];
    FUN_00680060();
    FUN_00675a00();
    FUN_00675db0();
    (**(code **)(**(int **)(in_ECX + 4) + 0x10))();
    FID_conflict__free((void *)0x0);
  }
  else {
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      FUN_00675f90();
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))();
      FUN_0067c470();
      local_8 = 1;
      iVar3 = *(int *)(in_ECX + 0x20);
      if (iVar3 < 1) {
        iVar4 = 0;
        iVar3 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
        iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + -4 + iVar3 * 4);
      }
      local_24 = (float)param_2[2] + (float)*(int *)(iVar3 + 0xc);
      local_2c = *param_2;
      local_28 = param_2[1];
      local_20 = param_2[3];
      local_1c = param_2[4];
      local_18 = (float)param_2[5] + (float)*(int *)(iVar4 + 0x10);
      FUN_00680060();
      FUN_00675a00();
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))();
      local_8 = 0xffffffff;
      FID_conflict__free(local_c4);
      FUN_0046ef00();
      FUN_0067ec60(&stack0xffffff18);
      FUN_00675db0();
      iVar3 = local_20 + (int)local_18;
      piVar1 = *(int **)(in_ECX + 4);
      if ((int)local_24 < 0) {
        iVar4 = FUN_006104a0();
        *(undefined1 *)(iVar4 + -1) = 0x2d;
        iVar4 = iVar4 + -1;
      }
      else {
        iVar4 = FUN_006104a0();
      }
      (**(code **)(*piVar1 + 0x10))(iVar4);
      pcVar2 = *(code **)(*piVar1 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_98[0] = 0x20;
        (**(code **)(*piVar1 + 0x10))(local_98,1);
      }
      else {
        (*pcVar2)(0x20);
      }
      if (-iVar3 < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = FUN_006104a0();
      }
      (**(code **)(*piVar1 + 0x10))(iVar3,local_55 + -iVar3);
      pcVar2 = *(code **)(*piVar1 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_9c[0] = 0x20;
        (**(code **)(*piVar1 + 0x10))(local_9c,1);
      }
      else {
        (*pcVar2)(0x20);
      }
      if (local_1c < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = FUN_006104a0();
      }
      (**(code **)(*piVar1 + 0x10))(iVar3,local_75 + -iVar3);
      pcVar2 = *(code **)(*piVar1 + 0x14);
      if (pcVar2 == FUN_0062c8e0) {
        local_a0[0] = 0x20;
        (**(code **)(*piVar1 + 0x10))(local_a0,1);
      }
      else {
        (*pcVar2)(0x20);
      }
      if ((int)local_18 < 0) {
        iVar3 = FUN_006104a0();
        *(undefined1 *)(iVar3 + -1) = 0x2d;
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = FUN_006104a0();
      }
      (**(code **)(*piVar1 + 0x10))(iVar3,(int)&local_18 + (3 - iVar3));
      (**(code **)(*piVar1 + 0x10))(" rectfill\n",10);
      (**(code **)(**(int **)(in_ECX + 4) + 0x10))("grestore\n",9);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

