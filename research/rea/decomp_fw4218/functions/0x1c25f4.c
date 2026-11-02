// rea decompile_all
// name: FUN_001c25f4
// address: 0x1c25f4
// body: available
// range: 0x1c25f4-0x1c26eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001c25f4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar1 = FUN_0022d168(param_5);
  if (param_4 == 0) {
    pcVar2 = s_Not_OK_001c26f0;
  }
  else {
    pcVar2 = &DAT_001c26ec;
  }
  FUN_00002898(DAT_001c26f8,param_3,pcVar2,uVar1);
  *(char *)(param_1 + 0x21) = *(char *)(param_1 + 0x21) + '\x01';
  FUN_000f4e84();
  uVar1 = FUN_000f4fb4();
  uVar3 = FUN_001b2750(uVar1);
  if (uVar3 == 1) {
    uVar3 = FUN_000bd4d8(param_1 + -0x88,param_5);
    if (*(uint *)(param_1 + 0x1c) < uVar3) {
      *(uint *)(param_1 + 0x1c) = uVar3;
    }
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
      (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),0x1f);
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x21);
    if ((uVar3 == *(byte *)(param_1 + 0x20)) &&
       (uVar3 = *(uint *)(param_1 + 0x1c), *(int *)(param_1 + 0x18) < (int)uVar3)) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
      uVar3 = FUN_000e786c(param_1 + -0x9c);
    }
  }
  return uVar3;
}

