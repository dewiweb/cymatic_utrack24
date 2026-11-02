// rea decompile_all
// name: FUN_00190a68
// address: 0x190a68
// body: available
// range: 0x190a68-0x190b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00190a68(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 param_11,undefined2 param_12,undefined2 param_13)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (param_5 != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)((int)param_5 + *(int *)(*param_5 + -0x38)) + 0x24))
                      ((int)param_5 + *(int *)(*param_5 + -0x38));
  }
  iVar3 = FUN_001c6b14(0x94,DAT_00190ba0);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)FUN_0018ff30(iVar3,0,param_2,param_3,param_4,uVar2,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13),
     piVar4 != (int *)0x0)) {
    iVar3 = FUN_0014c62c(piVar4,0x1e,*(int *)(param_2 + 0x24) + 0x548);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      if (iVar3 != 0) {
        for (iVar1 = *(int *)(iVar3 + 0x68); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x68)) {
          iVar3 = iVar1;
        }
        *(int **)(iVar3 + 0x68) = piVar4;
        return piVar4;
      }
      *param_1 = (int)piVar4;
      return piVar4;
    }
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return (int *)0x0;
}

