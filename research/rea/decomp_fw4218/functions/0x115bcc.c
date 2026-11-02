// rea decompile_all
// name: FUN_00115bcc
// address: 0x115bcc
// body: available
// range: 0x115bcc-0x115d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00115bcc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  FUN_001daa48(0,&uStack_28);
  FUN_00003c18(param_1,0x38);
  FUN_001c6cec(param_1,param_2 + 8);
  FUN_001c6cec(param_1 + 8,param_2 + 0x10);
  FUN_001c6cec(param_1 + 0x30,DAT_00115d3c);
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(char *)(param_1 + 0x10) = (char)uVar1;
  *(char *)(param_1 + 0x11) = (char)((uint)uVar1 >> 8);
  *(char *)(param_1 + 0x12) = (char)((uint)uVar1 >> 0x10);
  *(char *)(param_1 + 0x13) = (char)((uint)uVar1 >> 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(char *)(param_1 + 0x14) = (char)uVar1;
  *(char *)(param_1 + 0x15) = (char)((uint)uVar1 >> 8);
  *(char *)(param_1 + 0x16) = (char)((uint)uVar1 >> 0x10);
  *(char *)(param_1 + 0x17) = (char)((uint)uVar1 >> 0x18);
  *(char *)(param_1 + 0x18) = (char)param_3;
  *(char *)(param_1 + 0x19) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x1a) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x1b) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x1c) = (char)param_4;
  *(char *)(param_1 + 0x1d) = (char)((uint)param_4 >> 8);
  *(char *)(param_1 + 0x1e) = (char)((uint)param_4 >> 0x10);
  *(char *)(param_1 + 0x1f) = (char)((uint)param_4 >> 0x18);
  *(char *)(param_1 + 0x20) = (char)param_5;
  *(char *)(param_1 + 0x21) = (char)((uint)param_5 >> 8);
  *(char *)(param_1 + 0x22) = (char)((uint)param_5 >> 0x10);
  *(char *)(param_1 + 0x23) = (char)((uint)param_5 >> 0x18);
  *(char *)(param_1 + 0x24) = (char)param_6;
  *(char *)(param_1 + 0x25) = (char)((uint)param_6 >> 8);
  *(char *)(param_1 + 0x26) = (char)((uint)param_6 >> 0x10);
  *(char *)(param_1 + 0x27) = (char)((uint)param_6 >> 0x18);
  *(char *)(param_1 + 0x28) = (char)param_7;
  *(char *)(param_1 + 0x29) = (char)((uint)param_7 >> 8);
  *(char *)(param_1 + 0x2a) = (char)((uint)param_7 >> 0x10);
  *(char *)(param_1 + 0x2b) = (char)((uint)param_7 >> 0x18);
  *(undefined1 *)(param_1 + 0x2c) = 0x7f;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return;
}

