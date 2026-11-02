// rea decompile_all
// name: FUN_001754c4
// address: 0x1754c4
// body: available
// range: 0x1754c4-0x175547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x175544 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001754c4(int *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = param_2;
  if (param_2 < 0x401) {
    uVar1 = 0x1000;
  }
  iVar2 = (*(code *)*DAT_00175548)(uVar1 + 0x38);
  if (iVar2 == 0) {
    *param_3 = 0;
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)(iVar2 + 0x1fU & 0xffffffe0);
  if (puVar3 == (undefined4 *)0x0) {
LAB_00175544:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  *puVar3 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[1] = iVar2;
  *puVar3 = *(undefined4 *)*param_1;
  *param_3 = puVar3;
  if (param_2 < 0x401) {
    *(int *)(*param_1 + 0x10) = param_1[1];
    puVar3[2] = *param_1;
    *(undefined4 **)(*param_1 + 0xc) = puVar3;
    *param_1 = (int)puVar3;
    param_1[1] = param_2;
  }
  else {
    if (*(int *)(*param_1 + 8) == 0) goto LAB_00175544;
    puVar3[2] = *(int *)(*param_1 + 8);
    puVar3[3] = *param_1;
    *(undefined4 **)(*(int *)(*param_1 + 8) + 0xc) = puVar3;
    *(undefined4 **)(*param_1 + 8) = puVar3;
  }
  puVar3[4] = param_2;
  return puVar3 + 6;
}

