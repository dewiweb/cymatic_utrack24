// rea decompile_all
// name: FUN_00548e50
// address: 0x548e50
// body: available
// range: 0x548e50-0x54948d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00549051) */

void FUN_00548e50(int param_1)

{
  uint *puVar1;
  longlong *plVar2;
  char *_String;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  BOOL BVar7;
  int *piVar8;
  int iVar9;
  int *in_ECX;
  int *piVar10;
  int *piVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  LPCRITICAL_SECTION local_70;
  undefined4 *local_6c;
  uint local_68;
  int *local_64;
  int local_60;
  undefined4 *local_5c;
  int *local_58;
  int *local_54;
  undefined8 local_50;
  int local_44;
  int *local_40;
  undefined1 local_3c [28];
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f7c9;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  *in_ECX = 0;
  local_7c = 1;
  local_58 = in_ECX;
  local_54 = in_ECX;
  iVar4 = FUN_00416340(local_18);
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar4 + 4);
  local_70 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 2;
  piVar5 = (int *)FUN_00416170();
  iVar4 = *in_ECX;
  *in_ECX = *piVar5;
  *piVar5 = iVar4;
  if (local_50._4_4_ != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_50._4_4_ + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_50._4_4_)(1);
    }
  }
  if (*in_ECX == 0) {
    local_58 = operator_new(0x88);
    iVar4 = FUN_00548c00();
    if (*in_ECX != iVar4) {
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      puVar6 = (undefined4 *)*in_ECX;
      *in_ECX = iVar4;
      if (puVar6 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = puVar6 + 1;
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar6)(1);
        }
      }
    }
    iVar4 = *in_ECX;
    piVar5 = (int *)(param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    iVar9 = *(int *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = param_1;
    UNLOCK();
    piVar5 = (int *)(iVar9 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_5c = (undefined4 *)FUN_00548ab0();
    local_8._0_1_ = 3;
    if (local_5c != (undefined4 *)0x0) {
      iVar4 = *in_ECX;
      *(undefined4 *)(iVar4 + 0x10) = local_5c[6];
      *(undefined4 *)(iVar4 + 0x14) = local_5c[7];
      *(int *)(*in_ECX + 0x18) = (int)*(double *)(local_5c + 2);
      uVar17 = FUN_005be270();
      *(int *)((int)((ulonglong)uVar17 >> 0x20) + 0x1c) = (int)uVar17;
      *(undefined4 *)(*in_ECX + 0x20) = local_5c[4];
      *(undefined4 *)(*in_ECX + 0x24) = local_5c[8];
      piVar5 = (int *)FUN_006358c0();
      local_8._0_1_ = 4;
      local_58 = piVar5;
      puVar6 = (undefined4 *)FUN_00458890();
      BVar7 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_3c);
      if (BVar7 == 0) {
        local_78 = 0;
        local_44 = 0;
        local_78._0_4_ = (int *)0x0;
        local_40 = (int *)local_78;
      }
      else {
        local_44 = local_20;
        local_40 = local_1c;
      }
      iVar4 = *in_ECX;
      uVar18 = __allmul(*(int *)(iVar4 + 0x20),*(int *)(iVar4 + 0x20) >> 0x1f,
                        *(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
      lVar19 = __allmul(uVar18 >> 3,*(int *)(*local_54 + 0x24),*(int *)(*local_54 + 0x24) >> 0x1f);
      if (CONCAT44(local_44,local_40) < lVar19) {
        FUN_0045c990("AudioFile::Load - 3");
        local_8._0_1_ = 5;
        FUN_005899e0();
        local_8 = CONCAT31(local_8._1_3_,4);
        piVar11 = local_40 + -2;
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        iVar4 = *local_54;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
        local_68 = ((uint)local_5c[4] >> 3) * local_5c[8];
        FUN_00627460(0,0);
        piVar11 = local_54;
LAB_005490d6:
        while( true ) {
          puVar6 = (undefined4 *)FUN_00458890();
          BVar7 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_3c);
          iVar4 = local_20;
          piVar10 = local_1c;
          if (BVar7 == 0) {
            local_50 = 0;
            local_50._4_4_ = (undefined4 *)0x0;
            local_50._0_4_ = (int *)0x0;
            iVar4 = (int)local_50._4_4_;
            piVar10 = (int *)local_50;
          }
          if ((iVar4 < piVar5[5]) || ((iVar4 <= piVar5[5] && (piVar10 <= (int *)piVar5[4])))) break;
          iVar4 = (**(code **)(*piVar5 + 0xc))(&local_60,4);
          if (iVar4 != 4) {
            local_50 = local_50 & 0xffffffff;
            goto LAB_0054915f;
          }
          local_50 = CONCAT44(local_60,(int *)local_50);
          if (local_60 != 0x46464952) goto LAB_0054914f;
          (**(code **)(*piVar5 + 0xc))(local_90,4);
        }
        FUN_0045c990("AudioFile::Load - 3");
        local_8._0_1_ = 6;
        FUN_005899e0();
        lpCriticalSection = local_70;
        local_8._0_1_ = 4;
        piVar11 = (int *)((int)local_50._4_4_ + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar11);
          }
        }
      }
      puVar6 = local_5c;
      puVar15 = local_5c + 10;
      local_6c = puVar15;
      uVar13 = FUN_0062c730("NumCuePoints",*(undefined1 *)(local_5c + 0x10),0);
      if (uVar13 < (uint)puVar6[0xf]) {
        ppuVar16 = (undefined **)(puVar6[0xd] + uVar13 * 4);
      }
      else {
        ppuVar16 = &PTR_DAT_00c7ed68;
      }
      local_44 = FID_conflict__atoi(*ppuVar16);
      piVar11 = local_54;
      if (0 < local_44) {
        iVar4 = 0;
        do {
          if (iVar4 < 0) {
            iVar9 = FUN_006104a0();
            *(undefined1 *)(iVar9 + -1) = 0x2d;
            iVar9 = iVar9 + -1;
          }
          else {
            iVar9 = FUN_006104a0();
          }
          iVar9 = (int)&local_1c + (3 - iVar9);
          FUN_004557e0(iVar9);
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_00637690((int)&local_50 + 4);
          puVar6 = (undefined4 *)FUN_006377c0(iVar9);
          uVar13 = FUN_0062c730(*puVar6,*(undefined1 *)(puVar15 + 6),0);
          if (uVar13 < (uint)puVar15[5]) {
            ppuVar16 = (undefined **)(puVar15[3] + uVar13 * 4);
          }
          else {
            ppuVar16 = &PTR_DAT_00c7ed68;
          }
          _String = *ppuVar16;
          local_40 = (int *)(_String + -8);
          if (local_40 != &DAT_00bfe124) {
            LOCK();
            *local_40 = *local_40 + 1;
            UNLOCK();
          }
          piVar5 = (int *)(local_68 - 8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          local_8._0_1_ = 4;
          piVar5 = (int *)((int)local_50._4_4_ + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          lVar19 = FID_conflict__atoll(_String);
          local_64 = (int *)((ulonglong)lVar19 >> 0x20);
          local_60 = (int)lVar19;
          iVar9 = *piVar11;
          iVar3 = *(int *)(iVar9 + 0x30);
          iVar12 = iVar3 + 1;
          if (*(int *)(iVar9 + 0x2c) < iVar12) {
            if (iVar12 < 0) {
              iVar12 = iVar3 + 2;
            }
            FUN_00411870((iVar12 >> 1) + iVar3 + 9 & 0xfffffff8);
            lVar19 = CONCAT44(local_64,local_60);
          }
          local_60 = (int)lVar19;
          iVar3 = *(int *)(iVar9 + 0x30);
          *(int *)(iVar9 + 0x30) = iVar3 + 1;
          plVar2 = (longlong *)(*(int *)(iVar9 + 0x28) + iVar3 * 8);
          if (plVar2 != (longlong *)0x0) {
            *plVar2 = lVar19;
          }
          if (local_40 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *local_40;
            *local_40 = *local_40 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(local_40);
            }
          }
          iVar4 = iVar4 + 1;
          lpCriticalSection = local_70;
          piVar5 = local_58;
          puVar15 = local_6c;
        } while (iVar4 < local_44);
      }
      iVar4 = *local_54;
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      FUN_00416290(iVar4);
      if (piVar5 != (int *)0x0) {
        (**(code **)*piVar5)(1);
      }
      if (local_5c != (undefined4 *)0x0) {
        (**(code **)*local_5c)(1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
LAB_0054914f:
  if (local_60 != 0x45564157) {
LAB_0054915f:
    iVar4 = (**(code **)(*piVar5 + 0xc))(&local_64,4);
    local_40 = (int *)0x0;
    if (iVar4 == 4) {
      local_40 = local_64;
    }
    uVar13 = ((uint)local_40 & 1) + (int)local_40;
    piVar14 = (int *)(uVar13 + piVar5[4]);
    local_44 = (uint)CARRY4((uint)local_40 & 1,(uint)local_40) + piVar5[5] +
               (uint)CARRY4(uVar13,piVar5[4]);
    puVar6 = (undefined4 *)FUN_00458890();
    BVar7 = GetFileAttributesExW((LPCWSTR)*puVar6,GetFileExInfoStandard,local_3c);
    iVar4 = local_20;
    piVar10 = local_1c;
    if (BVar7 == 0) {
      local_88 = 0;
      local_88._4_4_ = 0;
      local_88._0_4_ = (int *)0x0;
      iVar4 = local_88._4_4_;
      piVar10 = (int *)local_88;
    }
    piVar8 = local_40;
    uVar17 = CONCAT44(local_44,piVar14);
    if ((iVar4 <= local_44) &&
       ((iVar4 < local_44 || (uVar17 = CONCAT44(local_44,piVar14), piVar10 < piVar14)))) {
      uVar17 = FUN_00627570();
      piVar8 = (int *)((int)uVar17 - piVar5[4]);
    }
    local_44 = (int)((ulonglong)uVar17 >> 0x20);
    if (local_50._4_4_ == (undefined4 *)0x61746164) {
      iVar4 = *piVar11;
      puVar1 = (uint *)(iVar4 + 0x10);
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + (uint)piVar8 / local_68;
      piVar10 = (int *)(iVar4 + 0x14);
      *piVar10 = *piVar10 + (uint)CARRY4(uVar13,(uint)piVar8 / local_68);
    }
    FUN_00627460(uVar17);
  }
  goto LAB_005490d6;
}

