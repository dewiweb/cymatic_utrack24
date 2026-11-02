// rea decompile_all
// name: FUN_00174230
// address: 0x174230
// body: available
// range: 0x174230-0x1742a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00174230(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  if (param_2 != (undefined4 *)0x0) {
    local_18 = param_4;
    FUN_00173bc8(&local_18,param_1);
    iVar1 = local_18;
    if (local_18 != 0) {
      *(undefined4 *)(local_18 + 0x124) = *param_2;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined4 *)(local_18 + 0x11c) = *param_3;
      }
      if (param_4 != 0) {
        *(undefined4 *)(local_18 + 0x118) = *(undefined4 *)(param_4 + 4);
      }
      *(undefined4 *)(local_18 + 0x104) = param_2[5];
      if (param_4 != 0) {
        if (*(int *)(param_4 + 0x20) != 0) {
          FUN_001a4d9c(*(int *)(param_4 + 0x20),local_18 + 0x108);
        }
        if (*(int *)(param_4 + 0x24) != 0) {
          FUN_001a4d9c(*(int *)(param_4 + 0x24),iVar1 + 0x10c);
        }
        if (*(int *)(param_4 + 0x28) != 0) {
          FUN_001a4d9c(*(int *)(param_4 + 0x28),iVar1 + 0x110);
        }
      }
      return local_18;
    }
  }
  return 0;
}

