// rea decompile_all
// name: FUN_000581f8
// address: 0x581f8
// body: available
// range: 0x581f8-0x582eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_000581f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_3c [24];
  undefined1 auStack_24 [8];
  
  FUN_001a2920(auStack_24,param_1 + 0x2c);
  FUN_000649c4(param_3,0);
  FUN_000649bc(param_3,0);
  FUN_0011ae60(auStack_3c,0xffffffff,0,0,0,0xffffffff);
  piVar1 = (int *)FUN_0022bc6c(param_1 + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,param_2,auStack_3c,param_4);
  if (iVar2 != 0) {
    uVar3 = FUN_001ba360(auStack_3c);
    FUN_000649cc(param_3,uVar3);
    uVar3 = FUN_001ba36c(auStack_3c);
    FUN_000649d4(param_3,uVar3);
    FUN_001a2938(auStack_24);
  }
  else {
    FUN_00002898(DAT_000582ec,param_2,param_4);
    FUN_001a2938(auStack_24);
  }
  return iVar2 != 0;
}

