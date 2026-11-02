// rea decompile_all
// name: FUN_00097e68
// address: 0x97e68
// body: available
// range: 0x97e68-0x97f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00097e68(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  
  FUN_000028a4(DAT_00097f54,0,7);
  FUN_000028a4(DAT_00097f58);
  FUN_000028a4(DAT_00097f5c);
  FUN_000028a4(DAT_00097f60);
  uVar2 = 0;
  do {
    iVar1 = 0;
    if (uVar2 == 0) {
      cVar3 = *(char *)(param_1 + 0xd4);
      cVar4 = cVar3;
    }
    else {
      if (uVar2 != 0xff) {
        iVar1 = param_1 + uVar2 * 0x24 + 0xd4;
      }
      cVar3 = *(char *)(iVar1 + 1);
      if (uVar2 != 0xff) {
        iVar1 = param_1 + uVar2 * 0x24 + 500;
      }
      else {
        iVar1 = 0;
      }
      cVar4 = *(char *)(iVar1 + 1);
    }
    FUN_000028a4(DAT_00097f64,uVar2);
    if (cVar4 == -1) {
      FUN_000028a4(DAT_00097f70);
    }
    else {
      FUN_000028a4(DAT_00097f68,cVar4);
    }
    FUN_000028a4(DAT_00097f6c,uVar2);
    if (cVar3 == -1) {
      FUN_000028a4(DAT_00097f70);
    }
    else {
      FUN_000028a4(DAT_00097f68,cVar3);
    }
    FUN_000028a4(DAT_00097f60);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 8);
  return;
}

