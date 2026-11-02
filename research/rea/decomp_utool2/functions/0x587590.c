// rea decompile_all
// name: FUN_00587590
// address: 0x587590
// body: available
// range: 0x587590-0x58768d inclusive
// range: 0x587690-0x5879c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587590(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int iVar8;
  uint uVar9;
  void *local_48 [2];
  int local_40;
  void *local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007134a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x198);
  local_28 = 0;
  local_18 = 0;
  local_24 = in_ECX;
  if (*(char *)*piVar1 != '\0') {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if ((DVar5 & 0x10) == 0) {
      FUN_00585400();
      FUN_00635980();
      piVar7 = (int *)(*piVar1 + -8);
      *piVar1 = (int)&DAT_00bfe12c;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
  }
  piVar1 = (int *)(in_ECX + 0x118);
  FUN_00407fe0();
  if (*(int *)(in_ECX + 0x11c) != 0) {
    FID_conflict__free((void *)*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(in_ECX + 0x11c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x120) = 0;
  FUN_005852e0(local_48);
  local_8 = 0;
  local_12 = '\0';
  local_20 = 0;
  iVar6 = local_40;
  if (0 < local_40) {
    local_1c = local_24 + -0x70;
    do {
      iVar6 = local_24;
      if (local_12 == '\0') {
        FUN_004110e0(&local_2c);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_28 = local_18 | 1;
        local_18 = local_28;
        cVar3 = FUN_00586be0();
        local_11 = '\x01';
        if (cVar3 == '\0') goto LAB_005876c3;
      }
      else {
LAB_005876c3:
        local_11 = '\0';
      }
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      if (((local_18 & 1) != 0) && (local_18 = local_18 & 0xfffffffe, local_2c != (undefined4 *)0x0)
         ) {
        LOCK();
        piVar7 = local_2c + 1;
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*local_2c)();
        }
      }
      if (local_11 != '\0') {
        FUN_004110e0(&local_30);
        local_8._0_1_ = 2;
        local_11 = FUN_00586a80();
        local_8._0_1_ = 0;
        if (local_30 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_30 + 1;
          iVar8 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*local_30)();
          }
        }
        if (local_11 != '\0') {
          FUN_004110e0(&local_38);
          FUN_0041a730();
          local_8 = CONCAT31(local_8._1_3_,4);
          pcVar2 = *(code **)(**(int **)(iVar6 + 0x10) + 4);
          if (pcVar2 == FUN_005acdb0) {
            iVar6 = FUN_00423510();
            if (*(uint *)(iVar6 + 0x460) < 6) {
              FUN_005802e0();
            }
            else {
              FUN_005802e0();
            }
          }
          else {
            (*pcVar2)();
          }
          piVar7 = (int *)(local_34 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          local_8._0_1_ = 0;
          if (local_38 != (undefined4 *)0x0) {
            LOCK();
            piVar7 = local_38 + 1;
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*local_38)();
            }
          }
          local_12 = '\x01';
        }
      }
      local_3c = operator_new(0x360);
      local_8._0_1_ = 5;
      FUN_004110e0(&stack0xffffffa4,local_20);
      piVar7 = (int *)FUN_00584d70();
      local_8 = (uint)local_8._1_3_ << 8;
      iVar6 = *(int *)(in_ECX + 0x120);
      iVar8 = iVar6 + 1;
      if ((int)*(uint *)(in_ECX + 0x11c) < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar6 + 2;
        }
        uVar9 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x11c) != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else if (*piVar1 == 0) {
            iVar6 = FUN_004c554b();
            *piVar1 = iVar6;
          }
          else {
            iVar6 = FUN_004c553b(*piVar1);
            *piVar1 = iVar6;
          }
          *(uint *)(in_ECX + 0x11c) = uVar9;
        }
      }
      iVar6 = *(int *)(in_ECX + 0x120);
      *(int *)(in_ECX + 0x120) = iVar6 + 1;
      *(int **)(*piVar1 + iVar6 * 4) = piVar7;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x28))();
        iVar6 = -1;
        if (piVar7[3] != local_1c) {
          if (piVar7[3] == 0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0();
          }
          piVar7[3] = local_1c;
          if ((*(byte *)(piVar7 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar7 + 0x69) & 1) == 0) &&
             (iVar6 = *(int *)(local_1c + 0x30), 0 < iVar6)) {
            piVar7 = (int *)(*(int *)(local_1c + 0x28) + (iVar6 + -1) * 4);
            do {
              if ((*(byte *)(*piVar7 + 0x69) & 1) == 0) break;
              iVar6 = iVar6 + -1;
              piVar7 = piVar7 + -1;
            } while (0 < iVar6);
          }
          FUN_00410380(iVar6);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      local_20 = local_20 + 1;
      iVar6 = local_40;
    } while (local_20 < local_40);
  }
  if (*(char *)(local_24 + 0xc) == '\0') {
    FUN_00585c10();
  }
  pcVar2 = *(code **)(*(int *)(local_24 + -0x70) + 0x84);
  if (pcVar2 == FUN_00587a30) {
    FUN_006e9790(*(int *)(local_24 + -0x58) + -0x14,0,0x14);
    (**(code **)(*(int *)(local_24 + 0x18) + 0x28))();
    FUN_00587440();
  }
  else {
    (*pcVar2)();
  }
  while (0 < iVar6) {
    puVar4 = *(undefined4 **)((int)local_48[0] + iVar6 * 4 + -4);
    iVar6 = iVar6 + -1;
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar4 + 1;
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  FID_conflict__free(local_48[0]);
  ExceptionList = local_10;
  return;
}

