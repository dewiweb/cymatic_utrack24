// rea decompile_all
// name: FUN_00086914
// address: 0x86914
// body: available
// range: 0x86914-0x8696f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00086914(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined1 auStack_1c [8];
  
  local_28[0] = *(undefined1 *)(param_2 + 4);
  iVar2 = param_1 + 0x8a0;
  param_1 = param_1 + DAT_00086970;
  iVar1 = iVar2;
  if (param_3 != 2) {
    iVar1 = param_1;
  }
  FUN_00233870(&local_24,iVar1,local_28);
  iVar1 = iVar2;
  if (param_3 != 2) {
    iVar1 = param_1;
  }
  if (local_24 != *(int *)(iVar1 + 0x10)) {
    if (param_3 != 2) {
      iVar2 = param_1;
    }
    local_20 = local_24;
    FUN_0021ba7a(auStack_1c,iVar2,&local_20);
    return 1;
  }
  return 1;
}

