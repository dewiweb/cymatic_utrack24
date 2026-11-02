// rea decompile_all
// name: FUN_000a63a8
// address: 0xa63a8
// body: available
// range: 0xa63a8-0xa6553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000a63a8(int param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_2 == '\0') {
    return 0;
  }
  uVar2 = FUN_00153704(param_2);
  if (uVar2 != *(ushort *)(param_1 + 0x12)) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x14) + -4);
  uVar4 = FUN_000034d0();
  uVar5 = *(uint *)(*(int *)(param_1 + 0x14) + -4);
  if (uVar5 < uVar2) {
    uVar2 = uVar5;
  }
  uVar5 = uVar2;
  if (uVar4 <= uVar2) {
    uVar5 = uVar4;
  }
  iVar6 = FUN_0000339c(*(int *)(param_1 + 0x14),uVar3,uVar5);
  if (iVar6 != 0) {
    return 0;
  }
  if (uVar2 == uVar4) {
    if (*(short *)(param_2 + 0xe) != *(short *)(param_1 + 0x18)) {
      return 0;
    }
    uVar3 = FUN_001536d0(param_2);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + -4);
    uVar4 = FUN_000034d0();
    uVar5 = *(uint *)(*(int *)(param_1 + 0x1c) + -4);
    if (uVar5 < uVar2) {
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
    if (uVar4 <= uVar2) {
      uVar5 = uVar4;
    }
    iVar6 = FUN_0000339c(*(int *)(param_1 + 0x1c),uVar3,uVar5);
    if (iVar6 != 0) {
      return 0;
    }
    if (uVar2 == uVar4) {
      if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x20)) {
        return 0;
      }
      uVar2 = FUN_001536ec(param_2);
      if (uVar2 != *(byte *)(param_1 + 0x24)) {
        return 0;
      }
      if (param_2[0xc] != *(char *)(param_1 + 0x25)) {
        return 0;
      }
      if (*(int *)(param_2 + 8) != *(int *)(param_1 + 0x28)) {
        return 0;
      }
      if (param_2[3] != *(char *)(param_1 + 0x2c)) {
        return 0;
      }
      uVar3 = *(undefined4 *)(param_2 + 0x14);
      uVar2 = *(uint *)(*(int *)(param_1 + 0x30) + -4);
      uVar4 = FUN_000034d0();
      uVar5 = *(uint *)(*(int *)(param_1 + 0x30) + -4);
      if (uVar5 < uVar2) {
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
      if (uVar4 <= uVar2) {
        uVar5 = uVar4;
      }
      iVar6 = FUN_0000339c(*(int *)(param_1 + 0x30),uVar3,uVar5);
      if (iVar6 != 0) {
        return 0;
      }
      if (uVar2 == uVar4) {
        bVar1 = true;
        goto LAB_000a6534;
      }
    }
  }
  bVar1 = false;
LAB_000a6534:
  if (!bVar1) {
    return 0;
  }
  uVar3 = FUN_0017bfc0();
  *(undefined4 *)(param_1 + 4) = uVar3;
  return 1;
}

