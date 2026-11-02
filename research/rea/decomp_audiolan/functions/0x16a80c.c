// rea decompile_all
// name: FUN_0016a80c
// address: 0x16a80c
// body: available
// range: 0x16a80c-0x16a8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016a80c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_30 [12];
  
  iVar4 = *(int *)(*param_1 + -0x8c) + (int)param_1;
  if (param_5 == 0) {
    return 0;
  }
  FUN_001179e0(iVar4);
  FUN_0010e728(auStack_30,param_2);
  iVar1 = FUN_0015e6b4(auStack_30);
  if (iVar1 == 0) {
    FUN_001179d0(iVar4);
  }
  else {
    uVar2 = FUN_0015e89c(auStack_30);
    piVar3 = (int *)FUN_00130d88(iVar4 + 100,iVar4,uVar2,param_3);
    *(uint *)(iVar4 + 0x68) = *(uint *)(iVar4 + 0x68) | 0x40008;
    FUN_001179d0(iVar4);
    if (piVar3 != (int *)0x0) {
      iVar4 = *(int *)(*piVar3 + -0x14) + (int)piVar3;
      goto LAB_0016a8dc;
    }
  }
  iVar4 = 0;
LAB_0016a8dc:
  FUN_0010e7f4(auStack_30);
  return iVar4;
}

