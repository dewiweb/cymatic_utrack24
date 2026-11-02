// rea decompile_all
// name: FUN_001cf3a4
// address: 0x1cf3a4
// body: available
// range: 0x1cf3a4-0x1cf483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001cf3a4(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  thunk_EXT_FUN_0040001c();
  piVar1 = DAT_001cf484;
  if (*(int *)(param_1 + 0x10) == 0) {
    if ((param_2 & 1) != 0) {
      uVar4 = 10;
      goto LAB_001cf3cc;
    }
  }
  else if ((param_2 & 2) != 0) {
    uVar4 = 0;
LAB_001cf3cc:
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      thunk_EXT_FUN_00400034();
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *piVar1 = *piVar1 + 1;
      thunk_EXT_FUN_00400034();
      do {
        thunk_EXT_FUN_0040001c();
        *(undefined4 *)(iVar2 + 0x74) = 0;
        *piVar1 = *piVar1 + 1;
        thunk_EXT_FUN_00400034();
        FUN_001d0878(iVar2 + 0x58);
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x90) = uVar4;
        iVar2 = *(int *)(iVar2 + 0x7c);
        FUN_001cfeb8(*(undefined4 *)(iVar2 + 0x80));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *piVar1 = *piVar1 + -1;
      if (*DAT_001cf488 != *DAT_001cf48c) {
        FUN_00011ef4();
      }
    }
    return 0;
  }
  thunk_EXT_FUN_00400034();
  return 0;
}

