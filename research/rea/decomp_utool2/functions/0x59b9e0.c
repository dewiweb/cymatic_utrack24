// rea decompile_all
// name: FUN_0059b9e0
// address: 0x59b9e0
// body: available
// range: 0x59b9e0-0x59bd8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b9e0(LPCRITICAL_SECTION param_1,int param_2,uint param_3,LPCRITICAL_SECTION param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  int *piVar5;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  LPCRITICAL_SECTION p_Var7;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715a04;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("ImportWriteThreadPoolJob",uVar2);
  *in_ECX = juce::ThreadPoolJob::vftable;
  in_ECX[1] = local_14;
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  local_8 = 0;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *in_ECX = ImportWriteThreadPoolJob::vftable;
  in_ECX[4] = param_1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LOCK();
    *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
    UNLOCK();
  }
  in_ECX[5] = 0;
  local_8._0_1_ = 2;
  in_ECX[6] = param_3;
  in_ECX[7] = param_4;
  in_ECX[8] = param_5;
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorA",uVar2);
  local_8._0_1_ = 3;
  FUN_005899e0();
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  puVar3 = (undefined4 *)FUN_004e5c80(param_6,param_7);
  uVar6 = in_ECX[5];
  in_ECX[5] = *puVar3;
  *puVar3 = uVar6;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LOCK();
    piVar5 = (int *)((int)param_1 + 4);
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (*(code *)**(undefined4 **)param_1)(1);
    }
  }
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorA");
  p_Var7 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  param_4 = p_Var7;
  EnterCriticalSection(p_Var7);
  local_8._0_1_ = 5;
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&param_1,extraout_ECX);
    FUN_0062f940();
  }
  LeaveCriticalSection(p_Var7);
  local_8._0_1_ = 2;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorB");
  local_8._0_1_ = 6;
  FUN_005899e0();
  local_8._0_1_ = 2;
  piVar5 = (int *)((int)param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((int)param_3 < (int)*(uint *)(param_2 + 0x10)) {
    uVar6 = uRam00000008;
    if (param_3 < *(uint *)(param_2 + 0x10)) {
      uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + param_3 * 4) + 8);
    }
  }
  else {
    uVar6 = 0;
  }
  iVar1 = *(int *)(in_ECX[5] + 0x10);
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uRam00000008;
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(**(int **)(in_ECX[5] + 8) + 8);
    }
  }
  FUN_004c2c30(uVar4,uVar6,param_6 << 2);
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorB");
  p_Var7 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  param_1 = p_Var7;
  EnterCriticalSection(p_Var7);
  local_8._0_1_ = 8;
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&param_3,extraout_ECX_00);
    FUN_0062f940();
  }
  LeaveCriticalSection(p_Var7);
  local_8._0_1_ = 2;
  piVar5 = (int *)(param_3 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorC");
  local_8._0_1_ = 9;
  FUN_005899e0();
  local_8._0_1_ = 2;
  piVar5 = (int *)(param_3 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  iVar1 = in_ECX[7];
  p_Var7 = (LPCRITICAL_SECTION)(iVar1 + 0xc);
  EnterCriticalSection(p_Var7);
  piVar5 = (int *)(iVar1 + 0x78);
  *piVar5 = *piVar5 + 1;
  LeaveCriticalSection(p_Var7);
  FUN_0045c990("ImportWriteThreadPoolJob::ConstructorC");
  p_Var7 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  param_1 = p_Var7;
  EnterCriticalSection(p_Var7);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
    FUN_005891b0(&param_3,extraout_ECX_01);
    FUN_0062f940();
  }
  LeaveCriticalSection(p_Var7);
  piVar5 = (int *)(param_3 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

