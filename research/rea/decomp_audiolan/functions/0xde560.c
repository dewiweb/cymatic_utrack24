// rea decompile_all
// name: FUN_000de560
// address: 0xde560
// body: available
// range: 0xde560-0xde5e7 inclusive
// range: 0xdec18-0xdec23 inclusive
// range: 0xdfda4-0xdfdaf inclusive
// range: 0xdff58-0xdff6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000de560(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 4;
  FUN_001a0700(iVar2);
  iVar1 = FUN_000da8f0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_0016deb0(param_2,DAT_000df564,DAT_000df560,0xffffffff);
    if (iVar1 != 0) {
      switch(*(undefined1 *)(iVar1 + 5)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xd:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    FUN_001a0d18(iVar2);
    return 0;
  }
  FUN_001a0d18(iVar2);
  return 1;
}

