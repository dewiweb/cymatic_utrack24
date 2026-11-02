// rea decompile_all
// name: FUN_000b2f24
// address: 0xb2f24
// body: available
// range: 0xb2f24-0xb2ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b2f24(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *local_10;
  
  piVar1 = (int *)*param_1;
  if ((int *)param_1[1] != piVar1) {
    do {
      if (*(char *)(*piVar1 + 4) == *(char *)(param_2 + 4)) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while ((int *)param_1[1] != piVar1);
  }
  local_10 = param_4;
  local_10 = (undefined4 *)FUN_001f01c4(0x18,1);
  if (local_10 != (undefined4 *)0x0) {
    *local_10 = DAT_000b2ff4;
    *(undefined1 *)(local_10 + 1) = *(undefined1 *)(param_2 + 4);
    local_10[2] = *(undefined4 *)(param_2 + 8);
    local_10[3] = *(undefined4 *)(param_2 + 0xc);
    local_10[4] = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(local_10 + 5) = *(undefined1 *)(param_2 + 0x14);
    *(undefined1 *)((int)local_10 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    puVar2 = (undefined4 *)param_1[1];
    if (puVar2 == (undefined4 *)param_1[2]) {
      FUN_002421a8(param_1,puVar2,&local_10);
    }
    else {
      param_1[1] = (int)(puVar2 + 1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_10;
      }
    }
    return 1;
  }
  return 0;
}

