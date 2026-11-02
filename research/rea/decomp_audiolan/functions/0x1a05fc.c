// rea decompile_all
// name: FUN_001a05fc
// address: 0x1a05fc
// body: available
// range: 0x1a05fc-0x1a06fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a05fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_001a06fc;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar4 = uVar3 + 1;
  } while (*(int *)(DAT_001a06fc + uVar3 * 4) != 0);
  if ((int)uVar3 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3 & 1;
    iVar5 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = *(int *)(iVar2 + iVar5 * 4);
        if ((*(int *)(iVar1 + 8) != 0) &&
           (iVar1 = FUN_00003960(*(undefined4 *)(iVar1 + 0xc),param_1), iVar1 == 0)) {
          iVar2 = *(int *)(iVar2 + iVar5 * 4);
          goto LAB_001a06e8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  if ((int)uVar4 < (int)uVar3) {
    while ((iVar5 = *(int *)(iVar2 + uVar4 * 4), *(int *)(iVar5 + 8) == 0 ||
           (iVar5 = FUN_00003960(*(undefined4 *)(iVar5 + 0xc),param_1), iVar5 != 0))) {
      iVar5 = *(int *)(iVar2 + uVar4 * 4 + 4);
      if ((*(int *)(iVar5 + 8) != 0) &&
         (iVar5 = FUN_00003960(*(undefined4 *)(iVar5 + 0xc),param_1), iVar5 == 0)) {
        iVar2 = *(int *)(iVar2 + uVar4 * 4 + 4);
        goto LAB_001a06e8;
      }
      uVar4 = uVar4 + 2;
      if ((int)uVar3 <= (int)uVar4) {
        return 0;
      }
    }
    iVar2 = *(int *)(iVar2 + uVar4 * 4);
LAB_001a06e8:
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

