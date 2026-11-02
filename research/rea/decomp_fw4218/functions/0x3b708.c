// rea decompile_all
// name: FUN_0003b708
// address: 0x3b708
// body: available
// range: 0x3b708-0x3b779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b708(undefined4 param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar1 = _DAT_0003b77c;
  if (*_DAT_0003b77c == '\0') {
    FUN_0002c4b0(s_____LA__j__System_halted__0003b77d._3_4_,param_1);
    *pcVar1 = '\x01';
  }
  else {
    FUN_0002cd84(s_____LA__j__System_halted__0003b77d._3_4_,param_1);
  }
  uVar2 = FUN_0003b63e(7);
  uVar3 = FUN_0003b63e(9);
  uVar4 = FUN_0003b63e(7);
  if (((uVar2 | uVar3 | uVar4) & 3) != 0) {
    FUN_0002f9d4(s_____LA__j__System_halted__0003b77d._7_4_);
    FUN_0002f9d4(s_____LA__j__System_halted__0003b77d + 0xb);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_0003b5c4(uVar4);
  FUN_0003b5c4(uVar3);
  FUN_0003b5c4(uVar2);
  FUN_0002f9d4(s_PTPv2_ZHAW_Stack_Version__s_0003b79c,&DAT_0003b798);
  FUN_0002f9d4(&DAT_0003b7b8);
  return;
}

