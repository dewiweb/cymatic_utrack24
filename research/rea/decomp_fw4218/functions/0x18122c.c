// rea decompile_all
// name: FUN_0018122c
// address: 0x18122c
// body: available
// range: 0x18122c-0x181337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0018122c(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_28 [16];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return 1;
  }
  FUN_001becf4(auStack_28);
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      iVar2 = FUN_00172574(auStack_28,iVar3);
      bVar7 = iVar2 < 0;
      bVar8 = iVar2 == 0;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (bVar7) {
        iVar2 = 0;
      }
      if (bVar8) {
        if (iVar3 != 0) goto LAB_001812f0;
        break;
      }
      iVar5 = *(int *)(iVar3 + iVar2 * 4 + 0x18);
      if (iVar5 == 0) break;
      bVar1 = 0;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar3 + 0x20);
      }
      iVar3 = iVar5;
    } while (iVar2 == 0 || (bVar1 & 0x80) == 0);
  }
  iVar3 = FUN_001c6b14(0x24,DAT_00181338);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00172710();
  FUN_00172728(iVar3,param_2);
  *(undefined2 *)(iVar3 + 8) = 0;
  *(undefined2 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  FUN_00206df0(param_1 + 0x14,iVar3);
LAB_001812f0:
  if (*(uint *)(iVar3 + 0x10) < (uint)*(ushort *)(iVar3 + 0xc)) {
    uVar6 = 1;
    if (*(int *)(iVar3 + 0x14) == 0) {
      uVar4 = FUN_001d06b8();
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

