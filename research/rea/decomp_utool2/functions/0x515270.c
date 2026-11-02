// rea decompile_all
// name: FUN_00515270
// address: 0x515270
// body: available
// range: 0x515270-0x515657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515270(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 **ppuStack_78;
  char **ppcStack_74;
  undefined **local_70;
  int local_58;
  undefined1 *local_50;
  uint local_4c;
  int local_48;
  undefined *local_44;
  char *local_40;
  char *local_3c [8];
  char local_1a [6];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070924a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = (char *)0x0;
  local_4c = 0;
  local_50 = &DAT_00bfe12c;
  local_8 = 0;
  puVar11 = &DAT_00bfe12c;
  do {
    puVar3 = local_44;
    puVar12 = PTR_DAT_00c7ed68;
    if ((int)local_4c < 1) {
      local_44 = PTR_DAT_00c7ed68;
      piVar7 = (int *)(PTR_DAT_00c7ed68 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      local_8 = 2;
      pcVar9 = (char *)((uint)local_40 | 2);
    }
    else {
      local_1a[1] = 0;
      local_3c[0] = local_1a + 1;
      uVar10 = local_4c;
      do {
        local_3c[0] = local_3c[0] + -1;
        uVar8 = uVar10 / 10;
        *local_3c[0] = (char)uVar10 + (char)uVar8 * -10 + '0';
        uVar10 = uVar8;
      } while (uVar8 != 0);
      local_70 = (undefined **)0x5152fd;
      FUN_004557e0();
      local_8 = CONCAT31(local_8._1_3_,1);
      pcVar9 = (char *)((uint)local_40 | 1);
      puVar12 = puVar3;
    }
    local_70 = (undefined **)0x515346;
    local_40 = pcVar9;
    local_3c[0] = pcVar9;
    puVar5 = (undefined4 *)FUN_00637690();
    puVar2 = (undefined1 *)*puVar5;
    *puVar5 = puVar11;
    piVar7 = (int *)(local_58 + -8);
    local_50 = puVar2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_70 = (undefined **)0x515370;
        FID_conflict__free(piVar7);
      }
    }
    if (((uint)pcVar9 & 2) != 0) {
      pcVar9 = (char *)((uint)pcVar9 & 0xfffffffd);
      piVar7 = (int *)(puVar12 + -8);
      local_40 = pcVar9;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x51539c;
          FID_conflict__free(piVar7);
        }
      }
    }
    local_8 = 0;
    if (((uint)pcVar9 & 1) != 0) {
      local_40 = (char *)((uint)pcVar9 & 0xfffffffe);
      piVar7 = (int *)(local_48 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x5153d2;
          FID_conflict__free(piVar7);
        }
      }
    }
    uVar10 = 0;
    if (*(int *)(in_ECX + 0x370) < 1) {
LAB_00515429:
      local_70 = (undefined **)0x51543a;
      FUN_0045c990();
      local_8._0_1_ = 3;
      local_70 = (undefined **)0x51544e;
      FUN_0045c990();
      local_8._0_1_ = 4;
      local_70 = (undefined **)0x515462;
      FUN_0045c990();
      local_8._0_1_ = 5;
      local_70 = (undefined **)0x515476;
      FUN_0045c990();
      local_70 = &local_44;
      local_8 = CONCAT31(local_8._1_3_,6);
      ppcStack_74 = local_3c;
      ppuStack_78 = &local_50;
      cVar4 = FUN_004ecfc0();
      piVar7 = (int *)(local_4c - 8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x5154b8;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_48 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x5154db;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_3c[0] + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x5154fe;
          FID_conflict__free(piVar7);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x515525;
          FID_conflict__free(piVar7);
        }
      }
      if (cVar4 != '\0') {
        local_70 = (undefined **)0x51553f;
        FUN_00513170();
        ppuStack_78 = (undefined1 **)(*(int *)(in_ECX + 0x370) + -1);
        local_70 = (undefined **)0x1;
        ppcStack_74 = (char **)0x0;
        FUN_00699dd0();
        *(int *)(in_ECX + 0x35c) = *(int *)(in_ECX + 0x370) + -1;
        local_70 = (undefined **)0x515598;
        FUN_00513510();
        if (*(uint *)(in_ECX + 0x35c) < *(uint *)(in_ECX + 0x370)) {
          iVar6 = *(int *)(*(int *)(in_ECX + 0x368) + *(uint *)(in_ECX + 0x35c) * 4);
        }
        else {
          iVar6 = 0;
        }
        piVar7 = (int *)(*(int *)(iVar6 + 4) + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        LOCK();
        iVar1 = *(int *)(in_ECX + 0x250);
        *(int *)(in_ECX + 0x250) = *(int *)(iVar6 + 4);
        UNLOCK();
        piVar7 = (int *)(iVar1 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            local_70 = (undefined **)0x5155f1;
            FID_conflict__free(piVar7);
          }
        }
        *(undefined4 *)(in_ECX + 0x254) = 0x21;
        (**(code **)(*(int *)(in_ECX + 0x150) + 0x84))();
        FUN_006e6400(&ppuStack_78);
        FUN_006ce9f0(1);
      }
      piVar7 = (int *)(local_50 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_70 = (undefined **)0x515639;
          FID_conflict__free(piVar7);
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    bVar13 = *(int *)(in_ECX + 0x370) != 0;
    while( true ) {
      if (bVar13) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x368) + uVar10 * 4);
      }
      else {
        iVar6 = 0;
      }
      if (*(undefined1 **)(iVar6 + 4) == puVar2) break;
      local_70 = *(undefined ***)(iVar6 + 4);
      ppcStack_74 = (char **)0x515412;
      iVar6 = FUN_0045c1e0();
      if (iVar6 == 0) break;
      uVar10 = uVar10 + 1;
      bVar13 = uVar10 < *(uint *)(in_ECX + 0x370);
      if ((int)*(uint *)(in_ECX + 0x370) <= (int)uVar10) goto LAB_00515429;
    }
    local_4c = local_4c + 1;
    puVar11 = puVar2;
  } while( true );
}

