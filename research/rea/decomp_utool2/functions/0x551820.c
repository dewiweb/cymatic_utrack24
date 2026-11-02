// rea decompile_all
// name: FUN_00551820
// address: 0x551820
// body: available
// range: 0x551820-0x551b25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00551ae0) */
/* WARNING: Removing unreachable block (ram,0x00551aee) */
/* WARNING: Removing unreachable block (ram,0x00551afb) */
/* WARNING: Removing unreachable block (ram,0x00551b04) */

void FUN_00551820(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007109eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0055ef00();
  local_8._0_1_ = 1;
  if (param_2 != (undefined4 *)0x0) {
    operator_new(0x60);
    local_8._0_1_ = 2;
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      param_2[1] = param_2[1] + 1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)FUN_00550670(param_1,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      puVar2[1] = puVar2[1] + 1;
      UNLOCK();
    }
    local_8._0_1_ = 3;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      puVar2[1] = puVar2[1] + 1;
      UNLOCK();
    }
    FUN_005514c0();
    piVar1 = param_3;
    iVar7 = 0;
    if (0 < (int)param_2[0x16]) {
      do {
        FUN_00411090(&param_3);
        FUN_00410ea0();
        if (param_3 != (int *)0x0) {
          LOCK();
          piVar6 = param_3 + 1;
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*param_3)();
          }
        }
        FUN_004178c0();
        piVar6 = (int *)(param_1 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_2[0x16]);
    }
    param_3 = (int *)0x0;
    if (0 < (int)param_2[0x19]) {
      do {
        piVar6 = param_3;
        FUN_0055ed60(&param_1);
        iVar7 = piVar1[2];
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
          if ((param_1 == *(int *)(*piVar1 + iVar7 * 4)) ||
             (iVar3 = FUN_0045c1e0(param_1), piVar6 = param_3, iVar3 == 0)) {
            piVar1[2] = piVar1[2] + -1;
            piVar8 = (int *)(*piVar1 + iVar7 * 4);
            piVar6 = (int *)(*piVar8 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            if (0 < piVar1[2] - iVar7) {
              FUN_004c1df0(piVar8,piVar8 + 1);
            }
            iVar3 = piVar1[2];
            iVar5 = piVar1[1];
            iVar4 = 0;
            if (0 < iVar3 * 2) {
              iVar4 = iVar3 * 2;
            }
            piVar6 = param_3;
            if (iVar4 < iVar5) {
              if (iVar3 < 0x10) {
                iVar3 = 0x10;
              }
              if ((iVar3 < iVar5) && (iVar5 != iVar3)) {
                if (iVar3 < 1) {
                  FID_conflict__free((void *)*piVar1);
                  *piVar1 = 0;
                }
                else if (*piVar1 == 0) {
                  iVar5 = FUN_004c554b();
                  *piVar1 = iVar5;
                }
                else {
                  iVar5 = FUN_004c553b(*piVar1);
                  *piVar1 = iVar5;
                }
                piVar1[1] = iVar3;
                piVar6 = param_3;
              }
            }
          }
        }
        piVar8 = (int *)(param_1 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        param_3 = (int *)((int)piVar6 + 1);
      } while ((int)param_3 < (int)param_2[0x19]);
    }
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puVar2)();
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_2 + 1;
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*param_2)();
      }
    }
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

