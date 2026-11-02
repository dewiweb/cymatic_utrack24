// rea decompile_all
// name: FUN_001f9d3c
// address: 0x1f9d3c
// body: available
// range: 0x1f9d3c-0x1f9e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f9e10 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f9d3c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_00013290(DAT_001f9e38,DAT_001f9e34,0x172,DAT_001f9e30);
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  if (*(char *)(param_1 + 0x18) != '\n') {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    pcVar5 = *(code **)(param_1 + 0x8c);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    FUN_001fb8e4(DAT_001f9e28,param_1);
    *DAT_001f9e2c = 1;
    piVar6 = (int *)*(int *)(param_1 + 0x70);
    while (piVar1 = piVar6, piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        if (piVar1[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar1);
      }
    }
    piVar6 = (int *)*(int *)(param_1 + 0x6c);
    while (piVar1 = piVar6, piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        if (piVar1[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar1);
      }
    }
    piVar6 = (int *)*(int *)(param_1 + 0x74);
    while (piVar1 = piVar6, piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      if (piVar1 != (int *)0x0) {
        if (piVar1[1] != 0) {
          FUN_001f0fa0();
        }
        FUN_001ecfbc(4,piVar1);
      }
    }
    if (param_2 != 0) {
      FUN_001fce48(uVar2,uVar3,param_1,param_1 + 4,*(undefined2 *)(param_1 + 0x1a),
                   *(undefined2 *)(param_1 + 0x1c));
    }
    FUN_001ecfbc(2,param_1);
    if (pcVar5 != entry) {
      (*pcVar5)(uVar4,0xfffffff5);
    }
    return;
  }
  FUN_001fb8e4(DAT_001f9e3c,param_1);
  FUN_001ecfbc(2,param_1);
  return;
}

