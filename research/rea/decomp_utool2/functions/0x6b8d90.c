// rea decompile_all
// name: FUN_006b8d90
// address: 0x6b8d90
// body: available
// range: 0x6b8d90-0x6b9061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b8d90(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 local_34;
  uint local_30;
  int *local_24;
  int local_20;
  int local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007243f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006e8370(&local_1c);
  local_8 = 0;
  FUN_006378b0(&local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00620f00(&local_18);
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 4;
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (*local_18 == '\0') goto LAB_006b9031;
  iVar2 = FUN_006e85c0();
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_24 = (int *)(in_ECX + -0x7c);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (*(code **)(*local_24 + 0xb4) == FUN_006b8360) {
    FUN_006b8380();
  }
  else {
    (**(code **)(*local_24 + 0xb4))(&local_44,&local_38);
  }
  ppuVar3 = (undefined **)((int)local_38 + (iVar2 - 1U) * 4);
  if (local_30 <= iVar2 - 1U) {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  if (**ppuVar3 == '\0') {
    FUN_00627bf0();
    local_8._0_1_ = 8;
    while( true ) {
      puVar4 = (undefined4 *)FUN_00458890();
      DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
      if (((DVar5 & 0x10) != 0) && (DVar5 != 0xffffffff)) break;
      piVar6 = (int *)FUN_00636040(&local_1c);
      iVar2 = local_14;
      if (*piVar6 == local_14) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0045c1e0(*piVar6,local_14);
      }
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (iVar7 == 0) goto LAB_006b8fe8;
      piVar6 = (int *)FUN_00636040(&local_20);
      local_14 = *piVar6;
      *piVar6 = iVar2;
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    FUN_006b9d70(&local_14);
    iVar2 = local_14;
LAB_006b8fe8:
    piVar6 = (int *)(iVar2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      goto joined_r0x006b8ffd;
    }
  }
  else {
    FUN_00627bf0();
    local_8._0_1_ = 7;
    FUN_006b9d70(&local_14);
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
joined_r0x006b8ffd:
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  FUN_0040f7f0();
  FID_conflict__free(local_38);
  FUN_0040f7f0();
  FID_conflict__free(local_44);
LAB_006b9031:
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return;
}

