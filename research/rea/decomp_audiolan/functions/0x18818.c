// rea decompile_all
// name: FUN_00018818
// address: 0x18818
// body: available
// range: 0x18818-0x189bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18844 to 0x14b7c FUN_00014b7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x188e0 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x189b8 to 0x14b7c FUN_00014b7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00018818(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_00014b7c();
    return;
  }
  if (*(short *)(param_1 + 0xc) != 0) {
    FUN_00014b7c();
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
    return;
  }
  uVar6 = (param_2[1] & 0x1ffffffU) + *(int *)(param_3 + 0x20);
  if ((int)uVar6 < DAT_000189bc) {
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 0x1770000;
    }
  }
  else {
    uVar6 = uVar6 - DAT_000189bc;
  }
  puVar4 = (uint *)(param_2 + 3);
  uVar1 = *param_2 - 0xcU & 0xffff;
  *puVar4 = uVar1;
  param_2[4] = uVar6 | 0x26000000;
  if (*(char *)(param_3 + 0x26) != '\0') {
    FUN_0018a24c(puVar4,uVar1 + 4);
  }
  piVar3 = DAT_000189c4;
  piVar2 = DAT_000189c0;
  if (puVar4 == (uint *)0x0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_3 + 0x3c);
  while( true ) {
    if (*(char *)(iVar5 + 0x24) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_000032f8();
    }
    if ((*(int *)(iVar5 + 0x1c) < 0x10) &&
       ((*(uint *)(*DAT_000189c0 + *(int *)(iVar5 + 0x1c) * 4 + 0x3000) & 0x800) != 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    if ((iVar7 - 1U & uVar6) == 0) break;
    uVar6 = uVar6 - 1;
  }
  if (uVar6 == 0) {
    *(int *)(*(int *)(param_3 + 0x18) + 0x24) = *(int *)(*(int *)(param_3 + 0x18) + 0x24) + 1;
    *(int *)(*(int *)(param_3 + 0x18) + 0x2c) = *(int *)(*(int *)(param_3 + 0x18) + 0x2c) + 1;
    FUN_00014b7c(param_2);
    return;
  }
  *(uint **)(iVar5 + 0x14) = puVar4;
  *(uint **)(*piVar3 + *(int *)(iVar5 + 4) * 0x40 + 0xc) = puVar4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x1c);
  if (iVar5 < 0x10) {
    *(int *)(*piVar2 + iVar5 * 4 + 0x3000) = *(int *)(*(int *)(param_1 + 0x18) + 4) + 0x800;
  }
  *(int *)(*(int *)(param_3 + 0x18) + 8) = *(int *)(*(int *)(param_3 + 0x18) + 8) + 1;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00014b7c();
  }
  *(int **)(param_1 + 0x14) = param_2;
  return;
}

