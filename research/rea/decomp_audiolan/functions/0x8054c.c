// rea decompile_all
// name: FUN_0008054c
// address: 0x8054c
// body: available
// range: 0x8054c-0x8069d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0008065a) */
/* WARNING: Removing unreachable block (ram,0x000805e4) */
/* WARNING: Removing unreachable block (ram,0x000805e8) */

undefined4 FUN_0008054c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  
  iVar2 = FUN_00157218();
  uVar1 = DAT_000806a0;
  if (iVar2 == 0) {
    return 0;
  }
  FUN_001a0700();
  for (puVar3 = *(undefined4 **)(param_1 + 0xc); *(undefined4 **)(param_1 + 0x10) != puVar3;
      puVar3 = puVar3 + 1) {
    if ((int *)*puVar3 == param_2) goto LAB_00080584;
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x24))(param_2);
  }
  piVar11 = (int *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0xe) = 1;
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  if (puVar3 == *(undefined4 **)(param_1 + 0x14)) {
    uVar10 = (int)puVar3 - *piVar11 >> 2;
    if ((uint)((int)*(undefined4 **)(param_1 + 0x14) - *piVar11 >> 2) <= uVar10) {
      uVar6 = (uVar10 >> 1) + uVar10 + (uVar10 >> 3);
      uVar4 = uVar10 + 1;
      if (uVar10 + 1 <= uVar6) {
        uVar4 = uVar6;
      }
      puVar5 = (undefined4 *)FUN_0010f82c(uVar4 * 4,0);
      puVar8 = puVar5;
      for (puVar7 = (undefined4 *)*piVar11; puVar7 != puVar3; puVar7 = puVar7 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar7;
        }
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar5);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = param_2;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x10);
      puVar7 = (undefined4 *)(((int)puVar3 - *piVar11 & 0xfffffffcU) + (int)puVar5);
      for (; puVar3 != puVar8; puVar3 = puVar3 + 1) {
        puVar7 = puVar7 + 1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar3;
        }
      }
      iVar9 = *(int *)(param_1 + 0x10);
      iVar2 = *piVar11;
      FUN_0010fa20(iVar2,*(int *)(param_1 + 0x14) - iVar2 >> 2,0);
      *piVar11 = (int)puVar5;
      *(undefined4 **)(param_1 + 0x10) = puVar5 + (iVar9 - iVar2 >> 2) + 1;
      *(undefined4 **)(param_1 + 0x14) = puVar5 + uVar4;
      goto LAB_00080584;
    }
    *(undefined4 **)(param_1 + 0x10) = puVar3 + 1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
  }
  else {
    *(undefined4 **)(param_1 + 0x10) = puVar3 + 1;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00080584;
  }
  *puVar3 = param_2;
LAB_00080584:
  FUN_001a0d18(uVar1);
  return 1;
}

