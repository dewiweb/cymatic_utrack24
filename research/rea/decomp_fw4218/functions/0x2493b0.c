// rea decompile_all
// name: FUN_002493b0
// address: 0x2493b0
// body: available
// range: 0x2493b0-0x249443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002493b0(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = param_2 | param_4;
  if ((int)uVar1 < 0) {
    if ((int)(uVar1 + 0x100000) < 0) {
      if (-1 < (int)(uVar1 - 0x100000)) {
        return;
      }
      if (param_4 == param_2) {
        return;
      }
      return;
    }
    if (param_2 * 2 < 0xffe00000 && param_4 * 2 < 0xffe00000) {
      return;
    }
  }
  else {
    bVar3 = SCARRY4(uVar1,0x100000);
    bVar2 = -1 < (int)(uVar1 + 0x100000);
    if (bVar2) {
      bVar3 = SBORROW4(uVar1,0x100000);
    }
    if (bVar2 && -1 < (int)(uVar1 - 0x100000)) {
      if (param_2 == param_4) {
        return;
      }
      return;
    }
    if (!bVar3) {
      return;
    }
    if (-1 < (int)(param_2 + 0x100000) && -1 < (int)(param_4 + 0x100000)) {
      return;
    }
  }
  FUN_002495bc();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

