// rea decompile_all
// name: FUN_0019666c
// address: 0x19666c
// body: available
// range: 0x19666c-0x196733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0019666c(undefined4 param_1,int param_2,undefined2 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_001c6b14(0xe0,DAT_00196734,param_3,param_4,param_4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00196908(iVar1,0,param_2,1,0xc1);
    if (piVar2 != (int *)0x0) {
      *(undefined2 *)((int)piVar2 + 0x7a) = param_3[1];
      *(undefined2 *)(piVar2 + 0x1e) = *param_3;
      *(undefined2 *)(piVar2 + 0x1f) = param_3[2];
      *(undefined2 *)((int)piVar2 + 0x7e) = param_3[3];
      *(undefined2 *)(piVar2 + 0x1c) = param_6;
      FUN_000039e0(piVar2 + 0x2a,param_4,0xc);
      FUN_00171828(piVar2 + 0x2d,param_5);
      uVar3 = FUN_0018146c(param_2 + 0x658,param_1,piVar2);
      uVar3 = (uVar3 & 0x80) >> 7;
      (**(code **)(*piVar2 + 0x3c))(piVar2);
    }
  }
  return uVar3;
}

