// rea decompile_all
// name: FUN_00155afc
// address: 0x155afc
// body: available
// range: 0x155afc-0x155c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00155afc(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_20;
  
  iVar2 = param_1 + 0x124;
  local_20 = param_4;
  FUN_001a0700(iVar2);
  FUN_001c6990(&local_20,param_1 + 400,param_2);
  iVar1 = local_20;
  if (local_20 == *(int *)(param_1 + 0x1a0)) {
    FUN_001a0d18(iVar2);
    return 0;
  }
  if (param_3 != (undefined4 *)(local_20 + 0x14)) {
    *param_3 = *(undefined4 *)(local_20 + 0x14);
    param_3[1] = *(undefined4 *)(local_20 + 0x18);
    FUN_001da4a8(param_3 + 2,local_20 + 0x1c);
    FUN_001da4a8(param_3 + 3,iVar1 + 0x20);
    *(undefined2 *)(param_3 + 4) = *(undefined2 *)(iVar1 + 0x24);
    *(undefined2 *)((int)param_3 + 0x12) = *(undefined2 *)(iVar1 + 0x26);
    FUN_001da4a8(param_3 + 5,iVar1 + 0x28);
    *(undefined2 *)(param_3 + 6) = *(undefined2 *)(iVar1 + 0x2c);
    FUN_001da4a8(param_3 + 7,iVar1 + 0x30);
    param_3[8] = *(undefined4 *)(iVar1 + 0x34);
    *(undefined1 *)(param_3 + 9) = *(undefined1 *)(iVar1 + 0x38);
    *(undefined1 *)((int)param_3 + 0x25) = *(undefined1 *)(iVar1 + 0x39);
    param_3[10] = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined1 *)(param_3 + 0xb) = *(undefined1 *)(iVar1 + 0x40);
    FUN_001da4a8(param_3 + 0xc,iVar1 + 0x44);
  }
  FUN_001a0d18(iVar2);
  return 1;
}

