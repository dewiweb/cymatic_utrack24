// rea decompile_all
// name: FUN_0010ef54
// address: 0x10ef54
// body: available
// range: 0x10ef54-0x10f007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0010ef54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_2c [2];
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = 0;
  piStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0x38)) + 0x24))
                      ((int)param_1 + *(int *)(*param_1 + -0x38));
  }
  (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0x7c) + 0x48))();
  local_2c[0] = param_3;
  piVar2 = (int *)FUN_00120730(**(int **)(iVar1 + 0x7c) + 0x58c,DAT_0010f008,iVar1,param_2,local_2c,
                               &uStack_18,param_5);
  (**(code **)(*(int *)**(undefined4 **)(iVar1 + 0x7c) + 0x4c))();
  if (piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*piVar2 + -0x18) + (int)piVar2;
  }
  return iVar1;
}

