// rea decompile_all
// name: FUN_0001eb94
// address: 0x1eb94
// body: available
// range: 0x1eb94-0x1ef5f inclusive
// range: 0x1f0cc-0x1f113 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0001eb94(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  
  iVar15 = param_1 + DAT_0001ef60;
  sVar1 = *(short *)(iVar15 + 2);
  if (sVar1 == 6) {
    uVar3 = 0x214;
  }
  else if (sVar1 == 0x11) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = DAT_0001ef6c;
    if (sVar1 != 0x1a) {
      if (sVar1 == 0x2f) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = (uint)*(ushort *)(iVar15 + 0xc);
      }
    }
  }
  iVar4 = param_1 + DAT_0001ef64;
  iVar5 = param_1 + DAT_0001ef68;
  if (param_3 == (undefined4 *)0x0) {
    uVar6 = FUN_00020a0a(*(int *)(iVar15 + 0x1c),*(int *)(iVar15 + 0x1c) + 0x100);
    param_3 = (undefined4 *)FUN_00021ad0(param_1,0);
    if (param_3 == (undefined4 *)0x0) {
      FUN_00024642(0,s_GetCacheGroup__Failed_to_allocat_0001ef70,*(undefined4 *)(iVar15 + 0x1c));
      goto LAB_0001ed6a;
    }
    iVar7 = param_2 * 4 + param_1;
    *param_3 = *(undefined4 *)(iVar7 + 0x15c);
    uVar13 = *(undefined4 *)(iVar15 + 0x10);
    param_3[2] = 0;
    param_3[1] = uVar13;
    param_3[3] = param_3 + 2;
    param_3[4] = param_3 + 5;
    if (uVar6 < 0x85) {
      iVar8 = param_3[4];
    }
    else {
      iVar8 = FUN_001952a0();
      param_3[4] = iVar8;
    }
    if (iVar8 == 0) {
      FUN_00024642(0,s_GetCacheGroup__Failed_to_allocat_0001efa4,*(undefined4 *)(iVar15 + 0x1c));
      *param_3 = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 **)(param_1 + 0x158) = param_3;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
      goto LAB_0001ed6a;
    }
    uVar6 = FUN_00020a0a(*(int *)(iVar15 + 0x1c),*(int *)(iVar15 + 0x1c) + 0x100);
    if (uVar6 < 0x101) {
      FUN_001952f0(param_3[4],*(undefined4 *)(iVar15 + 0x1c),uVar6);
    }
    else {
      *(undefined1 *)param_3[4] = 0;
    }
    iVar8 = *(int *)(iVar15 + 0x10);
    uVar13 = *(undefined4 *)(iVar15 + 0x1c);
    for (piVar12 = *(int **)(iVar7 + 0x15c); piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
      if ((piVar12[1] == iVar8) && (iVar9 = FUN_0003b48a(piVar12[4],uVar13), iVar9 != 0)) {
        if (piVar12 != (int *)0x0) {
          FUN_00024642(0,s_GetCacheGroup__Already_have_Cach_0001efdc,*(undefined4 *)(iVar15 + 0x1c))
          ;
        }
        break;
      }
    }
    *(undefined4 **)(iVar7 + 0x15c) = param_3;
    iVar8 = *(int *)(iVar15 + 0x10);
    uVar13 = *(undefined4 *)(iVar15 + 0x1c);
    puVar10 = *(undefined4 **)(iVar7 + 0x15c);
    if (puVar10 != (undefined4 *)0x0) {
      do {
        if ((puVar10[1] == iVar8) && (iVar7 = FUN_0003b48a(puVar10[4],uVar13), iVar7 != 0)) break;
        puVar10 = (undefined4 *)*puVar10;
      } while (puVar10 != (undefined4 *)0x0);
      if (puVar10 != param_3) {
        FUN_00024642(0,s_GetCacheGroup__Not_finding_Cache_0001f00c,*(undefined4 *)(iVar15 + 0x1c));
      }
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_0001ed6a;
  }
  puVar10 = (undefined4 *)FUN_00021ad0(param_1,param_3);
  if (puVar10 == (undefined4 *)0x0) {
LAB_0001ed6a:
    iVar15 = param_1;
    FUN_00024642(0,s___No_cache_space__Delivering_non_0001f03e + 2,*(undefined4 *)(iVar5 + 0xc));
    if (*(int *)(param_1 + 0x138) != 0) {
      uVar13 = FUN_000203e4(*(undefined2 *)(*(int *)(param_1 + 0x138) + 0x230));
      FUN_00024642(0,s_NoCacheAnswer_ERROR_m_>CurrentQu_0001f078,*(int *)(param_1 + 0x138) + 0x130,
                   uVar13);
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x130);
    piVar12 = (int *)*(int *)(param_1 + 0x130);
    while (piVar2 = piVar12, piVar2 != (int *)0x0) {
      iVar5 = FUN_00039ee8(iVar4 + 4,piVar2);
      if (iVar5 != 0) {
        FUN_0001ae54(iVar15,iVar4,2);
      }
      piVar12 = (int *)*(int *)(param_1 + 0x138);
      if ((int *)*(int *)(param_1 + 0x138) == piVar2) {
        piVar12 = (int *)*piVar2;
        *(int **)(param_1 + 0x138) = piVar12;
      }
    }
    return (undefined4 *)0x0;
  }
  puVar14 = puVar10 + 0x14;
  puVar10[9] = puVar14;
  if (0x44 < uVar3) {
    puVar11 = (undefined2 *)FUN_001952a0(uVar3 + 4);
    puVar10[9] = puVar11;
    if (puVar11 == (undefined2 *)0x0) {
      *puVar10 = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 **)(param_1 + 0x158) = puVar10;
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
      goto LAB_0001ed6a;
    }
    *(short *)(puVar10 + 4) = (short)uVar3;
    *puVar11 = (short)uVar3;
  }
  puVar16 = (undefined4 *)puVar10[9];
  FUN_000037d0(puVar10,iVar4,0x98);
  puVar10[9] = puVar16;
  puVar10[8] = param_3[4];
  puVar10[0xd] = param_4;
  if ((puVar16 == puVar14) && (0x44 < uVar3)) {
    FUN_00024642(0,_DAT_0001f03c,*(undefined4 *)(iVar5 + 0xc));
  }
  else if (puVar16 == puVar14) {
    if (uVar3 < 0x45) goto LAB_0001edfa;
  }
  else if (uVar3 < 0x45) {
    FUN_00024642(0,DAT_0001f0b8,*(undefined4 *)(iVar5 + 0xc));
    goto LAB_0001edfa;
  }
  FUN_001952f0(puVar10[9],*(undefined4 *)(iVar5 + 0x10),uVar3 + 4);
LAB_0001edfa:
  *puVar10 = 0;
  *(undefined4 **)param_3[3] = puVar10;
  param_3[3] = puVar10;
  for (puVar14 = *(undefined4 **)(param_1 + 0x130);
      (puVar14 != (undefined4 *)0x0 && (*(undefined4 **)(param_1 + 0x134) != puVar14));
      puVar14 = (undefined4 *)*puVar14) {
    iVar15 = FUN_00039ee8(puVar10 + 1,puVar14);
    if (iVar15 != 0) {
      if ((((puVar14[6] != *(int *)(param_1 + 0x110)) &&
           (puVar14[6] = *(int *)(param_1 + 0x110), *(short *)((int)puVar14 + 0x12e) == 0)) &&
          (iVar15 = puVar14[4], 0 < iVar15)) &&
         ((puVar14[0xe] == 0 && (iVar4 = puVar14[7], puVar14[7] = iVar4 + 1U, 9 < iVar4 + 1U)))) {
        iVar4 = *DAT_0001f0bc;
        FUN_0016db4c(iVar4 + 2);
        if ((extraout_r1 * 0x1b < iVar15) && (*(int *)(param_1 + 0xdc) - puVar14[0x2b] < iVar4)) {
          uVar13 = FUN_000203e4(*(undefined2 *)(puVar14 + 0x8c));
          FUN_00024642(0,DAT_0001f0c0,puVar14 + 0x4c,uVar13,puVar14[7],puVar14[4]);
          iVar15 = *DAT_0001f0bc;
          FUN_0016db4c(iVar15 + 2);
          iVar4 = *(int *)(param_1 + 0xdc);
          iVar15 = FUN_0019560c(iVar15 << 2);
          puVar14[3] = (iVar4 - extraout_r1_00) + iVar15;
          FUN_0016db4c(*DAT_0001f0bc + 2);
          puVar14[4] = extraout_r1_01;
          FUN_0003f5f0(param_1,puVar14);
        }
      }
      iVar15 = puVar14[8];
      puVar14[8] = iVar15 + 1U;
      *(undefined1 *)(puVar14 + 0x36) = 0;
      if (0x400 < *(ushort *)(puVar10 + 4)) {
        puVar14[9] = puVar14[9] + 1;
      }
      if ((int)((uint)*(byte *)(puVar10 + 1) << 0x1b) < 0) {
        puVar14[10] = puVar14[10] + 1;
      }
      if (4000 < iVar15 + 1U) {
        iVar15 = *DAT_0001f0c4;
        *DAT_0001f0c4 = iVar15 + 1;
        if (iVar15 < 10) {
          uVar13 = FUN_000203e4(*(undefined2 *)(puVar14 + 0x8c));
          FUN_00024642(0,DAT_0001f0c8,puVar14 + 0x4c,uVar13,puVar14[8]);
        }
        puVar10[3] = 0;
        puVar10[0x11] = 4;
      }
    }
  }
  if (puVar10[0xd] != 0) {
LAB_0001f106:
    FUN_0003f53c(param_1,puVar10);
    return puVar10;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar13 = FUN_000203e4(*(undefined2 *)(*(int *)(param_1 + 0x138) + 0x230));
    FUN_00024642(0,s_CacheRecordAdd_ERROR_m_>CurrentQ_0001f114,*(int *)(param_1 + 0x138) + 0x130,
                 uVar13);
  }
  puVar14 = *(undefined4 **)(param_1 + 0x130);
  do {
    *(undefined4 **)(param_1 + 0x138) = puVar14;
    do {
      puVar16 = puVar14;
      if ((puVar16 == (undefined4 *)0x0) || (puVar16 == *(undefined4 **)(param_1 + 0x134))) {
        *(undefined4 *)(param_1 + 0x138) = 0;
        goto LAB_0001f106;
      }
      iVar15 = FUN_00039ee8(puVar10 + 1,puVar16);
      if (iVar15 != 0) {
        FUN_0001ae54(param_1,puVar10,1);
      }
      puVar14 = *(undefined4 **)(param_1 + 0x138);
    } while (*(undefined4 **)(param_1 + 0x138) != puVar16);
    puVar14 = (undefined4 *)*puVar16;
  } while( true );
}

