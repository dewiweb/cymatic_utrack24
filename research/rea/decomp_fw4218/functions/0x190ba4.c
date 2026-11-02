// rea decompile_all
// name: FUN_00190ba4
// address: 0x190ba4
// body: available
// range: 0x190ba4-0x190c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00190ba4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                int *param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_6 != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)((int)param_6 + *(int *)(*param_6 + -0x38)) + 0x24))
                      ((int)param_6 + *(int *)(*param_6 + -0x38));
  }
  if (param_5 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(int *)((int)param_5 + *(int *)(*param_5 + -0x38)) + 0x24))
                      (*(int *)(*param_5 + -0x38) + (int)param_5);
  }
  iVar4 = FUN_0017d704(param_2,param_3,param_4,uVar3,uVar2,param_7,param_8,param_9);
  if (iVar4 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      *param_1 = iVar4;
    }
    else {
      for (iVar1 = *(int *)(iVar5 + 0x68); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
        iVar5 = iVar1;
      }
      *(int *)(iVar5 + 0x68) = iVar4;
    }
  }
  return iVar4;
}

