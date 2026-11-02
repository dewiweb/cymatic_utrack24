// rea decompile_all
// name: FUN_001b7f30
// address: 0x1b7f30
// body: available
// range: 0x1b7f30-0x1b809b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b8098 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b7f30(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + uVar2 * 0x20);
    FUN_00002898(DAT_001b809c + -0x74,puVar1,DAT_001b809c,*puVar1);
    FUN_00002898(DAT_001b80a0 + -0x6c,puVar1 + 1,DAT_001b80a0,puVar1[1]);
    FUN_00002898(DAT_001b80a4 + -100,puVar1 + 2,DAT_001b80a4,puVar1[2]);
    FUN_00002898(DAT_001b80a8 + -0x5c,puVar1 + 3,DAT_001b80a8,puVar1[3]);
    FUN_00002898(DAT_001b80ac + -0x54,puVar1 + 4,DAT_001b80ac,puVar1[4]);
    FUN_00002898(_DAT_001b80b0 + -0x48,puVar1 + 5,_DAT_001b80b0,puVar1[5]);
    FUN_00002898(s__________________________________001b80b2 + 2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  FUN_00002898(_DAT_001b80e8,param_1 + 0x100,s_latchCtrl_0_001b80dc,*(undefined4 *)(param_1 + 0x100)
              );
  FUN_00002898(_DAT_001b80e8,param_1 + 0x104,s___latchValue_0_001b80ea + 2,
               *(undefined4 *)(param_1 + 0x104));
  FUN_00002898(_DAT_001b80e8,param_1 + 0x110,s_latchCtrl_1_001b80fc,*(undefined4 *)(param_1 + 0x110)
              );
  FUN_00002898(_DAT_001b80e8,param_1 + 0x114,s_latchValue_1_001b8108,
               *(undefined4 *)(param_1 + 0x114));
  FUN_00002898(_DAT_001b80e8,param_1 + 0x200,s_trigCtrl_001b8118,*(undefined4 *)(param_1 + 0x200));
  FUN_00002898(_DAT_001b80e8,param_1 + 0x300,&DAT_001b8124,*(undefined4 *)(param_1 + 0x300));
  FUN_00002898(_DAT_001b80e8,param_1 + 0x304,&DAT_001b8128,*(undefined4 *)(param_1 + 0x304));
  FUN_00002898(_DAT_001b80e8,param_1 + 0x308,&DAT_001b812c,*(undefined4 *)(param_1 + 0x308));
  FUN_00002898(_DAT_001b80e8,param_1 + 0xff0,s_testBus_001b8130,*(undefined4 *)(param_1 + 0xff0));
  thunk_FUN_00002898(_DAT_001b80e8,param_1 + 0xff4,s_revision_001b8138,
                     *(undefined4 *)(param_1 + 0xff4));
  return;
}

