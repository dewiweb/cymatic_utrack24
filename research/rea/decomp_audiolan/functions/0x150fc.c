// rea decompile_all
// name: FUN_000150fc
// address: 0x150fc
// body: available
// range: 0x150fc-0x15177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000150fc(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int local_10;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(DAT_00015178 + 0x18);
  local_10 = param_2;
  iVar1 = thunk_EXT_FUN_004005e0(*(undefined4 *)(param_1 + 8),&local_10,0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(*(int *)(param_1 + 0x14) + 4) + 1;
  if (*(code **)(param_1 + 0x28) != entry) {
    (**(code **)(param_1 + 0x28))
              ((int)*(short *)(param_1 + 0x20),3,0,*(undefined4 *)(param_1 + 0x2c));
  }
  cVar2 = *(char *)(local_10 + -4) + -1;
  *(char *)(local_10 + -4) = cVar2;
  if (cVar2 == '\0') {
    FUN_00179ff4();
  }
  return;
}

