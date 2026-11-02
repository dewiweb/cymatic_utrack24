// rea decompile_all
// name: FUN_00171d10
// address: 0x171d10
// body: available
// range: 0x171d10-0x171d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00171d10(undefined4 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  uint unaff_r4;
  char acStack_60 [84];
  
  if (param_2 != 0) {
    unaff_r4 = DAT_00171d90;
  }
  pcVar2 = acStack_60 + 0x4f;
  acStack_60[0x4f] = 0;
  if (param_2 == 0) {
    pcVar2 = acStack_60 + 0x4e;
    acStack_60[0x4e] = 0x30;
  }
  else {
    while ((acStack_60 < pcVar2 && (param_2 != 0))) {
      uVar1 = (uint)((ulonglong)param_2 * (ulonglong)unaff_r4 >> 0x23);
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_2 + (char)uVar1 * -10 + '0';
      param_2 = uVar1;
    }
  }
  FUN_0017185c(param_1,pcVar2,(uint)(acStack_60 + (0x4f - (int)pcVar2)) & 0xffff);
  return;
}

