// rea decompile_all
// name: FUN_005437e0
// address: 0x5437e0
// body: available
// range: 0x5437e0-0x543ac2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005437e0(undefined4 param_1,int *param_2)

{
  LONG *pLVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  undefined4 in_EDX;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar10;
  int *piVar11;
  undefined4 *local_34;
  int local_2c;
  int local_28;
  undefined4 *local_20;
  LPCRITICAL_SECTION local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ec90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  local_18 = 1;
  local_14 = in_ECX;
  FUN_0040f7f0();
  uVar8 = extraout_ECX;
  if (param_2[1] != 0) {
    FID_conflict__free((void *)*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    uVar8 = extraout_ECX_00;
  }
  param_2[2] = 0;
  FUN_00539d00(in_EDX,uVar8,0,param_1);
  local_8 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 2;
  FUN_00415fa0(&stack0xffffffa0);
  FUN_00539700();
  local_8 = CONCAT31(local_8._1_3_,1);
  LeaveCriticalSection(lpCriticalSection);
  local_1c = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(local_1c);
  if ((local_34 == (undefined4 *)0x0) || ((local_34[3] == 0 && (local_34[6] == 0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  LeaveCriticalSection(local_1c);
  piVar11 = local_14;
  if (!bVar4) {
    piVar5 = (int *)FUN_00413340();
    piVar11 = local_14;
    iVar7 = *local_14;
    *local_14 = *piVar5;
    *piVar5 = iVar7;
    if (local_1c != (LPCRITICAL_SECTION)0x0) {
      LOCK();
      pLVar1 = &local_1c->LockCount;
      iVar7 = *pLVar1;
      *pLVar1 = *pLVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)local_1c->DebugInfo)();
      }
    }
    param_2 = (int *)0x0;
    if (0 < *(int *)(*piVar11 + 0x18)) {
      do {
        FUN_00410f30(&local_20);
        if (local_20 != (undefined4 *)0x0) {
          LOCK();
          piVar5 = local_20 + 1;
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*local_20)();
          }
        }
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,3);
        puVar6 = (undefined4 *)FUN_00637690();
        iVar7 = piVar2[2];
        iVar9 = iVar7 + 1;
        if (piVar2[1] < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar7 + 2;
          }
          uVar10 = iVar7 + 9 + (iVar9 >> 1) & 0xfffffff8;
          piVar11 = local_14;
          if (piVar2[1] != uVar10) {
            if ((int)uVar10 < 1) {
              FID_conflict__free((void *)*piVar2);
              *piVar2 = 0;
            }
            else if (*piVar2 == 0) {
              iVar7 = FUN_004c554b();
              *piVar2 = iVar7;
            }
            else {
              iVar7 = FUN_004c553b(*piVar2);
              *piVar2 = iVar7;
            }
            piVar2[1] = uVar10;
            piVar11 = local_14;
          }
        }
        iVar7 = piVar2[2];
        piVar2[2] = iVar7 + 1;
        puVar3 = (undefined4 *)(*piVar2 + iVar7 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar6;
          *puVar6 = &DAT_00bfe12c;
        }
        piVar5 = (int *)(local_28 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar5 = (int *)(local_2c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < *(int *)(*piVar11 + 0x18));
    }
    if ((piVar2[2] == 0) && (puVar6 = (undefined4 *)*piVar11, puVar6 != (undefined4 *)0x0)) {
      *piVar11 = 0;
      LOCK();
      piVar2 = puVar6 + 1;
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puVar6)();
      }
    }
  }
  if (DAT_00c8a5c4 != 0) {
    FUN_00415ff0();
  }
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_34 + 1;
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)*local_34)();
    }
  }
  ExceptionList = local_10;
  return piVar11;
}

