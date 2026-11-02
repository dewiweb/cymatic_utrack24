// rea decompile_all
// name: FUN_00003538
// address: 0x3538
// body: available
// range: 0x3538-0x3547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00003538(void)

{
  int iVar1;
  char extraout_r1;
  int extraout_r2;
  undefined2 extraout_r3;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00004f40(0);
  FUN_00002270();
  uVar3 = FUN_001d0d74(1);
  uStack_4 = 0x3549;
  uStack_8._0_2_ = extraout_r3;
  FUN_00004f58(s_____assertion_failed__0000359c);
  FUN_00004f58((int)uVar3);
  FUN_00004f58(s___file_000035b4);
  FUN_00004f58((int)((ulonglong)uVar3 >> 0x20));
  FUN_00004f58(s___line_000035bc);
  pcVar2 = (char *)((int)&uStack_8 + 2);
  uStack_8 = (uint)CONCAT12(10,(undefined2)uStack_8);
  iVar1 = extraout_r2;
  while (0 < iVar1) {
    iVar1 = FUN_00003e14(iVar1,10);
    pcVar2 = pcVar2 + -1;
    *pcVar2 = extraout_r1 + '0';
  }
  FUN_00004f58(pcVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

