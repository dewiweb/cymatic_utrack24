// rea decompile_all
// name: FUN_0058f490
// address: 0x58f490
// body: available
// range: 0x58f490-0x58fc14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f490(void)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 uVar6;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  char *extraout_ECX_08;
  char *extraout_ECX_09;
  undefined4 extraout_ECX_10;
  char *extraout_ECX_11;
  char *extraout_ECX_12;
  char *pcVar7;
  uint uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uStack_ec;
  int local_98;
  int *local_94;
  char *local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int *local_7c;
  uint local_78;
  int *local_74;
  undefined1 *local_70;
  float local_6c;
  char *local_68;
  char *local_64;
  uint local_60;
  char local_3e [5];
  undefined1 auStack_39 [30];
  char local_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007142ea;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
  uStack_ec = 0x58f4d0;
  EnterCriticalSection(lpCriticalSection);
  iVar5 = DAT_00c8a5d8;
  FUN_0041aaa0();
  if (*(int *)(iVar5 + 0x44) != 0) {
    uStack_ec = 0x58f4ec;
    FID_conflict__free(*(void **)(iVar5 + 0x40));
    *(undefined4 *)(iVar5 + 0x40) = 0;
    *(undefined4 *)(iVar5 + 0x44) = 0;
  }
  *(undefined4 *)(iVar5 + 0x48) = 0;
  uStack_ec = 0x58f50b;
  LeaveCriticalSection(lpCriticalSection);
  if ((*(int *)(in_ECX + 0x14) != 0) || (*(int *)(in_ECX + 0x20) != 0)) {
    uVar10 = 0;
    uVar6 = extraout_ECX;
    if (0 < *(int *)(in_ECX + 0x14)) {
      bVar11 = *(int *)(in_ECX + 0x14) != 0;
      do {
        if (bVar11) {
          uStack_ec = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar10 * 4);
        }
        else {
          uStack_ec = 0;
        }
        FUN_0062f560();
        uVar10 = uVar10 + 1;
        bVar11 = uVar10 < *(uint *)(in_ECX + 0x14);
        uVar6 = extraout_ECX_00;
      } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x14));
    }
    iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
    while (0 < iVar5) {
      uStack_ec = 0x58f554;
      Sleep(100);
      uVar6 = extraout_ECX_01;
      iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
    }
    uVar10 = 0;
    if (0 < *(int *)(in_ECX + 0x20)) {
      bVar11 = *(int *)(in_ECX + 0x20) != 0;
      do {
        if (bVar11) {
          uStack_ec = *(undefined4 *)(*(int *)(in_ECX + 0x18) + uVar10 * 4);
        }
        else {
          uStack_ec = 0;
        }
        FUN_0062f560();
        uVar10 = uVar10 + 1;
        bVar11 = uVar10 < *(uint *)(in_ECX + 0x20);
        uVar6 = extraout_ECX_02;
      } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x20));
    }
    iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
    while (0 < iVar5) {
      uStack_ec = 0x58f594;
      Sleep(100);
      uVar6 = extraout_ECX_03;
      iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
    }
    if (*(char *)(in_ECX + 0x58) != '\0') {
      uVar10 = 0;
      if (0 < *(int *)(in_ECX + 0x14)) {
        do {
          bVar11 = uVar10 < *(uint *)(in_ECX + 0x14);
          while( true ) {
            if (bVar11) {
              iVar5 = *(int *)(*(int *)(in_ECX + 0xc) + uVar10 * 4);
            }
            else {
              iVar5 = 0;
            }
            if (*(char *)(iVar5 + 0xc4) == '\0') break;
            uVar10 = uVar10 + 1;
            bVar11 = uVar10 < *(uint *)(in_ECX + 0x14);
            if ((int)*(uint *)(in_ECX + 0x14) <= (int)uVar10) goto LAB_0058f5d4;
          }
          uStack_ec = 0x58f5cc;
          Sleep(100);
          uVar6 = extraout_ECX_04;
        } while( true );
      }
LAB_0058f5d4:
      uVar10 = 0;
      if (0 < *(int *)(in_ECX + 0x20)) {
        do {
          bVar11 = uVar10 < *(uint *)(in_ECX + 0x20);
          while( true ) {
            if (bVar11) {
              iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + uVar10 * 4);
            }
            else {
              iVar5 = 0;
            }
            if (*(char *)(iVar5 + 0xc4) == '\0') break;
            uVar10 = uVar10 + 1;
            bVar11 = uVar10 < *(uint *)(in_ECX + 0x20);
            if ((int)*(uint *)(in_ECX + 0x20) <= (int)uVar10) goto LAB_0058f604;
          }
          uStack_ec = 0x58f5fc;
          Sleep(100);
          uVar6 = extraout_ECX_05;
        } while( true );
      }
    }
LAB_0058f604:
    local_78 = 0xffffffff;
    do {
      uVar10 = 0;
      local_60 = 0;
      if (0 < *(int *)(in_ECX + 0x14)) {
        bVar11 = *(int *)(in_ECX + 0x14) != 0;
        do {
          if (bVar11) {
            iVar5 = *(int *)(*(int *)(in_ECX + 0xc) + uVar10 * 4);
          }
          else {
            iVar5 = 0;
          }
          iVar5 = *(int *)(iVar5 + 0xb0);
          if (*(char *)(iVar5 + 0x48) != '\0') {
            uStack_ec = 5000;
            FUN_0062ef90(uVar6);
            uVar6 = extraout_ECX_06;
          }
          local_60 = local_60 + *(int *)(iVar5 + 0x1c);
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < *(uint *)(in_ECX + 0x14);
        } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x14));
      }
      uVar10 = 0;
      if (0 < *(int *)(in_ECX + 0x20)) {
        bVar11 = *(int *)(in_ECX + 0x20) != 0;
        do {
          if (bVar11) {
            iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + uVar10 * 4);
          }
          else {
            iVar5 = 0;
          }
          iVar5 = *(int *)(iVar5 + 0xb0);
          if (*(char *)(iVar5 + 0x48) != '\0') {
            uStack_ec = 5000;
            FUN_0062ef90(uVar6);
            uVar6 = extraout_ECX_07;
          }
          local_60 = local_60 + *(int *)(iVar5 + 0x1c);
          uVar10 = uVar10 + 1;
          bVar11 = uVar10 < *(uint *)(in_ECX + 0x20);
        } while ((int)uVar10 < (int)*(uint *)(in_ECX + 0x20));
      }
      if ((int)local_78 < 0) {
        local_78 = local_60;
      }
      uStack_ec = 0x58f6bd;
      FUN_0045c990();
      local_64 = local_1b + 2;
      local_8 = 0;
      local_1b[2] = 0;
      local_70 = (undefined1 *)&uStack_ec;
      uVar10 = local_60;
      if ((int)local_60 < 0) {
        uVar10 = -local_60;
        do {
          pcVar9 = local_64;
          local_64 = pcVar9 + -1;
          uVar8 = uVar10 / 10;
          *local_64 = (char)uVar10 + (char)uVar8 * -10 + '0';
          uVar10 = uVar8;
        } while (uVar8 != 0);
        local_64 = pcVar9 + -2;
        *local_64 = '-';
      }
      else {
        do {
          local_64 = local_64 + -1;
          uVar8 = uVar10 / 10;
          *local_64 = (char)uVar10 + (char)uVar8 * -10 + '0';
          uVar10 = uVar8;
        } while (uVar8 != 0);
      }
      iVar5 = -(int)local_64;
      pcVar9 = local_1b + iVar5 + 2;
      local_68 = &stack0xffffff18;
      piVar4 = (int *)FUN_004bfe22(((uint)(&uStack_15 + iVar5) & 0xfffffffc) + 0xb);
      piVar4[1] = (uint)(&uStack_15 + iVar5) & 0xfffffffc;
      local_94 = piVar4 + 2;
      *piVar4 = 0;
      local_7c = local_94;
      local_90 = local_64;
      pcVar7 = local_64;
      while ((0 < (int)pcVar9 && (iVar5 = FUN_00443260(), pcVar7 = extraout_ECX_08, iVar5 != 0))) {
        FUN_0044ecc0(iVar5);
        pcVar9 = pcVar9 + -1;
        pcVar7 = extraout_ECX_09;
      }
      *(undefined1 *)local_7c = 0;
      local_8._0_1_ = 1;
      FUN_00637690(&local_94);
      FUN_006377c0(pcVar7);
      FUN_00637730();
      uStack_ec = 0x58f7d3;
      FUN_006377c0();
      uStack_ec = 0;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00590060();
      piVar1 = (int *)(local_98 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58f812;
          FID_conflict__free(piVar1);
        }
      }
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58f83e;
          FID_conflict__free(piVar4);
        }
      }
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_80 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58f874;
          FID_conflict__free(piVar4);
        }
      }
      uStack_ec = 0x58f882;
      Sleep(500);
      pcVar3 = EnterCriticalSection_exref;
      uVar6 = extraout_ECX_10;
    } while (0 < (int)local_60);
    if (*(char *)(in_ECX + 0x108) != '\0') {
      uStack_ec = 0x58f8a4;
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xbc));
      uStack_ec = 0x58f8ab;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xbc));
    }
    cVar2 = *(char *)(in_ECX + 0x58);
    while ((cVar2 == '\0' && (*(char *)(in_ECX + 0x108) != '\0'))) {
      uStack_ec = 0x58f8d6;
      (*pcVar3)();
      uVar10 = *(uint *)(in_ECX + 0xf4);
      uStack_ec = 0x58f8e3;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xbc));
      if ((int)uVar10 < 1) break;
      uStack_ec = 0x58f90b;
      FUN_0045c990();
      local_68 = local_3e + 1;
      local_70 = (undefined1 *)&uStack_ec;
      local_8 = 3;
      local_3e[1] = 0;
      do {
        local_68 = local_68 + -1;
        uVar8 = uVar10 / 10;
        *local_68 = (char)uVar10 + (char)uVar8 * -10 + '0';
        uVar10 = uVar8;
      } while (uVar8 != 0);
      iVar5 = -(int)local_68;
      pcVar9 = local_3e + iVar5 + 1;
      local_64 = &stack0xffffff18;
      piVar4 = (int *)FUN_004bfe22(((uint)(auStack_39 + iVar5) & 0xfffffffc) + 0xb);
      piVar4[1] = (uint)(auStack_39 + iVar5) & 0xfffffffc;
      local_84 = piVar4 + 2;
      *piVar4 = 0;
      local_74 = local_84;
      pcVar7 = local_68;
      while ((0 < (int)pcVar9 && (iVar5 = FUN_00443260(), pcVar7 = extraout_ECX_11, iVar5 != 0))) {
        FUN_0044ecc0(iVar5);
        pcVar9 = pcVar9 + -1;
        pcVar7 = extraout_ECX_12;
      }
      *(undefined1 *)local_84 = 0;
      local_8._0_1_ = 4;
      FUN_00637690(&local_74);
      FUN_006377c0(pcVar7);
      FUN_00637730();
      uStack_ec = 0x58f9e3;
      FUN_006377c0();
      uStack_ec = 0;
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00590060();
      piVar1 = (int *)((int)local_6c + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58fa1f;
          FID_conflict__free(piVar1);
        }
      }
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58fa4b;
          FID_conflict__free(piVar4);
        }
      }
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_88 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          uStack_ec = 0x58fa84;
          FID_conflict__free(piVar4);
        }
      }
      uStack_ec = 0x58fa92;
      Sleep(500);
      cVar2 = *(char *)(in_ECX + 0x58);
      pcVar3 = EnterCriticalSection_exref;
    }
    uStack_ec = 0x58fab6;
    FUN_0045c990();
    local_8 = 6;
    uStack_ec = 0;
    FUN_00590060();
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_8c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        uStack_ec = 0x58fafa;
        FID_conflict__free(piVar4);
      }
    }
    local_74 = (int *)(*(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 0x14));
    if (0 < *(int *)(in_ECX + 0x14)) {
      local_6c = (float)(int)local_74;
      uVar10 = 0;
      do {
        uVar8 = uVar10 + 1;
        uStack_ec = 0x58fb3c;
        (**(code **)(**(int **)(in_ECX + 0x28) + 0x1c))();
        if (uVar10 < *(uint *)(in_ECX + 0x14)) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0xc) + uVar10 * 4);
        }
        else {
          iVar5 = 0;
        }
        if ((*(int *)(iVar5 + 100) == 0) && (*(char *)(*(int *)(iVar5 + 0x10) + 0x58) == '\0')) {
          FUN_00589b50();
        }
        else {
          FUN_00589c10();
        }
        uVar10 = uVar8;
      } while ((int)uVar8 < *(int *)(in_ECX + 0x14));
    }
    uVar10 = 0;
    if (0 < *(int *)(in_ECX + 0x20)) {
      local_6c = (float)(int)local_74;
      do {
        uStack_ec = 0x58fbb3;
        (**(code **)(**(int **)(in_ECX + 0x28) + 0x1c))();
        if (uVar10 < *(uint *)(in_ECX + 0x20)) {
          iVar5 = *(int *)(*(int *)(in_ECX + 0x18) + uVar10 * 4);
        }
        else {
          iVar5 = 0;
        }
        if ((*(int *)(iVar5 + 100) == 0) && (*(char *)(*(int *)(iVar5 + 0x10) + 0x58) == '\0')) {
          FUN_00589b50();
        }
        else {
          FUN_00589c10();
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(in_ECX + 0x20));
    }
    FUN_00589050();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

