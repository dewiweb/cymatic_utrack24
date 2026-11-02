// rea decompile_all
// name: FUN_00118ed8
// address: 0x118ed8
// body: available
// range: 0x118ed8-0x118fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00118ed8(int param_1,undefined4 param_2)

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
  FUN_0015e8b8(auStack_28);
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      iVar2 = FUN_0010f4d8(auStack_28,iVar3);
      bVar7 = iVar2 < 0;
      bVar8 = iVar2 == 0;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (bVar7) {
        iVar2 = 0;
      }
      if (bVar8) {
        if (iVar3 != 0) goto LAB_00118f9c;
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
  iVar3 = FUN_0016d7a4(0x24,DAT_00118fe4);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_0010f638();
  FUN_0010f650(iVar3,param_2);
  *(undefined2 *)(iVar3 + 8) = 0;
  *(undefined2 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  FUN_001be7b4(param_1 + 0x14,iVar3);
LAB_00118f9c:
  if (*(uint *)(iVar3 + 0x10) < (uint)*(ushort *)(iVar3 + 0xc)) {
    uVar6 = 1;
    if (*(int *)(iVar3 + 0x14) == 0) {
      uVar4 = FUN_0017bfc0();
      *(undefined4 *)(iVar3 + 0x14) = uVar4;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

