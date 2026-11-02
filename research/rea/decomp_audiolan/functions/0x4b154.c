// rea decompile_all
// name: FUN_0004b154
// address: 0x4b154
// body: available
// range: 0x4b154-0x4b223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0004b154(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_28;
  
  iVar2 = 0;
  local_28 = param_4;
  if (0 < param_3) {
    do {
      while( true ) {
        FUN_001b714c(&local_28);
        if (*(char *)(param_1 + 0x3c) != '\0') {
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
          *(undefined1 *)(param_1 + 0x3c) = 0;
          *(undefined1 *)(param_1 + 0x3d) = 1;
        }
        puVar1 = *(undefined1 **)(param_1 + 0x38) + 1;
        if (*(undefined1 **)(param_1 + 0x30) <= puVar1) {
          puVar1 = *(undefined1 **)(param_1 + 0x2c);
        }
        if (*(undefined1 **)(param_1 + 0x34) == puVar1) break;
        **(undefined1 **)(param_1 + 0x38) = *(undefined1 *)(param_2 + iVar2);
        *(undefined1 **)(param_1 + 0x38) = puVar1;
        FUN_001b7160(local_28);
        FUN_0017b0f0(param_1 + 0xc);
        iVar2 = iVar2 + 1;
        if (*(char *)(param_1 + 0x3e) != '\0') {
          return iVar2;
        }
        if (param_3 <= iVar2) {
          return iVar2;
        }
      }
      FUN_001b7160(local_28);
      thunk_EXT_FUN_004001ec(param_1 + 0x44,0xffffffff);
      thunk_EXT_FUN_00400100(param_1 + 0x44);
    } while (*(char *)(param_1 + 0x3e) == '\0');
  }
  return iVar2;
}

