// rea decompile_all
// name: FUN_004f89d0
// address: 0x4f89d0
// body: available
// range: 0x4f89d0-0x4f8dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f89d0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *_Memory;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 local_40;
  undefined1 *local_3c;
  LPCRITICAL_SECTION local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007065b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_38 = (LPCRITICAL_SECTION)(in_ECX + 0x344);
  local_14 = in_ECX;
  EnterCriticalSection(local_38);
  local_18 = &DAT_00bfe12c;
  local_28 = in_ECX + 0x10;
  local_8 = 1;
  iVar3 = FUN_006e85c0();
  if (0 < iVar3) {
    FUN_006e85c0();
    iVar3 = FUN_00410630(&local_48);
    piVar4 = (int *)(*(int *)(iVar3 + 4) + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    puVar1 = *(undefined1 **)(iVar3 + 4);
    LOCK();
    UNLOCK();
    piVar4 = (int *)(local_18 + -8);
    local_18 = puVar1;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_004105c0();
  }
  FUN_004106d0();
  if (*(int *)(in_ECX + 0x368) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x364));
    *(undefined4 *)(in_ECX + 0x364) = 0;
    *(undefined4 *)(in_ECX + 0x368) = 0;
  }
  *(undefined4 *)(in_ECX + 0x36c) = 0;
  FUN_006e86d0();
  piVar4 = param_1;
  local_24 = 0;
  uVar9 = 0;
  if (0 < param_1[2]) {
    bVar10 = param_1[2] != 0;
    do {
      if (bVar10) {
        iVar3 = *(int *)(*piVar4 + uVar9 * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((*(char *)(iVar3 + 8) != '\0') && (cVar2 = FUN_005b0530(), cVar2 == '\0')) {
        if (uVar9 < (uint)piVar4[2]) {
          puVar7 = *(undefined4 **)(*piVar4 + uVar9 * 4);
        }
        else {
          puVar7 = (undefined4 *)0x0;
        }
        local_48 = (undefined1 *)*puVar7;
        piVar5 = (int *)(local_48 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        local_44 = (undefined1 *)puVar7[1];
        piVar5 = (int *)(local_44 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        local_40 = *(undefined1 *)(puVar7 + 2);
        local_3c = (undefined1 *)puVar7[3];
        piVar5 = (int *)(local_3c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        piVar5 = (int *)(local_14 + 0x364);
        iVar3 = *(int *)(local_14 + 0x36c);
        iVar6 = iVar3 + 1;
        local_30 = local_3c;
        local_2c = local_48;
        local_20 = local_44;
        param_1._3_1_ = local_40;
        if (*(int *)(local_14 + 0x368) < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar3 + 2;
          }
          uVar8 = iVar3 + 9 + (iVar6 >> 1) & 0xfffffff8;
          if (*(uint *)(local_14 + 0x368) != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free((void *)*piVar5);
              piVar5 = (int *)(local_14 + 0x364);
              *piVar5 = 0;
            }
            else if (*piVar5 == 0) {
              iVar3 = FUN_004c554b();
              piVar5 = (int *)(local_14 + 0x364);
              *piVar5 = iVar3;
            }
            else {
              iVar3 = FUN_004c553b(*piVar5);
              piVar5 = (int *)(local_14 + 0x364);
              *piVar5 = iVar3;
            }
            piVar5[1] = uVar8;
          }
        }
        iVar3 = piVar5[2];
        piVar5[2] = iVar3 + 1;
        puVar7 = (undefined4 *)(iVar3 * 0x10 + *piVar5);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = local_2c;
          puVar7[1] = local_20;
          *(undefined1 *)(puVar7 + 2) = param_1._3_1_;
          local_48 = &DAT_00bfe12c;
          local_44 = &DAT_00bfe12c;
          puVar7[3] = local_30;
          local_3c = &DAT_00bfe12c;
        }
        FUN_004105c0();
        if (uVar9 < (uint)piVar4[2]) {
          piVar5 = *(int **)(*piVar4 + uVar9 * 4);
        }
        else {
          piVar5 = (int *)0x0;
        }
        local_1c = *piVar5;
        piVar5 = (int *)(local_1c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        if (uVar9 < (uint)piVar4[2]) {
          iVar3 = *(int *)(*piVar4 + uVar9 * 4);
        }
        else {
          iVar3 = 0;
        }
        param_1 = *(int **)(iVar3 + 0xc);
        piVar5 = param_1 + -2;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        local_8._0_1_ = 3;
        if ((char)*param_1 != '\0') {
          FUN_00637690(&param_1);
          FUN_006377c0();
          local_8._0_1_ = 4;
          FUN_00636ec0();
          local_8._0_1_ = 3;
          _Memory = (int *)(local_34 + -8);
          if (_Memory != &DAT_00bfe124) {
            LOCK();
            iVar3 = *_Memory;
            *_Memory = *_Memory + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(_Memory);
            }
          }
        }
        FUN_006e8760(&local_1c);
        if (uVar9 < (uint)piVar4[2]) {
          iVar3 = *(int *)(*piVar4 + uVar9 * 4);
        }
        else {
          iVar3 = 0;
        }
        if ((local_18 == *(undefined1 **)(iVar3 + 4)) ||
           (iVar3 = FUN_0045c1e0(local_18), iVar3 == 0)) {
          local_24 = *(int *)(local_14 + 0x36c);
        }
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar5 = (int *)(local_1c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < (uint)piVar4[2];
    } while ((int)uVar9 < piVar4[2]);
    if (local_24 != 0) {
      FUN_006e83a0(local_24);
      goto LAB_004f8d8b;
    }
  }
  (**(code **)(**(int **)(local_14 + 0x35c) + 4))(&PTR_DAT_00c7ed54);
LAB_004f8d8b:
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  LeaveCriticalSection(local_38);
  ExceptionList = local_10;
  return;
}

