// rea decompile_all
// name: FUN_000038f4
// address: 0x38f4
// body: available
// range: 0x38f4-0x395b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_000038f4(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_0000395c;
  puVar1 = param_1;
  if (((uint)param_1 & 3) == 0 && ((uint)param_2 & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_2;
      if ((uVar4 - iVar3 & ~uVar4 & iVar3 << 7) != 0) break;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    }
  }
  do {
    iVar3 = param_3 + -1;
    if (param_3 < 1) {
      return param_1;
    }
    uVar4 = *param_2;
    puVar2 = (uint *)((int)puVar1 + 1);
    *(char *)puVar1 = (char)uVar4;
    puVar1 = puVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_3 = iVar3;
  } while ((char)uVar4 != '\0');
  FUN_00003860(puVar2,iVar3);
  return param_1;
}

