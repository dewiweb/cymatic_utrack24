// rea decompile_all
// name: FUN_001567a8
// address: 0x1567a8
// body: available
// range: 0x1567a8-0x15684b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_001567a8(int *param_1,undefined2 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  FUN_00155850();
  param_1[9] = DAT_0015684c;
  *(undefined2 *)(param_1 + 0x30) = param_2;
  FUN_00171828(param_1 + 0xe,param_3);
  param_1[0x29] = param_4;
  param_1[0x2a] = param_5;
  *(undefined2 *)((int)param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = 0x400U - iVar1 & 0xffff;
  if ((uint)(param_4 - param_5) < uVar2) {
    uVar2 = param_4 - param_5 & 0xffff;
  }
  if (uVar2 != 0) {
    iVar1 = FUN_001c6a94(uVar2,DAT_00156850);
    param_1[0x38] = iVar1;
    if (iVar1 != 0) {
      *(short *)((int)param_1 + 0xd6) = (short)uVar2;
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return *(undefined2 *)((int)param_1 + 0xd6);
}

