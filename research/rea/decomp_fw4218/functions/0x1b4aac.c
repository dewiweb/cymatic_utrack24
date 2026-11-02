// rea decompile_all
// name: FUN_001b4aac
// address: 0x1b4aac
// body: available
// range: 0x1b4aac-0x1b4b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b4b98 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001b4aac(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  FUN_00002898(DAT_001b4b9c + -0x38,param_1);
  if (param_2 != 0) {
    FUN_00002898(DAT_001b4ba0 + -0x58,DAT_001b4ba0,uVar1 & 1);
    FUN_00002898(DAT_001b4ba4 + -0x50,DAT_001b4ba4,(uVar1 & 0x7f) >> 4);
    FUN_00002898(DAT_001b4ba8 + -0x44,DAT_001b4ba8,(uVar1 & 0x1ff) >> 8);
    FUN_00002898(DAT_001b4bac + -0x38,DAT_001b4bac,(uVar1 & 0x7ff) >> 10);
    FUN_00002898(DAT_001b4bb0 + -0x30,DAT_001b4bb0,(uVar1 & 0x7fff) >> 0xc);
    FUN_00002898(DAT_001b4bb4 + -0x28,DAT_001b4bb4,uVar1 >> 0x1f);
  }
  FUN_00002898(DAT_001b4bb8 + -0xa4,param_1 + 1,DAT_001b4bb8,param_1[1]);
  FUN_00002898(DAT_001b4bbc + -0x98,param_1 + 2,DAT_001b4bbc,param_1[2]);
  FUN_00002898(DAT_001b4bc0 + -0x8c,param_1 + 3,DAT_001b4bc0,param_1[3]);
  thunk_FUN_00002898(DAT_001b4bc4 + -0x7c,param_1 + 4,DAT_001b4bc4,param_1[4]);
  return;
}

