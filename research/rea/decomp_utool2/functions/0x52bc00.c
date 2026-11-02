// rea decompile_all
// name: FUN_0052bc00
// address: 0x52bc00
// body: available
// range: 0x52bc00-0x52c116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052bc00(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  void *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c55a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = 0;
  local_18 = in_ECX;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_00627bf0();
      local_8 = 0;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar2 = (int *)FUN_006360d0();
      iVar5 = local_28;
      if (*piVar2 == local_28) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_0045c1e0(*piVar2);
      }
      piVar2 = (int *)(local_2c + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(iVar5 + -8);
      local_8 = local_8 & 0xffffff00;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      iVar5 = local_14;
      if (iVar8 == 0) {
        piVar2 = (int *)(local_14 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        FUN_00548e50();
        local_8._0_1_ = 2;
        if (((int)local_24[9] < 1) || (2 < (int)local_24[9])) {
          uVar6 = FUN_00636a10(&local_30);
          local_8._0_1_ = 3;
          uVar7 = extraout_ECX_00;
          FUN_00637690(uVar6);
          uVar7 = FUN_006377c0(uVar7);
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_006e4900(uVar7);
          piVar2 = (int *)(param_1 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          piVar2 = local_30 + -2;
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          (**(code **)(*(int *)(local_18 + 0xe0) + 0x28))();
          (**(code **)(*(int *)(local_18 + -0x134) + 0x84))();
          local_14 = iVar5;
          if (local_24 != (undefined4 *)0x0) {
            LOCK();
            piVar2 = local_24 + 1;
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)*local_24)(1);
            }
          }
          goto LAB_0052c0e3;
        }
        LOCK();
        piVar2 = local_24 + 1;
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*local_24)();
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_00458890();
        DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
        if (((DVar4 & 0x10) == 0) || (DVar4 == 0xffffffff)) {
          FUN_0045c990();
          local_8._0_1_ = 9;
          FUN_006e4900(&param_1);
          local_8 = (uint)local_8._1_3_ << 8;
          piVar2 = (int *)(param_1 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          (**(code **)(*(int *)(local_18 + 0xe0) + 0x28))();
          (**(code **)(*(int *)(local_18 + -0x134) + 0x84))();
LAB_0052c0e3:
          piVar2 = (int *)(local_14 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          ExceptionList = local_10;
          return 0;
        }
        local_44 = (void *)0x0;
        local_40 = 0;
        local_3c = 0;
        local_8._0_1_ = 5;
        FUN_0045c990();
        local_8._0_1_ = 6;
        iVar5 = FUN_00635ea0(&local_44,2,1);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar2 = (int *)(local_1c + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        if ((iVar5 < 1) || (iVar5 = 0, local_3c < 1)) {
LAB_0052be36:
          uVar6 = FUN_00636a10(&local_30);
          local_8._0_1_ = 7;
          uVar7 = extraout_ECX;
          FUN_00637690(uVar6);
          uVar7 = FUN_006377c0(uVar7);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_006e4900(uVar7);
          piVar2 = (int *)(param_1 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          local_8 = CONCAT31(local_8._1_3_,5);
          piVar2 = local_30 + -2;
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          (**(code **)(*(int *)(local_18 + 0xe0) + 0x28))();
          (**(code **)(*(int *)(local_18 + -0x134) + 0x84))();
          FUN_0040f7f0();
          FID_conflict__free(local_44);
          goto LAB_0052c0e3;
        }
        while( true ) {
          FUN_0040f6b0(&stack0xffffffa8,iVar5);
          FUN_00548e50();
          if ((0 < (int)local_30[9]) && ((int)local_30[9] < 3)) break;
          LOCK();
          piVar2 = local_30 + 1;
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)*local_30)();
          }
          iVar5 = iVar5 + 1;
          if (local_3c <= iVar5) goto LAB_0052be36;
        }
        LOCK();
        piVar2 = local_30 + 1;
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*local_30)();
        }
        FUN_0040f7f0();
        FID_conflict__free(local_44);
        iVar5 = local_14;
      }
      piVar2 = (int *)(iVar5 + -8);
      local_8 = 0xffffffff;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      local_20 = local_20 + 1;
      in_ECX = local_18;
    } while (local_20 < *(int *)(param_1 + 8));
  }
  (**(code **)(*(int *)(in_ECX + 0xe0) + 0x28))();
  (**(code **)(*(int *)(in_ECX + -0x134) + 0x84))();
  ExceptionList = local_10;
  return 1;
}

