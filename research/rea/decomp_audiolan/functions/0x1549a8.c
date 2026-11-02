// rea decompile_all
// name: FUN_001549a8
// address: 0x1549a8
// body: available
// range: 0x1549a8-0x154bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x154bcc to 0x158234 FUN_00158234 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001549a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00159310();
  FUN_000028a4(DAT_00154bd0);
  iVar1 = 0;
  do {
    FUN_00157c10(param_1 + iVar1 * 0x80 + 0x100,param_2);
    FUN_000028a4(DAT_00154bd0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  while( true ) {
    iVar2 = param_1 + iVar1 * 0x20;
    uVar3 = *(uint *)(iVar2 + 0x500);
    FUN_000028a4(DAT_00154bd4 + -0x38,(uint *)(iVar2 + 0x500),DAT_00154bd4,uVar3);
    if (param_2 != 0) {
      FUN_000028a4(DAT_00154bd8 + -0x58,DAT_00154bd8,uVar3 & 1);
      FUN_000028a4(DAT_00154bdc + -0x50,DAT_00154bdc,(uVar3 & 0x7f) >> 4);
      FUN_000028a4(DAT_00154be0 + -0x44,DAT_00154be0,(uVar3 & 0x1ff) >> 8);
      FUN_000028a4(DAT_00154be4 + -0x38,DAT_00154be4,(uVar3 & 0x7ff) >> 10);
      FUN_000028a4(DAT_00154be8 + -0x30,DAT_00154be8,(uVar3 & 0x7fff) >> 0xc);
      FUN_000028a4(DAT_00154bec + -0x28,DAT_00154bec,uVar3 >> 0x1f);
    }
    FUN_000028a4(DAT_00154bf0 + -0xa4,iVar2 + 0x504,DAT_00154bf0,*(undefined4 *)(iVar2 + 0x504));
    FUN_000028a4(DAT_00154bf4 + -0x98,iVar2 + 0x508,DAT_00154bf4,*(undefined4 *)(iVar2 + 0x508));
    FUN_000028a4(DAT_00154bf8 + -0x8c,iVar2 + 0x50c,DAT_00154bf8,*(undefined4 *)(iVar2 + 0x50c));
    FUN_000028a4(DAT_00154bfc + -0x7c,iVar2 + 0x510,DAT_00154bfc,*(undefined4 *)(iVar2 + 0x510));
    FUN_000028a4(DAT_00154bd0);
    iVar1 = iVar1 + 1;
    if (4 < iVar1) break;
    while (iVar1 == 1) {
      iVar1 = 2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x600);
  FUN_000028a4(DAT_00154c00 + -0xb0,param_1 + 0x600,DAT_00154c00,uVar3);
  if (param_2 != 0) {
    FUN_000028a4(DAT_00154bd8 + -0x58,DAT_00154bd8,uVar3 & 1);
    FUN_000028a4(DAT_00154c04 + -0xa0,DAT_00154c04,(uVar3 & 0x1ff) >> 8);
    FUN_000028a4(DAT_00154be8 + -0x30,DAT_00154be8,(uVar3 & 0xffff) >> 0xc);
  }
  FUN_000028a4(DAT_00154c08 + -0xc4,param_1 + 0x604,DAT_00154c08,*(undefined4 *)(param_1 + 0x604));
  FUN_000028a4(DAT_00154bd0);
  FUN_000028a4(DAT_00154c0c + -0x14c,param_1 + 0x680,DAT_00154c0c,*(undefined4 *)(param_1 + 0x680));
  FUN_000028a4(DAT_00154bd0);
  FUN_000028a4(DAT_00154c10 + -0x15c,param_1 + 0x700,DAT_00154c10,*(undefined4 *)(param_1 + 0x700));
  FUN_000028a4(DAT_00154bd0);
  FUN_000028a4(DAT_00154c14 + -0x168,param_1 + 0x740,DAT_00154c14,*(undefined4 *)(param_1 + 0x740));
  FUN_000028a4(DAT_00154bd0);
  FUN_00158234(param_1 + 0x800,param_2);
  return;
}

