// rea decompile_all
// name: FUN_001a5740
// address: 0x1a5740
// body: available
// range: 0x1a5740-0x1a5843 inclusive
// range: 0x1a5846-0x1a584b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a5740(int *param_1)

{
  int iVar1;
  
  if ((code *)*DAT_001a584c == entry) {
    iVar1 = FUN_0019b388(0xe0);
  }
  else {
    iVar1 = (*(code *)*DAT_001a584c)(0xe0);
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    FUN_000038a0(iVar1,0xe0);
    FUN_001a4c50(*param_1 + 0x14);
    FUN_001a4c50(*param_1 + 0x1c);
    FUN_001a4c50(*param_1 + 0x24);
    FUN_001a4c50(*param_1 + 0x2c);
    FUN_001a4c50(*param_1 + 0x34);
    FUN_001a4c50(*param_1 + 0x3c);
    FUN_001a4c50(*param_1 + 0x44);
    *(undefined4 *)(*param_1 + 0x4c) = 0;
    FUN_001a4c50(*param_1 + 0x50);
    FUN_001a4c50(*param_1 + 0x58);
    FUN_001a4c50(*param_1 + 0x60);
    *(undefined4 *)(*param_1 + 0x68) = 0;
    *(undefined4 *)(*param_1 + 0x6c) = 0;
    *(undefined4 *)(*param_1 + 0x70) = 0;
    FUN_001a4c50(*param_1 + 0x74);
    *(undefined4 *)(*param_1 + 0x7c) = 0;
    *(undefined4 *)(*param_1 + 0x80) = 0;
    FUN_001a4c50(*param_1 + 0x84);
    FUN_001a4c50(*param_1 + 0x8c);
    FUN_001a4c50(*param_1 + 0x94);
    FUN_001a4c50(*param_1 + 0x9c);
    FUN_001a4c50(*param_1 + 0xa4);
    *(undefined4 *)(*param_1 + 0xac) = 0;
    FUN_001a4c50(*param_1 + 0xb0);
    FUN_001a4c50(*param_1 + 0xb8);
    FUN_001a4c50(*param_1 + 200);
    FUN_001a4c50(*param_1 + 0xc0);
    *(undefined4 *)(*param_1 + 0xd0) = 3;
    *(undefined4 *)(*param_1 + 0xd4) = 0;
    *(undefined4 *)(*param_1 + 0xd8) = 0;
    *(undefined4 *)(*param_1 + 0xdc) = 0;
    return 0;
  }
  return 0xfffffffc;
}

