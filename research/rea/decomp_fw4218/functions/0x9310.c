// rea decompile_all
// name: FUN_00009310
// address: 0x9310
// body: available
// range: 0x9310-0x93bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00009310(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  
  local_18 = param_4;
  local_18 = FUN_0000a2e8(param_2);
  if (local_18 != -1) {
    iVar3 = param_1 + 0x118;
    FUN_001f00bc(iVar3);
    piVar1 = (int *)FUN_00233d2c(param_1 + 0x15c,&local_18);
    if ((char)piVar1[8] != '\0') {
      FUN_001f06d4(iVar3);
      return 1;
    }
    if (*piVar1 != 0) {
      uVar2 = (**(code **)(*param_2 + 0xc))(param_2);
      FUN_001f06d4(iVar3);
      return uVar2;
    }
    FUN_001f06d4(iVar3);
  }
  return 0;
}

