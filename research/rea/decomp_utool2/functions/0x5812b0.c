// rea decompile_all
// name: FUN_005812b0
// address: 0x5812b0
// body: available
// range: 0x5812b0-0x5822d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005812b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uintptr_t uVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  BOOL BVar7;
  undefined4 *in_ECX;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  void *local_3c;
  undefined **local_34 [2];
  int local_2c [2];
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712bf2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0;
  FUN_006ea2c0(local_14);
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  in_ECX[0x1d] = juce::Timer::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = FolderStructureUpgrader_To_2_0::Listener::vftable;
  DAT_00c8a5c0 = in_ECX + 0x23;
  *in_ECX = MainContentComponent::vftable;
  in_ECX[0x1c] = MainContentComponent::vftable;
  in_ECX[0x1d] = MainContentComponent::vftable;
  in_ECX[0x22] = MainContentComponent::vftable;
  *DAT_00c8a5c0 = PopupManager::vftable;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  FUN_005b65a0(in_ECX);
  local_8._0_1_ = 5;
  FUN_00544580();
  local_8 = CONCAT31(local_8._1_3_,6);
  pcVar14 = "BackgroundThread";
  FUN_0045c990("BackgroundThread");
  local_4c = in_ECX + 0xf6;
  FUN_00630a80(&local_50,pcVar14);
  in_ECX[0xf6] = juce::TimeSliceThread::vftable;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x106));
  uVar13 = 0x5813d7;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  in_ECX[0x112] = 0;
  in_ECX[0x113] = 0;
  in_ECX[0x114] = 0;
  in_ECX[0x115] = 0;
  piVar1 = (int *)(local_50 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      uVar13 = 0x58141a;
      FID_conflict__free(piVar1);
    }
  }
  piVar1 = in_ECX + 0x116;
  *piVar1 = 0;
  in_ECX[0x117] = 0;
  in_ECX[0x118] = 0;
  in_ECX[0x119] = 0;
  in_ECX[0x11a] = 0;
  in_ECX[0x11b] = 0;
  local_8._0_1_ = 9;
  uVar15 = 0x581464;
  FUN_005b74f0();
  in_ECX[0x1e7] = 0;
  local_8._0_1_ = 0xb;
  FUN_006d3030(uVar13,uVar15);
  FUN_00580230();
  local_8._0_1_ = 0xd;
  FUN_005895c0();
  local_8._0_1_ = 0xe;
  DAT_00c8a5d4 = in_ECX;
  SetErrorMode(0x8001);
  (**(code **)(in_ECX[0x27] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x27,0xffffffff);
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(in_ECX + 0x240) = 1;
  LeaveCriticalSection(lpCriticalSection);
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0xf;
  FUN_0045c990(&DAT_00745964);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_48 = 1;
  uVar13 = FUN_005804f0(&local_54,0,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar9 = (int *)(local_54 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_40 = operator_new(0x9c8);
  local_8._0_1_ = 0x12;
  local_3c = (void *)FUN_0059ad50();
  local_8._0_1_ = 0xe;
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0x13;
  FUN_0045c990("Export");
  local_8 = CONCAT31(local_8._1_3_,0x14);
  local_48 = 2;
  uVar13 = FUN_005804f0(&local_58,1,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar9 = (int *)(local_58 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_40 = operator_new(0x2770);
  local_8._0_1_ = 0x16;
  local_3c = (void *)FUN_005966e0();
  local_8._0_1_ = 0xe;
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0x17;
  FUN_0045c990("Import");
  local_8 = CONCAT31(local_8._1_3_,0x18);
  local_48 = 4;
  uVar13 = FUN_005804f0(&local_5c,2,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar9 = (int *)(local_5c + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_40 = operator_new(0x2c78);
  local_8._0_1_ = 0x1a;
  local_3c = (void *)FUN_005a6df0();
  local_8._0_1_ = 0xe;
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0x1b;
  FUN_0045c990("Edit Target");
  local_8 = CONCAT31(local_8._1_3_,0x1c);
  local_48 = 8;
  uVar13 = FUN_005804f0(&local_60,3,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar9 = (int *)(local_60 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_40 = operator_new(0x1488);
  local_8._0_1_ = 0x1e;
  local_3c = (void *)FUN_0059a8b0();
  local_8._0_1_ = 0xe;
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0x1f;
  FUN_0045c990("Settings");
  local_8 = CONCAT31(local_8._1_3_,0x20);
  local_48 = 0x10;
  uVar13 = FUN_005804f0(&local_64,4,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar9 = (int *)(local_64 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  local_40 = operator_new(0x17a0);
  local_8._0_1_ = 0x22;
  local_3c = (void *)FUN_005acca0();
  local_8._0_1_ = 0xe;
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_40 = operator_new(0x100);
  local_8._0_1_ = 0x23;
  FUN_0045c990("Support");
  local_8 = CONCAT31(local_8._1_3_,0x24);
  local_48 = 0x20;
  uVar13 = FUN_005804f0(&local_68,5,-(uint)(in_ECX != (undefined4 *)0x0) & (uint)(in_ECX + 0x1c));
  iVar8 = in_ECX[0x118] + 1;
  if ((int)in_ECX[0x117] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x118] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x118];
  in_ECX[0x118] = iVar8 + 1;
  local_8 = 0xe;
  local_48 = 0;
  *(undefined4 *)(*piVar1 + iVar8 * 4) = uVar13;
  piVar1 = (int *)(local_68 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  local_40 = operator_new(0x4b68);
  local_8._0_1_ = 0x26;
  local_3c = (void *)FUN_005adb00();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  iVar8 = in_ECX[0x11b] + 1;
  if ((int)in_ECX[0x11a] < iVar8) {
    FUN_00409cf0(iVar8 / 2 + in_ECX[0x11b] + 9 & 0xfffffff8);
  }
  iVar8 = in_ECX[0x11b];
  in_ECX[0x11b] = iVar8 + 1;
  *(void **)(in_ECX[0x119] + iVar8 * 4) = local_3c;
  local_44 = 0;
  if (0 < (int)in_ECX[0x118]) {
    do {
      if ((local_44 < (uint)in_ECX[0x118]) &&
         (iVar8 = *(int *)(in_ECX[0x116] + local_44 * 4), iVar8 != 0)) {
        iVar12 = -1;
        if (*(undefined4 **)(iVar8 + 0xc) != in_ECX) {
          if (*(undefined4 **)(iVar8 + 0xc) == (undefined4 *)0x0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(iVar8);
          }
          *(undefined4 **)(iVar8 + 0xc) = in_ECX;
          if ((*(byte *)(iVar8 + 0x68) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)(iVar8 + 0x69) & 1) == 0) && (iVar12 = in_ECX[0xc], 0 < iVar12)) {
            do {
              if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar12 * 4) + 0x69) & 1) == 0) break;
              iVar12 = iVar12 + -1;
            } while (0 < iVar12);
          }
          FUN_00410380(iVar12,iVar8);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      if ((local_44 < (uint)in_ECX[0x11b]) &&
         (iVar8 = *(int *)(in_ECX[0x119] + local_44 * 4), iVar8 != 0)) {
        iVar12 = -1;
        if (*(undefined4 **)(iVar8 + 0xc) != in_ECX) {
          if (*(undefined4 **)(iVar8 + 0xc) == (undefined4 *)0x0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(iVar8);
          }
          *(undefined4 **)(iVar8 + 0xc) = in_ECX;
          if ((*(byte *)(iVar8 + 0x68) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)(iVar8 + 0x69) & 1) == 0) && (iVar12 = in_ECX[0xc], 0 < iVar12)) {
            do {
              if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar12 * 4) + 0x69) & 1) == 0) break;
              iVar12 = iVar12 + -1;
            } while (0 < iVar12);
          }
          FUN_00410380(iVar12,iVar8);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      local_44 = local_44 + 1;
    } while ((int)local_44 < (int)in_ECX[0x118]);
  }
  (**(code **)(in_ECX[0x11c] + 0x28))(1);
  puVar3 = (undefined4 *)in_ECX[0x11f];
  if (puVar3 != in_ECX) {
    if (puVar3 == (undefined4 *)0x0) {
      if ((*(byte *)(in_ECX + 0x136) & 1) != 0) {
        puVar3 = (undefined4 *)FUN_0068db10();
        *(byte *)(in_ECX + 0x136) = *(byte *)(in_ECX + 0x136) & 0xfe;
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        if (DAT_00c8a67c == 0) {
          local_40 = operator_new(0xd0);
          local_8._0_1_ = 0x27;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = CONCAT31(local_8._1_3_,0xe);
        }
        FUN_00415ff0(in_ECX + 0x11c);
      }
    }
    else {
      piVar9 = (int *)puVar3[10];
      piVar1 = piVar9 + puVar3[0xc];
      for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
        if (in_ECX + 0x11c == (undefined4 *)*piVar9) {
          FUN_006cf0a0((int)piVar9 - puVar3[10] >> 2,1,1);
          goto LAB_00581d2c;
        }
      }
      FUN_006cf0a0(0xffffffff,1,1);
    }
LAB_00581d2c:
    in_ECX[0x11f] = in_ECX;
    if ((*(byte *)(in_ECX + 0x136) & 2) != 0) {
      FUN_006ceba0();
    }
    if ((*(byte *)((int)in_ECX + 0x4d9) & 1) == 0) {
      iVar8 = in_ECX[0xc];
      if (0 < iVar8) {
        do {
          if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar8 * 4) + 0x69) & 1) == 0) break;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
      }
    }
    else {
      iVar8 = -1;
    }
    FUN_00410380(iVar8,in_ECX + 0x11c);
    FUN_006cedf0();
    FUN_006cef00();
  }
  puVar3 = (undefined4 *)in_ECX[0x217];
  if (puVar3 != in_ECX) {
    if (puVar3 == (undefined4 *)0x0) {
      if ((*(byte *)(in_ECX + 0x22e) & 1) != 0) {
        puVar3 = (undefined4 *)FUN_0068db10();
        *(byte *)(in_ECX + 0x22e) = *(byte *)(in_ECX + 0x22e) & 0xfe;
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
        if (DAT_00c8a67c == 0) {
          local_40 = operator_new(0xd0);
          local_8._0_1_ = 0x28;
          DAT_00c8a67c = FUN_006cb960();
          local_8 = CONCAT31(local_8._1_3_,0xe);
        }
        FUN_00415ff0(in_ECX + 0x214);
      }
    }
    else {
      piVar9 = (int *)puVar3[10];
      piVar1 = piVar9 + puVar3[0xc];
      for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
        if (in_ECX + 0x214 == (undefined4 *)*piVar9) {
          FUN_006cf0a0((int)piVar9 - puVar3[10] >> 2,1,1);
          goto LAB_00581e4c;
        }
      }
      FUN_006cf0a0(0xffffffff,1,1);
    }
LAB_00581e4c:
    in_ECX[0x217] = in_ECX;
    if ((*(byte *)(in_ECX + 0x22e) & 2) != 0) {
      FUN_006ceba0();
    }
    if ((*(byte *)((int)in_ECX + 0x8b9) & 1) == 0) {
      iVar8 = in_ECX[0xc];
      if (0 < iVar8) {
        do {
          if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar8 * 4) + 0x69) & 1) == 0) break;
          iVar8 = iVar8 + -1;
        } while (0 < iVar8);
      }
    }
    else {
      iVar8 = -1;
    }
    FUN_00410380(iVar8,in_ECX + 0x214);
    FUN_006cedf0();
    FUN_006cef00();
  }
  puVar3 = (undefined4 *)FUN_00683790(0x504);
  uVar13 = in_ECX[0x1e7];
  in_ECX[0x1e7] = *puVar3;
  *puVar3 = uVar13;
  if (local_40 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_40 + 1;
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*local_40)(1);
    }
  }
  if (DAT_00c8a67c == 0) {
    local_3c = operator_new(0xd0);
    local_8._0_1_ = 0x29;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = CONCAT31(local_8._1_3_,0xe);
  }
  iVar8 = *(int *)(**(int **)(DAT_00c8a67c + 0x54) + 8);
  iVar12 = *(int *)(**(int **)(DAT_00c8a67c + 0x54) + 0xc);
  iVar10 = 0x400;
  if (iVar8 < 0x400) {
    iVar10 = iVar8;
  }
  iVar8 = 800;
  if (iVar12 < 800) {
    iVar8 = iVar12;
  }
  FUN_006e9790(in_ECX[4],in_ECX[5],iVar10,iVar8);
  EnterCriticalSection((LPCRITICAL_SECTION)(local_4c + 4));
  if (in_ECX[0xf8] == 0) {
    in_ECX[0x102] = 3;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xfa));
    *(undefined1 *)(in_ECX + 0x105) = 0;
    if (in_ECX[0xf8] == 0) {
      uVar4 = __beginthreadex((void *)0x0,in_ECX[0x103],FUN_00611a60,in_ECX + 0xf6,0,
                              (uint *)&local_4c);
      in_ECX[0xf8] = uVar4;
      in_ECX[0xf9] = local_4c;
      FUN_00611960();
      SetEvent((HANDLE)in_ECX[0x100]);
    }
LAB_00582061:
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xfa));
  }
  else {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != in_ECX[0xf9]) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xfa));
      if (in_ECX[0xf8] != 0) {
        pvVar6 = (HANDLE)in_ECX[0xf8];
        if (pvVar6 == (HANDLE)0x0) {
          pvVar6 = GetCurrentThread();
        }
        BVar7 = SetThreadPriority(pvVar6,-1);
        if (BVar7 == 0) goto LAB_00582061;
      }
      in_ECX[0x102] = 3;
      goto LAB_00582061;
    }
    pvVar6 = GetCurrentThread();
    SetThreadPriority(pvVar6,-1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xfa));
  FUN_006e5380(1,1);
  local_44 = 1;
  local_3c = (void *)0x0;
  uVar11 = local_44;
  if (0 < (int)in_ECX[0x11b]) {
    uVar11 = 1;
    do {
      local_24[0] = &PTR_vftable_00c7ed44;
      local_8._0_1_ = 0x2a;
      local_1c[0] = uVar11;
      FUN_00637060(&DAT_00c8aa6c,local_24);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      uVar11 = uVar11 + 1;
      local_3c = (void *)((int)local_3c + 1);
    } while ((int)local_3c < (int)in_ECX[0x11b]);
  }
  local_44 = uVar11;
  iVar8 = 0;
  if (0 < (int)in_ECX[0x118]) {
    do {
      local_34[0] = &PTR_vftable_00c7ed44;
      local_8._0_1_ = 0x2b;
      local_2c[0] = local_44;
      FUN_00637060(&DAT_00c8aa6c,local_34);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      (**(code **)(*local_34[0] + 0x54))(local_2c);
      iVar8 = iVar8 + 1;
      local_44 = local_44 + 1;
    } while (iVar8 < (int)in_ECX[0x118]);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  iVar8 = DAT_00c8a668;
  if (in_ECX[0x1f] == 0) {
    in_ECX[0x1e] = 500;
    in_ECX[0x1f] = 500;
    local_8 = CONCAT31(local_8._1_3_,0x2c);
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    iVar8 = DAT_00c8a668;
    iVar12 = *(int *)(DAT_00c8a668 + 0x4c);
    if ((iVar12 == 0) || ((int)in_ECX[0x1e] < *(int *)(iVar12 + 4))) goto LAB_00582293;
    if (*(int *)(iVar12 + 0x10) == 0) {
LAB_00582285:
      in_ECX[0x21] = *(undefined4 *)(iVar12 + 0x10);
      in_ECX[0x20] = iVar12;
      *(undefined4 **)(iVar12 + 0x10) = in_ECX + 0x1d;
    }
    else {
      do {
        iVar10 = *(int *)(iVar12 + 0x10);
        if ((int)in_ECX[0x1e] < *(int *)(iVar10 + 4)) goto LAB_00582285;
        iVar12 = iVar10;
      } while (*(int *)(iVar10 + 0x10) != 0);
      in_ECX[0x21] = *(undefined4 *)(iVar10 + 0x10);
      in_ECX[0x20] = iVar10;
      *(undefined4 **)(iVar10 + 0x10) = in_ECX + 0x1d;
    }
  }
  else {
    if (DAT_00c8a668 == 0) goto LAB_005822af;
    iVar12 = in_ECX[0x21];
    in_ECX[0x1e] = 500;
    in_ECX[0x1f] = 500;
    if (((iVar12 == 0) || (499 < *(int *)(iVar12 + 4))) &&
       ((in_ECX[0x20] == 0 || (*(int *)(in_ECX[0x20] + 4) < 0x1f5)))) goto LAB_005822af;
    if (in_ECX[0x20] == 0) {
      *(int *)(iVar8 + 0x4c) = iVar12;
    }
    else {
      *(int *)(in_ECX[0x20] + 0x10) = iVar12;
      iVar8 = DAT_00c8a668;
    }
    if (in_ECX[0x21] != 0) {
      *(undefined4 *)(in_ECX[0x21] + 0xc) = in_ECX[0x20];
      iVar8 = DAT_00c8a668;
    }
    in_ECX[0x21] = 0;
    in_ECX[0x20] = 0;
    iVar12 = *(int *)(iVar8 + 0x4c);
    if ((iVar12 != 0) && (*(int *)(iVar12 + 4) <= (int)in_ECX[0x1e])) {
      iVar10 = *(int *)(iVar12 + 0x10);
      while ((iVar10 != 0 &&
             (iVar2 = *(int *)(iVar12 + 0x10), *(int *)(iVar2 + 4) <= (int)in_ECX[0x1e]))) {
        iVar10 = *(int *)(iVar2 + 0x10);
        iVar12 = iVar2;
      }
      goto LAB_00582285;
    }
LAB_00582293:
    in_ECX[0x21] = *(undefined4 *)(iVar8 + 0x4c);
    *(undefined4 **)(iVar8 + 0x4c) = in_ECX + 0x1d;
  }
  if (in_ECX[0x21] != 0) {
    *(undefined4 **)(in_ECX[0x21] + 0xc) = in_ECX + 0x1d;
  }
  SetEvent(*(HANDLE *)(iVar8 + 0x2c));
LAB_005822af:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

