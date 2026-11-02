// rea decompile_all
// name: FUN_000b4fac
// address: 0xb4fac
// body: available
// range: 0xb4fac-0xb50ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b4fac(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  switch(param_2) {
  case 0:
    local_18 = 0xaf;
    break;
  case 1:
    local_18 = 0xae;
    break;
  case 2:
    local_18 = 0xa6;
    break;
  case 3:
    local_18 = 0xa7;
    break;
  case 4:
    local_18 = 0xa5;
    break;
  case 5:
    local_18 = 0xa4;
    break;
  case 6:
    local_18 = 0xa0;
    break;
  case 7:
    local_18 = 0xa1;
    break;
  case 8:
    local_18 = 0xc0;
    break;
  case 9:
    local_18 = 200;
    break;
  case 10:
    local_18 = 0xe2;
    break;
  case 0xb:
    return 1;
  default:
    return 0;
  }
  FUN_00096760(*(undefined4 *)(param_1 + 4));
  puVar1 = (undefined4 *)FUN_00178f04();
  uVar2 = (**(code **)*puVar1)(puVar1,DAT_000b50f0,&local_18,1);
  return uVar2;
}

