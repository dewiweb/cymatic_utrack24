// rea decompile_all
// name: FUN_005cd4c0
// address: 0x5cd4c0
// body: available
// range: 0x5cd4c0-0x5cd822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cd4c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  int *piVar5;
  int in_ECX;
  undefined **ppuVar6;
  int *piVar7;
  int extraout_EDX;
  uint uVar8;
  int iVar9;
  void *local_98 [2];
  uint local_90;
  void *local_8c [2];
  uint local_84;
  undefined1 local_79;
  undefined *local_78;
  undefined *local_74;
  void *local_64;
  void *local_40;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b166;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005ced70(local_18);
  local_8 = 0;
  if (extraout_EDX == 0) {
    if (*(char *)*param_2 != '\0') {
      iVar2 = *(int *)(in_ECX + 0x24);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        piVar7 = *(int **)(*(int *)(in_ECX + 0x1c) + iVar2 * 4);
        (**(code **)(*piVar7 + 4))(local_98,0);
        local_8 = CONCAT31(local_8._1_3_,1);
        uVar8 = 0;
        if (0 < (int)local_90) {
          do {
            if (uVar8 < local_90) {
              ppuVar6 = (undefined **)((int)local_98[0] + uVar8 * 4);
            }
            else {
              ppuVar6 = &PTR_DAT_00c7ed68;
            }
            local_79 = 1;
            cVar4 = FUN_00458920(*param_2,*ppuVar6);
            if (cVar4 != '\0') {
              if (uVar8 < local_90) {
                ppuVar6 = (undefined **)((int)local_98[0] + uVar8 * 4);
              }
              else {
                ppuVar6 = &PTR_DAT_00c7ed68;
              }
              piVar5 = (int *)(*ppuVar6 + -8);
              if (piVar5 != &DAT_00bfe124) {
                LOCK();
                *piVar5 = *piVar5 + 1;
                UNLOCK();
              }
              puVar3 = *ppuVar6;
              LOCK();
              UNLOCK();
              piVar5 = (int *)(local_78 + -8);
              local_78 = puVar3;
              if (piVar5 != &DAT_00bfe124) {
                LOCK();
                iVar9 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar9 == 0) {
                  FID_conflict__free(piVar5);
                }
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)local_90);
        }
        (**(code **)(*piVar7 + 4))(local_8c,1);
        uVar8 = 0;
        if (0 < (int)local_84) {
          do {
            if (uVar8 < local_84) {
              ppuVar6 = (undefined **)((int)local_8c[0] + uVar8 * 4);
            }
            else {
              ppuVar6 = &PTR_DAT_00c7ed68;
            }
            cVar4 = FUN_00458920(*param_2,*ppuVar6);
            if (cVar4 != '\0') {
              if (uVar8 < local_84) {
                ppuVar6 = (undefined **)((int)local_8c[0] + uVar8 * 4);
              }
              else {
                ppuVar6 = &PTR_DAT_00c7ed68;
              }
              piVar7 = (int *)(*ppuVar6 + -8);
              if (piVar7 != &DAT_00bfe124) {
                LOCK();
                *piVar7 = *piVar7 + 1;
                UNLOCK();
              }
              puVar3 = *ppuVar6;
              LOCK();
              UNLOCK();
              piVar7 = (int *)(local_74 + -8);
              local_74 = puVar3;
              if (piVar7 != &DAT_00bfe124) {
                LOCK();
                iVar9 = *piVar7;
                *piVar7 = *piVar7 + -1;
                UNLOCK();
                if (iVar9 == 0) {
                  FID_conflict__free(piVar7);
                }
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)local_84);
        }
        iVar9 = 0;
        if (0 < (int)local_84) {
          do {
            piVar7 = (int *)(*(int *)((int)local_8c[0] + iVar9 * 4) + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)local_84);
        }
        FID_conflict__free(local_8c[0]);
        iVar9 = 0;
        local_8 = local_8 & 0xffffff00;
        if (0 < (int)local_90) {
          do {
            piVar7 = (int *)(*(int *)((int)local_98[0] + iVar9 * 4) + -8);
            if (piVar7 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar7);
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)local_90);
        }
        FID_conflict__free(local_98[0]);
      }
    }
  }
  else {
    FUN_0040da30(extraout_EDX);
  }
  FUN_005ccb20(&local_78);
  FUN_005cf320(param_1,&local_78,0);
  FID_conflict__free(local_40);
  FID_conflict__free(local_64);
  piVar7 = (int *)(local_74 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(local_78 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

