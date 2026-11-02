// rea decompile_all
// name: FUN_00132af8
// address: 0x132af8
// body: available
// range: 0x132af8-0x132bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00132af8(undefined4 *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      iVar2 = FUN_0013f040(*param_1,*(undefined2 *)(param_1[2] + uVar3 * 8));
      if (((iVar2 != 0) && (iVar2 = FUN_0015e940(iVar2,param_2), iVar2 != 0)) &&
         (*(short *)(param_1[2] + uVar3 * 8 + 2) == *(short *)(param_2 + 0xc))) {
        uVar1 = *(ushort *)(param_1[2] + uVar3 * 8 + 4);
        if ((param_3 & 0x200000) == 0) {
          uVar1 = uVar1 & 0xfffe;
        }
        else {
          uVar1 = uVar1 | 1;
        }
        *(ushort *)(param_1[2] + uVar3 * 8 + 4) = uVar1;
        return 1;
      }
      uVar3 = uVar3 + 1 & 0xfffeffff;
    } while (uVar3 < *(ushort *)(param_1 + 4));
  }
  return 0;
}

