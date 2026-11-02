// rea decompile_all
// name: FUN_00092258
// address: 0x92258
// body: available
// range: 0x92258-0x9230f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00092258(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  param_1[0xc] = iVar1;
  if (param_1[0xc] == 0) {
    FUN_00002898(DAT_00092310);
    uVar2 = 0;
  }
  else {
    FUN_00067e6c(param_1 + 0xd,param_1[0xc]);
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    param_1[10] = iVar1;
    if (param_1[10] == 0) {
      FUN_00002898(DAT_00092314);
      uVar2 = 0;
    }
    else {
      FUN_00067e6c(param_1 + 0xd,param_1[10]);
      iVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
      param_1[0xb] = iVar1;
      if (param_1[0xb] == 0) {
        FUN_00002898(DAT_00092318);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

