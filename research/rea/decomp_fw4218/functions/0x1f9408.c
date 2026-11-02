// rea decompile_all
// name: FUN_001f9408
// address: 0x1f9408
// body: available
// range: 0x1f9408-0x1f9475 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f9446 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f9408(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)FUN_001ed0b4(10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00013290(s_Assertion___s__failed_at_line__d_001f94c0,
                 s___sys_timeout__timeout____NULL__p_001f947e + 2,0x111,_DAT_001f947c);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  *puVar1 = 0;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  puVar3 = DAT_001f9478;
  puVar2 = (undefined4 *)*DAT_001f9478;
  if (puVar2 == (undefined4 *)0x0) {
    *DAT_001f9478 = puVar1;
    return;
  }
  if (param_1 < (uint)puVar2[1]) {
    puVar2[1] = puVar2[1] - param_1;
    *puVar1 = puVar2;
    *puVar3 = puVar1;
    return;
  }
  do {
    puVar3 = puVar2;
    iVar4 = puVar1[1];
    iVar5 = puVar3[1];
    puVar1[1] = iVar4 - iVar5;
    puVar2 = (undefined4 *)*puVar3;
    if (puVar2 == (undefined4 *)0x0) goto LAB_001f946a;
  } while ((uint)puVar2[1] <= (uint)(iVar4 - iVar5));
  puVar2[1] = puVar2[1] - puVar1[1];
LAB_001f946a:
  *puVar1 = *puVar3;
  *puVar3 = puVar1;
  return;
}

