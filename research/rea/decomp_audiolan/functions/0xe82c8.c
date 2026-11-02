// rea decompile_all
// name: FUN_000e82c8
// address: 0xe82c8
// body: available
// range: 0xe82c8-0xe8453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e82c8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int local_20 [3];
  
  *param_1 = DAT_000e8454;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *param_1 = DAT_000e8458;
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *param_1 = DAT_000e845c;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((int)param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((int)param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  iVar1 = FUN_001da408(param_1 + 9,param_2 + 0x24);
  iVar1 = FUN_001da408(iVar1 + 4,param_2 + 0x28);
  piVar8 = (int *)(iVar1 + 4);
  *piVar8 = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  local_20[0] = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) >> 1;
  local_20[1] = 1;
  piVar2 = local_20;
  if (local_20[0] == 0) {
    piVar2 = local_20 + 1;
  }
  iVar9 = *piVar2;
  puVar3 = (undefined1 *)FUN_0010f82c(iVar9 << 1,0);
  *piVar8 = (int)puVar3;
  puVar7 = *(undefined1 **)(param_2 + 0x30);
  for (puVar5 = *(undefined1 **)(param_2 + 0x2c); puVar5 != puVar7; puVar5 = puVar5 + 2) {
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *puVar5;
      puVar3[1] = puVar5[1];
    }
    puVar3 = puVar3 + 2;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(int *)(iVar1 + 0xc) = *piVar8 + iVar9 * 2;
  *(uint *)(iVar1 + 8) = (iVar4 - iVar6 & 0xfffffffeU) + *piVar8;
  *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(iVar1 + 0x11) = *(undefined1 *)(param_2 + 0x39);
  *(undefined1 *)(iVar1 + 0x12) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(param_2 + 0x1c);
  return iVar1 + -0x28;
}

