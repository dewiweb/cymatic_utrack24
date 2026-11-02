// rea decompile_all
// name: FUN_005a7750
// address: 0x5a7750
// body: available
// range: 0x5a7750-0x5a854f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a7750(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  int in_ECX;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  int *extraout_EDX_01;
  uint uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  bool bVar19;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 *local_98;
  undefined4 *local_8c;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 *local_70;
  uint local_68;
  char local_3f [36];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717a00;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(in_ECX + 0x70) + 0x168) == 0) {
    FUN_005a9f50();
  }
  FUN_00633420();
  FUN_0062ee30();
  FUN_0062eea0(local_84,local_80);
  if (*(int *)(in_ECX + 0x13c) == 0) {
    FUN_006906c0();
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 0x13c) + 0x84);
    EnterCriticalSection(lpCriticalSection);
    if ((0 < *(int *)(in_ECX + 0x14c)) && (FUN_006906c0(), *(int *)(in_ECX + 0x13c) != 0)) {
      FUN_00690c60();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  puVar7 = operator_new(0x50);
  local_8 = 0;
  FUN_0045c990();
  FUN_006dfbd0();
  puVar7[0xe] = in_ECX;
  *puVar7 = SessionSelectorPopup::TVItem::vftable;
  piVar8 = (int *)(local_68 + -8);
  puVar7[0xf] = local_68;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar7[0x10] = local_84;
  puVar7[0x11] = local_80;
  puVar7[0x12] = 0;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  local_8 = 0xffffffff;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_006e0040(puVar7);
  puVar7 = operator_new(0x50);
  FUN_006dfbd0();
  *puVar7 = SessionSelectorPopup::TVItem::vftable;
  puVar7[0xe] = in_ECX;
  puVar7[0xf] = &DAT_00bfe12c;
  puVar7[0x10] = *extraout_EDX;
  puVar7[0x11] = extraout_EDX[1];
  puVar7[0x12] = extraout_EDX;
  *(undefined1 *)(puVar7 + 0x13) = 1;
  piVar8 = (int *)FUN_005a9e90();
  iVar10 = *(int *)(*(int *)(in_ECX + 0x70) + 0x168);
  if (*(int *)(iVar10 + 8) == *piVar8) {
    local_7c = 0;
  }
  else {
    local_7c = FUN_00448730(*(undefined4 *)(iVar10 + 8));
  }
  piVar8 = (int *)(local_68 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  local_70 = puVar7;
  if (local_7c != 0) {
    local_70 = (undefined4 *)0x0;
  }
  FUN_006e0040(puVar7);
  puVar9 = operator_new(0x50);
  local_8 = 1;
  FUN_0045c990();
  FUN_006dfbd0();
  *extraout_EDX_00 = SessionSelectorPopup::TVItem::vftable;
  extraout_EDX_00[0xe] = in_ECX;
  piVar8 = (int *)(local_68 + -8);
  extraout_EDX_00[0xf] = local_68;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  extraout_EDX_00[0x10] = local_84;
  extraout_EDX_00[0x11] = local_80;
  extraout_EDX_00[0x12] = 0;
  *(undefined1 *)(extraout_EDX_00 + 0x13) = 0;
  local_8 = 0xffffffff;
  puVar12 = extraout_EDX_00;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    puVar12 = extraout_EDX_00;
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
      puVar12 = puVar9;
    }
  }
  FUN_006e0040(puVar12);
  puVar9 = operator_new(0x50);
  local_8 = 3;
  iVar10 = FUN_0062edc0();
  if (iVar10 < 0) {
    iVar10 = FUN_006104a0();
    *(undefined1 *)(iVar10 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  FUN_006dfbd0();
  *puVar9 = SessionSelectorPopup::TVItem::vftable;
  puVar9[0xe] = in_ECX;
  puVar9[0xf] = local_68;
  piVar8 = (int *)(local_68 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar9[0x10] = local_84;
  puVar9[0x11] = local_80;
  puVar9[0x12] = 0;
  *(undefined1 *)(puVar9 + 0x13) = 0;
  local_8 = 0xffffffff;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_006e0040(puVar9);
  local_8c = operator_new(0x50);
  local_8 = 5;
  FUN_0062ed60();
  FUN_0062ed20();
  FUN_006dfbd0();
  local_8c[0xe] = in_ECX;
  *local_8c = SessionSelectorPopup::TVItem::vftable;
  iVar10 = *extraout_EDX_01;
  local_8c[0xf] = iVar10;
  piVar8 = (int *)(iVar10 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_8c[0x10] = local_84;
  local_8c[0x11] = local_80;
  local_8c[0x12] = 0;
  *(undefined1 *)(local_8c + 0x13) = 0;
  local_8 = 0xffffffff;
  piVar8 = (int *)(local_a8 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_006e0040(local_8c);
  puVar9 = operator_new(0x50);
  local_8 = 7;
  iVar10 = FUN_0062ecc0();
  if (iVar10 < 0) {
    iVar10 = FUN_006104a0();
    *(undefined1 *)(iVar10 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  FUN_006dfbd0();
  puVar9[0xe] = in_ECX;
  *puVar9 = SessionSelectorPopup::TVItem::vftable;
  puVar9[0xf] = local_80;
  piVar8 = (int *)(local_80 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar9[0x10] = local_84;
  bVar4 = false;
  bVar3 = false;
  bVar1 = false;
  puVar9[0x11] = local_80;
  puVar9[0x12] = 0;
  *(undefined1 *)(puVar9 + 0x13) = 0;
  local_8 = 0xffffffff;
  bVar5 = false;
  bVar6 = false;
  bVar2 = false;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar10 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  FUN_006e0040(puVar9);
  local_68 = 0;
  iVar10 = *(int *)(in_ECX + 0x70);
  if (0 < *(int *)(iVar10 + 0x164)) {
    bVar19 = *(int *)(iVar10 + 0x164) != 0;
    local_98 = puVar9;
    do {
      if (bVar19) {
        puVar18 = *(uint **)(*(int *)(iVar10 + 0x15c) + local_68 * 4);
      }
      else {
        puVar18 = (uint *)0x0;
      }
      iVar10 = FUN_0062edc0();
      iVar11 = FUN_0062edc0();
      puVar12 = local_70;
      if (iVar10 == iVar11) {
        iVar10 = FUN_0062ed60();
        iVar11 = FUN_0062ed60();
        if (iVar10 == iVar11) {
          iVar10 = FUN_0062ecc0();
          iVar11 = FUN_0062ecc0();
          if (iVar10 == iVar11) {
            puVar12 = operator_new(0x50);
            FUN_006dfbd0();
            *puVar12 = SessionSelectorPopup::TVItem::vftable;
            puVar12[0xe] = in_ECX;
            puVar12[0xf] = &DAT_00bfe12c;
            puVar12[0x10] = *puVar18;
            puVar12[0x11] = puVar18[1];
            puVar12[0x12] = puVar18;
            *(undefined1 *)(puVar12 + 0x13) = 0;
            if (local_70 == (undefined4 *)0x0) {
              puVar13 = (uint *)FUN_005a9e90();
              bVar1 = true;
              bVar2 = bVar1;
              if ((*puVar13 != puVar18[2]) &&
                 (iVar10 = FUN_00448730(*puVar13), bVar6 = bVar3, bVar5 = bVar4, iVar10 != 0))
              goto LAB_005a7d66;
              bVar19 = true;
              bVar6 = bVar3;
              bVar5 = bVar4;
            }
            else {
LAB_005a7d66:
              bVar19 = false;
            }
            if (bVar1) {
              bVar1 = false;
              piVar8 = (int *)(local_ac + -8);
              bVar2 = bVar1;
              bVar6 = bVar3;
              bVar5 = bVar4;
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                iVar10 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar10 == 0) {
                  FID_conflict__free(piVar8);
                }
              }
            }
            FUN_006e0040(puVar12);
            if (!bVar19) {
              puVar12 = local_70;
            }
          }
        }
      }
      local_70 = puVar12;
      puVar12 = local_70;
      if ((local_bc <= (int)puVar18[1]) && ((local_bc < (int)puVar18[1] || (local_c0 <= *puVar18))))
      {
        puVar12 = operator_new(0x50);
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[0xd] = puVar12[0xd] & 0xfffffffc;
        puVar12[6] = 0;
        *(byte *)(puVar12 + 0xc) = *(byte *)(puVar12 + 0xc) & 0xc2 | 2;
        puVar12[0xb] = DAT_00c8ab84;
        DAT_00c8ab84 = DAT_00c8ab84 + 1;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        *puVar12 = SessionSelectorPopup::TVItem::vftable;
        puVar12[0xe] = in_ECX;
        puVar12[0xf] = &DAT_00bfe12c;
        puVar12[0x10] = *puVar18;
        puVar12[0x11] = puVar18[1];
        puVar12[0x12] = puVar18;
        *(undefined1 *)(puVar12 + 0x13) = 0;
        if (local_70 == (undefined4 *)0x0) {
          puVar13 = (uint *)FUN_005a9e90();
          bVar3 = true;
          bVar6 = bVar3;
          if ((*puVar13 != puVar18[2]) &&
             (iVar10 = FUN_00448730(*puVar13), bVar2 = bVar1, bVar5 = bVar4, iVar10 != 0))
          goto LAB_005a7eab;
          bVar19 = true;
          bVar2 = bVar1;
          bVar5 = bVar4;
        }
        else {
LAB_005a7eab:
          bVar19 = false;
        }
        if (bVar3) {
          bVar3 = false;
          piVar8 = (int *)(local_b0 + -8);
          bVar2 = bVar1;
          bVar6 = bVar3;
          bVar5 = bVar4;
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar10 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar10 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
        FUN_006e0040(puVar12);
        if (!bVar19) {
          puVar12 = local_70;
        }
      }
      local_70 = puVar12;
      iVar10 = FUN_0062edc0();
      iVar11 = FUN_0062edc0();
      if (iVar11 == iVar10) {
        if (local_8c == (undefined4 *)0x0) goto LAB_005a80f9;
        iVar10 = FUN_0062ed60();
        iVar11 = FUN_0062ed60();
        if (iVar11 != iVar10) goto LAB_005a80f9;
        if (local_98 == (undefined4 *)0x0) goto LAB_005a8218;
        iVar10 = FUN_0062ecc0();
        iVar11 = FUN_0062ecc0();
        if (iVar11 != iVar10) goto LAB_005a8218;
      }
      else {
        puVar12 = operator_new(0x50);
        local_8 = 9;
        uVar14 = FUN_0062edc0();
        local_1b[2] = 0;
        pcVar16 = local_1b + 2;
        if ((int)uVar14 < 0) {
          uVar14 = -uVar14;
          do {
            pcVar17 = pcVar16;
            pcVar16 = pcVar17 + -1;
            uVar15 = uVar14 / 10;
            *pcVar16 = (char)uVar14 + (char)uVar15 * -10 + '0';
            uVar14 = uVar15;
          } while (uVar15 != 0);
          pcVar17[-2] = '-';
        }
        else {
          do {
            pcVar16 = pcVar16 + -1;
            uVar15 = uVar14 / 10;
            *pcVar16 = (char)uVar14 + (char)uVar15 * -10 + '0';
            uVar14 = uVar15;
          } while (uVar15 != 0);
        }
        FUN_004557e0();
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[0xd] = puVar12[0xd] & 0xfffffffc;
        puVar12[6] = 0;
        *(byte *)(puVar12 + 0xc) = *(byte *)(puVar12 + 0xc) & 0xc2 | 2;
        puVar12[0xb] = DAT_00c8ab84;
        DAT_00c8ab84 = DAT_00c8ab84 + 1;
        puVar12[0xe] = in_ECX;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        piVar8 = (int *)(local_b4 + -8);
        puVar12[10] = 0;
        *puVar12 = SessionSelectorPopup::TVItem::vftable;
        puVar12[0xf] = local_b4;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        puVar12[0x10] = local_84;
        puVar12[0x11] = local_80;
        puVar12[0x12] = 0;
        *(undefined1 *)(puVar12 + 0x13) = 0;
        local_8 = 0xffffffff;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_006e0040(puVar12);
        bVar1 = bVar2;
        bVar3 = bVar6;
        bVar4 = bVar5;
LAB_005a80f9:
        bVar2 = bVar1;
        local_8c = operator_new(0x50);
        local_8 = 0xb;
        FUN_0062ed60();
        piVar8 = (int *)FUN_0062ed20();
        local_8c[1] = 0;
        local_8c[2] = 0;
        local_8c[3] = 0;
        local_8c[4] = 0;
        local_8c[5] = 0;
        local_8c[0xd] = local_8c[0xd] & 0xfffffffc;
        local_8c[6] = 0;
        *(byte *)(local_8c + 0xc) = *(byte *)(local_8c + 0xc) & 0xc2 | 2;
        local_8c[0xb] = DAT_00c8ab84;
        DAT_00c8ab84 = DAT_00c8ab84 + 1;
        local_8c[0xe] = in_ECX;
        local_8c[7] = 0;
        local_8c[8] = 0;
        local_8c[9] = 0;
        local_8c[10] = 0;
        *local_8c = SessionSelectorPopup::TVItem::vftable;
        iVar10 = *piVar8;
        local_8c[0xf] = iVar10;
        piVar8 = (int *)(iVar10 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        local_8c[0x10] = local_84;
        local_8c[0x11] = local_80;
        local_8c[0x12] = 0;
        *(undefined1 *)(local_8c + 0x13) = 0;
        local_8 = 0xffffffff;
        piVar8 = (int *)(local_b8 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_006e0040(local_8c);
        bVar6 = bVar3;
        bVar5 = bVar4;
LAB_005a8218:
        bVar4 = bVar5;
        bVar3 = bVar6;
        local_98 = operator_new(0x50);
        local_8 = 0xd;
        uVar14 = FUN_0062ecc0();
        local_3f[2] = 0;
        pcVar16 = local_3f + 2;
        if ((int)uVar14 < 0) {
          uVar14 = -uVar14;
          do {
            pcVar17 = pcVar16;
            pcVar16 = pcVar17 + -1;
            uVar15 = uVar14 / 10;
            *pcVar16 = (char)uVar14 + (char)uVar15 * -10 + '0';
            uVar14 = uVar15;
          } while (uVar15 != 0);
          pcVar17[-2] = '-';
        }
        else {
          do {
            pcVar16 = pcVar16 + -1;
            uVar15 = uVar14 / 10;
            *pcVar16 = (char)uVar14 + (char)uVar15 * -10 + '0';
            uVar14 = uVar15;
          } while (uVar15 != 0);
        }
        FUN_004557e0();
        local_98[1] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[0xd] = local_98[0xd] & 0xfffffffc;
        local_98[6] = 0;
        *(byte *)(local_98 + 0xc) = *(byte *)(local_98 + 0xc) & 0xc2 | 2;
        local_98[0xb] = DAT_00c8ab84;
        DAT_00c8ab84 = DAT_00c8ab84 + 1;
        local_98[0xe] = in_ECX;
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[9] = 0;
        piVar8 = puVar7 + -2;
        local_98[10] = 0;
        *local_98 = SessionSelectorPopup::TVItem::vftable;
        local_98[0xf] = puVar7;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        local_98[0x10] = local_84;
        local_98[0x11] = local_80;
        local_98[0x12] = 0;
        *(undefined1 *)(local_98 + 0x13) = 0;
        local_8 = 0xffffffff;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar8);
          }
        }
        FUN_006e0040(local_98);
        bVar1 = bVar2;
        bVar6 = bVar3;
        bVar5 = bVar4;
      }
      puVar12 = operator_new(0x50);
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[0xd] = puVar12[0xd] & 0xfffffffc;
      puVar12[6] = 0;
      *(byte *)(puVar12 + 0xc) = *(byte *)(puVar12 + 0xc) & 0xc2 | 2;
      puVar12[0xb] = DAT_00c8ab84;
      DAT_00c8ab84 = DAT_00c8ab84 + 1;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      *puVar12 = SessionSelectorPopup::TVItem::vftable;
      puVar12[0xe] = in_ECX;
      puVar12[0xf] = &DAT_00bfe12c;
      puVar12[0x10] = *puVar18;
      puVar12[0x11] = puVar18[1];
      puVar12[0x12] = puVar18;
      *(undefined1 *)(puVar12 + 0x13) = 0;
      if (local_70 == (undefined4 *)0x0) {
        puVar13 = (uint *)FUN_005a9e90();
        bVar4 = true;
        bVar5 = bVar4;
        if ((*puVar13 != puVar18[2]) &&
           (iVar10 = FUN_00448730(*puVar13), bVar2 = bVar1, bVar6 = bVar3, iVar10 != 0))
        goto LAB_005a8473;
        bVar19 = true;
        bVar2 = bVar1;
        bVar6 = bVar3;
      }
      else {
LAB_005a8473:
        bVar19 = false;
      }
      if (bVar4) {
        bVar4 = false;
        piVar8 = puVar9 + -2;
        bVar2 = bVar1;
        bVar6 = bVar3;
        bVar5 = bVar4;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar10 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            FID_conflict__free(piVar8);
          }
        }
      }
      FUN_006e0040(puVar12);
      local_68 = local_68 + 1;
      iVar10 = *(int *)(in_ECX + 0x70);
      if (!bVar19) {
        puVar12 = local_70;
      }
      bVar19 = local_68 < *(uint *)(iVar10 + 0x164);
      local_70 = puVar12;
    } while ((int)local_68 < (int)*(uint *)(iVar10 + 0x164));
  }
  if (local_70 != (undefined4 *)0x0) {
    FUN_006dff00(1,1);
    for (iVar10 = local_70[2]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 8)) {
      uVar14 = *(uint *)(iVar10 + 0x34) & 3;
      if (uVar14 == 0) {
        if ((*(int *)(iVar10 + 4) == 0) || (*(char *)(*(int *)(iVar10 + 4) + 0xac) == '\0')) {
LAB_005a8524:
          FUN_006dffc0();
        }
      }
      else if (uVar14 != 2) goto LAB_005a8524;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

