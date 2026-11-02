// rea decompile_all
// name: FUN_0018a3e8
// address: 0x18a3e8
// body: available
// range: 0x18a3e8-0x18a4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0018a3e8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_28 [8];
  undefined2 local_20 [2];
  
  uVar5 = 0;
  piVar1 = (int *)FUN_001a03a8(**(undefined4 **)(param_1 + 0x7c),param_3);
  if (piVar1 != (int *)0x0) {
    FUN_00171e90(auStack_28);
    if (param_4 < *(ushort *)((int)piVar1 + 0x3e)) {
      do {
        (**(code **)(*piVar1 + 0x54))(piVar1,param_4,auStack_28,local_20);
        uVar5 = 1;
        uVar4 = (uint)(*(ushort *)((int)piVar1 + 0x3e) - 1 == param_4);
        uVar2 = FUN_001beccc(auStack_28);
        iVar3 = FUN_00197084(param_2,local_20[0],uVar2,uVar4);
        if ((iVar3 != 0) || ((param_5 & ~uVar4) == 0)) break;
        param_4 = param_4 + 1 & 0xfffeffff;
      } while (param_4 < *(ushort *)((int)piVar1 + 0x3e));
    }
    FUN_00171ea4(auStack_28);
  }
  return uVar5;
}

