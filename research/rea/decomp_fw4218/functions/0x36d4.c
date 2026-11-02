// rea decompile_all
// name: FUN_000036d4
// address: 0x36d4
// body: available
// range: 0x36d4-0x371b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000036d4(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_0000371c;
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    uVar4 = DAT_0000371c << 7;
    while( true ) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      if ((uVar3 - iVar2 & ~uVar3 & uVar4) != 0) break;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
    }
    while( true ) {
      *(char *)param_1 = (char)uVar3;
      param_1 = (uint *)((int)param_1 + 1);
      if ((uVar3 & 0xff) == 0) break;
      uVar3 = uVar3 >> 8;
    }
  }
  else {
    do {
      uVar4 = *param_2;
      *(char *)param_1 = (char)uVar4;
      if ((char)uVar4 == '\0') {
        return;
      }
      cVar1 = *(char *)((int)param_2 + 1);
      param_2 = (uint *)((int)param_2 + 2);
      *(char *)((int)param_1 + 1) = cVar1;
      param_1 = (uint *)((int)param_1 + 2);
    } while (cVar1 != '\0');
  }
  return;
}

