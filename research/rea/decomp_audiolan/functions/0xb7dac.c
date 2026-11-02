// rea decompile_all
// name: FUN_000b7dac
// address: 0xb7dac
// body: available
// range: 0x14b74-0x14b7b inclusive
// range: 0xb7dac-0xb7e43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14b78 to 0x15c49c FUN_0015c49c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b7dac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1d0) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1d0) + 0x164);
    if ((iVar1 != 0) &&
       (piVar2 = (int *)FUN_0016deb0(iVar1,DAT_000b7e48,DAT_000b7e44,0xffffffff),
       piVar2 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000b7e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,param_2,param_3);
      return uVar3;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1d0) + 0x164);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_0016deb0(iVar1,DAT_000b7e48,DAT_000b7e4c,0xffffffff), iVar1 != 0)) {
      uVar3 = FUN_0015c49c(iVar1 + 0x48,param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}

