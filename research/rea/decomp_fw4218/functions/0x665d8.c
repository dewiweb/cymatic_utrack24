// rea decompile_all
// name: FUN_000665d8
// address: 0x665d8
// body: available
// range: 0x665d8-0x6662f inclusive
// range: 0x66644-0x6666b inclusive
// range: 0x6674c-0x66767 inclusive
// range: 0x66908-0x66913 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000665d8(undefined4 param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_38 [20];
  
  if (param_2 == (undefined1 *)0x0) {
    FUN_00002898(s_ERROR__instantiateAllHWPLLs__PLL_00066928);
    return 0;
  }
  puVar1 = (undefined4 *)FUN_000b1210(auStack_38);
  *puVar1 = _DAT_00066914;
  uVar2 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar2,s___AudioHWService_00066916 + 2,auStack_38);
  if (iVar3 != 0) {
    switch(*param_2) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      FUN_00002898(s_o__ERROR__instantiateAllHWPLLs__W_00066968 + 4);
      FUN_000b1228(auStack_38);
      return 0;
    }
  }
  FUN_00002898(s_o__ERROR__instantiateAllHWPLLs__W_00066968._0_4_);
  FUN_000b1228(auStack_38);
  return 0;
}

