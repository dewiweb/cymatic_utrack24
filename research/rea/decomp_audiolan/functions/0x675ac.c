// rea decompile_all
// name: FUN_000675ac
// address: 0x675ac
// body: available
// range: 0x675ac-0x67623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_000675ac(undefined4 param_1,char *param_2,int param_3,undefined1 *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  
  cVar4 = '\x01';
  pcVar5 = param_4 + 1;
  pcVar2 = param_4 + 2;
  *param_4 = 0;
  pcVar3 = pcVar2;
  cVar1 = '\x01';
  if (0 < param_3) {
    do {
      cVar4 = cVar1;
      if (*param_2 == '\0') {
LAB_000675f4:
        *pcVar5 = cVar4;
        pcVar2 = pcVar3 + 1;
        cVar4 = '\x01';
        pcVar5 = pcVar3;
      }
      else {
        cVar4 = cVar4 + '\x01';
        pcVar2 = pcVar3 + 1;
        *pcVar3 = *param_2;
        pcVar3 = pcVar2;
        if (cVar4 == -1) goto LAB_000675f4;
      }
      param_3 = param_3 + -1;
      pcVar3 = pcVar2;
      param_2 = param_2 + 1;
      cVar1 = cVar4;
    } while (param_3 != 0);
  }
  *pcVar5 = cVar4;
  *pcVar2 = '\0';
  return pcVar2 + (1 - (int)param_4);
}

