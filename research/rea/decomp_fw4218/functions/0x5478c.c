// rea decompile_all
// name: FUN_0005478c
// address: 0x5478c
// body: available
// range: 0x5478c-0x54943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0005478c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  bool bVar11;
  
  iVar1 = FUN_00003738(*(undefined4 *)(param_2 + 4));
  iVar2 = FUN_00003738(*(undefined4 *)(param_2 + 8));
  uVar10 = iVar1 + iVar2 + 9 + *(int *)(param_1 + 0x54) & ~(*(int *)(param_1 + 0x54) - 1U);
  if (0x800 < uVar10) {
    FUN_00002898(DAT_00054944,uVar10);
    return false;
  }
  iVar8 = param_1 + param_3 * 0x800;
  puVar9 = (undefined1 *)(iVar8 + 0x61);
  *puVar9 = 0x3e;
  *(undefined1 *)(iVar8 + 0x62) = *(undefined1 *)(param_2 + 0xc);
  FUN_000028cc(iVar8 + 0x69,*(undefined4 *)(param_2 + 4));
  bVar11 = false;
  puVar9[iVar1 + 8] = 0;
  FUN_000028cc(puVar9 + iVar1 + 9,*(undefined4 *)(param_2 + 8));
  iVar2 = iVar1 + 9 + iVar2;
  puVar9[iVar2] = 0;
  uVar3 = iVar2 + 1;
  if (uVar3 < 0x7fffffff || iVar2 == 0x7ffffffe) {
    uVar7 = uVar10 - uVar3;
    if (0 < (int)uVar7) {
      puVar4 = puVar9 + uVar3;
      puVar5 = puVar4 + -1;
      if ((uVar7 & 1) != 0) {
        *puVar4 = 0;
        puVar5 = puVar4;
      }
      for (iVar1 = (int)uVar7 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
        *puVar5 = 0;
      }
    }
  }
  else {
    for (; uVar3 < uVar10; uVar3 = uVar3 + 1) {
      puVar9[uVar3] = 0;
    }
  }
  *(char *)(iVar8 + 99) = (char)(uVar10 >> 8);
  *(char *)(iVar8 + 100) = (char)uVar10;
  uVar6 = FUN_00176c50(iVar8 + 0x69,uVar10 - 8);
  *(char *)(iVar8 + 0x65) = (char)((uint)uVar6 >> 0x18);
  *(char *)(iVar8 + 0x66) = (char)((uint)uVar6 >> 0x10);
  *(char *)(iVar8 + 0x67) = (char)((uint)uVar6 >> 8);
  *(char *)(iVar8 + 0x68) = (char)uVar6;
  if ((*(int *)(param_1 + 0x50) + uVar10 <= *(uint *)(param_1 + 0x4c)) ||
     ((iVar1 = FUN_00053d1c(param_1), iVar1 != 0 &&
      (*(int *)(param_1 + 0x50) + uVar10 <= *(uint *)(param_1 + 0x4c))))) {
    iVar1 = FUN_001dacc8(0,*(int *)(param_1 + 0x50) +
                           *(int *)(param_1 + *(int *)(param_1 + 0x48) * 4 + 0x58),puVar9,uVar10);
    bVar11 = iVar1 == 0;
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar10;
  }
  return bVar11;
}

