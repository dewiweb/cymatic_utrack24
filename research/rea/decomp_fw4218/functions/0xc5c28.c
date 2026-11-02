// rea decompile_all
// name: FUN_000c5c28
// address: 0xc5c28
// body: available
// range: 0xc5c28-0xc5cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c5c28(int *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  (**(code **)(*param_1 + 0xa4))(param_1,param_5);
  uVar2 = (uint)*(byte *)((int)param_1 + 0x319);
  bVar1 = (param_5 == 2 || param_5 == 4) || param_5 == 6;
  bVar3 = uVar2 == param_2;
  if (bVar3) {
    uVar2 = param_1[199];
  }
  if (bVar3 && uVar2 == param_3) {
    uVar2 = param_1[200];
    bVar3 = uVar2 == param_4;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0xc9);
    }
    if (bVar3 && uVar2 == bVar1) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xc6) = 0;
  FUN_000c1a78(param_1,param_2);
  *(char *)((int)param_1 + 0x319) = (char)param_2;
  param_1[0xca] = 0;
  *(undefined1 *)((int)param_1 + 0x31a) = 1;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  param_1[199] = param_3;
  param_1[200] = param_4;
  *(bool *)(param_1 + 0xc9) = bVar1;
  return;
}

