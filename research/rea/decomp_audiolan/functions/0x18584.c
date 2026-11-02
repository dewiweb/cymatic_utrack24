// rea decompile_all
// name: FUN_00018584
// address: 0x18584
// body: available
// range: 0x18584-0x18803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00018584(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x34);
  if (uVar5 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    bVar10 = *(byte *)(param_1 + 4) < uVar5;
    if (bVar10) {
      uVar5 = (uint)*(byte *)(param_1 + 0x33);
    }
    if (bVar10 && uVar5 < 4) {
      *(char *)(param_1 + 0x33) = (char)uVar5 + '\x01';
      *(int *)(param_1 + uVar5 * 4 + 0x3c) = param_2;
      *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + *(char *)(param_1 + 4);
      *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x34) - *(char *)(param_1 + 4);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  iVar7 = DAT_00018808;
  *(int *)(DAT_00018808 + 8) = *(int *)(DAT_00018808 + 8) + 1;
  if (param_2 != 0) {
    bVar3 = *(byte *)(param_1 + 0x33);
    if (bVar3 < 4) {
      *(byte *)(param_1 + 0x33) = bVar3 + 1;
      *(int *)(param_1 + (uint)bVar3 * 4 + 0x3c) = param_2;
      *(char *)(param_1 + 0x32) = *(char *)(param_1 + 0x32) + *(char *)(param_1 + 4);
    }
    else {
      FUN_00014b7c();
      *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + 1;
    }
  }
  if ((*(uint *)(*DAT_00018814 + 4) & 1 << (*(uint *)(*(int *)(param_1 + 0xc) + 0x14) & 0xff)) != 0)
  {
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xa0) + 0x12) & 1) != 0) {
    *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
    return 1;
  }
  uVar9 = (uint)*(byte *)(param_1 + 0x32);
  uVar5 = (uint)*(byte *)(param_1 + 0x2f);
  if (uVar9 < *(byte *)(param_1 + 0x30)) {
    uVar6 = uVar5;
    if (*(byte *)(param_1 + 0x31) < uVar9) goto LAB_000186dc;
    uVar6 = uVar5 - 1;
  }
  else {
    uVar6 = uVar5 + 1;
  }
  uVar6 = uVar6 & 0xff;
LAB_000186dc:
  if (uVar9 < uVar6) {
    uVar1 = *(ushort *)(param_1 + 0x26);
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
    uVar5 = uVar1 * uVar5 * 4;
    *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
    piVar2 = DAT_0001880c;
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar7 + 0x18) = uVar4;
    *(undefined4 *)(*piVar2 + *(int *)(iVar7 + 4) * 0x40 + 0xc) = uVar4;
    iVar7 = *(int *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0xa0) + (uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20;
    *(int *)(iVar7 + 0x1c) = iVar8;
    *(int *)(*piVar2 + *(int *)(iVar7 + 4) * 0x40 + 8) = iVar8;
    iVar7 = *(int *)(param_1 + 0xc);
    if (*(char *)(iVar7 + 0xc) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x18),uVar5);
    }
    if (*(char *)(iVar7 + 0xd) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar7 + 0x1c),uVar5);
    }
    *(uint *)(*DAT_00018810 + *(int *)(iVar7 + 4) * 4 + 0x400) =
         uVar5 >> *(sbyte *)(iVar7 + 0x20) & 0xffff | *(int *)(iVar7 + 0x14) << 0x10;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    bVar3 = *(char *)(param_1 + 4) - *(char *)(param_1 + 0x2e);
    if (bVar3 < uVar6) {
      *(byte *)(param_1 + 0x2d) = (char)uVar6 - bVar3;
      uVar6 = (uint)bVar3;
    }
    FUN_000182c0(param_1,uVar6);
  }
  return 1;
}

