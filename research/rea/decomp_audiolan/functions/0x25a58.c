// rea decompile_all
// name: FUN_00025a58
// address: 0x25a58
// body: available
// range: 0x25a58-0x25ab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025a58(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint local_18;
  uint local_14 [2];
  
  FUN_0003712c(*DAT_00025ab4,&local_18,local_14);
  iVar2 = DAT_00025ab8;
  if ((((uint)(*(uint *)(DAT_00025ab8 + 0x48) <= DAT_00025abc) <=
        (uint)-*(int *)(DAT_00025ab8 + 0x4c)) && (local_18 < DAT_00025ac0)) &&
     ((uint)(*(uint *)(DAT_00025ab8 + 0x48) <= local_18) <= (uint)-*(int *)(DAT_00025ab8 + 0x4c))) {
    piVar1 = (int *)(DAT_00025ab8 + 0x44);
    *(undefined4 *)(DAT_00025ab8 + 0x40) = *(undefined4 *)(DAT_00025ab8 + 0x40);
    *(int *)(iVar2 + 0x44) = *piVar1 + 1;
  }
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(uint *)(iVar2 + 0x48) = local_18;
  param_1[1] = *(uint *)(iVar2 + 0x44);
  *param_1 = local_18;
  param_1[2] = local_14[0];
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

