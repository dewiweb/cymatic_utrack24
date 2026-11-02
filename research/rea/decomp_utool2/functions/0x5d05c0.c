// rea decompile_all
// name: FUN_005d05c0
// address: 0x5d05c0
// body: available
// range: 0x5d05c0-0x5d0cd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d05c0(void)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined **local_f4;
  int local_f0;
  void **local_ec;
  void *local_e8 [4];
  void *local_d8;
  undefined4 local_d0;
  int *local_cc;
  char *local_c8;
  int local_c4;
  int *local_c0;
  char *local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int *local_a8;
  char *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int *local_90;
  char *local_88;
  uint local_84;
  char local_63 [6];
  undefined1 auStack_5d [30];
  char local_3f [6];
  undefined1 auStack_39 [30];
  char acStack_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b642;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_0045c990("NumCueLabels",uVar1);
  local_8 = 0;
  piVar2 = (int *)FUN_005d1370();
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_98 + -8);
  local_90 = piVar2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("NumCueNotes",uVar1);
  local_8 = 1;
  pcVar3 = (char *)FUN_005d1370();
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_9c + -8);
  local_88 = pcVar3;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("NumCueRegions");
  local_8 = 2;
  local_94 = FUN_005d1370();
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_a0 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0062cb00(0x100);
  local_8 = 3;
  if (0 < (int)(pcVar3 + local_94 + (int)piVar2)) {
    local_b4 = 0x6c746461;
    (*(code *)local_f4[4])(&local_b4,4);
    uVar1 = 0;
    if (0 < (int)piVar2) {
      do {
        acStack_1b[2] = 0;
        pcVar3 = acStack_1b + 2;
        uVar8 = uVar1;
        if ((int)uVar1 < 0) {
          uVar8 = -uVar1;
          do {
            pcVar9 = pcVar3;
            pcVar3 = pcVar9 + -1;
            uVar7 = uVar8 / 10;
            *pcVar3 = (char)uVar8 + (char)uVar7 * -10 + '0';
            uVar8 = uVar7;
          } while (uVar7 != 0);
          pcVar3 = pcVar9 + -2;
          *pcVar3 = '-';
        }
        else {
          do {
            pcVar3 = pcVar3 + -1;
            uVar7 = uVar8 / 10;
            *pcVar3 = (char)uVar8 + (char)uVar7 * -10 + '0';
            uVar8 = uVar7;
          } while (uVar7 != 0);
        }
        FUN_004557e0(acStack_1b + (2 - (int)pcVar3));
        local_8._0_1_ = 4;
        FUN_00637690(&local_ac);
        local_8 = CONCAT31(local_8._1_3_,5);
        FUN_005d1130(0x6c62616c,&local_f4);
        piVar4 = (int *)(local_b8 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        piVar4 = (int *)(local_ac + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)local_90);
    }
    local_84 = 0;
    if (0 < (int)local_88) {
      do {
        local_3f[2] = 0;
        local_a4 = local_3f + 2;
        uVar1 = local_84;
        if ((int)local_84 < 0) {
          uVar1 = -local_84;
          do {
            pcVar3 = local_a4;
            local_a4 = pcVar3 + -1;
            uVar8 = uVar1 / 10;
            *local_a4 = (char)uVar1 + (char)uVar8 * -10 + '0';
            uVar1 = uVar8;
          } while (uVar8 != 0);
          local_a4 = pcVar3 + -2;
          *local_a4 = '-';
        }
        else {
          do {
            local_a4 = local_a4 + -1;
            uVar8 = uVar1 / 10;
            *local_a4 = (char)uVar1 + (char)uVar8 * -10 + '0';
            uVar1 = uVar8;
          } while (uVar8 != 0);
        }
        iVar5 = -(int)local_a4;
        pcVar3 = local_3f + iVar5 + 2;
        piVar4 = (int *)FUN_004bfe22(((uint)(auStack_39 + iVar5) & 0xfffffffc) + 0xb);
        piVar4[1] = (uint)(auStack_39 + iVar5) & 0xfffffffc;
        local_c0 = piVar4 + 2;
        *piVar4 = 0;
        local_a8 = local_c0;
        local_bc = local_a4;
        while ((0 < (int)pcVar3 && (iVar5 = FUN_00443260(), iVar5 != 0))) {
          FUN_0044ecc0(iVar5);
          pcVar3 = pcVar3 + -1;
        }
        *(undefined1 *)local_a8 = 0;
        local_8._0_1_ = 6;
        FUN_00637690(&local_c0);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_005d1130(0x65746f6e,&local_f4);
        piVar2 = (int *)(local_c4 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_84 = local_84 + 1;
      } while ((int)local_84 < (int)local_88);
    }
    local_84 = 0;
    if (0 < local_94) {
      do {
        local_63[2] = 0;
        local_88 = local_63 + 2;
        uVar1 = local_84;
        if ((int)local_84 < 0) {
          uVar1 = -local_84;
          do {
            pcVar3 = local_88;
            local_88 = pcVar3 + -1;
            uVar8 = uVar1 / 10;
            *local_88 = (char)uVar1 + (char)uVar8 * -10 + '0';
            uVar1 = uVar8;
          } while (uVar8 != 0);
          local_88 = pcVar3 + -2;
          *local_88 = '-';
        }
        else {
          do {
            local_88 = local_88 + -1;
            uVar8 = uVar1 / 10;
            *local_88 = (char)uVar1 + (char)uVar8 * -10 + '0';
            uVar1 = uVar8;
          } while (uVar8 != 0);
        }
        iVar5 = -(int)local_88;
        pcVar3 = local_63 + iVar5 + 2;
        piVar4 = (int *)FUN_004bfe22(((uint)(auStack_5d + iVar5) & 0xfffffffc) + 0xb);
        piVar4[1] = (uint)(auStack_5d + iVar5) & 0xfffffffc;
        local_cc = piVar4 + 2;
        *piVar4 = 0;
        local_90 = local_cc;
        local_c8 = local_88;
        while ((0 < (int)pcVar3 && (iVar5 = FUN_00443260(), iVar5 != 0))) {
          FUN_0044ecc0(iVar5);
          pcVar3 = pcVar3 + -1;
        }
        *(undefined1 *)local_90 = 0;
        local_8._0_1_ = 8;
        FUN_00637690(&local_cc);
        local_8 = CONCAT31(local_8._1_3_,9);
        FUN_005d0ce0(&local_f4);
        piVar2 = (int *)(local_b0 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        local_84 = local_84 + 1;
      } while ((int)local_84 < local_94);
    }
  }
  FUN_0062ac80(local_d0);
  local_f4 = juce::MemoryOutputStream::vftable;
  if (((local_ec != local_e8) && (local_ec != (void **)0x0)) && (local_ec[1] != local_d8)) {
    if (local_d8 == (void *)0x0) {
      FID_conflict__free(*local_ec);
      *local_ec = (void *)0x0;
      local_ec[1] = (void *)0x0;
    }
    else {
      if (*local_ec == (void *)0x0) {
        FID_conflict__free((void *)0x0);
        pvVar6 = (void *)FUN_004c554b(local_d8);
      }
      else {
        pvVar6 = (void *)FUN_004c553b(*local_ec,local_d8);
      }
      *local_ec = pvVar6;
      local_ec[1] = local_d8;
    }
  }
  FID_conflict__free(local_e8[0]);
  piVar4 = (int *)(local_f0 + -8);
  local_f4 = juce::OutputStream::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

