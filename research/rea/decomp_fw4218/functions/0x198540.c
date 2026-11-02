// rea decompile_all
// name: FUN_00198540
// address: 0x198540
// body: available
// range: 0x198540-0x19860b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00198540(int *param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (param_2 < *(ushort *)(param_1 + 1)) {
    iVar2 = param_2 * 0x10 + 0xc;
    sVar1 = *(short *)(*param_1 + iVar2);
    if (sVar1 != 0) {
      *(short *)(*param_1 + iVar2) = sVar1 + -1;
      if (sVar1 == 1) {
        *(undefined1 *)(*param_1 + param_2 * 0x10 + 0xe) = 0;
        *(undefined1 *)(*param_1 + param_2 * 0x10 + 0xf) = 0;
        FUN_00172728(*param_1 + param_2 * 0x10,DAT_0019860c);
        uVar6 = 1;
      }
    }
  }
  uVar3 = (uint)*(ushort *)(param_1 + 1);
  uVar4 = 0;
  if (uVar3 != 0) {
    psVar5 = (short *)(*param_1 + 0xc);
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 8;
      if (sVar1 != 0) {
        uVar4 = uVar4 + 1 & 0xfffeffff;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (uVar4 != 0) {
      return uVar6;
    }
  }
  FUN_001987a4(param_1,2);
  return uVar6;
}

