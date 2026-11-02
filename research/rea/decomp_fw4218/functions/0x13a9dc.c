// rea decompile_all
// name: FUN_0013a9dc
// address: 0x13a9dc
// body: available
// range: 0x13a9dc-0x13abff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0013a9dc(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    iVar1 = FUN_00003d18(&DAT_0013ac00,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,0,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac04,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac08,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,2,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac0c,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,3,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac10,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,4,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac14,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,5,1);
      return 0;
    }
    iVar1 = FUN_00003d18(&DAT_0013ac18,*param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,0,1);
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,1);
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,2,1);
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,3,1);
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,4,1);
      uVar2 = FUN_000f8ee0();
      FUN_000f8e60(uVar2,5,1);
      return 0;
    }
  }
  FUN_00002898(s_____Production_Tests_____________0013ac1c);
  FUN_00002898(s_Usage__ptest_N_0013ac48);
  FUN_00002898(s_N_all__execute_all_tests_0013ac60);
  FUN_00002898(s_N_1__GPIO_test__0__3__>_4__7__0013ac80);
  FUN_00002898(s_N_2__UART0_test_0013aca8);
  FUN_00002898(s_N_3__SPI_test_0013acc0);
  FUN_00002898(s_N_4__AV_0_2_test__AV0__>_AV2__0013acd8);
  FUN_00002898(s_N_5__AV_4_test__D0__>_D1__0013ad00);
  FUN_00002898(s_N_6__Crypto_chip_test__presence_a_0013ad24);
  FUN_00002898(s__________________________________0013ad58);
  return 6;
}

