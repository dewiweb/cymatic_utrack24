// rea decompile_all
// name: FUN_000790b4
// address: 0x790b4
// body: available
// range: 0x790b4-0x7918f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000790b4(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 2) {
    FUN_00003d18(param_2[1],&DAT_000791b4);
    iVar1 = FUN_00003d18(param_2[1],s_HEAPNC_000791bc);
    if (iVar1 == 0) {
      uVar2 = 10;
    }
    iVar1 = FUN_00003d18(param_2[1],&DAT_000791c4);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    iVar1 = FUN_00003d18(param_2[1],&DAT_000791cc);
    if (iVar1 == 0) {
      uVar2 = 4;
    }
    iVar1 = FUN_00003d18(param_2[1],&DAT_000791d4);
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    iVar1 = FUN_00003d18(param_2[1],&DAT_000791dc);
    if (iVar1 == 0) {
      uVar2 = 8;
    }
    iVar1 = FUN_00003d18(param_2[1],s_AHBNC_000791e0);
    if (iVar1 == 0) {
      uVar2 = 9;
    }
  }
  else if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_000032fc(*param_2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_001f01c4(iVar1,uVar2);
    FUN_00002898(s_malloc_size__lu_Bytes__ptr_0x_x_00079190,iVar1,uVar2);
  }
  return 0;
}

