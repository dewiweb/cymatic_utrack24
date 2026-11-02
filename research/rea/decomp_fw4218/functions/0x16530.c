// rea decompile_all
// name: FUN_00016530
// address: 0x16530
// body: available
// range: 0x16530-0x16663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016530(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*DAT_00016894 != 99) {
    *(int *)(param_1 + 0x10) = DAT_00016894[1] << 0x1d | *DAT_00016894 << 0x1a;
  }
  iVar4 = DAT_00016890;
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0xa0) + (uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20);
  *puVar7 = *(undefined4 *)(param_1 + 0x10);
  *puVar7 = *(undefined4 *)(param_1 + 0x14);
  *puVar7 = *(undefined4 *)(param_1 + 0x18);
  *(char *)(param_1 + 0x14) = (char)*(undefined4 *)(param_1 + 0x14) + (char)param_2;
  uVar2 = *(ushort *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  uVar1 = (uint)uVar2 * param_2 * 4;
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
  piVar3 = DAT_00016898;
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(iVar4 + 0x18) = uVar5;
  *(undefined4 *)(*piVar3 + *(int *)(iVar4 + 4) * 0x40 + 0xc) = uVar5;
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0xa0) + (uint)*(byte *)(param_1 + 0x1c) * 4 + 0x20;
  *(int *)(iVar4 + 0x1c) = iVar6;
  *(int *)(*piVar3 + *(int *)(iVar4 + 4) * 0x40 + 8) = iVar6;
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar4 + 0xc) == '\x01') {
    FUN_001dad70(*(undefined4 *)(iVar4 + 0x18),uVar1);
  }
  if (*(char *)(iVar4 + 0xd) == '\x01') {
    FUN_001dad70(*(undefined4 *)(iVar4 + 0x1c),uVar1);
  }
  *(uint *)(*DAT_0001689c + *(int *)(iVar4 + 4) * 4 + 0x400) =
       uVar1 >> *(sbyte *)(iVar4 + 0x20) & 0xffff | *(int *)(iVar4 + 0x14) << 0x10;
  return;
}

