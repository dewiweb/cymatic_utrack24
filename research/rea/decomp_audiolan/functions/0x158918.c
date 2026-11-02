// rea decompile_all
// name: FUN_00158918
// address: 0x158918
// body: available
// range: 0x158918-0x158a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x158a80 to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00158918(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + uVar2 * 0x20);
    FUN_000028a4(DAT_00158a84 + -0x74,puVar1,DAT_00158a84,*puVar1);
    FUN_000028a4(DAT_00158a88 + -0x6c,puVar1 + 1,DAT_00158a88,puVar1[1]);
    FUN_000028a4(DAT_00158a8c + -100,puVar1 + 2,DAT_00158a8c,puVar1[2]);
    FUN_000028a4(DAT_00158a90 + -0x5c,puVar1 + 3,DAT_00158a90,puVar1[3]);
    FUN_000028a4(_DAT_00158a94 + -0x54,puVar1 + 4,_DAT_00158a94,puVar1[4]);
    FUN_000028a4(s_F___F____________________________00158a95._3_4_ + -0x48,puVar1 + 5,
                 s_F___F____________________________00158a95._3_4_,puVar1[5]);
    FUN_000028a4(s_F___F____________________________00158a95 + 7);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x100,s_latchCtrl_0_00158ac4,
               *(undefined4 *)(param_1 + 0x100));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x104,s_4F__latchValue_0_00158ad0 + 4,
               *(undefined4 *)(param_1 + 0x104));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x110,s_latchCtrl_1_00158ae4,
               *(undefined4 *)(param_1 + 0x110));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x114,s_latchValue_1_00158af0,
               *(undefined4 *)(param_1 + 0x114));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x200,s_trigCtrl_00158b00,
               *(undefined4 *)(param_1 + 0x200));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x300,&DAT_00158b0c,
               *(undefined4 *)(param_1 + 0x300));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x304,&DAT_00158b10,
               *(undefined4 *)(param_1 + 0x304));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0x308,&DAT_00158b14,
               *(undefined4 *)(param_1 + 0x308));
  FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0xff0,s_testBus_00158b18,
               *(undefined4 *)(param_1 + 0xff0));
  thunk_FUN_000028a4(s_4F__latchValue_0_00158ad0._0_4_,param_1 + 0xff4,s_revision_00158b20,
                     *(undefined4 *)(param_1 + 0xff4));
  return;
}

