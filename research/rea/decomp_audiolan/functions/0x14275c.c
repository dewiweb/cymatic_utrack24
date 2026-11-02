// rea decompile_all
// name: FUN_0014275c
// address: 0x14275c
// body: available
// range: 0x14275c-0x14281b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014275c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_28 [8];
  
  FUN_001179e0();
  FUN_0010e728(auStack_28,param_2);
  iVar1 = FUN_0015e6b4(auStack_28);
  if (iVar1 == 0) {
    FUN_001179d0(param_1);
  }
  else {
    uVar2 = FUN_0015e89c(auStack_28);
    piVar3 = (int *)FUN_00130b9c(param_1 + 100,param_1,uVar2,param_3,param_4,param_5,param_6,param_7
                                );
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 0x40020;
    FUN_001179d0(param_1);
    if (piVar3 != (int *)0x0) {
      iVar1 = (int)piVar3 + *(int *)(*piVar3 + -0x14);
      goto LAB_00142808;
    }
  }
  iVar1 = 0;
LAB_00142808:
  FUN_0010e7f4(auStack_28);
  return iVar1;
}

