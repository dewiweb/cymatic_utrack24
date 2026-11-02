// rea decompile_all
// name: FUN_00232f6c
// address: 0x232f6c
// body: available
// range: 0x232f6c-0x23305f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00232f6c(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  
  if ((param_2 != 0 && param_3 != 0) && ((param_1[1] & 8U) != 0)) {
    uVar2 = param_1[3];
    if (param_1[2] + uVar2 <= (uint)(param_1[9] + param_3)) {
      local_14 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
      if (local_14 < uVar2 + 1) {
        local_14 = uVar2 + 1;
      }
      local_18 = uVar2 + param_3;
      puVar1 = &local_14;
      if ((int)local_14 <= (int)(uVar2 + param_3)) {
        puVar1 = &local_18;
      }
      (**(code **)(*param_1 + 0xc))(param_1,0,*puVar1);
    }
    FUN_000039e0(param_1[9],param_2,param_3);
    uVar2 = param_1[9] + param_3;
    if ((uint)param_1[10] <= uVar2) {
      param_1[10] = uVar2;
      param_1[9] = param_1[9];
      if ((param_1[1] & 4U) != 0) {
        param_1[7] = uVar2;
      }
    }
    param_1[9] = param_1[9] + param_3;
    return param_3;
  }
  return 0;
}

