// rea decompile_all
// name: FUN_0019ed48
// address: 0x19ed48
// body: available
// range: 0x19ed48-0x19f1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19f1e0 to 0x19f30c FUN_0019f30c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019ed48(undefined4 param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  piVar13 = (int *)param_3[4];
  piVar3 = (int *)*piVar13;
  while (piVar8 = piVar3, puVar1 = DAT_0019f1e4, piVar8 != piVar13) {
    piVar3 = (int *)param_3[4];
    if (piVar8 != (int *)param_3[4]) {
      piVar3 = (int *)*piVar8;
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      param_3[5] = param_3[5] + -1;
      *piVar8 = param_3[1];
      param_3[1] = (int)piVar8;
    }
  }
  uVar14 = 0;
  uVar2 = *DAT_0019f1e4;
  do {
    uVar2 = *(uint *)(uVar2 + 0x94);
    uVar14 = uVar14 + 1;
  } while (uVar2 != *DAT_0019f1e4);
  piVar3 = (int *)FUN_001a0808(uVar14 * 8,1);
  uVar16 = 0;
  uVar4 = thunk_EXT_FUN_0040001c();
  iVar5 = FUN_001b7168();
  iVar6 = *DAT_0019f1e8;
  uVar2 = *puVar1;
  do {
    piVar3[uVar16] = *(int *)(uVar2 + 0x2c);
    uVar9 = *puVar1;
    uVar16 = uVar16 + 1;
    uVar2 = *(uint *)(uVar2 + 0x94);
    bVar18 = uVar9 <= uVar2;
    if (uVar2 != uVar9) {
      bVar18 = uVar16 <= uVar14;
    }
  } while (bVar18 && (uVar2 != uVar9 && uVar14 != uVar16));
  thunk_EXT_FUN_00400034(uVar4);
  FUN_0017b9f8(param_1);
  piVar13 = piVar3 + uVar14;
  uVar9 = 0;
  uVar4 = thunk_EXT_FUN_0040001c();
  iVar7 = FUN_001b7168();
  uVar2 = *puVar1;
  iVar10 = *DAT_0019f1e8;
  do {
    piVar13[uVar9] = *(int *)(uVar2 + 0x2c);
    uVar11 = *puVar1;
    uVar9 = uVar9 + 1;
    uVar2 = *(uint *)(uVar2 + 0x94);
    bVar18 = uVar11 <= uVar2;
    if (uVar2 != uVar11) {
      bVar18 = uVar9 <= uVar14;
    }
  } while (bVar18 && (uVar2 != uVar11 && uVar14 != uVar9));
  thunk_EXT_FUN_00400034(uVar4);
  if (uVar14 == uVar16 && uVar14 == uVar9) {
    uVar2 = iVar7 - iVar5;
    iVar5 = 0;
    if (uVar14 != 0) {
      piVar8 = piVar13 + -1;
      piVar12 = piVar3 + -1;
      if ((uVar14 & 1) != 0) {
        iVar5 = *piVar13 - *piVar3;
        *piVar3 = iVar5;
        piVar8 = piVar13;
        piVar12 = piVar3;
      }
      iVar7 = 0;
      for (uVar14 = uVar14 >> 1; uVar14 != 0; uVar14 = uVar14 - 1) {
        iVar15 = piVar8[1];
        iVar17 = piVar12[1];
        piVar12[1] = iVar15 - iVar17;
        piVar13 = piVar12 + 2;
        piVar8 = piVar8 + 2;
        iVar5 = iVar5 + (iVar15 - iVar17);
        iVar7 = iVar7 + (*piVar8 - *piVar13);
        piVar12 = piVar12 + 2;
        *piVar12 = *piVar8 - *piVar13;
      }
      iVar5 = iVar5 + iVar7;
    }
    uVar14 = (iVar10 - iVar6) + iVar5;
    if (uVar2 < uVar14) {
      uVar14 = uVar2;
    }
    *param_2 = uVar2;
    iVar5 = *(int *)param_3[4];
    piVar13 = (int *)param_3[1];
    if (piVar13 == (int *)0x0) {
      if (param_3[2] == param_3[3]) {
        uVar16 = 1;
        if (*param_3 != 0) {
          uVar9 = *(uint *)(*param_3 + 4);
          uVar16 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar16 < uVar9 + 1) {
            uVar16 = uVar9 + 1;
          }
        }
        piVar13 = (int *)FUN_0010f82c(0xc,0);
        iVar7 = FUN_0010f82c(uVar16 << 4,0);
        piVar13[2] = iVar7;
        *piVar13 = *param_3;
        piVar13[1] = uVar16;
        *param_3 = (int)piVar13;
        iVar7 = piVar13[2];
        param_3[2] = iVar7;
        param_3[3] = iVar7 + uVar16 * 0x10;
      }
      piVar13 = (int *)param_3[2];
      param_3[2] = (int)(piVar13 + 4);
    }
    else {
      param_3[1] = *piVar13;
    }
    if (piVar13 + 2 != (int *)0x0) {
      piVar13[2] = (int)s_irq_time_0019f1ec;
      piVar13[3] = iVar10 - iVar6;
    }
    *piVar13 = iVar5;
    piVar13[1] = *(int *)(iVar5 + 4);
    **(undefined4 **)(iVar5 + 4) = piVar13;
    *(int **)(iVar5 + 4) = piVar13;
    param_3[5] = param_3[5] + 1;
    iVar5 = *(int *)param_3[4];
    piVar13 = (int *)param_3[1];
    if (piVar13 == (int *)0x0) {
      if (param_3[2] == param_3[3]) {
        uVar16 = 1;
        if (*param_3 != 0) {
          uVar9 = *(uint *)(*param_3 + 4);
          uVar16 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar16 < uVar9 + 1) {
            uVar16 = uVar9 + 1;
          }
        }
        piVar13 = (int *)FUN_0010f82c(0xc,0);
        iVar6 = FUN_0010f82c(uVar16 << 4,0);
        piVar13[2] = iVar6;
        *piVar13 = *param_3;
        piVar13[1] = uVar16;
        *param_3 = (int)piVar13;
        iVar6 = piVar13[2];
        param_3[2] = iVar6;
        param_3[3] = iVar6 + uVar16 * 0x10;
      }
      piVar13 = (int *)param_3[2];
      param_3[2] = (int)(piVar13 + 4);
    }
    else {
      param_3[1] = *piVar13;
    }
    if (piVar13 + 2 != (int *)0x0) {
      piVar13[2] = (int)s_idle_time_0019f1f8;
      piVar13[3] = uVar2 - uVar14;
    }
    *piVar13 = iVar5;
    iVar6 = 0;
    piVar13[1] = *(int *)(iVar5 + 4);
    **(undefined4 **)(iVar5 + 4) = piVar13;
    *(int **)(iVar5 + 4) = piVar13;
    iVar5 = param_3[5] + 1;
    param_3[5] = iVar5;
    uVar14 = *puVar1;
    do {
      piVar13 = (int *)param_3[1];
      iVar7 = piVar3[iVar6];
      if (piVar13 != (int *)0x0) {
        iVar5 = *piVar13;
      }
      iVar15 = *(int *)(uVar14 + 0x34);
      iVar10 = param_3[4];
      iVar6 = iVar6 + 1;
      if (piVar13 != (int *)0x0) {
        param_3[1] = iVar5;
      }
      else {
        if (param_3[2] == param_3[3]) {
          uVar2 = 1;
          if (*param_3 != 0) {
            uVar16 = *(uint *)(*param_3 + 4);
            uVar2 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
            if (uVar2 < uVar16 + 1) {
              uVar2 = uVar16 + 1;
            }
          }
          piVar13 = (int *)FUN_0010f82c(0xc,0);
          iVar5 = FUN_0010f82c(uVar2 << 4,0);
          piVar13[2] = iVar5;
          *piVar13 = *param_3;
          piVar13[1] = uVar2;
          *param_3 = (int)piVar13;
          iVar5 = piVar13[2];
          param_3[2] = iVar5;
          param_3[3] = iVar5 + uVar2 * 0x10;
        }
        piVar13 = (int *)param_3[2];
        param_3[2] = (int)(piVar13 + 4);
      }
      if (piVar13 + 2 != (int *)0x0) {
        piVar13[2] = iVar15;
        piVar13[3] = iVar7;
      }
      *piVar13 = iVar10;
      piVar13[1] = *(int *)(iVar10 + 4);
      **(undefined4 **)(iVar10 + 4) = piVar13;
      *(int **)(iVar10 + 4) = piVar13;
      puVar1 = DAT_0019f1e4;
      iVar5 = param_3[5] + 1;
      param_3[5] = iVar5;
      uVar14 = *(uint *)(uVar14 + 0x94);
    } while (uVar14 != *puVar1);
  }
  else {
    *param_2 = 0;
  }
  FUN_0019f30c(piVar3);
  return;
}

