// rea decompile_all
// name: FUN_00132544
// address: 0x132544
// body: available
// range: 0x132544-0x1327cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00132544(int *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  undefined2 *puVar12;
  int iVar13;
  short *psVar14;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  
  if (*param_1 < param_2 + param_1[1]) {
    iVar9 = *param_1 + param_2 * 2;
    puVar5 = (undefined4 *)FUN_0016d774(iVar9 * 0x14 + 8,DAT_001327cc);
    if (puVar5 == (undefined4 *)0x0) {
      iVar9 = 0;
      in_r12 = extraout_r12;
    }
    else {
      *puVar5 = 0x14;
      uVar4 = DAT_001327d0;
      puVar5[1] = iVar9;
      iVar9 = FUN_0016dd70(puVar5 + 2,uVar4,0x14,iVar9);
      in_r12 = extraout_r12_00;
    }
    iVar13 = 0;
    if (0 < param_1[1]) {
      do {
        puVar10 = (undefined2 *)(param_1[2] + iVar13 * 0x14);
        puVar12 = (undefined2 *)(iVar9 + iVar13 * 0x14);
        *puVar12 = *puVar10;
        puVar12[1] = puVar10[1];
        puVar12[2] = puVar10[2];
        FUN_0010e820(puVar12 + 4,puVar10 + 4);
        iVar13 = iVar13 + 1;
        puVar12[8] = puVar10[8];
        puVar12[9] = puVar10[9];
        in_r12 = extraout_r12_01;
      } while (iVar13 < param_1[1]);
    }
    if (param_1[2] != 0) {
      thunk_FUN_00003c70(param_1[2],DAT_001327d4);
      in_r12 = extraout_r12_02;
    }
    param_1[2] = iVar9;
    *param_1 = *param_1 + param_2 * 2;
  }
  iVar9 = 0;
  if (param_2 < 1) {
    return;
  }
  do {
    psVar11 = (short *)(param_3 + iVar9 * 0x14);
    uVar7 = param_1[1];
    sVar1 = psVar11[8];
    sVar2 = *psVar11;
    sVar3 = psVar11[1];
    if ((int)uVar7 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 1;
      if (uVar8 != 0) {
        in_r12 = param_1[2];
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          if (((*(short *)(in_r12 + uVar6 * 0x14 + 0x10) == sVar1) &&
              (*(short *)(in_r12 + uVar6 * 0x14) == sVar2)) &&
             (*(short *)(in_r12 + uVar6 * 0x14 + 2) == sVar3)) goto LAB_00132750;
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar8);
      }
    }
    uVar6 = uVar8;
    if ((int)uVar6 < (int)uVar7) {
      iVar13 = param_1[2];
      while( true ) {
        if (((*(short *)(iVar13 + uVar6 * 0x14 + 0x10) == sVar1) &&
            (*(short *)(iVar13 + uVar6 * 0x14) == sVar2)) &&
           (*(short *)(iVar13 + uVar6 * 0x14 + 2) == sVar3)) goto LAB_00132750;
        if (((*(short *)(iVar13 + uVar6 * 0x14 + 0x24) == sVar1) &&
            (*(short *)(iVar13 + uVar6 * 0x14 + 0x14) == sVar2)) &&
           (*(short *)(iVar13 + uVar6 * 0x14 + 0x16) == sVar3)) break;
        uVar6 = uVar6 + 2;
        if ((int)uVar7 <= (int)uVar6) goto LAB_00132758;
      }
      uVar6 = uVar6 + 1;
LAB_00132750:
      if ((int)uVar6 < 0) goto LAB_00132758;
    }
    else {
LAB_00132758:
      param_1[1] = uVar7 + 1;
      uVar6 = uVar7;
    }
    psVar14 = (short *)(param_1[2] + uVar6 * 0x14);
    *psVar14 = *psVar11;
    psVar14[1] = psVar11[1];
    psVar14[2] = psVar11[2];
    FUN_0010e820(psVar14 + 4,psVar11 + 4);
    iVar9 = iVar9 + 1;
    psVar14[8] = psVar11[8];
    psVar14[9] = psVar11[9];
    in_r12 = extraout_r12_03;
    if (param_2 <= iVar9) {
      return;
    }
  } while( true );
}

