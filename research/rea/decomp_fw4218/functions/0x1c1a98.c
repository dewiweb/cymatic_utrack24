// rea decompile_all
// name: FUN_001c1a98
// address: 0x1c1a98
// body: available
// range: 0x1c1a98-0x1c1b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001c1a98(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int iStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x2c);
    iStack_20 = param_1;
    local_1c = param_2;
    iStack_18 = param_3;
    if (param_3 != 0) {
      FUN_00173c4c(&local_30,0,iVar2 << 3);
      local_24 = local_2c >> 3;
      local_28 = local_30;
      if (local_30 == 0) {
        FUN_001c1b14(param_1,*(uint *)(param_1 + 0x10) | 1,0xffffffff);
        return;
      }
      FUN_00003b88(local_30,*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x30) << 3);
      iVar1 = local_30;
    }
    while (bVar3 = iVar2 != 0, iVar2 = iVar2 + -1, bVar3) {
      (**(code **)(iVar2 * 8 + iVar1 + 4))(local_1c,param_1,*(undefined4 *)(iVar1 + iVar2 * 8));
    }
    if (param_3 != 0) {
      FUN_00247ad0(iVar1);
    }
  }
  return;
}

