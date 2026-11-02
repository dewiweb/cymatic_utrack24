// rea decompile_all
// name: FUN_000b06cc
// address: 0xb06cc
// body: available
// range: 0xb06cc-0xb0947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b06cc(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  piVar5 = *(int **)(param_1 + 0x14c);
  piVar7 = *(int **)(param_1 + 0x150);
  if (piVar7 != piVar5) {
    piVar9 = piVar5;
    do {
      if (*piVar9 == *param_2) {
        FUN_00002898(DAT_000b0948,*param_2);
        return 0;
      }
      piVar9 = piVar9 + 8;
    } while (piVar7 != piVar9);
  }
  piVar9 = (int *)(param_1 + 0x14c);
  if (piVar7 == *(int **)(param_1 + 0x154)) {
    uVar1 = (int)piVar7 - (int)piVar5 >> 5;
    if (uVar1 < (uint)((int)*(int **)(param_1 + 0x154) - (int)piVar5 >> 5)) {
      *(int **)(param_1 + 0x150) = piVar7 + 8;
      if (piVar7 != (int *)0x0) {
        *piVar7 = piVar7[-8];
        piVar7[1] = piVar7[-7];
        piVar7[2] = piVar7[-6];
        piVar7[3] = piVar7[-5];
        piVar7[4] = piVar7[-4];
        piVar7[5] = piVar7[-3];
        piVar7[6] = piVar7[-2];
        piVar7[7] = piVar7[-1];
      }
      piVar5 = piVar7 + -8;
      iVar6 = (int)piVar5 - (int)piVar7 >> 5;
      iVar8 = 1;
      if (1 < iVar6 + 1) {
        piVar9 = piVar7;
        do {
          piVar9 = piVar9 + -8;
          piVar5 = piVar5 + -8;
          FUN_00003b88(piVar9,piVar5,0x1d);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6 + 1);
      }
      FUN_00003b88(piVar7,param_2,0x1d);
    }
    else {
      uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar10 < uVar1 + 1) {
        uVar10 = uVar1 + 1;
      }
      piVar2 = (int *)FUN_00173860(uVar10 << 5,0);
      piVar4 = piVar2;
      for (piVar5 = (int *)*piVar9; piVar5 != piVar7; piVar5 = piVar5 + 8) {
        if (piVar4 != (int *)0x0) {
          iVar6 = piVar5[1];
          iVar8 = piVar5[2];
          iVar11 = piVar5[3];
          *piVar4 = *piVar5;
          piVar4[1] = iVar6;
          piVar4[2] = iVar8;
          piVar4[3] = iVar11;
          iVar6 = piVar5[5];
          iVar8 = piVar5[6];
          iVar11 = piVar5[7];
          piVar4[4] = piVar5[4];
          piVar4[5] = iVar6;
          piVar4[6] = iVar8;
          piVar4[7] = iVar11;
        }
        piVar4 = piVar4 + 8;
      }
      piVar5 = (int *)(((int)piVar7 - *piVar9 & 0xffffffe0U) + (int)piVar2);
      if (piVar5 != (int *)0x0) {
        iVar6 = param_2[1];
        iVar8 = param_2[2];
        iVar11 = param_2[3];
        *piVar5 = *param_2;
        piVar5[1] = iVar6;
        piVar5[2] = iVar8;
        piVar5[3] = iVar11;
        iVar6 = param_2[5];
        iVar8 = param_2[6];
        iVar11 = param_2[7];
        piVar5[4] = param_2[4];
        piVar5[5] = iVar6;
        piVar5[6] = iVar8;
        piVar5[7] = iVar11;
      }
      piVar4 = *(int **)(param_1 + 0x150);
      piVar5 = (int *)(((int)piVar7 - *piVar9 & 0xffffffe0U) + (int)piVar2);
      for (; piVar7 != piVar4; piVar7 = piVar7 + 8) {
        piVar3 = piVar5 + 8;
        if (piVar3 != (int *)0x0) {
          iVar6 = piVar7[1];
          iVar8 = piVar7[2];
          iVar11 = piVar7[3];
          *piVar3 = *piVar7;
          piVar5[9] = iVar6;
          piVar5[10] = iVar8;
          piVar5[0xb] = iVar11;
          iVar6 = piVar7[5];
          iVar8 = piVar7[6];
          iVar11 = piVar7[7];
          piVar5[0xc] = piVar7[4];
          piVar5[0xd] = iVar6;
          piVar5[0xe] = iVar8;
          piVar5[0xf] = iVar11;
        }
        piVar5 = piVar3;
      }
      iVar8 = *piVar9;
      iVar11 = *(int *)(param_1 + 0x150);
      for (iVar6 = iVar8; iVar6 != iVar11; iVar6 = iVar6 + 0x20) {
      }
      FUN_00173a54(iVar8,*(int *)(param_1 + 0x154) - iVar8 >> 5,0);
      *(int **)(param_1 + 0x154) = piVar2 + uVar10 * 8;
      *(int **)(param_1 + 0x150) = piVar2 + (iVar11 - iVar8 >> 5) * 8 + 8;
      *piVar9 = (int)piVar2;
    }
  }
  else {
    *(int **)(param_1 + 0x150) = piVar7 + 8;
    if (piVar7 != (int *)0x0) {
      iVar6 = param_2[1];
      iVar8 = param_2[2];
      iVar11 = param_2[3];
      *piVar7 = *param_2;
      piVar7[1] = iVar6;
      piVar7[2] = iVar8;
      piVar7[3] = iVar11;
      iVar8 = param_2[4];
      iVar11 = param_2[5];
      iVar6 = param_2[7];
      piVar7[6] = param_2[6];
      piVar7[7] = iVar6;
      piVar7[4] = iVar8;
      piVar7[5] = iVar11;
    }
  }
  return 1;
}

