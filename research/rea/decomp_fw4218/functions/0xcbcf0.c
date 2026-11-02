// rea decompile_all
// name: FUN_000cbcf0
// address: 0xcbcf0
// body: available
// range: 0xcbcf0-0xcbd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000cbcf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6)

{
  int *piVar1;
  int iVar2;
  uint extraout_r1;
  undefined1 auStack_60 [63];
  undefined1 local_21;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_00003cac(auStack_60,param_4,0x40);
  local_21 = 0;
  piVar1 = (int *)FUN_002337a8(param_1 + 0x24,&uStack_1c);
  if (*piVar1 != 0) {
    FUN_001dae24();
    *piVar1 = 0;
  }
  *(undefined1 *)(piVar1 + 4) = 1;
  iVar2 = thunk_FUN_001d2848();
  FUN_001c6f68(iVar2 * 0x55);
  if (param_6 < extraout_r1) {
    iVar2 = FUN_001eb840(param_6);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[5] = 0;
      return 1;
    }
    FUN_00002898(DAT_000cbd64,param_6);
  }
  else {
    FUN_00002898(DAT_000cbd68);
  }
  piVar1[5] = 2;
  return 1;
}

