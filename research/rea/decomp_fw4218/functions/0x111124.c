// rea decompile_all
// name: FUN_00111124
// address: 0x111124
// body: available
// range: 0x111124-0x11127f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00111124(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar4 = 1;
  if (param_3 == 3) {
    uVar5 = FUN_000032fc(param_2[2],0);
  }
  else if (param_3 < 2) goto LAB_001111e0;
  FUN_00003d18(param_2[1],&DAT_00111280);
  iVar1 = FUN_00003d18(param_2[1],s_HEAPNC_00111288);
  if (iVar1 == 0) {
    iVar4 = 10;
  }
  iVar1 = FUN_00003d18(param_2[1],&DAT_00111290);
  if (iVar1 == 0) {
    iVar4 = 2;
  }
  iVar1 = FUN_00003d18(param_2[1],&DAT_00111298);
  if (iVar1 == 0) {
    iVar4 = 4;
  }
  iVar1 = FUN_00003d18(param_2[1],s_TCMWCB_001112a0);
  if (iVar1 == 0) {
    iVar4 = 5;
  }
  iVar1 = FUN_00003d18(param_2[1],&DAT_001112a8);
  if (iVar1 == 0) {
    iVar4 = 6;
  }
  iVar1 = FUN_00003d18(param_2[1],&DAT_001112b0);
  if (iVar1 == 0) {
    iVar4 = 8;
  }
  iVar1 = FUN_00003d18(param_2[1],s_AHBNC_001112b4);
  if (iVar1 == 0) {
    iVar4 = 9;
  }
LAB_001111e0:
  if (((param_3 != 0) && (iVar1 = FUN_000032fc(*param_2,0), iVar1 != 0)) &&
     (iVar2 = FUN_001f01c4(iVar1,iVar4), iVar2 != 0)) {
    FUN_00002898(s_testing_size__lu_Bytes__oCount___001112bc,iVar1,uVar5,iVar2);
    iVar1 = FUN_00012d6c();
    iVar3 = FUN_00012d6c();
    FUN_00002898(s_TIME_in_secs____d_001112ec,iVar3 - iVar1);
    uVar5 = 0;
    if (iVar4 != 5) {
      uVar5 = FUN_001eecc8(iVar2,extraout_r1,0);
    }
    FUN_00002898(s_free_0x_08x__ret__d_00111300,iVar2,uVar5);
  }
  return 0;
}

