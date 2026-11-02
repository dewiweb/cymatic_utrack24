// rea decompile_all
// name: IRQ
// address: 0x18
// body: available
// range: 0x18-0x1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00000044) */
/* WARNING: Removing unreachable block (ram,0x00000028) */
/* WARNING: Removing unreachable block (ram,0x00000030) */
/* WARNING: Removing unreachable block (ram,0x00000040) */

void IRQ(uint param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r9;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR) {
    if (in_NG != in_OV) {
      software_interrupt(0xa08e46);
    }
                    /* WARNING: Could not recover jumptable at 0x00000040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00000024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r7 &
            (param_1 & param_3 & (unaff_lr >> 0x1f | unaff_lr << 1) & unaff_r9 >> 0x20) <<
            (unaff_r5 & 0xff)))();
  return;
}

