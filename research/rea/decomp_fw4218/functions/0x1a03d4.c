// rea decompile_all
// name: FUN_001a03d4
// address: 0x1a03d4
// body: available
// range: 0x1a03d4-0x1a057b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a0578 to 0x1911b4 FUN_001911b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a0538) */

void FUN_001a03d4(int *param_1,undefined4 param_2,short *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  
  piVar4 = param_1;
  psVar5 = param_3;
  FUN_00180d88(param_1 + 0x196,DAT_001a057c);
  piVar3 = param_1 + 0x21f;
  if ((((*(char *)((int)param_1 + 0x15e) == '\0') || (*param_3 != *DAT_001a0580)) ||
      (param_3[1] != *DAT_001a0584)) &&
     (((*(char *)((int)param_1 + 0x15f) == '\0' ||
       (iVar1 = FUN_00184224(param_1 + 0x163,param_3), iVar1 == 0)) &&
      ((piVar2 = (int *)FUN_001933e8(param_1 + 0x1aa,param_3), piVar2 != (int *)0x0 ||
       (piVar2 = (int *)FUN_00182240(param_1,param_3,param_4,param_6,param_7,param_5,param_9,
                                     param_10,param_8,param_11,param_12,param_13,param_14,param_15,
                                     piVar3,piVar4,param_2,psVar5), piVar2 != (int *)0x0)))))) {
    *(undefined1 *)(piVar2 + 0x32) = 1;
    FUN_0019474c(piVar3,1,*(int *)(*param_1 + -0xc) + (int)param_1,param_2,
                 *(int *)(*piVar2 + -0x14) + (int)piVar2);
    (**(code **)(*piVar2 + 0x3c))(piVar2);
  }
  FUN_001911a0();
  FUN_001911b4(param_1 + 0x225);
  return;
}

