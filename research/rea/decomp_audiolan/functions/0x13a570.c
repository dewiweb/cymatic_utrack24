// rea decompile_all
// name: FUN_0013a570
// address: 0x13a570
// body: available
// range: 0x13a570-0x13a617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0013a570(int param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5,
                 undefined2 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 0x188);
  *(short *)(param_1 + 0x4c) = (short)DAT_0013a618;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar4 = 0;
  FUN_0010f738(param_1 + 0x1c);
  iVar2 = FUN_0016d7a4(0xe0,DAT_0013a61c);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0013b694(iVar2,0,param_3,0,0x85);
    if (piVar3 != (int *)0x0) {
      *(undefined2 *)(piVar3 + 0x1c) = param_4;
      *(undefined2 *)((int)piVar3 + 0x72) = param_5;
      *(undefined2 *)(piVar3 + 0x1d) = param_6;
      uVar4 = FUN_00119118(param_3 + 0x658,param_1,piVar3);
      uVar4 = (uVar4 & 0x80) >> 7;
      (**(code **)(*piVar3 + 0x3c))(piVar3);
    }
  }
  return uVar4;
}

