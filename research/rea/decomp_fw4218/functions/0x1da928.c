// rea decompile_all
// name: FUN_001da928
// address: 0x1da928
// body: available
// range: 0x1da928-0x1da983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001da928(int param_1,undefined1 *param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2[0xd] = param_4;
  param_2[0xb] = 0xf;
  param_2[0xc] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  iVar3 = (param_3 - 1) * 0xd;
  uVar4 = 0;
  do {
    uVar2 = (uint)*(ushort *)(param_1 + iVar3 * 2);
    iVar3 = iVar3 + 1;
    do {
      iVar1 = DAT_001da988;
      param_2[*(byte *)(DAT_001da988 + uVar4)] = (char)uVar2;
      param_2[*(byte *)(iVar1 + uVar4) + 1] = (char)(uVar2 >> 8);
      if (uVar2 == 0) {
        uVar2 = DAT_001da984;
      }
      uVar4 = uVar4 + 1;
      if (0xc < uVar4) {
        if ((uVar2 == DAT_001da984) || (*(short *)(param_1 + iVar3 * 2) == 0)) {
          param_3 = param_3 | 0x40;
        }
        *param_2 = (char)param_3;
        return;
      }
    } while (uVar2 == DAT_001da984);
  } while( true );
}

