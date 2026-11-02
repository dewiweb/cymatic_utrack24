// rea decompile_all
// name: FUN_001a84e0
// address: 0x1a84e0
// body: available
// range: 0x1a84e0-0x1a85a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a84e0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  
  *param_1 = DAT_001a85a4;
  uStack_18 = param_4;
  uVar1 = FUN_00230470(&uStack_18);
  iVar2 = FUN_00236d08(param_1 + 1,uVar1);
  *(short *)(iVar2 + 0x18) = (short)param_2;
  *(undefined1 *)(iVar2 + 0x1a) = 99;
  *(undefined1 *)(iVar2 + 0x1b) = 99;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0x27) = 0;
  iVar3 = 0;
  do {
    if (*(char *)(_DAT_001a85a8 + iVar3 * 4) == 'c') {
LAB_001a8584:
      if (*(char *)(iVar2 + 0x1a) == 'c') {
        FUN_00002898(s___ERROR__UIRotary__ID__d_not_fou_001a85a9 + 3,param_2);
      }
      return iVar2 + -4;
    }
    if (*(ushort *)(_DAT_001a85a8 + iVar3 * 4 + 2) == param_2) {
      *(undefined1 *)(iVar2 + 0x1a) = *(undefined1 *)(_DAT_001a85a8 + iVar3 * 4);
      *(undefined1 *)(iVar2 + 0x1b) = *(undefined1 *)(_DAT_001a85a8 + iVar3 * 4 + 1);
      goto LAB_001a8584;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

