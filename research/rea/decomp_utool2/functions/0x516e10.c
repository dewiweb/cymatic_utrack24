// rea decompile_all
// name: FUN_00516e10
// address: 0x516e10
// body: available
// range: 0x516e10-0x517352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516e10(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *local_48;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007095bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(*param_2) {
  case 0:
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = param_2;
    FUN_00637690(param_2 + 1);
    uVar2 = FUN_006377c0(puVar6);
    local_8 = 0;
    break;
  case 1:
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = param_2;
    FUN_00637690(param_2 + 1);
    uVar2 = FUN_006377c0(puVar6);
    local_8 = 1;
    break;
  case 2:
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = param_2;
    FUN_00637690(param_2 + 1);
    uVar2 = FUN_006377c0(puVar6);
    local_8 = 2;
    break;
  case 3:
    FUN_0045c990("<table>",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    piVar4 = param_1;
    local_8 = 3;
    FUN_006344b0(&local_14,0,0);
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    local_24 = 0;
    if (0 < (int)param_2[5]) {
      do {
        FUN_0045c990(&DAT_0073aba4);
        local_8 = 4;
        FUN_0062aec0(piVar4,0x4000);
        local_8 = CONCAT31(local_8._1_3_,5);
        if (*local_48 == '\0') {
          FUN_006202e0(&local_14,0,0);
        }
        FUN_0062ade0();
        local_8 = 0xffffffff;
        piVar4 = (int *)(local_14 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        if (local_24 < (uint)param_2[5]) {
          piVar4 = *(int **)(param_2[3] + local_24 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        uVar5 = 0;
        if (0 < piVar4[2]) {
          do {
            FUN_0045c990(&DAT_0073abac);
            local_8 = 6;
            FUN_0045c990(&DAT_00c129a8);
            piVar3 = (int *)(*param_1 + -8);
            if (piVar3 != &DAT_00bfe124) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            FUN_0044eef0();
            FUN_004c554b(0x4000);
            local_8._0_1_ = 10;
            FUN_00612640();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            if (*local_48 == '\0') {
              FUN_006202e0(&local_18,0,0);
            }
            FUN_0062ade0();
            local_8 = 0xffffffff;
            piVar3 = (int *)(local_18 + -8);
            if (piVar3 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar3);
              }
            }
            if (uVar5 < (uint)piVar4[2]) {
              uVar2 = *(undefined4 *)(*piVar4 + uVar5 * 4);
            }
            else {
              uVar2 = 0;
            }
            FUN_00516e10(param_1,uVar2);
            FUN_0045c990(&DAT_0073ab94);
            local_8 = 0xc;
            FUN_0045c990(&DAT_00c129a8);
            piVar3 = (int *)(*param_1 + -8);
            if (piVar3 != &DAT_00bfe124) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              UNLOCK();
            }
            FUN_0044eef0();
            FUN_004c554b(0x4000);
            local_8._0_1_ = 0x10;
            FUN_00612640();
            local_8 = CONCAT31(local_8._1_3_,0x11);
            if (*local_48 == '\0') {
              FUN_006202e0(&local_1c,0,0);
            }
            FUN_0062ade0();
            local_8 = 0xffffffff;
            piVar3 = (int *)(local_1c + -8);
            if (piVar3 != &DAT_00bfe124) {
              LOCK();
              iVar1 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar1 == 0) {
                FID_conflict__free(piVar3);
              }
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < piVar4[2]);
        }
        FUN_0045c990("</tr>");
        local_8 = 0x12;
        FUN_0045c990(&DAT_00c129a8);
        piVar4 = param_1;
        piVar3 = (int *)(*param_1 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        FUN_0044eef0();
        FUN_004c554b(0x4000);
        local_8._0_1_ = 0x16;
        FUN_00612640();
        local_8 = CONCAT31(local_8._1_3_,0x17);
        if (*local_48 == '\0') {
          FUN_006202e0(&local_20,0,0);
        }
        FUN_0062ade0();
        local_8 = 0xffffffff;
        piVar3 = (int *)(local_20 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        local_24 = local_24 + 1;
      } while ((int)local_24 < (int)param_2[5]);
    }
    FUN_0045c990("</table>");
    local_8 = 0x18;
    FUN_0062aec0(piVar4,0x4000);
    local_8 = CONCAT31(local_8._1_3_,0x19);
    if (*local_48 == '\0') {
      FUN_006202e0(&param_1,0,0);
    }
    FUN_0062ade0();
    piVar4 = param_1 + -2;
    if (piVar4 == &DAT_00bfe124) {
      ExceptionList = local_10;
      return;
    }
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return;
    }
    goto LAB_00517337;
  default:
    goto switchD_00516e49_default;
  }
  FUN_006344b0(uVar2,uVar7,uVar8);
  piVar4 = param_2 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
LAB_00517337:
      FID_conflict__free(piVar4);
    }
  }
switchD_00516e49_default:
  ExceptionList = local_10;
  return;
}

