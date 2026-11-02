// rea decompile_all
// name: FUN_000c1d54
// address: 0xc1d54
// body: available
// range: 0xc1d54-0xc1ebd inclusive
// range: 0xc1ec0-0xc1fd9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000c1f20) */
/* WARNING: Removing unreachable block (ram,0x000c1f24) */
/* WARNING: Removing unreachable block (ram,0x000c1e2a) */
/* WARNING: Removing unreachable block (ram,0x000c1e2e) */

void FUN_000c1d54(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  piVar2 = param_1 + 2;
  if (param_1[1] == 0) {
    iVar3 = param_1[3];
    if (*piVar2 != iVar3) {
      param_1[3] = iVar3 - (iVar3 - *piVar2 & 0xfffffffcU);
    }
    param_1[5] = *param_1;
    param_1[6] = *param_1;
    return;
  }
  iVar3 = FUN_00003374(*param_1,&DAT_000c1fdc);
  if (iVar3 == 0) {
    pcVar4 = (char *)*param_1;
  }
  else {
    pcVar4 = (char *)(iVar3 + 2);
  }
  param_1[6] = (int)pcVar4;
  cVar1 = *pcVar4;
  while (cVar1 == '/') {
    iVar3 = param_1[6];
    param_1[6] = iVar3 + 1;
    cVar1 = *(char *)(iVar3 + 1);
  }
  iVar3 = param_1[6];
  while (iVar5 = FUN_00003374(iVar3,&DAT_000c1fe0), iVar5 != 0) {
    iVar3 = param_1[2];
    piVar6 = (int *)param_1[3];
    uVar9 = (int)piVar6 - iVar3 >> 2;
    if ((uVar9 == 0) || (piVar13 = (int *)(iVar3 + (uVar9 - 1) * 4), *piVar13 + 1 != iVar5)) {
      if (piVar6 == (int *)param_1[4]) {
        if (uVar9 < (uint)(param_1[4] - iVar3 >> 2)) {
          param_1[3] = (int)(piVar6 + 1);
          if (piVar6 != (int *)0x0) {
            *piVar6 = piVar6[-1];
          }
          *piVar6 = iVar5;
        }
        else {
          uVar10 = (uVar9 >> 1) + uVar9 + (uVar9 >> 3);
          uVar7 = uVar9 + 1;
          if (uVar9 + 1 <= uVar10) {
            uVar7 = uVar10;
          }
          piVar8 = (int *)FUN_0010f82c(uVar7 * 4,0);
          piVar12 = piVar8;
          for (piVar13 = (int *)*piVar2; piVar13 != piVar6; piVar13 = piVar13 + 1) {
            if (piVar12 != (int *)0x0) {
              *piVar12 = *piVar13;
            }
            piVar12 = piVar12 + 1;
          }
          piVar13 = (int *)(((int)piVar6 - *piVar2 & 0xfffffffcU) + (int)piVar8);
          if (piVar13 != (int *)0x0) {
            *piVar13 = iVar5;
          }
          piVar12 = (int *)param_1[3];
          piVar13 = (int *)(((int)piVar6 - *piVar2 & 0xfffffffcU) + (int)piVar8);
          for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
            piVar13 = piVar13 + 1;
            if (piVar13 != (int *)0x0) {
              *piVar13 = *piVar6;
            }
          }
          iVar11 = param_1[3];
          iVar3 = *piVar2;
          FUN_0010fa20(iVar3,param_1[4] - iVar3 >> 2,0);
          *piVar2 = (int)piVar8;
          param_1[3] = (int)(piVar8 + (iVar11 - iVar3 >> 2) + 1);
          param_1[4] = (int)(piVar8 + uVar7);
        }
      }
      else {
        param_1[3] = (int)(piVar6 + 1);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar5;
        }
      }
      iVar3 = iVar5 + 1;
    }
    else {
      *piVar13 = iVar5;
      iVar3 = iVar5 + 1;
    }
  }
  iVar5 = *param_1 + param_1[1];
  if ((iVar3 != iVar5) && ((char)param_1[7] != '\0')) {
    piVar6 = (int *)param_1[3];
    if (piVar6 == (int *)param_1[4]) {
      uVar9 = (int)piVar6 - *piVar2 >> 2;
      if (uVar9 < (uint)(param_1[4] - *piVar2 >> 2)) {
        param_1[3] = (int)(piVar6 + 1);
        if (piVar6 != (int *)0x0) {
          *piVar6 = piVar6[-1];
        }
        *piVar6 = iVar5;
      }
      else {
        uVar10 = (uVar9 >> 1) + uVar9 + (uVar9 >> 3);
        uVar7 = uVar9 + 1;
        if (uVar9 + 1 <= uVar10) {
          uVar7 = uVar10;
        }
        piVar8 = (int *)FUN_0010f82c(uVar7 * 4,0);
        piVar12 = piVar8;
        for (piVar13 = (int *)*piVar2; piVar13 != piVar6; piVar13 = piVar13 + 1) {
          if (piVar12 != (int *)0x0) {
            *piVar12 = *piVar13;
          }
          piVar12 = piVar12 + 1;
        }
        piVar13 = (int *)(((int)piVar6 - *piVar2 & 0xfffffffcU) + (int)piVar8);
        if (piVar13 != (int *)0x0) {
          *piVar13 = iVar5;
        }
        piVar12 = (int *)param_1[3];
        piVar13 = (int *)(((int)piVar6 - *piVar2 & 0xfffffffcU) + (int)piVar8);
        for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
          piVar13 = piVar13 + 1;
          if (piVar13 != (int *)0x0) {
            *piVar13 = *piVar6;
          }
        }
        iVar11 = param_1[3];
        iVar3 = *piVar2;
        FUN_0010fa20(iVar3,param_1[4] - iVar3 >> 2,0);
        *piVar2 = (int)piVar8;
        param_1[3] = (int)(piVar8 + (iVar11 - iVar3 >> 2) + 1);
        param_1[4] = (int)(piVar8 + uVar7);
      }
    }
    else {
      param_1[3] = (int)(piVar6 + 1);
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar5;
      }
    }
    param_1[5] = iVar5;
    return;
  }
  param_1[5] = iVar3;
  return;
}

