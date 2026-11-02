// rea decompile_all
// name: FUN_0017f6f0
// address: 0x17f6f0
// body: available
// range: 0x17f6f0-0x17f7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017f6f0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*param_3 + 0x60))(auStack_30,param_3);
    (**(code **)(**(int **)(param_1 + 8) + 0xf0))(auStack_20,*(int **)(param_1 + 8),0);
    iVar1 = FUN_001bef5c(auStack_20,auStack_30);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 8) + 0xe0))();
      (**(code **)(**(int **)(param_1 + 8) + 0xe4))(*(int **)(param_1 + 8),auStack_30);
    }
    iVar1 = (**(code **)(*(int *)((int)param_3 + *(int *)(*param_3 + -0x38)) + 0xc))
                      (*(int *)(*param_3 + -0x38) + (int)param_3);
    if (iVar1 == 0x8201) {
      piVar2 = (int *)(**(code **)(*param_3 + 0x40))(param_3);
      (**(code **)(*piVar2 + 0xd8))();
    }
    piVar2 = *(int **)(param_1 + 8);
    (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x9c)) + 0x80))
              ((int)piVar2 + *(int *)(*piVar2 + -0x9c));
    (**(code **)(**(int **)(param_1 + 8) + 0x100))(*(int **)(param_1 + 8),param_3);
    return;
  }
  return;
}

