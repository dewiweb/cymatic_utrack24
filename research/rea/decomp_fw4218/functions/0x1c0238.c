// rea decompile_all
// name: FUN_001c0238
// address: 0x1c0238
// body: available
// range: 0x1c0238-0x1c02cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001c0238(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_001c0318(param_1,*(undefined4 *)(DAT_001c02d0 + 4));
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  iVar6 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  uVar5 = (uint)*(ushort *)(iVar6 + 0x30);
  if (iVar1 != 0) {
    iVar3 = iVar3 + iVar2;
  }
  else {
    iVar3 = 0;
  }
  if (uVar5 != 0) {
    param_1 = *(int *)(iVar6 + 0x20);
  }
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      iVar2 = 0;
      if (param_1 != 0 && uVar4 < uVar5) {
        iVar2 = uVar4 * *(ushort *)(iVar6 + 0x2e) + iVar6 + param_1;
      }
      if (*(int *)(iVar2 + 4) == 2) goto LAB_001c02bc;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  iVar2 = 0;
LAB_001c02bc:
  return *(int *)(*(int *)(iVar2 + 0x10) + iVar6 + param_2 * 0x10) + iVar3;
}

