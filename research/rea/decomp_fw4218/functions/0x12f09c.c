// rea decompile_all
// name: FUN_0012f09c
// address: 0x12f09c
// body: available
// range: 0x12f09c-0x12f11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0012f09c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  iVar1 = param_1;
  uStack_24 = param_2;
  FUN_001fe200();
  uVar2 = FUN_001fe3fc();
  uVar3 = FUN_00248c40(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0,
                       DAT_0012f120,iVar1);
  FUN_002493b0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20)
              );
  if (!(bool)in_CY) {
    FUN_002038a8(param_1 + 0x14);
    FUN_001fe200();
    uVar2 = FUN_001fe3fc();
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  iVar1 = FUN_0020383c(param_1 + 0x14,&uStack_24);
  return iVar1 != 0;
}

