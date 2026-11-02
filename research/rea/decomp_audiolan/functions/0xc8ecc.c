// rea decompile_all
// name: FUN_000c8ecc
// address: 0xc8ecc
// body: available
// range: 0xc8ecc-0xc8f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c8ecc(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    FUN_000028a4(DAT_000c8fac);
    return 6;
  }
  iVar1 = FUN_00003960(&DAT_000c8f70,*param_2);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_00003960(&DAT_000c8f78,*param_2);
    if (iVar1 == 0) {
      uVar3 = 3;
    }
    else {
      iVar1 = FUN_00003960(&DAT_000c8f7c,*param_2);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = FUN_00003960(&DAT_000c8f84,*param_2);
        if (iVar1 != 0) {
          FUN_000028a4(s_sync_input___s__is_not_available_000c8f88,*param_2);
          return 6;
        }
        uVar3 = 2;
      }
    }
  }
  uVar2 = thunk_FUN_0008b5d4();
  FUN_000b7994(uVar2,uVar3);
  return 0;
}

