// rea decompile_all
// name: FUN_000ff088
// address: 0xff088
// body: available
// range: 0xff088-0xff177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ff088(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar2 = FUN_0010f598(param_2,iVar5);
      bVar7 = iVar2 < 0;
      bVar8 = iVar2 == 0;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (bVar7) {
        iVar2 = 0;
      }
      if (bVar8) {
        if (iVar5 == 0) {
          return 0;
        }
        if (*(char *)(iVar5 + 0x1c) != '\x02') {
          return 0;
        }
        if (param_3 != 0) {
          *(undefined4 *)(iVar5 + 0x24) = 0;
          *(undefined1 *)(iVar5 + 0x1c) = 0;
          *(undefined1 *)(iVar5 + 0x28) = 0;
          return 1;
        }
        puVar3 = *(undefined4 **)(param_1 + 0x18);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,iVar5,0x13);
        }
        if (*(int *)(param_1 + 0x10) == iVar5) {
          uVar4 = FUN_001d7940(param_1,iVar5);
          *(undefined4 *)(param_1 + 0x10) = uVar4;
        }
        iVar5 = FUN_001bdad0(param_1,iVar5);
        if (iVar5 == 0) {
          return 1;
        }
        FUN_0016d758();
        return 1;
      }
      iVar6 = *(int *)(iVar5 + iVar2 * 4 + 0x2c);
      if (iVar6 == 0) {
        return 0;
      }
      bVar1 = 0;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar5 + 0x34);
      }
      iVar5 = iVar6;
    } while (iVar2 == 0 || (bVar1 & 0x80) == 0);
  }
  return 0;
}

