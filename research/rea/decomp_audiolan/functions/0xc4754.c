// rea decompile_all
// name: FUN_000c4754
// address: 0xc4754
// body: available
// range: 0xc4754-0xc49d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_000c4754(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c [2];
  
  *param_1 = *param_2;
  iVar4 = DAT_000c49d8;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_2c[0] = 1;
  local_30 = (int)((ulonglong)
                   ((longlong)iVar4 *
                   (longlong)(*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c))) >> 0x20);
  local_30 = local_30 - (local_30 >> 0x1f);
  piVar3 = &local_30;
  if (local_30 == 0) {
    piVar3 = local_2c;
  }
  iVar6 = *piVar3;
  iVar2 = FUN_0010f82c(iVar6 * 6,0);
  *(int *)(param_1 + 0x1c) = iVar2;
  iVar5 = *(int *)(param_2 + 0x20);
  iVar1 = DAT_000c49d8;
  for (iVar4 = *(int *)(param_2 + 0x1c); DAT_000c49d8 = iVar1, iVar4 != iVar5; iVar4 = iVar4 + 6) {
    if (iVar2 != 0) {
      FUN_0016d9dc(iVar2,iVar4);
    }
    iVar2 = iVar2 + 6;
    iVar1 = DAT_000c49d8;
  }
  iVar4 = (int)((ulonglong)
                ((longlong)iVar1 * (longlong)(*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c)))
               >> 0x20);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x20) = iVar2 + (iVar4 - (iVar4 >> 0x1f)) * 6;
  *(int *)(param_1 + 0x24) = iVar2 + iVar6 * 6;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_30 = (int)((ulonglong)
                   ((longlong)iVar1 *
                   (longlong)(*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28))) >> 0x20);
  local_30 = local_30 - (local_30 >> 0x1f);
  local_2c[0] = 1;
  piVar3 = local_2c;
  if (local_30 != 0) {
    piVar3 = &local_30;
  }
  iVar5 = *piVar3;
  iVar2 = FUN_0010f82c(iVar5 * 6,0);
  *(int *)(param_1 + 0x28) = iVar2;
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar1 = DAT_000c49d8;
  for (iVar4 = *(int *)(param_2 + 0x28); DAT_000c49d8 = iVar1, iVar4 != iVar6; iVar4 = iVar4 + 6) {
    if (iVar2 != 0) {
      FUN_0016d9dc(iVar2,iVar4);
    }
    iVar2 = iVar2 + 6;
    iVar1 = DAT_000c49d8;
  }
  iVar4 = (int)((ulonglong)
                ((longlong)iVar1 * (longlong)(*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28)))
               >> 0x20);
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = iVar2 + (iVar4 - (iVar4 >> 0x1f)) * 6;
  *(int *)(param_1 + 0x30) = iVar2 + iVar5 * 6;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_30 = (int)((ulonglong)
                   ((longlong)iVar1 *
                   (longlong)(*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34))) >> 0x20);
  local_2c[0] = 1;
  local_30 = local_30 - (local_30 >> 0x1f);
  piVar3 = &local_30;
  if (local_30 == 0) {
    piVar3 = local_2c;
  }
  iVar6 = *piVar3;
  iVar2 = FUN_0010f82c(iVar6 * 6,0);
  *(int *)(param_1 + 0x34) = iVar2;
  iVar5 = *(int *)(param_2 + 0x38);
  for (iVar4 = *(int *)(param_2 + 0x34); iVar4 != iVar5; iVar4 = iVar4 + 6) {
    if (iVar2 != 0) {
      FUN_0016d9dc(iVar2,iVar4);
    }
    iVar2 = iVar2 + 6;
  }
  iVar4 = (int)((ulonglong)
                ((longlong)iVar1 * (longlong)(*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)))
               >> 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x3c) = iVar2 + iVar6 * 6;
  *(int *)(param_1 + 0x38) = iVar2 + (iVar4 - (iVar4 >> 0x1f)) * 6;
  return param_1;
}

