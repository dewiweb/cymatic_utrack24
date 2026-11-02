// rea decompile_all
// name: FUN_00182054
// address: 0x182054
// body: available
// range: 0x182054-0x1821ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00182054(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_1;
  iVar5 = param_3;
  if ((param_3 == 0x81) &&
     (iVar2 = FUN_0017222c(param_12,*(undefined4 *)(param_1[9] + 0x188)), iVar2 != 0)) {
    FUN_00172728(param_1 + 0x1d,param_4);
    param_1[0x26] = param_11;
    param_1[0x20] = param_7;
    param_1[0x21] = param_6;
    param_1[0x22] = param_5;
    param_1[0x23] = param_10;
    param_1[0x24] = param_9;
    param_1[0x25] = param_8;
    param_1[0x27] = param_12;
    FUN_00171828(param_1 + 0x2b,param_13);
    FUN_00171828(param_1 + 0x2d,param_14);
    FUN_0014cdc0(param_1 + 0x28,param_15);
    bVar1 = *(byte *)(param_1 + 0x32) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x32) | 2;
  }
  *(byte *)(param_1 + 0x32) = bVar1;
  (**(code **)(*param_1 + 0x38))(param_1);
  puVar3 = (undefined4 *)param_1[0x10];
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)param_1[0x11];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)
                (puVar3,*(int *)(*param_1 + -0x14) + (int)param_1,param_3 == 0x81,param_13,param_14,
                 piVar4,param_2,iVar5);
    }
  }
  else {
    (**(code **)*puVar3)(puVar3,*(int *)(*param_1 + -0x14) + (int)param_1,param_3 == 0x81);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x33] = 0;
                    /* WARNING: Could not recover jumptable at 0x001821a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))(param_1);
  return;
}

