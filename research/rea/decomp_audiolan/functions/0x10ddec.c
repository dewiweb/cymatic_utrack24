// rea decompile_all
// name: FUN_0010ddec
// address: 0x10ddec
// body: available
// range: 0x10ddec-0x10e01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0010ddec(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int local_20 [2];
  
  *param_1 = DAT_0010e01c;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *param_1 = DAT_0010e020;
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *param_1 = DAT_0010e024;
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_20[0] = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 1;
  local_20[1] = 1;
  piVar2 = local_20 + 1;
  if (local_20[0] != 0) {
    piVar2 = local_20;
  }
  iVar9 = *piVar2;
  puVar1 = (undefined1 *)FUN_0010f82c(iVar9 << 1,0);
  param_1[2] = puVar1;
  puVar7 = *(undefined1 **)(param_2 + 0xc);
  for (puVar4 = *(undefined1 **)(param_2 + 8); puVar4 != puVar7; puVar4 = puVar4 + 2) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
    }
    puVar1 = puVar1 + 2;
  }
  iVar5 = param_1[2];
  param_1[3] = iVar5 + (*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 1) * 2;
  param_1[4] = iVar5 + iVar9 * 2;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  iVar9 = FUN_001da408(param_1 + 9,param_2 + 0x24);
  iVar9 = FUN_001da408(iVar9 + 4,param_2 + 0x28);
  iVar9 = FUN_001da408(iVar9 + 4,param_2 + 0x2c);
  *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(iVar9 + 8) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)(iVar9 + 9) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)(iVar9 + 10) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)(iVar9 + 0xb) = *(undefined1 *)(param_2 + 0x37);
  *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(param_2 + 0x38);
  piVar8 = (int *)(iVar9 + 0x10);
  *piVar8 = 0;
  *(undefined4 *)(iVar9 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 0x18) = 0;
  local_20[0] = *(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x3c) >> 1;
  local_20[1] = 1;
  piVar2 = local_20;
  if (local_20[0] == 0) {
    piVar2 = local_20 + 1;
  }
  iVar5 = *piVar2;
  puVar1 = (undefined1 *)FUN_0010f82c(iVar5 << 1,0);
  *piVar8 = (int)puVar1;
  puVar7 = *(undefined1 **)(param_2 + 0x40);
  for (puVar4 = *(undefined1 **)(param_2 + 0x3c); puVar4 != puVar7; puVar4 = puVar4 + 2) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
    }
    puVar1 = puVar1 + 2;
  }
  iVar3 = *(int *)(param_2 + 0x40);
  iVar6 = *(int *)(param_2 + 0x3c);
  *(int *)(iVar9 + 0x18) = *piVar8 + iVar5 * 2;
  *(uint *)(iVar9 + 0x14) = (iVar3 - iVar6 & 0xfffffffeU) + *piVar8;
  *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(iVar9 + -0x10) = *(undefined4 *)(param_2 + 0x1c);
  return iVar9 + -0x2c;
}

