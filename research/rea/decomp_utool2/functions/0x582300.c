// rea decompile_all
// name: FUN_00582300
// address: 0x582300
// body: available
// range: 0x582300-0x582625 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0058236e) */
/* WARNING: Removing unreachable block (ram,0x00582379) */
/* WARNING: Removing unreachable block (ram,0x005823aa) */
/* WARNING: Removing unreachable block (ram,0x005823b6) */

undefined1 FUN_00582300(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char in_CL;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined1 uVar9;
  char **ppcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined **ppuVar14;
  undefined4 uVar15;
  char *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar8 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  local_8 = 1;
  puStack_c = &LAB_00712c42;
  local_14 = PTR_DAT_00c7ed68;
  piVar8 = (int *)(PTR_DAT_00c7ed68 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  LOCK();
  local_18 = PTR_DAT_00c7ed68;
  UNLOCK();
  iVar5 = FUN_005b1900(uVar4);
  ppuVar14 = &PTR_DAT_00c7ed68;
  uVar12 = 0x20;
  ppcVar10 = &local_20;
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar11 = 0;
  iVar7 = iVar5;
  uVar13 = extraout_ECX;
  uVar15 = extraout_ECX;
  FUN_0057fe20(ppcVar10,0,0x20,iVar5,extraout_ECX,&PTR_DAT_00c7ed68,extraout_ECX);
  puVar6 = (undefined4 *)FUN_005ce1e0(ppcVar10,uVar11,uVar12,iVar7,uVar13,ppuVar14,uVar15);
  pcVar2 = (char *)*puVar6;
  *puVar6 = local_18;
  piVar8 = (int *)(local_20 + -8);
  local_18 = pcVar2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (*local_18 != '\0') {
    FUN_0045c990("Error when trying to open the audio device!");
    pcVar2 = local_14;
    local_14 = local_20;
    piVar8 = (int *)(pcVar2 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  if (*local_14 == '\0') {
    iVar7 = FUN_0057fe20();
    if (*(int *)(iVar7 + 0x98) == 0) {
LAB_0058248b:
      FUN_0045c990("Unable to initialize audio device");
      pcVar2 = local_14;
      local_14 = local_20;
      piVar8 = (int *)(pcVar2 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      FUN_0045c990(
                  "Please check if the device is connected correctly and make sure that the device drivers are installed."
                  );
      pcVar2 = local_18;
      local_18 = local_20;
      piVar8 = (int *)(pcVar2 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar8);
        }
      }
    }
    else {
      iVar7 = FUN_0057fe20();
      cVar3 = (**(code **)(**(int **)(iVar7 + 0x98) + 0x20))();
      if (cVar3 == '\0') goto LAB_0058248b;
    }
    if (*local_14 != '\0') goto LAB_00582511;
LAB_00582622:
    uVar9 = 1;
  }
  else {
LAB_00582511:
    if (in_CL != '\0') {
      FUN_0045c990("Go to Settings panel");
      local_8._0_1_ = 3;
      FUN_0045c990("Retry");
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar7 = FUN_004ed1f0(&local_1c,&local_20,0xffffffff);
      piVar8 = (int *)(local_1c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar8 = (int *)(local_20 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (iVar7 != 1) goto LAB_00582622;
      FUN_00580650();
    }
    uVar9 = 0;
  }
  if (iVar5 != 0) {
    FUN_00634ec0();
    FUN_004bfe14(iVar5,0x10);
  }
  piVar8 = (int *)(local_18 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_14 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return uVar9;
}

