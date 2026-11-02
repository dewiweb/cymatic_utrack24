// rea decompile_all
// name: FUN_000926fc
// address: 0x926fc
// body: available
// range: 0x926fc-0x92823 inclusive
// range: 0x928e0-0x9293b inclusive
// range: 0x92ad4-0x92e9f inclusive
// range: 0x92ec4-0x932cb inclusive
// range: 0x932e4-0x934ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x93390 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00092bd8) */
/* WARNING: Removing unreachable block (ram,0x00092f10) */
/* WARNING: Removing unreachable block (ram,0x00093000) */
/* WARNING: Removing unreachable block (ram,0x00093090) */
/* WARNING: Removing unreachable block (ram,0x00093008) */
/* WARNING: Removing unreachable block (ram,0x00093024) */
/* WARNING: Removing unreachable block (ram,0x00092cd4) */
/* WARNING: Removing unreachable block (ram,0x00092d60) */
/* WARNING: Removing unreachable block (ram,0x00092cdc) */
/* WARNING: Removing unreachable block (ram,0x00092cf8) */
/* WARNING: Removing unreachable block (ram,0x0009321c) */
/* WARNING: Removing unreachable block (ram,0x000932c8) */
/* WARNING: Removing unreachable block (ram,0x00092fd8) */
/* WARNING: Removing unreachable block (ram,0x00093308) */
/* WARNING: Removing unreachable block (ram,0x00093394) */
/* WARNING: Removing unreachable block (ram,0x00093310) */
/* WARNING: Removing unreachable block (ram,0x00093328) */
/* WARNING: Removing unreachable block (ram,0x00092ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000926fc(int param_1)

{
  char cVar1;
  code cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  code *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  code *local_f0;
  int local_ec;
  undefined4 local_e8;
  code *local_e4;
  uint local_e0;
  int *local_d0;
  code *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_98 [36];
  char *local_74;
  int *local_6c;
  char *local_68;
  code *pcStack_64;
  undefined4 local_5c;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  int local_50;
  int local_4c;
  int *local_3c;
  int *local_34;
  
  FUN_001d6158(&local_c8,0,0x400);
  iVar5 = _DAT_00092a38;
  local_e4 = entry;
  local_bc = *(undefined4 *)(_DAT_00092a38 + 0xc);
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  FUN_001d41f8(&local_c8,s___ArchwaveAES67_00092a3a + 2,&local_f0,local_b8);
  puVar4 = (undefined4 *)FUN_001d436c(&local_c8,s___ArchwaveAES67_00092a3a + 2);
  puVar4[3] = *(undefined4 *)(iVar5 + 0xc);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  local_6c = (int *)FUN_001d436c(&local_c8,s___ArchwaveAES67_00092a3a + 2);
  local_f0 = (code *)0x1;
  local_ec = 0;
  local_e4 = DAT_00092a4c + 0x2800;
  FUN_001d41f8(local_6c,s_version_00092a50,&local_f0,local_b8);
  FUN_001d41f8(local_6c,s_samplingRates_00092a58,&local_f0,local_b8);
  local_d0 = (int *)FUN_001d436c(local_6c,s_samplingRates_00092a58);
  pcVar3 = DAT_00092a68;
  local_d0[3] = *(int *)(iVar5 + 0x10);
  *local_d0 = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  iVar5 = *(int *)(param_1 + 0x128);
  puVar17 = *(undefined1 **)(iVar5 + 0x128);
  if (*(undefined1 **)(iVar5 + 300) != puVar17) {
    do {
      switch(*puVar17) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar17 = puVar17 + 1;
    } while (*(undefined1 **)(iVar5 + 300) != puVar17);
  }
  local_5c = 0;
  piVar15 = *(int **)(*(int *)(param_1 + 0x128) + 0x144);
  uVar18 = local_5c;
  for (piVar9 = (int *)*piVar15; local_5c = uVar18, piVar9 != piVar15; piVar9 = (int *)*piVar9) {
    cVar1 = *(char *)(piVar9 + 2);
    if (cVar1 == '\0') {
      local_5c = CONCAT31((int3)(uVar18 >> 8),1);
    }
    else if (cVar1 == '\x01') {
LAB_00092ad4:
      local_5c._2_2_ = (undefined2)(uVar18 >> 0x10);
      local_5c._0_2_ = CONCAT11(1,(char)uVar18);
    }
    else if (cVar1 == '\x02') {
      local_5c._0_2_ = (undefined2)uVar18;
      local_5c = (uint)CONCAT12(1,(undefined2)local_5c);
    }
    else if (cVar1 == '\x03') goto LAB_00092ad4;
    uVar18 = local_5c;
  }
  FUN_001d41f8(local_6c,s_resolutions_00092ea0,&local_f0,local_b8);
  local_34 = (int *)FUN_001d436c(local_6c,s_resolutions_00092ea0);
  iVar19 = DAT_00092eac;
  iVar5 = _DAT_00092a38;
  local_34[3] = *(int *)(_DAT_00092a38 + 0x10);
  *local_34 = 0;
  local_34[1] = 0;
  uVar18 = 0;
  local_34[2] = 0;
  do {
    if (auStack_58[uVar18 - 4] != '\0') {
      pcVar10 = *(code **)(iVar19 + uVar18 * 4);
      cVar2 = *pcVar10;
      pcVar11 = pcVar10;
      while (cVar2 != (code)0x0) {
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar11;
      }
      if (pcVar10 == entry) goto LAB_00093390;
      local_e4 = pcVar3;
      pcVar12 = s_displayString_00092a74;
      do {
        local_74 = pcVar12;
        pcVar12 = local_74 + 1;
      } while (*pcVar12 != '\0');
      local_74 = local_74 + -0x92a73;
      local_68 = s_displayString_00092a74;
      local_f0 = pcVar10;
      local_ec = (int)pcVar11 - (int)pcVar10;
      if (*(int *)(iVar5 + 0xc) != 3) goto LAB_00093390;
      puVar4 = (undefined4 *)FUN_001d631c(local_b8,0x200,0,s_displayString_00092a74,0);
      piVar9 = local_34;
      *puVar4 = local_68;
      puVar4[3] = pcVar3;
      puVar4[1] = local_74;
      puVar4[2] = param_1;
      puVar4[7] = local_e4;
      puVar4[4] = local_f0;
      puVar4[5] = local_ec;
      puVar4[6] = local_e8;
      local_f0 = (code *)(uint)*(byte *)(_DAT_00092eb0 + uVar18);
      pcVar11 = DAT_00092a4c + 0x2800;
      pcVar12 = s_index_00092a88;
      do {
        pcVar13 = pcVar12;
        pcVar12 = pcVar13 + 1;
      } while (*pcVar12 != '\0');
      pcStack_64 = pcVar3;
      local_68 = s_index_00092a88;
      local_ec = 0;
      puVar4[0xb] = pcVar3;
      puVar4[8] = s_index_00092a88;
      puVar4[9] = pcVar13 + -0x92a87;
      puVar4[10] = param_1;
      puVar4[0xf] = pcVar11;
      puVar4[0xc] = local_f0;
      puVar4[0xd] = 0;
      puVar4[0xe] = local_e8;
      local_e4 = entry;
      local_d0 = local_34;
      if (local_34[3] != 4) goto LAB_00093390;
      uVar16 = local_34[2];
      if (uVar16 <= (uint)local_34[1]) {
        if (uVar16 == 0) {
          local_e0 = 0x10;
        }
        else {
          local_e0 = uVar16 << 1;
        }
        if (uVar16 < local_e0) {
          iVar6 = FUN_001d6390(local_b8,*local_34,uVar16 << 4,local_e0 << 4);
          *piVar9 = iVar6;
          piVar9[2] = local_e0;
        }
      }
      piVar9 = (int *)(*local_d0 + local_d0[1] * 0x10);
      local_d0[1] = local_d0[1] + 1;
      *piVar9 = (int)puVar4;
      piVar9[1] = 2;
      piVar9[2] = 0x10;
      piVar9[3] = 3;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 3);
  FUN_001d41f8(local_6c,s__audioModes_00092eb3 + 1,&local_f0,local_b8);
  local_3c = (int *)FUN_001d436c(local_6c,s__audioModes_00092eb3 + 1);
  local_3c[3] = *(int *)(iVar5 + 0x10);
  *local_3c = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  iVar6 = FUN_000b9aac();
  local_34 = (int *)(iVar6 + 0x1f8);
  iVar19 = *(int *)(*(int *)(iVar6 + 0x208) + 8);
  if (iVar19 != *(int *)(iVar6 + 0x208)) {
    do {
      pcVar12 = DAT_00092ec0;
      pcVar10 = *(code **)(iVar19 + 0x18);
      cVar2 = *pcVar10;
      pcVar11 = pcVar10;
      while (cVar2 != (code)0x0) {
        pcVar11 = pcVar11 + 1;
        cVar2 = *pcVar11;
      }
      iVar6 = (int)pcVar11 - (int)pcVar10;
      if (pcVar10 == entry) goto LAB_00093390;
      local_e4 = pcVar3;
      pcVar13 = DAT_00092ec0;
      do {
        pcVar13 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
      iVar20 = (int)pcVar13 - (int)DAT_00092ec0;
      local_f0 = pcVar10;
      local_ec = iVar6;
      if ((DAT_00092ec0 == (char *)0x0) || (*(int *)(iVar5 + 0xc) != 3)) goto LAB_00093390;
      puVar4 = (undefined4 *)FUN_001d631c(local_b8,0x200,0,iVar6,0);
      piVar9 = local_3c;
      puVar4[3] = pcVar3;
      puVar4[2] = param_1;
      *puVar4 = pcVar12;
      puVar4[1] = iVar20;
      puVar4[4] = local_f0;
      puVar4[5] = local_ec;
      puVar4[6] = local_e8;
      puVar4[7] = local_e4;
      local_f0 = *(code **)(iVar19 + 0x14);
      local_ec = (int)local_f0 >> 0x1f;
      local_e4 = DAT_00092a4c;
      pcVar11 = local_f0;
      if (-1 < (int)local_f0) {
        pcVar11 = DAT_00092a4c + 0x2800;
      }
      pcVar12 = s_index_000932cc;
      if (-1 < (int)local_f0) {
        local_e4 = pcVar11;
      }
      do {
        pcVar13 = pcVar12;
        pcVar12 = pcVar13 + 1;
      } while (*pcVar12 != '\0');
      puVar4[0xb] = pcVar3;
      puVar4[10] = param_1;
      puVar4[8] = s_index_000932cc;
      puVar4[9] = pcVar13 + -0x932cb;
      puVar4[0xe] = local_e8;
      puVar4[0xf] = local_e4;
      puVar4[0xc] = local_f0;
      puVar4[0xd] = local_ec;
      local_e4 = entry;
      if (local_3c[3] != 4) goto LAB_00093390;
      uVar18 = local_3c[2];
      if (uVar18 <= (uint)local_3c[1]) {
        if (uVar18 == 0) {
          uVar16 = 0x10;
        }
        else {
          uVar16 = uVar18 << 1;
        }
        if (uVar18 < uVar16) {
          iVar6 = FUN_001d6390(local_b8,*local_3c,uVar18 << 4,uVar16 << 4);
          *piVar9 = iVar6;
          piVar9[2] = uVar16;
        }
      }
      puVar14 = (undefined4 *)(*piVar9 + piVar9[1] * 0x10);
      piVar9[1] = piVar9[1] + 1;
      *puVar14 = puVar4;
      puVar14[1] = 2;
      puVar14[2] = 0x10;
      puVar14[3] = 3;
      iVar6 = *(int *)(iVar19 + 0xc);
      if (*(int *)(iVar19 + 0xc) == 0) {
        iVar6 = *(int *)(iVar19 + 4);
        while (iVar20 = iVar6, iVar19 == *(int *)(iVar20 + 0xc)) {
          iVar19 = iVar20;
          iVar6 = *(int *)(iVar20 + 4);
        }
        if (*(int *)(iVar19 + 0xc) != iVar20) {
          iVar19 = iVar20;
        }
      }
      else {
        do {
          iVar19 = iVar6;
          iVar6 = *(int *)(iVar19 + 8);
        } while (*(int *)(iVar19 + 8) != 0);
      }
    } while (iVar19 != local_34[4]);
  }
  FUN_001d41f8(local_6c,s_streamStatus_000932d4,&local_f0,local_b8);
  local_6c = (int *)FUN_001d436c(local_6c,s_streamStatus_000932d4);
  pcVar11 = entry;
  local_6c[3] = *(int *)(iVar5 + 0x10);
  *local_6c = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  while( true ) {
    uVar8 = local_b8;
    iVar19 = *(int *)(iVar5 + 0xc);
    uVar7 = FUN_000bb684((uint)pcVar11 & 0xff);
    FUN_001d42f8(&local_f0,uVar7,uVar8);
    pcVar12 = DAT_00092ec0;
    pcVar13 = DAT_00092ec0;
    do {
      pcVar13 = pcVar13 + 1;
    } while (*pcVar13 != '\0');
    iVar6 = (int)pcVar13 - (int)DAT_00092ec0;
    if ((DAT_00092ec0 == (char *)0x0) || (iVar19 != 3)) break;
    puVar4 = (undefined4 *)FUN_001d631c(local_b8,0x200);
    piVar9 = local_6c;
    puVar4[3] = pcVar3;
    *puVar4 = pcVar12;
    puVar4[1] = iVar6;
    puVar4[2] = param_1;
    pcVar10 = (code *)(puVar4 + 4);
    *(code **)pcVar10 = local_f0;
    puVar4[5] = local_ec;
    puVar4[6] = local_e8;
    puVar4[7] = local_e4;
    local_ec = (int)pcVar11 >> 0x1f;
    if (-1 < (int)pcVar11) {
      pcVar10 = DAT_00092a4c + 0x2800;
    }
    local_e4 = DAT_00092a4c;
    if (-1 < (int)pcVar11) {
      local_e4 = pcVar10;
    }
    pcVar12 = s_index_000932cc;
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    local_cc = pcVar3;
    puVar4[0xb] = pcVar3;
    puVar4[8] = s_index_000932cc;
    puVar4[9] = pcVar13 + -0x932cb;
    puVar4[10] = param_1;
    puVar4[0xe] = local_e8;
    puVar4[0xf] = local_e4;
    puVar4[0xc] = pcVar11;
    puVar4[0xd] = local_ec;
    local_e4 = entry;
    local_f0 = pcVar11;
    if (local_6c[3] != 4) break;
    uVar18 = local_6c[2];
    if (uVar18 <= (uint)local_6c[1]) {
      if (uVar18 == 0) {
        uVar16 = 0x10;
      }
      else {
        uVar16 = uVar18 << 1;
      }
      if (uVar18 < uVar16) {
        iVar19 = FUN_001d6390(local_b8,*local_6c,uVar18 << 4,uVar16 << 4);
        *piVar9 = iVar19;
        piVar9[2] = uVar16;
      }
    }
    puVar14 = (undefined4 *)(*piVar9 + piVar9[1] * 0x10);
    piVar9[1] = piVar9[1] + 1;
    *puVar14 = puVar4;
    puVar14[1] = 2;
    puVar14[2] = 0x10;
    puVar14[3] = 3;
    pcVar11 = pcVar11 + 1;
    if (pcVar11 == DataAbort) {
      FUN_001d62a8(auStack_58,0,0x100);
      iVar5 = FUN_001d6abc(auStack_98,auStack_58,0,0x20);
      *(undefined1 *)(iVar5 + 0x1c) = 0x20;
      *(undefined4 *)(iVar5 + 0x20) = 4;
      FUN_001d7b74(&local_c8,auStack_98);
      iVar19 = (local_4c - local_50) + 0xd3;
      iVar5 = FUN_001a0808(iVar19,1);
      *(int *)(param_1 + 0x170) = iVar5;
      if (iVar5 == 0) {
        FUN_000028a4(DAT_00093504,iVar19);
      }
      else {
        iVar5 = FUN_000028d8(iVar5,DAT_00093500,local_4c - local_50);
        uVar8 = FUN_001d8d38(auStack_58);
        FUN_00003418(*(int *)(param_1 + 0x170) + iVar5,uVar8);
        *(int *)(param_1 + 0x174) = (local_4c - local_50) + iVar5;
      }
      FUN_001523dc(auStack_98);
      FUN_0018a280(local_50);
      FUN_0019f30c(local_54);
      FUN_0015242c(&local_c8);
      return;
    }
  }
LAB_00093390:
                    /* WARNING: Subroutine does not return */
  FUN_000032f8();
}

