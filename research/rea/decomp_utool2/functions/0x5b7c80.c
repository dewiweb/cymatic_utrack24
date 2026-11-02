// rea decompile_all
// name: FUN_005b7c80
// address: 0x5b7c80
// body: available
// range: 0x5b7c80-0x5b7fa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b7c80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  undefined4 extraout_ECX;
  undefined4 uVar9;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719867;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00631ef0(param_1);
  *(int *)(in_ECX + 0x88) = param_2;
  puVar6 = &param_2;
  *(undefined1 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  uVar9 = 0x5b7cee;
  FUN_0062d680(puVar6);
  local_8 = 0;
  FUN_00632c10(&param_1,&DAT_00748e10,uVar9,puVar6);
  local_8._0_1_ = 1;
  cVar4 = FUN_00632c80(&DAT_00748e14);
  if (cVar4 == '\0') {
    cVar4 = FUN_00632c80(&DAT_00748e1c);
    if (cVar4 != '\0') {
      FUN_00634690();
      local_8 = CONCAT31(local_8._1_3_,3);
      goto LAB_005b7d8b;
    }
    cVar4 = FUN_00632c80(&DAT_00748e24);
    if (cVar4 != '\0') {
      FUN_00634690();
      local_8 = CONCAT31(local_8._1_3_,4);
      goto LAB_005b7d8b;
    }
    cVar4 = FUN_00632c80(&DAT_00748e2c);
    if (cVar4 == '\0') {
      FUN_0045c990(&DAT_00748e34);
      local_8._0_1_ = 6;
      FUN_0045c990("Error");
      local_8._0_1_ = 7;
      uVar9 = FUN_00631e00(local_20,1);
      local_8._0_1_ = 8;
      uVar9 = FUN_00637690(uVar9);
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_006d3510(uVar9,&local_18,0);
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
      FUN_00637c10();
      goto LAB_005b7f52;
    }
    FUN_00634690();
    local_8._0_1_ = 5;
    puVar6 = (undefined4 *)FUN_00635a10(&local_18,param_1);
    uVar9 = *(undefined4 *)(in_ECX + 0xbc);
    *(undefined4 *)(in_ECX + 0xbc) = *puVar6;
    *puVar6 = uVar9;
    FUN_0040ea50();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0040ea50();
  }
  else {
    FUN_00634690(uVar5);
    local_8 = CONCAT31(local_8._1_3_,2);
LAB_005b7d8b:
    puVar6 = (undefined4 *)FUN_00635a10(&local_18,param_1);
    uVar9 = *(undefined4 *)(in_ECX + 0xbc);
    *(undefined4 *)(in_ECX + 0xbc) = *puVar6;
    *puVar6 = uVar9;
    piVar8 = (int *)(local_18 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar8 = (int *)(local_14 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  iVar7 = FUN_006d2360(local_30);
  iVar1 = *(int *)(iVar7 + 0xc);
  iVar7 = *(int *)(iVar7 + 4);
  piVar8 = (int *)FUN_006d2360(local_40);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x60) + 0x1c);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x60) + 0x18);
  FUN_006e9790((piVar8[2] / 2 - iVar3 / 2) + *piVar8,(iVar1 / 2 + iVar7) - iVar2 / 2,iVar3,iVar2);
  FUN_006d1ea0(extraout_ECX);
LAB_005b7f52:
  piVar8 = (int *)(param_1 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(param_2 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

