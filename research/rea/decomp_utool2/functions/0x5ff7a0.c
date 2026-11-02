// rea decompile_all
// name: FUN_005ff7a0
// address: 0x5ff7a0
// body: available
// range: 0x5ff7a0-0x5ffd62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ff7a0(void)

{
  int *_Memory;
  ushort uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 **ppuVar12;
  int local_9c;
  undefined1 *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined **local_70;
  int local_6c;
  void **local_68;
  void *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_54;
  undefined4 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c [33];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b95a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990(&DAT_00a91a34,local_14);
  puVar3 = (undefined4 *)FUN_0062a9c0(&local_48,"NumCueNotes",&local_44);
  iVar4 = FID_conflict__atoi((char *)*puVar3);
  piVar8 = (int *)(local_48 - 8);
  local_80 = iVar4;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_44 - 8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (0 < iVar4) {
    local_70 = juce::OutputStream::vftable;
    FUN_0045c990(&DAT_00c129a8);
    local_70 = juce::MemoryOutputStream::vftable;
    local_64 = (void *)0x0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = (void *)0x0;
    local_50 = 0;
    local_8 = 0;
    local_48 = (uint)(ushort)((ushort)iVar4 << 8 | (ushort)iVar4 >> 8);
    FUN_0062ca80(&local_48,2);
    local_48 = 0;
    if (0 < iVar4) {
      local_98 = &DAT_00bfe12c;
      do {
        local_1b[2] = 0;
        pcVar10 = local_1b + 2;
        uVar5 = local_48;
        if ((int)local_48 < 0) {
          uVar5 = -local_48;
          do {
            pcVar11 = pcVar10;
            pcVar10 = pcVar11 + -1;
            uVar9 = uVar5 / 10;
            *pcVar10 = (char)uVar5 + (char)uVar9 * -10 + '0';
            uVar5 = uVar9;
          } while (uVar9 != 0);
          pcVar10 = pcVar11 + -2;
          *pcVar10 = '-';
        }
        else {
          do {
            pcVar10 = pcVar10 + -1;
            uVar9 = uVar5 / 10;
            *pcVar10 = (char)uVar5 + (char)uVar9 * -10 + '0';
            uVar5 = uVar9;
          } while (uVar9 != 0);
        }
        FUN_004557e0(local_1b + (2 - (int)pcVar10));
        local_8._0_1_ = 1;
        FUN_00637690(&local_74);
        local_8._0_1_ = 3;
        piVar8 = (int *)(local_74 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_0045c990(&DAT_00a91a60);
        iVar4 = local_84;
        piVar8 = &local_78;
        local_8._0_1_ = 4;
        _Memory = (int *)(local_84 + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_006377c0(local_84);
        puVar3 = (undefined4 *)FUN_0062a9c0(&local_88,*puVar3,piVar8);
        local_8 = CONCAT31(local_8._1_3_,6);
        uVar5 = FID_conflict__atoi((char *)*puVar3);
        local_40 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        (*(code *)local_70[4])(&local_40,4);
        piVar8 = (int *)(local_88 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_8c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8._0_1_ = 3;
        piVar8 = (int *)(local_78 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_0045c990(&DAT_00a91a70);
        local_8._0_1_ = 7;
        piVar8 = &local_7c;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_006377c0(iVar4);
        puVar3 = (undefined4 *)FUN_0062a9c0(&local_90,*puVar3,piVar8);
        local_8 = CONCAT31(local_8._1_3_,9);
        iVar6 = FID_conflict__atoi((char *)*puVar3);
        local_40 = (uint)(ushort)((ushort)iVar6 << 8 | (ushort)iVar6 >> 8);
        (*(code *)local_70[4])(&local_40,2);
        piVar8 = (int *)(local_90 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_94 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_7c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,10);
        ppuVar12 = &local_98;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        puVar3 = (undefined4 *)FUN_006377c0(iVar4);
        FUN_0062a9c0(&local_44,*puVar3,ppuVar12);
        piVar8 = (int *)(local_9c + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,0xc);
        uVar5 = FUN_0045d1e0(local_44);
        if (0xfffe < uVar5) {
          uVar5 = 0xfffe;
        }
        uVar1 = (short)uVar5 + 1;
        local_40 = (uint)(ushort)(uVar1 * 0x100 | uVar1 >> 8);
        (*(code *)local_70[4])(&local_40,2);
        local_40 = local_44;
        if ((uVar5 != 0) && (iVar4 = FUN_00622a60(uVar5), iVar4 != 0)) {
          FUN_004c2c30(iVar4,local_40,uVar5);
        }
        local_3c[0] = 0;
        (*(code *)local_70[4])(local_3c,1);
        if (((uint)local_54 & 1) != 0) {
          local_3c[0] = 0;
          (*(code *)local_70[4])(local_3c,1);
        }
        piVar8 = (int *)(local_44 - 8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        local_8 = local_8 & 0xffffff00;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar4 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(_Memory);
          }
        }
        local_48 = local_48 + 1;
      } while ((int)local_48 < local_80);
    }
    pvVar2 = local_54;
    local_70 = juce::MemoryOutputStream::vftable;
    if (((local_68 != &local_64) && (local_68 != (void **)0x0)) && (local_68[1] != local_54)) {
      if (local_54 == (void *)0x0) {
        FID_conflict__free(*local_68);
        *local_68 = (void *)0x0;
        local_68[1] = (void *)0x0;
      }
      else {
        if (*local_68 == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          pvVar7 = (void *)FUN_004c554b(pvVar2);
        }
        else {
          pvVar7 = (void *)FUN_004c553b(*local_68,local_54);
        }
        *local_68 = pvVar7;
        local_68[1] = pvVar2;
      }
    }
    FID_conflict__free(local_64);
    piVar8 = (int *)(local_6c + -8);
    local_70 = juce::OutputStream::vftable;
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar8);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

