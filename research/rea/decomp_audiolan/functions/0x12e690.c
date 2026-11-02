// rea decompile_all
// name: FUN_0012e690
// address: 0x12e690
// body: available
// range: 0x12e690-0x12e74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0012e690(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [12];
  
  uVar4 = 0;
  uVar3 = 0;
  if (*(short *)((int)param_1 + 10) != 0) {
    do {
      uVar1 = FUN_001375f0(*param_1,*(undefined2 *)(param_1[1] + uVar3 * 8));
      FUN_0010f5fc(auStack_28,uVar1);
      iVar2 = FUN_0015e90c(param_2);
      if (((iVar2 != 0) || (iVar2 = FUN_0015e940(param_2,auStack_28), iVar2 != 0)) ||
         ((iVar2 = FUN_0015e8f8(param_2), iVar2 != 0 &&
          (iVar2 = FUN_0010f544(auStack_28,param_2), iVar2 != 0)))) {
        uVar4 = 1;
        *(undefined1 *)(param_1[1] + uVar3 * 8 + 4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)param_1 + 10));
  }
  return uVar4;
}

