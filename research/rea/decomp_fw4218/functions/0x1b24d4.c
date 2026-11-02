// rea decompile_all
// name: FUN_001b24d4
// address: 0x1b24d4
// body: available
// range: 0x1b24d4-0x1b26fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b26f8 to 0x1b6fc4 FUN_001b6fc4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b24d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_001b8c68();
  FUN_00002898(DAT_001b26fc);
  iVar1 = 0;
  do {
    FUN_001b640c(param_1 + iVar1 * 0x80 + 0x100,param_2);
    FUN_00002898(DAT_001b26fc);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  while( true ) {
    iVar2 = param_1 + iVar1 * 0x20;
    uVar3 = *(uint *)(iVar2 + 0x500);
    FUN_00002898(DAT_001b2700 + -0x38,(uint *)(iVar2 + 0x500),DAT_001b2700,uVar3);
    if (param_2 != 0) {
      FUN_00002898(DAT_001b2704 + -0x58,DAT_001b2704,uVar3 & 1);
      FUN_00002898(DAT_001b2708 + -0x50,DAT_001b2708,(uVar3 & 0x7f) >> 4);
      FUN_00002898(DAT_001b270c + -0x44,DAT_001b270c,(uVar3 & 0x1ff) >> 8);
      FUN_00002898(DAT_001b2710 + -0x38,DAT_001b2710,(uVar3 & 0x7ff) >> 10);
      FUN_00002898(DAT_001b2714 + -0x30,DAT_001b2714,(uVar3 & 0x7fff) >> 0xc);
      FUN_00002898(DAT_001b2718 + -0x28,DAT_001b2718,uVar3 >> 0x1f);
    }
    FUN_00002898(DAT_001b271c + -0xa4,iVar2 + 0x504,DAT_001b271c,*(undefined4 *)(iVar2 + 0x504));
    FUN_00002898(DAT_001b2720 + -0x98,iVar2 + 0x508,DAT_001b2720,*(undefined4 *)(iVar2 + 0x508));
    FUN_00002898(DAT_001b2724 + -0x8c,iVar2 + 0x50c,DAT_001b2724,*(undefined4 *)(iVar2 + 0x50c));
    FUN_00002898(DAT_001b2728 + -0x7c,iVar2 + 0x510,DAT_001b2728,*(undefined4 *)(iVar2 + 0x510));
    FUN_00002898(DAT_001b26fc);
    iVar1 = iVar1 + 1;
    if (4 < iVar1) break;
    while (iVar1 == 1) {
      iVar1 = 2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x600);
  FUN_00002898(DAT_001b272c + -0xb0,param_1 + 0x600,DAT_001b272c,uVar3);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b2704 + -0x58,DAT_001b2704,uVar3 & 1);
    FUN_00002898(DAT_001b2730 + -0xa0,DAT_001b2730,(uVar3 & 0x1ff) >> 8);
    FUN_00002898(DAT_001b2714 + -0x30,DAT_001b2714,(uVar3 & 0xffff) >> 0xc);
  }
  FUN_00002898(DAT_001b2734 + -0xc4,param_1 + 0x604,DAT_001b2734,*(undefined4 *)(param_1 + 0x604));
  FUN_00002898(DAT_001b26fc);
  FUN_00002898(DAT_001b2738 + -0x14c,param_1 + 0x680,DAT_001b2738,*(undefined4 *)(param_1 + 0x680));
  FUN_00002898(DAT_001b26fc);
  FUN_00002898(DAT_001b273c + -0x15c,param_1 + 0x700,DAT_001b273c,*(undefined4 *)(param_1 + 0x700));
  FUN_00002898(DAT_001b26fc);
  FUN_00002898(DAT_001b2740 + -0x168,param_1 + 0x740,DAT_001b2740,*(undefined4 *)(param_1 + 0x740));
  FUN_00002898(DAT_001b26fc);
  FUN_001b6fc4(param_1 + 0x800,param_2);
  return;
}

