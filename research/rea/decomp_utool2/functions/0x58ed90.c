// rea decompile_all
// name: FUN_0058ed90
// address: 0x58ed90
// body: available
// range: 0x58ed90-0x58f489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ed90(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  void **ppvVar19;
  void *local_50;
  int local_4c;
  int local_48;
  void *local_44;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_34;
  char *local_28;
  int local_24;
  undefined1 *local_20;
  uint local_1c;
  char *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071428b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = "";
  local_50 = (void *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  uStack_7 = 0;
  uVar6 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  local_1c = in_ECX;
  if (*(int *)(in_ECX + 0xf8) != 0) {
    local_34 = (double)*(int *)(in_ECX + 0xf8) / 1000.0;
    FUN_006f5730(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    uVar16 = FUN_006f55df();
    uVar18 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_00636d50(uVar16);
    local_8 = 3;
    uVar17 = extraout_ECX;
    uVar7 = FUN_005b5190(extraout_ECX);
    _local_8 = CONCAT31(uStack_7,4);
    uVar10 = extraout_ECX_00;
    FUN_00637690(uVar7);
    FUN_006377c0(uVar10);
    FUN_00637730(uVar17);
    puVar8 = (undefined4 *)FUN_006377c0(uVar18);
    if (local_40 < local_3c + 1) {
      FUN_00409cf0((local_3c + 1) / 2 + local_3c + 9 & 0xfffffff8);
    }
    iVar12 = local_3c + 1;
    puVar2 = (undefined4 *)((int)local_44 + local_3c * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar8;
      *puVar8 = &DAT_00bfe12c;
    }
    piVar11 = (int *)(local_20 + -8);
    local_3c = iVar12;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_24 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    local_8 = 2;
    piVar11 = (int *)(local_28 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    FUN_0045c990(&DAT_00738c09);
    if (local_40 < local_3c + 1) {
      FUN_00409cf0((local_3c + 1) / 2 + local_3c + 9 & 0xfffffff8);
    }
    iVar12 = local_3c + 1;
    puVar8 = (undefined4 *)((int)local_44 + local_3c * 4);
    puVar9 = local_20;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = local_20;
      puVar9 = &DAT_00bfe12c;
    }
    piVar11 = (int *)(puVar9 + -8);
    local_3c = iVar12;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    FUN_0045c990(
                "{#F2}{#FI}Note: Copy to external disk depends directly on the type of external disk unit. A USB Thumb Drive (Flash key) offers very poor performance compared to regular USB Hard Disk.{#F1}"
                );
    if (local_40 < local_3c + 1) {
      FUN_00409cf0((local_3c + 1) / 2 + local_3c + 9 & 0xfffffff8);
    }
    iVar12 = local_3c + 1;
    puVar8 = (undefined4 *)((int)local_44 + local_3c * 4);
    puVar9 = local_20;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = local_20;
      puVar9 = &DAT_00bfe12c;
    }
    piVar11 = (int *)(puVar9 + -8);
    local_3c = iVar12;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    FUN_0045c990(&DAT_00738c0a);
    if (local_40 < local_3c + 1) {
      FUN_00409cf0((local_3c + 1) / 2 + local_3c + 9 & 0xfffffff8);
    }
    iVar12 = local_3c + 1;
    puVar8 = (undefined4 *)((int)local_44 + local_3c * 4);
    puVar9 = local_20;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = local_20;
      puVar9 = &DAT_00bfe12c;
    }
    piVar11 = (int *)(puVar9 + -8);
    local_3c = iVar12;
    uVar6 = uStack_7;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
        uVar6 = uStack_7;
      }
    }
  }
  uStack_7 = uVar6;
  uVar5 = local_1c;
  if (*(char *)(local_1c + 0x58) == '\0') {
    uVar14 = 0;
    local_11 = 0;
    if (0 < *(int *)(local_1c + 0x14)) {
      bVar15 = *(int *)(local_1c + 0x14) != 0;
      do {
        if (bVar15) {
          local_20 = *(undefined1 **)(*(int *)(local_1c + 0xc) + uVar14 * 4);
        }
        else {
          local_20 = (undefined1 *)0x0;
        }
        ppvVar19 = &local_38;
        uVar17 = 0x58f0d7;
        uVar10 = FUN_0041bdd0(ppvVar19);
        FUN_0062f290(uVar10,uVar17,ppvVar19);
        FUN_0040f7f0();
        FID_conflict__free(local_38);
        uVar14 = uVar14 + 1;
        local_11 = local_11 | *(int *)(local_20 + 100) != 0;
        bVar15 = uVar14 < *(uint *)(local_1c + 0x14);
      } while ((int)uVar14 < (int)*(uint *)(local_1c + 0x14));
    }
    local_1c = 0;
    if (0 < *(int *)(uVar5 + 0x20)) {
      bVar15 = *(int *)(uVar5 + 0x20) != 0;
      do {
        if (bVar15) {
          local_20 = *(undefined1 **)(*(int *)(uVar5 + 0x18) + local_1c * 4);
        }
        else {
          local_20 = (undefined1 *)0x0;
        }
        ppvVar19 = &local_38;
        uVar17 = 0x58f134;
        uVar10 = FUN_0041bdd0(ppvVar19);
        FUN_0062f290(uVar10,uVar17,ppvVar19);
        iVar12 = 0;
        if (0 < local_34._4_4_) {
          do {
            piVar11 = (int *)(*(int *)((int)local_38 + iVar12 * 4) + -8);
            if (piVar11 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar11);
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_34._4_4_);
        }
        FID_conflict__free(local_38);
        local_1c = local_1c + 1;
        local_11 = local_11 | *(int *)(local_20 + 100) != 0;
        bVar15 = local_1c < *(uint *)(uVar5 + 0x20);
      } while ((int)local_1c < (int)*(uint *)(uVar5 + 0x20));
    }
    FUN_0045c990("Export operation ");
    piVar11 = (int *)(local_18 + -8);
    local_18 = local_28;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    if (local_11 == 0) {
      pcVar1 = local_18 + 1;
      pcVar13 = local_18;
      do {
        cVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar4 != '\0');
      FUN_00455850(local_18);
      local_18 = local_28;
      builtin_strncpy(local_28 + ((int)pcVar13 - (int)pcVar1),"successfully ",0xe);
    }
    pcVar1 = local_18 + 1;
    pcVar13 = local_18;
    do {
      cVar4 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar4 != '\0');
    FUN_00455850(local_18);
    local_18 = local_28;
    builtin_strncpy(local_28 + ((int)pcVar13 - (int)pcVar1),"finished.",10);
  }
  else {
    FUN_0045c990("Export Failed");
    pcVar1 = local_18;
    local_18 = local_28;
    piVar11 = (int *)(pcVar1 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    FUN_0045c990("Export operation canceled.");
    if (local_4c < local_48 + 1) {
      FUN_00409cf0((local_48 + 1) / 2 + local_48 + 9 & 0xfffffff8);
    }
    iVar12 = local_48 + 1;
    puVar8 = (undefined4 *)((int)local_50 + local_48 * 4);
    puVar9 = local_20;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = local_20;
      puVar9 = &DAT_00bfe12c;
    }
    piVar11 = (int *)(puVar9 + -8);
    local_48 = iVar12;
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar12 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar12 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
  iVar12 = *(int *)(uVar5 + 0x14);
  while (0 < iVar12) {
    iVar12 = *(int *)(uVar5 + 0x14) + -1;
    *(int *)(uVar5 + 0x14) = iVar12;
    puVar8 = *(undefined4 **)(*(int *)(uVar5 + 0xc) + iVar12 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    iVar12 = *(int *)(uVar5 + 0x14);
  }
  if (*(int *)(uVar5 + 0x10) != 0) {
    FID_conflict__free(*(void **)(uVar5 + 0xc));
    *(undefined4 *)(uVar5 + 0xc) = 0;
    *(undefined4 *)(uVar5 + 0x10) = 0;
  }
  *(undefined4 *)(uVar5 + 0x14) = 0;
  iVar12 = *(int *)(uVar5 + 0x20);
  while (0 < iVar12) {
    iVar12 = *(int *)(uVar5 + 0x20) + -1;
    *(int *)(uVar5 + 0x20) = iVar12;
    puVar8 = *(undefined4 **)(*(int *)(uVar5 + 0x18) + iVar12 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    iVar12 = *(int *)(uVar5 + 0x20);
  }
  if (*(int *)(uVar5 + 0x1c) != 0) {
    FID_conflict__free(*(void **)(uVar5 + 0x18));
    *(undefined4 *)(uVar5 + 0x18) = 0;
    *(undefined4 *)(uVar5 + 0x1c) = 0;
  }
  *(undefined4 *)(uVar5 + 0x20) = 0;
  if (*(int **)(uVar5 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(uVar5 + 0x28) + 0x20))(uVar5,&local_18,&local_50,&local_44);
  }
  iVar12 = 0;
  if (0 < local_3c) {
    do {
      piVar11 = (int *)(*(int *)((int)local_44 + iVar12 * 4) + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_3c);
  }
  FID_conflict__free(local_44);
  iVar12 = 0;
  if (0 < local_48) {
    do {
      piVar11 = (int *)(*(int *)((int)local_50 + iVar12 * 4) + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_48);
  }
  FID_conflict__free(local_50);
  piVar11 = (int *)(local_18 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar12 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  ExceptionList = local_10;
  return;
}

