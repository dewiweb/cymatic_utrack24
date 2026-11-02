// rea decompile_all
// name: FUN_001962a8
// address: 0x1962a8
// body: available
// range: 0x1962a8-0x19638f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001962a8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_4 + 0x188);
  *(short *)(param_1 + 0x4c) = (short)DAT_00196390;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar4 = 0;
  FUN_00172810(param_1 + 0x1c);
  iVar2 = FUN_0014d51c(param_1,1);
  if (iVar2 == 0) {
    FUN_0014d48c(param_1,param_3);
  }
  iVar2 = FUN_001c6b14(0xe0,DAT_00196394);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00196908(iVar2,0,param_4,1,0x4a);
    if (piVar3 != (int *)0x0) {
      *(undefined2 *)((int)piVar3 + 0x7a) = param_5[1];
      *(undefined2 *)(piVar3 + 0x1e) = *param_5;
      *(undefined2 *)(piVar3 + 0x1f) = param_5[2];
      *(undefined2 *)((int)piVar3 + 0x7e) = param_5[3];
      FUN_00171ed0(piVar3 + 0x2d,param_6);
      uVar4 = FUN_0018146c(param_4 + 0x658,param_1,piVar3);
      uVar4 = (uVar4 & 0x80) >> 7;
      (**(code **)(*piVar3 + 0x3c))(piVar3);
    }
  }
  return uVar4;
}

