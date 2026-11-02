// rea decompile_all
// name: FUN_00157498
// address: 0x157498
// body: available
// range: 0x157498-0x157507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00157498(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    return *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x14);
  }
  cVar1 = *(char *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      uVar2 = FUN_0004669c(param_2,0);
      if (DAT_00157508 < uVar2) {
        return iVar3 + 4;
      }
      return iVar3 + 8;
    }
    if (cVar1 != '\x03') {
      return iVar3;
    }
  }
  return iVar3 + 2;
}

