// rea decompile_all
// name: FUN_0007e02c
// address: 0x7e02c
// body: available
// range: 0x7e02c-0x7e20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007e02c(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_20;
  
  if (*param_2 == '\0') {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(uint *)(*(int *)(param_1 + 0x18) + -4);
  local_20 = param_4;
  uVar5 = FUN_000034d0();
  uVar6 = *(uint *)(*(int *)(param_1 + 0x18) + -4);
  if (uVar6 < uVar8) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8;
  if (uVar5 <= uVar8) {
    uVar6 = uVar5;
  }
  iVar7 = FUN_0000339c(*(int *)(param_1 + 0x18),uVar4,uVar6);
  if (iVar7 != 0) {
    return 0;
  }
  if (uVar8 == uVar5) {
    if (*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0xe)) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x1e);
    uVar8 = FUN_00153704(param_2);
    if (uVar2 != uVar8) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 4)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 8)) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar8 = FUN_001536ec(param_2);
    if (bVar1 != uVar8) {
      return 0;
    }
    if (*(char *)(param_1 + 0x29) != param_2[0xc]) {
      return 0;
    }
    if (*(char *)(param_1 + 0x2a) != param_2[3]) {
      return 0;
    }
    uVar4 = FUN_001536d0(param_2);
    uVar8 = *(uint *)(*(int *)(param_1 + 0x2c) + -4);
    uVar5 = FUN_000034d0();
    iVar7 = *(int *)(param_1 + 0x2c);
    uVar6 = *(uint *)(iVar7 + -4);
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    uVar6 = uVar8;
    if (uVar5 <= uVar8) {
      uVar6 = uVar5;
    }
    iVar7 = FUN_0000339c(iVar7,uVar4,uVar6);
    if (iVar7 != 0) {
      return 0;
    }
    if (uVar8 == uVar5) {
      bVar3 = true;
      goto LAB_0007e170;
    }
  }
  bVar3 = false;
LAB_0007e170:
  if (!bVar3) {
    return 0;
  }
  FUN_001da408(&local_20,param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(uint *)(local_20 + -4);
  uVar5 = FUN_000034d0();
  if (*(uint *)(local_20 + -4) < uVar8) {
    uVar8 = *(uint *)(local_20 + -4);
  }
  uVar6 = uVar8;
  if (uVar5 <= uVar8) {
    uVar6 = uVar5;
  }
  iVar7 = FUN_0000339c(local_20,uVar4,uVar6);
  if (iVar7 == 0) {
    if (uVar8 == uVar5) {
      iVar7 = 0;
    }
    if (uVar8 >= uVar5 && uVar8 != uVar5) {
      iVar7 = 1;
    }
    if (uVar8 < uVar5) {
      iVar7 = -1;
    }
  }
  FUN_001da44c(&local_20);
  if (iVar7 != 0) {
    FUN_001da458(param_1 + 0x30,*(undefined4 *)(param_2 + 0x14));
  }
  return 1;
}

