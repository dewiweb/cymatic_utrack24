// rea decompile_all
// name: FUN_000f52f4
// address: 0xf52f4
// body: available
// range: 0xf52f4-0xf537f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f52f4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [8];
  
  FUN_001a2920(auStack_18,param_1 + 0xa0);
  local_24 = FUN_002342ec(param_1 + 0x3c8);
  while( true ) {
    local_20 = FUN_00234294(param_1 + 0x3c8);
    local_1c = local_20;
    iVar2 = FUN_0022488c(&local_24,&local_1c);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)FUN_0022c280(&local_24);
    (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,param_1 + 0x100,param_2);
    FUN_002095b4(&local_24);
  }
  FUN_001a2938(auStack_18);
  return;
}

