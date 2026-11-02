// rea decompile_all
// name: FUN_005bc7f0
// address: 0x5bc7f0
// body: available
// range: 0x5bc7f0-0x5bcc07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005bc7f0(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  int *piVar6;
  undefined1 uVar7;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a020;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00634690(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_00635a10(&local_34,"Cymatic uTool");
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00635a10(&local_18,"Presets");
  piVar6 = (int *)(local_34 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 4;
  piVar6 = (int *)(local_38 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (*local_18 != '\0') {
    puVar3 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if (DVar4 != 0xffffffff) {
      FUN_00634690();
      local_8._0_1_ = 5;
      FUN_00635a10(&local_3c,"Cymatic Audio uTool2");
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_00635a10(&local_30,"Presets");
      piVar6 = (int *)(local_3c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,9);
      piVar6 = (int *)(local_40 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      cVar2 = FUN_0062ce30(&local_30);
      if (cVar2 != '\0') {
        FUN_00632db0();
      }
      FUN_005b2a40();
      local_8._0_1_ = 10;
      FUN_00635a10(&local_24,&DAT_00748fa0);
      local_8._0_1_ = 0xb;
      FUN_00635a10(&local_20,"uTrack24");
      local_8._0_1_ = 0xc;
      FUN_00635a10(&local_1c,"uTrackX32");
      local_8._0_1_ = 0xd;
      FUN_00635a10(&local_2c,"Stereo Songs");
      local_8._0_1_ = 0xe;
      FUN_00635a10(&local_28,&DAT_00748fd0);
      local_8._0_1_ = 0xf;
      if (*local_24 == '\0') {
LAB_005bca18:
        if (*local_20 != '\0') {
          puVar3 = (undefined4 *)FUN_00458890();
          DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
          if (DVar4 != 0xffffffff) goto LAB_005bcadd;
        }
        if (*local_1c != '\0') {
          puVar3 = (undefined4 *)FUN_00458890();
          DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
          if (DVar4 != 0xffffffff) goto LAB_005bcadd;
        }
        cVar2 = FUN_006333f0();
        if (cVar2 == '\0') {
          cVar2 = FUN_006333f0();
          if (cVar2 == '\0') {
            operator_new(0x110);
            uVar5 = FUN_005bc5a0(in_ECX);
            if (DAT_00c8a5e4 != 0) {
              FUN_005b5fb0(uVar5);
            }
            FUN_0040ea50();
            FUN_0040ea50();
            FUN_0040ea50();
            FUN_0040ea50();
            FUN_0040ea50();
            FUN_0040ea50();
            FUN_0040ea50();
            uVar7 = 1;
            goto LAB_005bcbd4;
          }
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if (DVar4 == 0xffffffff) goto LAB_005bca18;
      }
LAB_005bcadd:
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_2c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
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
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_24 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_30 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
  }
  uVar7 = 0;
LAB_005bcbd4:
  piVar6 = (int *)(local_18 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return uVar7;
}

