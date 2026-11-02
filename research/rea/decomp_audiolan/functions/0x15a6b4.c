// rea decompile_all
// name: FUN_0015a6b4
// address: 0x15a6b4
// body: available
// range: 0x15a6b4-0x15a7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015a6b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar1 * 4) != *(int *)(param_2 + iVar1 * 4)) {
      return 0;
    }
    if (*(int *)(param_1 + iVar1 * 4 + 4) != *(int *)(param_2 + iVar1 * 4 + 4)) break;
    iVar1 = iVar1 + 2;
    if (5 < iVar1) {
      iVar1 = 0;
      while( true ) {
        iVar2 = param_1 + iVar1 * 4;
        iVar3 = param_2 + iVar1 * 4;
        if (*(int *)(iVar2 + 0x18) != *(int *)(iVar3 + 0x18)) {
          return 0;
        }
        if (*(int *)(iVar2 + 0x1c) != *(int *)(iVar3 + 0x1c)) break;
        iVar1 = iVar1 + 2;
        if (5 < iVar1) {
          iVar1 = 0;
          while( true ) {
            iVar2 = param_1 + iVar1 * 4;
            iVar3 = param_2 + iVar1 * 4;
            if (*(int *)(iVar2 + 0x30) != *(int *)(iVar3 + 0x30)) {
              return 0;
            }
            if (*(int *)(iVar2 + 0x34) != *(int *)(iVar3 + 0x34)) break;
            iVar1 = iVar1 + 2;
            if (5 < iVar1) {
              iVar1 = 0;
              while( true ) {
                iVar2 = param_1 + iVar1 * 4;
                iVar3 = param_2 + iVar1 * 4;
                if ((*(int *)(iVar2 + 0x48) != *(int *)(iVar3 + 0x48)) ||
                   (*(int *)(iVar2 + 0x4c) != *(int *)(iVar3 + 0x4c))) break;
                iVar1 = iVar1 + 2;
                if (5 < iVar1) {
                  return 1;
                }
              }
              return 0;
            }
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

