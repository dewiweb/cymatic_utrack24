// rea decompile_all
// name: FUN_000b8638
// address: 0xb8638
// body: available
// range: 0xb8638-0xb8737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b8638(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x18e) == '\x02') {
    if (*(char *)(param_1 + 0x194) != '\x03') {
      FUN_000028a4(DAT_000b873c);
      FUN_000872a0(param_1 + 0x184,3);
    }
    iVar2 = FUN_000b9aac();
    iVar3 = *(int *)(iVar2 + 0x208);
    iVar1 = iVar3;
    iVar4 = *(int *)(iVar3 + 4);
    while (iVar4 != 0) {
      if (*(uint *)(iVar4 + 0x10) < *(uint *)(iVar2 + 0x214)) {
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar1 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
    iVar4 = iVar3;
    if ((iVar1 != iVar3) && (*(uint *)(iVar1 + 0x10) <= *(uint *)(iVar2 + 0x214))) {
      iVar4 = iVar1;
    }
    if (iVar4 != iVar3) {
      FUN_000839e4(param_1 + 0x198,*(undefined4 *)(iVar4 + 0x1c));
      FUN_000429cc(DAT_000b8744,param_1 + 0xfb4);
      FUN_000429cc(DAT_000b8748,param_1 + 0xfb8);
      FUN_000429cc(DAT_000b874c,param_1 + 0xfbc);
      return 1;
    }
    FUN_000028a4(DAT_000b8740);
  }
  else {
    FUN_000028a4(DAT_000b8738);
  }
  return 0;
}

