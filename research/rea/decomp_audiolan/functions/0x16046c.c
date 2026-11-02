// rea decompile_all
// name: FUN_0016046c
// address: 0x16046c
// body: available
// range: 0x16046c-0x16052b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0016046c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar3 = (uint)*(ushort *)(iVar4 + 0x30);
  if ((*(int *)(iVar4 + 0x20) == 0 || uVar3 <= *(ushort *)(iVar4 + 0x32)) ||
     (iVar1 = (uint)*(ushort *)(iVar4 + 0x2e) * (uint)*(ushort *)(iVar4 + 0x32) +
              *(int *)(iVar4 + 0x20) + iVar4, iVar1 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + *(int *)(iVar1 + 0x10);
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(iVar1 + 0x20);
      if (iVar2 != 0) {
        uVar3 = (uint)*(ushort *)(iVar1 + 0x30);
      }
      if (iVar2 == 0 || uVar3 <= uVar5) {
        return (int *)0x0;
      }
      piVar6 = (int *)(uVar5 * *(ushort *)(iVar1 + 0x2e) + iVar1 + iVar2);
      if (piVar6 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = FUN_00003960(*piVar6 + iVar4,param_2);
      if (iVar1 == 0) {
        return piVar6;
      }
      uVar5 = uVar5 + 1;
      uVar3 = extraout_r2;
    } while (uVar5 < *(ushort *)(*(int *)(param_1 + 4) + 0x30));
  }
  return (int *)0x0;
}

