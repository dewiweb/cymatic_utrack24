// rea decompile_all
// name: FUN_001e1450
// address: 0x1e1450
// body: available
// range: 0x1e1450-0x1e14cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e1450(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  
  if (param_1 < 0x20) {
    piVar2 = (int *)(param_1 * 0x18 + DAT_001e14cc);
    if ((*piVar2 != 0) && (piVar2 != (int *)0x0)) {
      if (((param_3 == 0x10) && (*(char *)(param_2 + 1) == '\x02')) && ((param_2 & 3) == 0)) {
        local_18 = *(undefined4 *)(param_2 + 4);
        iVar1 = FUN_001ed5a4(*piVar2,&local_18,
                             *(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8);
        if (iVar1 != 0) {
          if ((uint)-iVar1 < 0x11) {
            iVar1 = *(int *)(DAT_001e1524 + iVar1 * -4);
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
      local_18 = param_4;
      FUN_00013290(s_Assertion___s__failed_at_line__d_001e14f0,
                   s___lwip_bind__invalid_address_001e14d2 + 2,0x1b4,_DAT_001e14d0);
      piVar2[4] = 5;
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

