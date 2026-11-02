// rea decompile_all
// name: FUN_001a89d4
// address: 0x1a89d4
// body: available
// range: 0x1a89d4-0x1a8c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001a89d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  
  *param_1 = DAT_001a8c3c;
  puVar3 = (undefined4 *)FUN_000b1210(param_1 + 1);
  puVar10 = puVar3 + -1;
  *puVar3 = DAT_001a8c40;
  puVar3[4] = 0;
  FUN_001f0168(puVar3 + 3,param_3);
  *(undefined1 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = param_3;
  puVar3[0xe] = param_2;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  piVar2 = DAT_001a8c44;
  puVar3 = (undefined4 *)DAT_001a8c44[1];
  if (puVar3 == (undefined4 *)DAT_001a8c44[2]) {
    uVar1 = (int)puVar3 - *DAT_001a8c44 >> 3;
    if (uVar1 < (uint)(DAT_001a8c44[2] - *DAT_001a8c44 >> 3)) {
      DAT_001a8c44[1] = (int)(puVar3 + 2);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar3[-2];
        puVar3[1] = puVar3[-1];
      }
      puVar7 = puVar3 + -2;
      iVar9 = (int)puVar7 - (int)puVar3;
      if (0 < iVar9 >> 3) {
        puVar8 = puVar3;
        if (iVar9 * 0x10000000 < 0) {
          puVar7 = puVar3 + -4;
          puVar8 = puVar3 + -2;
          *puVar8 = *puVar7;
          puVar3[-1] = puVar3[-3];
        }
        for (iVar9 = iVar9 >> 4; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar12 = puVar7[-1];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = uVar12;
          uVar12 = puVar7[-3];
          puVar8[-4] = puVar7[-4];
          puVar8[-3] = uVar12;
          puVar8 = puVar8 + -4;
          puVar7 = puVar7 + -4;
        }
      }
      puVar3[1] = puVar10;
      *puVar3 = param_2;
    }
    else {
      uVar11 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar11 < uVar1 + 1) {
        uVar11 = uVar1 + 1;
      }
      puVar4 = (undefined4 *)FUN_00173860(uVar11 << 3,0);
      puVar8 = puVar4;
      for (puVar7 = (undefined4 *)*piVar2; puVar7 != puVar3; puVar7 = puVar7 + 2) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar12 = puVar7[1];
          *puVar8 = *puVar7;
          puVar8[1] = uVar12;
        }
        puVar8 = puVar8 + 2;
      }
      puVar7 = (undefined4 *)(((int)puVar3 - *piVar2 & 0xfffffff8U) + (int)puVar4);
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[1] = puVar10;
        *puVar7 = param_2;
      }
      puVar8 = (undefined4 *)piVar2[1];
      puVar7 = (undefined4 *)(((int)puVar3 - *piVar2 & 0xfffffff8U) + (int)puVar4);
      for (; puVar3 != puVar8; puVar3 = puVar3 + 2) {
        puVar5 = puVar7 + 2;
        if (puVar5 != (undefined4 *)0x0) {
          uVar12 = puVar3[1];
          *puVar5 = *puVar3;
          puVar7[3] = uVar12;
        }
        puVar7 = puVar5;
      }
      iVar9 = *piVar2;
      iVar6 = piVar2[1];
      FUN_00173a54(iVar9,piVar2[2] - iVar9 >> 3,0);
      piVar2[2] = (int)(puVar4 + uVar11 * 2);
      piVar2[1] = (int)(puVar4 + (iVar6 - iVar9 >> 3) * 2 + 2);
      *piVar2 = (int)puVar4;
    }
  }
  else {
    DAT_001a8c44[1] = (int)(puVar3 + 2);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = puVar10;
      *puVar3 = param_2;
    }
  }
  if (((*DAT_001a8c48 & 1) == 0) &&
     (iVar6 = FUN_001c7162(DAT_001a8c48), iVar9 = DAT_001a8c50, puVar3 = DAT_001a8c4c, iVar6 != 0))
  {
    iVar6 = DAT_001a8c50 + -0x18;
    iVar13 = DAT_001a8c50 + -0x60;
    DAT_001a8c4c[1] = DAT_001a8c50;
    puVar3[2] = iVar6;
    puVar3[3] = iVar13;
    *puVar3 = DAT_001a8c54;
    puVar3[4] = 0;
    FUN_001a7b9c(puVar3,iVar9 + -100);
    FUN_001c70ac(puVar3,DAT_001a8c5c,DAT_001a8c58);
  }
  return puVar10;
}

