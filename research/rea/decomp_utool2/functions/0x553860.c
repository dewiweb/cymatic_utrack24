// rea decompile_all
// name: FUN_00553860
// address: 0x553860
// body: available
// range: 0x553860-0x553ae0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00553860(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00710db5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if ((char)param_2 != '\0') {
    local_28 = (void *)0x0;
    local_24 = 0;
    local_20 = 0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_0045c990(&DAT_0073e358,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    FUN_004144b0(&local_18);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = FUN_00635ea0(&local_28,3,1,&param_2);
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8._0_1_ = 1;
    piVar4 = (int *)(param_2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    if (0 < iVar2) {
      uVar3 = FUN_005537d0(&local_1c);
      local_8._0_1_ = 4;
      uVar5 = extraout_ECX;
      FUN_00637690(uVar3);
      FUN_006377c0(uVar5);
      local_8._0_1_ = 6;
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      FUN_00621830("\nPlease erase all content before trying again.");
      FUN_0045c990(&DAT_0073e1dc);
      local_8._0_1_ = 7;
      FUN_0045c990("Delete Folder");
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_004ecce0(&local_18);
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_18 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(param_2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      FUN_0040f7f0();
      FID_conflict__free(local_28);
      goto LAB_00553ab8;
    }
    FUN_0040f7f0();
    FID_conflict__free(local_28);
  }
  FUN_004144b0(&param_2);
  local_8._0_1_ = 9;
  FUN_00632db0();
  local_8 = (uint)local_8._1_3_ << 8;
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_00554c60();
LAB_00553ab8:
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

