// rea decompile_all
// name: FUN_00084ef0
// address: 0x84ef0
// body: available
// range: 0x84ef0-0x84f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00084ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = 0;
  uStack_20 = param_3;
  uStack_1c = param_4;
  iVar1 = FUN_0023adb0(*DAT_00084f78);
  while( true ) {
    iVar2 = FUN_0023ad98(*DAT_00084f78);
    if (iVar2 == iVar1) {
      return 0;
    }
    FUN_00070a08(&uStack_20,iVar1);
    iVar2 = FUN_0022d2a0(iVar1,param_2);
    if (iVar2 == 0) break;
    FUN_00070a68(&uStack_20);
    iVar1 = iVar1 + 8;
    iVar3 = iVar3 + 1;
  }
  FUN_00070a68(&uStack_20);
  return iVar3;
}

