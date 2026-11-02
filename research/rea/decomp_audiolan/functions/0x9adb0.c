// rea decompile_all
// name: FUN_0009adb0
// address: 0x9adb0
// body: available
// range: 0x9adb0-0x9af7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9af78 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0009adb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int local_20 [2];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_20[0] = (int)(param_2[3] - param_2[2]) >> 2;
  piVar5 = local_20;
  if (local_20[0] == 0) {
    piVar5 = local_20 + 1;
  }
  local_20[1] = 1;
  iVar10 = *piVar5;
  puVar2 = (undefined4 *)FUN_0010f82c(iVar10 << 2,0);
  param_1[2] = puVar2;
  puVar8 = (undefined4 *)param_2[3];
  for (puVar6 = (undefined4 *)param_2[2]; puVar6 != puVar8; puVar6 = puVar6 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar6;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = param_1[2];
  param_1[3] = (param_2[3] - param_2[2] & 0xfffffffc) + iVar3;
  param_1[4] = iVar3 + iVar10 * 4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_20[0] = (int)(param_2[6] - param_2[5]) >> 2;
  local_20[1] = 1;
  piVar5 = local_20;
  if (local_20[0] == 0) {
    piVar5 = local_20 + 1;
  }
  iVar10 = *piVar5;
  puVar2 = (undefined4 *)FUN_0010f82c(iVar10 << 2,0);
  param_1[5] = puVar2;
  puVar8 = (undefined4 *)param_2[6];
  for (puVar6 = (undefined4 *)param_2[5]; puVar6 != puVar8; puVar6 = puVar6 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar6;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = param_2[6];
  iVar7 = param_2[5];
  iVar4 = param_1[5];
  param_1[7] = iVar4 + iVar10 * 4;
  param_1[6] = (iVar3 - iVar7 & 0xfffffffcU) + iVar4;
  uVar1 = DAT_0009af7c;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  piVar9 = param_1 + 9;
  FUN_001a0700(uVar1);
  *piVar9 = param_2[9];
  piVar5 = (int *)param_2[10];
  param_1[10] = piVar5;
  if (piVar5 == (int *)0x0) {
    if (*piVar9 != 0) goto LAB_0009af78;
  }
  else {
    if (*piVar9 == 0) {
LAB_0009af78:
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    *piVar5 = *piVar5 + 1;
  }
  FUN_001a0d18(DAT_0009af7c);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}

