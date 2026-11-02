// rea decompile_all
// name: FUN_000e2500
// address: 0xe2500
// body: available
// range: 0xe2500-0xe25bb inclusive
// range: 0xe26f0-0xe275b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e2500(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_00003960(&DAT_000e25bc,*param_2);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_0008b5d4();
      FUN_000b88e4(uVar2,1);
      return 0;
    }
    iVar1 = FUN_00003960(&DAT_000e25c0,*param_2);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_0008b5d4();
      FUN_000b88e4(uVar2,2);
      return 0;
    }
    iVar1 = FUN_00003960(&DAT_000e25c4,*param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00003960(&DAT_000e25c8,*param_2);
      if (iVar1 == 0) {
        uVar2 = thunk_FUN_0008b5d4();
        FUN_000b88e4(uVar2,4);
        return 0;
      }
      iVar1 = FUN_00003960(&DAT_000e25cc,*param_2);
      if (iVar1 != 0) goto LAB_000e2574;
      uVar2 = thunk_FUN_0008b5d4();
      FUN_000b88e4(uVar2,1);
      uVar2 = thunk_FUN_0008b5d4();
      FUN_000b88e4(uVar2,2);
    }
    uVar2 = thunk_FUN_0008b5d4();
    FUN_000b88e4(uVar2,3);
    return 0;
  }
LAB_000e2574:
  FUN_000028a4(s_____Production_Tests_____________000e25d0);
  FUN_000028a4(s_Usage__ptest_N_000e25fc);
  FUN_000028a4(s_N_all__execute_all_tests_000e2614);
  FUN_000028a4(s_N_1__AV_0_2_test__AV0__>_AV2__000e2634);
  FUN_000028a4(s_N_2__I2C_register_test_000e265c);
  FUN_000028a4(s_N_3__Crypto_chip_test__presence_a_000e267c);
  FUN_000028a4(s_N_4__AV2_clocks_test_000e26ac);
  FUN_000028a4(s__________________________________000e26c8);
  return 6;
}

