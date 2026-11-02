// rea decompile_all
// name: FUN_000118b4
// address: 0x118b4
// body: available
// range: 0x118b4-0x11abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000118b4(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_00011adc;
  *DAT_00011adc =
       *param_1 & 7 |
       (((uint)param_1[3] << 2 | (uint)param_1[4] << 3 | (uint)param_1[1] | (uint)param_1[2] << 1) &
       0xf) << 8;
  puVar1[1] = param_1[5] & 7 |
              (((uint)param_1[6] | (uint)param_1[7] << 1 |
               (uint)param_1[8] << 2 | (uint)param_1[9] << 3) & 0xf) << 8;
  puVar1[2] = param_1[10] & 7 |
              (((uint)param_1[0xb] | (uint)param_1[0xc] << 1 |
               (uint)param_1[0xd] << 2 | (uint)param_1[0xe] << 3) & 0xf) << 8;
  puVar1[3] = (((uint)param_1[0x10] | (uint)param_1[0x11] << 1 |
               (uint)param_1[0x12] << 2 | (uint)param_1[0x13] << 3) & 0xf) << 8 | param_1[0xf] & 7;
  puVar1[4] = param_1[0x14] & 7 | (((uint)param_1[0x15] | (uint)param_1[0x16] << 1) & 3) << 8;
  puVar1[5] = param_1[0x17] & 7 | (((uint)param_1[0x18] | (uint)param_1[0x19] << 1) & 3) << 8;
  puVar1[8] = param_1[0x1a] & 1 | (param_1[0x1b] & 1) << 4 | (param_1[0x1c] & 1) << 5;
  puVar1[9] = param_1[0x1d] & 3 | (param_1[0x1e] & 1) << 4;
  puVar1[10] = param_1[0x1f] & 1;
  puVar1[0xb] = param_1[0x20] & 1;
  puVar1[0xc] = param_1[0x21] & 1 | (param_1[0x22] & 1) << 1 | (param_1[0x23] & 1) << 2;
  puVar1[0xd] = (param_1[0x24] & 1) << 2 | (param_1[0x25] & 1) << 1 | param_1[0x26] & 1;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 2;
    puVar1[iVar2 + 0x24] = *(uint *)(param_1 + iVar2 * 4 + 0x28);
    puVar1[iVar2 + 0x25] = *(uint *)(param_1 + iVar2 * 4 + 0x2c);
    iVar2 = iVar3;
  } while (iVar3 < 0x10);
  return;
}

