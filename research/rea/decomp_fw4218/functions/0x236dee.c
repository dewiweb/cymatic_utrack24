// rea decompile_all
// name: FUN_00236dee
// address: 0x236dee
// body: available
// range: 0x236dee-0x236e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00236dee(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_24 = (undefined4 *)param_1[4];
  if (local_24 != (undefined4 *)0x0) {
    local_28 = *local_24;
    while (iVar1 = FUN_0022d8ec(&local_28,&local_24), iVar1 != 0) {
      local_1c[0] = local_28;
      FUN_00236dc8(&local_20,param_1,local_1c);
      local_28 = local_20;
    }
    puVar2 = (undefined4 *)param_1[4];
    *puVar2 = param_1[1];
    param_1[1] = puVar2;
    while (puVar2 = (undefined4 *)*param_1, puVar2 != (undefined4 *)0x0) {
      *param_1 = *puVar2;
      FUN_00173a54(puVar2[2],puVar2[1],0);
      FUN_00173a54(puVar2,1,0);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

