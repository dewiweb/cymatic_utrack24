// rea decompile_all
// name: FUN_006066a0
// address: 0x6066a0
// body: available
// range: 0x6066a0-0x606a0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006066a0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined **ppuVar5;
  int *piVar6;
  DWORD DVar7;
  void *_Memory;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  LPCWSTR lpFileName;
  char *pcVar11;
  int iVar12;
  bool bVar13;
  void *local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  uint local_38;
  int local_34;
  LPCWSTR local_2c;
  char *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c191;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_1c = in_ECX;
  if (0 < param_2[2]) {
    bVar13 = param_2[2] != 0;
    do {
      if (bVar13) {
        ppuVar5 = (undefined **)(*param_2 + local_24 * 4);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      local_18 = *ppuVar5;
      piVar6 = (int *)(local_18 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      uVar9 = 0;
      local_8 = 0;
      if (0 < param_1[2]) {
        bVar13 = param_1[2] != 0;
        do {
          if (bVar13) {
            piVar6 = *(int **)(*param_1 + uVar9 * 4);
          }
          else {
            piVar6 = (int *)0x0;
          }
          cVar3 = (**(code **)(*piVar6 + 0xc))(&local_18,uVar4);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_00606a10(&local_18,extraout_ECX,param_3,piVar6), cVar3 != '\0'))
          goto LAB_006069ac;
          uVar9 = uVar9 + 1;
          bVar13 = uVar9 < (uint)param_1[2];
        } while ((int)uVar9 < param_1[2]);
      }
      FUN_00627bf0();
      pcVar2 = local_14;
      local_8._0_1_ = 1;
      if (*local_14 == '\0') {
        lpFileName = L"";
        pcVar10 = local_14;
      }
      else {
        FUN_0045d6b0(local_14);
        pcVar11 = pcVar2;
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_00455850(pcVar2);
        pcVar10 = local_28;
        local_14 = local_28;
        lpFileName = (LPCWSTR)(local_28 + ((uint)(pcVar11 + (4 - (int)(pcVar2 + 1))) & 0xfffffffc));
        local_2c = lpFileName;
        FUN_0045e410(local_28);
      }
      DVar7 = GetFileAttributesW(lpFileName);
      if (((DVar7 & 0x10) != 0) && (DVar7 != 0xffffffff)) {
        local_3c = (void *)0x0;
        local_38 = 0;
        local_34 = 0;
        local_48 = (void *)0x0;
        local_44 = 0;
        local_40 = 0;
        local_8._0_1_ = 3;
        FUN_0045c990(&DAT_00bfdc64);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00635ea0(&local_48,3,0,&local_20);
        piVar6 = (int *)(local_20 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar12 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar12 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        iVar12 = 0;
        _Memory = local_3c;
        if (0 < local_40) {
          do {
            iVar8 = local_34 + 1;
            if ((int)local_38 < iVar8) {
              if (iVar8 < 0) {
                iVar8 = local_34 + 2;
              }
              uVar9 = local_34 + 9 + (iVar8 >> 1) & 0xfffffff8;
              if (local_38 != uVar9) {
                if ((int)uVar9 < 1) {
                  FID_conflict__free(_Memory);
                  _Memory = (void *)0x0;
                  local_3c = _Memory;
                  local_38 = uVar9;
                }
                else if (_Memory == (void *)0x0) {
                  _Memory = (void *)FUN_004c554b();
                  local_3c = _Memory;
                  local_38 = uVar9;
                }
                else {
                  _Memory = (void *)FUN_004c553b(_Memory,uVar9 * 4);
                  local_3c = _Memory;
                  local_38 = uVar9;
                }
              }
            }
            iVar8 = local_34 + 1;
            piVar6 = (int *)((int)_Memory + local_34 * 4);
            if (piVar6 != (int *)0x0) {
              iVar1 = *(int *)((int)local_48 + iVar12 * 4);
              *piVar6 = iVar1;
              piVar6 = (int *)(iVar1 + -8);
              _Memory = local_3c;
              if (piVar6 != &DAT_00bfe124) {
                LOCK();
                *piVar6 = *piVar6 + 1;
                UNLOCK();
              }
            }
            iVar12 = iVar12 + 1;
            local_34 = iVar8;
          } while (iVar12 < local_40);
        }
        iVar12 = local_40;
        iVar8 = 0;
        local_8._0_1_ = 2;
        if (0 < local_40) {
          do {
            piVar6 = (int *)(*(int *)((int)local_48 + iVar8 * 4) + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar12);
        }
        FID_conflict__free(local_48);
        FUN_006066a0(param_1,&local_3c,param_3);
        iVar12 = 0;
        if (0 < local_34) {
          do {
            piVar6 = (int *)(*(int *)((int)local_3c + iVar12 * 4) + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar8 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar8 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_34);
        }
        FID_conflict__free(local_3c);
        pcVar10 = local_14;
      }
      piVar6 = (int *)(pcVar10 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar12 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          FID_conflict__free(piVar6);
        }
      }
LAB_006069ac:
      local_8 = 0xffffffff;
      piVar6 = (int *)(local_18 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar12 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_24 = local_24 + 1;
      bVar13 = local_24 < (uint)param_2[2];
    } while ((int)local_24 < param_2[2]);
  }
  if (*(int **)(local_1c + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(local_1c + 0x34) + 8))();
  }
  ExceptionList = local_10;
  return;
}

