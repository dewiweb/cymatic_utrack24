// rea decompile_all
// name: FUN_001a83f4
// address: 0x1a83f4
// body: available
// range: 0x1a83f4-0x1a848b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a83f4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_00236b0c(&uStack_18,param_1 + 4);
  while( true ) {
    FUN_00236aec(&uStack_14,param_1 + 4);
    iVar3 = FUN_0022d8cc(&uStack_18,&uStack_14);
    if (iVar3 == 0) {
      FUN_00002898(s_ERROR__UIRotary__removeRotaryHan_001a848c);
      return 0;
    }
    piVar1 = (int *)FUN_0022d898(&uStack_18);
    if (*piVar1 == param_2) break;
    FUN_00232c38(&uStack_18);
  }
  uVar2 = FUN_00232c2c(&iStack_20,&uStack_18);
  FUN_00236b2c(&iStack_1c,param_1 + 4,uVar2);
  return 1;
}

