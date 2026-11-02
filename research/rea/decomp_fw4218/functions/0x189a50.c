// rea decompile_all
// name: FUN_00189a50
// address: 0x189a50
// body: available
// range: 0x189a50-0x189b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00189a50(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [12];
  
  uVar6 = 0;
  piVar1 = (int *)FUN_0019f8f0(**(undefined4 **)(param_1 + 0x7c),param_3);
  if (piVar1 != (int *)0x0) {
    uVar4 = param_4 - 1U & 0xffff;
    FUN_00171e90(auStack_28);
    if (uVar4 < *(ushort *)((int)piVar1 + 0x3e)) {
      do {
        (**(code **)(*piVar1 + 0x4c))(piVar1,uVar4,auStack_28);
        uVar6 = 1;
        uVar5 = (uint)(*(ushort *)((int)piVar1 + 0x3e) - 1 == uVar4);
        uVar2 = FUN_001beccc(auStack_28);
        iVar3 = FUN_00196c94(param_2,uVar2,uVar5);
        if ((iVar3 != 0) || ((param_5 & ~uVar5) == 0)) break;
        uVar4 = uVar4 + 1 & 0xfffeffff;
      } while (uVar4 < *(ushort *)((int)piVar1 + 0x3e));
    }
    FUN_00171ea4(auStack_28);
  }
  return uVar6;
}

