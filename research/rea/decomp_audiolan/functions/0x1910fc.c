// rea decompile_all
// name: FUN_001910fc
// address: 0x1910fc
// body: available
// range: 0x1910fc-0x191161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001910fc(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0x20) {
    piVar2 = (int *)(param_1 * 0x18 + DAT_00191164);
    if ((*piVar2 != 0) && (piVar2 != (int *)0x0)) {
      if ((int)param_2 < 1) {
        param_2 = 0;
      }
      else if (0xfe < (int)param_2) {
        param_2 = 0xff;
      }
      iVar1 = FUN_0019db5c(*piVar2,param_2 & 0xff);
      if (iVar1 != 0) {
        if (*(char *)*piVar2 != '\x10') {
          piVar2[4] = 0x5f;
          return 0x5f;
        }
        if ((uint)-iVar1 < 0x11) {
          iVar1 = *(int *)(DAT_00191168 + iVar1 * -4);
        }
        else {
          iVar1 = 5;
        }
        piVar2[4] = iVar1;
        return 0xffffffff;
      }
      piVar2[4] = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

