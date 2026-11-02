// rea decompile_all
// name: FUN_000b1e04
// address: 0xb1e04
// body: available
// range: 0xb1e04-0xb213b inclusive
// range: 0x10fa18-0x10fa1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000b1e04(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_30;
  uint auStack_2c [2];
  
  iVar2 = FUN_00003374(*param_1,&DAT_000b213c);
  if (iVar2 == 0) {
    return;
  }
  iVar7 = *param_1;
  uVar9 = iVar2 - iVar7;
  if (uVar9 == 0xffffffff) {
    return;
  }
  if (*(uint *)(iVar7 + -4) < uVar9) {
    return;
  }
  iVar2 = FUN_00003374(iVar7 + uVar9,&DAT_000b2140);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = iVar2 - *param_1;
  if (iVar2 == -1) {
    return;
  }
  iVar7 = FUN_00003374(*param_1,&DAT_000b2144);
  if (iVar7 == 0) {
    return;
  }
  uVar10 = iVar7 - *param_1;
  if (uVar10 == 0xffffffff || uVar10 == 0) {
    return;
  }
  if (uVar10 < uVar9) {
    iVar2 = iVar2 - uVar9;
    uVar8 = iVar2 + 1;
    if (*(uint *)(*param_1 + -4) < uVar9) {
      FUN_0010f7cc(9,&DAT_000b2148,&DAT_000b2148,uVar9);
    }
    iVar7 = *param_1 + uVar9;
    uVar4 = *(int *)(*param_1 + -4) - uVar9;
    if (uVar4 <= uVar8) {
      uVar8 = uVar4;
    }
    if (0xfffffff1 < uVar8) {
      FUN_0010f7cc(8,&DAT_000b2148,&DAT_000b2148,uVar8);
    }
    piVar1 = DAT_000b214c;
    piVar3 = DAT_000b214c;
    if (uVar8 != 0) {
      puVar5 = auStack_2c;
      if (0x80 < uVar8) {
        puVar5 = &uStack_30;
      }
      uStack_30 = uVar8;
      auStack_2c[0] = 0x80;
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        FUN_0010f7cc(8,DAT_000b2150,DAT_000b2150,uVar4);
      }
      if (uVar4 < uVar8) {
        FUN_0010f7cc(8,DAT_000b2150,DAT_000b2150,uVar8);
      }
      piVar3 = DAT_000b2154;
      if (uVar4 != 0) {
        piVar3 = (int *)FUN_0010f82c(uVar4 + 0xe,0);
        if (piVar3 != (int *)0x0) {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
        }
        piVar3[2] = uVar8;
        *piVar3 = 0;
        piVar3[1] = uVar4;
        puVar6 = (undefined1 *)((int)piVar3 + uVar8 + 0xc);
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
      }
      piVar3 = piVar3 + 3;
    }
    if (iVar7 != 0) {
      FUN_00003628(piVar3,iVar7,uVar8);
    }
    uVar8 = iVar2 + 1;
    if (*(uint *)(*param_1 + -4) < uVar9) {
      FUN_0010f7cc(9,&DAT_000b2148,&DAT_000b2148,uVar9);
    }
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    uVar4 = *(int *)(*param_1 + -4) - uVar9;
    uStack_30 = 0;
    if (uVar8 < uVar4) {
      uVar4 = uVar8;
    }
    FUN_001da110(param_1,uVar9,uVar4,auStack_2c);
    if (*(uint *)(*param_1 + -4) < uVar10) {
      FUN_0010f7cc(9,&DAT_000b2148,&DAT_000b2148,uVar10);
    }
    if (-piVar3[-1] - 0xfU < *(uint *)(*param_1 + -4)) {
      FUN_0010f7cc(8,&DAT_000b2148,&DAT_000b2148);
    }
    uStack_30 = piVar3[-1];
    FUN_001da110(param_1,uVar10,0,piVar3);
    if (piVar3 == piVar1) {
      return;
    }
    iVar2 = piVar3[-3];
    if (iVar2 != -1) {
      if (piVar3 + -3 == DAT_000b2154) {
        return;
      }
      piVar3[-3] = iVar2 + -1;
      if (iVar2 != 0) {
        return;
      }
    }
    FUN_0016d758(piVar3 + -3,piVar3[-2] + 0xe,0);
    return;
  }
  return;
}

