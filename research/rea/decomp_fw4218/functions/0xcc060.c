// rea decompile_all
// name: FUN_000cc060
// address: 0xcc060
// body: available
// range: 0xcc060-0xcc0c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000cc060(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_2c [2];
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    return 0;
  }
  iStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (undefined4 *)FUN_001f01c4(0x14,1);
  local_2c[0] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = local_20;
    local_2c[0] = FUN_000ec806(puVar1 + 1);
    local_2c[0] = local_2c[0] + -4;
  }
  uVar3 = 0;
  if (local_2c[0] != 0) {
    iVar2 = FUN_000ec790(local_2c[0] + 4,local_20,uStack_1c,uStack_18,param_5,param_6,param_7);
    if (iVar2 == 0) {
      if (local_2c[0] == 0) {
        return 0;
      }
      iVar2 = FUN_000ec82e(local_2c[0] + 4);
      FUN_001eecc8(iVar2 + -4);
      return 0;
    }
    FUN_002423f8(param_1 + 8,local_2c);
    uVar3 = 1;
  }
  return uVar3;
}

