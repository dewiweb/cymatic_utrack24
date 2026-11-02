// rea decompile_all
// name: FUN_004f4f60
// address: 0x4f4f60
// body: available
// range: 0x4f4f60-0x4f5393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4f60(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  void *_Memory;
  uint uVar4;
  int *piVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int iVar10;
  LPCWSTR lpFileName;
  char *pcVar11;
  int iVar12;
  void *local_60;
  undefined4 local_5c;
  int local_58;
  void *local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  LPCWSTR local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007060cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar9 = (int *)(in_ECX + 0x86c);
  local_24 = 0;
  local_2c = (LPCWSTR)0x0;
  local_48 = in_ECX;
  local_30 = piVar9;
  FUN_0040f740();
  if (*(int *)(in_ECX + 0x870) != 0) {
    FID_conflict__free((void *)*piVar9);
    *piVar9 = 0;
    *(undefined4 *)(in_ECX + 0x870) = 0;
  }
  *(undefined4 *)(in_ECX + 0x874) = 0;
  local_20 = local_20 & 0xffffff00;
  local_60 = (void *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_8 = 0;
  FUN_0040f2d0();
  local_8._0_1_ = 1;
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_005b50c0();
  (**(code **)(*(int *)(in_ECX + 0x79c) + 0x28))();
  FUN_0045c990();
  local_8._0_1_ = 2;
  FUN_00635ea0(&local_60,3,0);
  local_8._0_1_ = 1;
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_1c = 0;
  if (0 < local_58) {
    do {
      piVar5 = (int *)FUN_0040f6b0(&local_34);
      local_8._0_1_ = 3;
      pcVar11 = (char *)*piVar5;
      if (*pcVar11 == '\0') {
        lpFileName = L"";
      }
      else {
        FUN_0045d6b0();
        pcVar1 = pcVar11 + 1;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_00455850();
        *piVar5 = local_28;
        lpFileName = (LPCWSTR)(local_28 + ((uint)(pcVar11 + (4 - (int)pcVar1)) & 0xfffffffc));
        local_2c = lpFileName;
        FUN_0045e410();
        piVar9 = local_30;
      }
      DVar6 = GetFileAttributesW(lpFileName);
      local_8._0_1_ = 1;
      piVar5 = (int *)(local_34 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      iVar10 = local_1c;
      if ((~(byte)(DVar6 >> 1) & 1) != 0) {
        FUN_0045c990();
        iVar10 = local_1c;
        FUN_0040f6b0(&local_40);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar5 = (int *)FUN_006360d0();
        iVar12 = local_38;
        if (*piVar5 == local_38) {
          local_1c = 0;
        }
        else {
          local_1c = FUN_0045c1e0(*piVar5);
        }
        local_11 = local_1c == 0;
        piVar5 = (int *)(local_3c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(local_40 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(iVar12 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar12 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar12 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_20 = CONCAT31(local_20._1_3_,(byte)local_20 | local_11);
        FUN_0040f6b0(&local_44);
        uVar4 = local_24;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_2c = (LPCWSTR)(local_24 | 1);
        puVar7 = (undefined4 *)FUN_00458890();
        DVar6 = GetFileAttributesW((LPCWSTR)*puVar7);
        if ((((DVar6 & 0x10) != 0) && (DVar6 != 0xffffffff)) || (local_11 = '\0', local_1c == 0)) {
          local_11 = '\x01';
        }
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        local_24 = uVar4 & 0xfffffffe;
        piVar5 = (int *)(local_44 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar12 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar12 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if (local_11 != '\0') {
          local_54 = operator_new(0x18);
          local_8._0_1_ = 7;
          FUN_0040f6b0(&stack0xffffff88,iVar10);
          uVar8 = FUN_004f3ed0();
          local_8._0_1_ = 1;
          if (piVar9[1] < piVar9[2] + 1) {
            FUN_00409cf0();
          }
          iVar12 = piVar9[2];
          piVar9[2] = iVar12 + 1;
          *(undefined4 *)(*piVar9 + iVar12 * 4) = uVar8;
        }
      }
      local_1c = iVar10 + 1;
      in_ECX = local_48;
    } while (local_1c < local_58);
  }
  FUN_004f4be0();
  (**(code **)(**(int **)(in_ECX + 0x230) + 4))(&local_18);
  piVar9 = (int *)(local_18 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  iVar10 = local_58;
  _Memory = local_60;
  iVar12 = 0;
  if (0 < local_58) {
    do {
      piVar9 = (int *)(*(int *)((int)_Memory + iVar12 * 4) + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar10);
  }
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return;
}

