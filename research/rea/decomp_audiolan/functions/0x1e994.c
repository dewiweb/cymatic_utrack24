// rea decompile_all
// name: FUN_0001e994
// address: 0x1e994
// body: available
// range: 0x1e994-0x1ea07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0001e994(byte *param_1,byte *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x40) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      uVar4 = (uint)bVar3;
      if (param_3 != 0) {
        if ((uVar4 == 0x2e) || (uVar4 == param_3)) {
          *param_2 = (byte)param_3;
          param_2 = param_2 + 1;
        }
        else if (uVar4 < 0x21) {
          *param_2 = (byte)param_3;
          param_2[1] = (char)(uVar4 * 0x29 >> 0xc) + 0x30;
          cVar1 = FUN_0016dbc8(uVar4 / 10);
          param_2[2] = cVar1 + 0x30;
          param_2 = param_2 + 3;
          cVar1 = FUN_0016dbc8(uVar4);
          bVar3 = cVar1 + 0x30;
        }
      }
      *param_2 = bVar3;
      param_2 = param_2 + 1;
    }
    *param_2 = 0;
    return param_2;
  }
  return (byte *)0x0;
}

