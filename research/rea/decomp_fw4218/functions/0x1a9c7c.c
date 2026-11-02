// rea decompile_all
// name: FUN_001a9c7c
// address: 0x1a9c7c
// body: available
// range: 0x1a9c7c-0x1a9c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a9c7c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_00003738(*(undefined4 *)(param_1 + 0x10c));
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar6 = *(int *)(param_1 + 0x11c) + 1;
  iVar5 = 1;
  uVar3 = extraout_r2_00;
  uVar4 = extraout_r3_00;
  if (1 < iVar6) {
    do {
      if (*(char *)(param_1 + 0x112) == '\0') {
        thunk_FUN_00002898(&DAT_001a925c);
        uVar3 = extraout_r2;
        uVar4 = extraout_r3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if (*(char *)(param_1 + 0x112) == '\0') {
    FUN_00002898(&DAT_001a9260,*(undefined4 *)(param_1 + 0x10c),uVar3,uVar4,unaff_r4);
    FUN_00002898(&DAT_001a9264);
  }
  iVar5 = FUN_00003738(*(undefined4 *)(param_1 + 0x10c));
  iVar1 = *(int *)(param_1 + 0x11c) + (iVar1 - iVar2);
  *(int *)(param_1 + 0x11c) = iVar1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x11c) = iVar1;
  if (iVar5 < iVar1) {
    iVar1 = iVar5;
  }
  *(int *)(param_1 + 0x11c) = iVar1;
  if (iVar1 <= iVar5) {
    do {
      iVar5 = iVar5 + -1;
      if (*(char *)(param_1 + 0x112) == '\0') {
        thunk_FUN_00002898(&DAT_001a925c);
      }
    } while (*(int *)(param_1 + 0x11c) <= iVar5);
    return;
  }
  return;
}

