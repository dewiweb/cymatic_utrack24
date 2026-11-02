// rea decompile_all
// name: FUN_0003ca58
// address: 0x3ca58
// body: available
// range: 0x3ca58-0x3cb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0003ca58(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_20 [12];
  
  pcVar2 = DAT_0003cb8c;
  if (*DAT_0003cb8c == '\0') {
    return 0;
  }
  FUN_0003b30c();
  FUN_0002b4b0(auStack_20);
  iVar5 = FUN_00003658(auStack_20,param_1,8);
  puVar3 = DAT_0003cb98;
  if (iVar5 == 0) {
    iVar9 = 0;
    iVar5 = *(int *)(pcVar2 + 8);
    do {
      iVar6 = iVar5 + -1;
      if (iVar6 < 0) {
        iVar6 = iVar5 + 0x3f;
      }
      iVar5 = iVar6 * 0x10;
      if ((*(char *)(DAT_0003cb94 + iVar5) != '\0') &&
         (*(char *)(iVar5 + DAT_0003cb94 + 0xc) == *(char *)(param_1 + 0x23))) {
        iVar5 = iVar5 + DAT_0003cb94;
        *(undefined1 *)(DAT_0003cb94 + iVar6 * 0x10) = 0;
        puVar4 = DAT_0003cba0;
        uVar10 = *(uint *)(iVar5 + 4);
        if ((DAT_0003cb9c < *puVar3) && (uVar10 < DAT_0003cb9c >> 0x10)) {
          puVar1 = DAT_0003cba0 + 1;
          *DAT_0003cba0 = *DAT_0003cba0;
          puVar4[1] = *puVar1 + 1;
          *puVar3 = uVar10;
        }
        puVar3 = DAT_0003cba0;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar5 + 8);
        uVar13 = *puVar3;
        *(uint *)(param_1 + 0x14) = puVar3[1];
        *(uint *)(param_1 + 0x10) = uVar10 | uVar13;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return 1;
      }
      iVar9 = iVar9 + 1;
      uVar8 = DAT_0003cba4;
      iVar5 = iVar6;
    } while (iVar9 < 0x40);
  }
  else {
    iVar6 = FUN_0003ccfc(param_1);
    iVar5 = DAT_0003cb90;
    iVar12 = 0;
    iVar9 = *(int *)(pcVar2 + 4);
    do {
      iVar11 = iVar9 + -1;
      if (iVar11 < 0) {
        iVar11 = iVar9 + 0x3f;
      }
      iVar9 = iVar11 * 0x18;
      if (((*(char *)(DAT_0003cb90 + iVar9) != '\0') &&
          (((iVar7 = iVar9 + DAT_0003cb90, *(int *)(iVar7 + 4) != 0 || (*(int *)(iVar7 + 8) != 0))
           && (*(int *)(iVar7 + 0x10) == iVar6)))) &&
         ((*(uint *)(iVar7 + 0xc) == (uint)*(ushort *)(param_1 + 10) &&
          (*(char *)(iVar7 + 0x14) == *(char *)(param_1 + 0x23))))) {
        *(undefined1 *)(DAT_0003cb90 + iVar11 * 0x18) = 0;
        puVar4 = DAT_0003cba0;
        puVar3 = DAT_0003cb98;
        uVar10 = *(uint *)(iVar9 + iVar5 + 4);
        if ((DAT_0003cb9c < *DAT_0003cb98) && (uVar10 < DAT_0003cb9c >> 0x10)) {
          puVar1 = DAT_0003cba0 + 1;
          *DAT_0003cba0 = *DAT_0003cba0;
          puVar4[1] = *puVar1 + 1;
          *puVar3 = uVar10;
        }
        puVar3 = DAT_0003cba0;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar7 + 8);
        uVar13 = *puVar3;
        *(uint *)(param_1 + 0x14) = puVar3[1];
        *(uint *)(param_1 + 0x10) = uVar10 | uVar13;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return 1;
      }
      iVar12 = iVar12 + 1;
      uVar8 = DAT_0003cba8;
      iVar9 = iVar11;
    } while (iVar12 < 0x40);
  }
  FUN_00002898(uVar8);
  return 0;
}

