// rea decompile_all
// name: FUN_000fd9a0
// address: 0xfd9a0
// body: available
// range: 0xfd9a0-0xfda3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fd9a0(int param_1,int param_2)

{
  int iVar1;
  int local_2c [3];
  undefined1 auStack_20 [20];
  
  if ((*(char *)(param_1 + 0x28d) == '\0') && (param_2 != 0)) {
    iVar1 = 0;
    if (param_1 != -0x288) {
      iVar1 = *(int *)(param_1 + 0x288);
    }
    if (param_1 != -0x288 && iVar1 != 0) {
      *(int *)(param_1 + 0x284) = iVar1;
      *(undefined4 *)(param_1 + 0x288) = 0;
      FUN_001df274(param_1 + 0x284,auStack_20,0x10);
      local_2c[0] = *(int *)(*(int *)(param_1 + 0x274) + 8);
      if (local_2c[0] != *(int *)(param_1 + 0x274)) {
        do {
          (**(code **)(**(int **)(local_2c[0] + 0x10) + 8))
                    (*(int **)(local_2c[0] + 0x10),auStack_20);
          FUN_00209818(local_2c);
        } while (local_2c[0] != *(int *)(param_1 + 0x274));
      }
    }
  }
  *(char *)(param_1 + 0x28d) = (char)param_2;
  return;
}

