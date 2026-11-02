// rea decompile_all
// name: FUN_000fc97c
// address: 0xfc97c
// body: available
// range: 0xfc97c-0xfca1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000fc97c(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    FUN_00049940(s__cfg_Networking_IpCfg_Config0_DH_000fca20,1);
    if (*(char *)(param_1 + 0x22e) == '\0') goto LAB_000fca14;
    cVar1 = *(char *)(param_1 + 0x230);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        FUN_00049940(s__cfg_Networking_IpCfg_Config0_DH_000fca20,0);
        cVar1 = *(char *)(param_1 + 0x22e);
        bVar2 = cVar1 == '\0';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x230);
        }
        if (bVar2 && cVar1 == '\0') {
          return 1;
        }
      }
      goto LAB_000fca14;
    }
    FUN_00049940(s__cfg_Networking_IpCfg_Config0_DH_000fca20,0xffffffff);
    if (*(char *)(param_1 + 0x22e) != '\0') goto LAB_000fca14;
    cVar1 = *(char *)(param_1 + 0x230);
  }
  if (cVar1 != '\0') {
    return 1;
  }
LAB_000fca14:
  *(undefined1 *)(param_1 + 0x254) = 1;
  return 1;
}

