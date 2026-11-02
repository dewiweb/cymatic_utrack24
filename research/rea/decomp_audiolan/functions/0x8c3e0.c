// rea decompile_all
// name: FUN_0008c3e0
// address: 0x8c3e0
// body: available
// range: 0x8c3e0-0x8c477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0008c3e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = FUN_0008c6c8();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  piVar4 = (int *)**(int **)(param_1 + 0x24);
  piVar6 = (int *)(*(int **)(param_1 + 0x24))[1];
  if (piVar6 != piVar4) {
    piVar5 = (int *)**(undefined4 **)(param_1 + 0x28);
    piVar7 = (int *)(*(undefined4 **)(param_1 + 0x28))[1];
    do {
      if (piVar7 != piVar5) {
        piVar2 = piVar5;
        do {
          if (*(char *)(*piVar4 + 4) == *(char *)(*piVar2 + 4)) {
            iVar3 = *(int *)(*piVar4 + 8);
            if (iVar3 <= *(int *)(*piVar2 + 8)) {
              iVar3 = *(int *)(*piVar2 + 8);
            }
            iVar1 = iVar1 + iVar3;
            break;
          }
          piVar2 = piVar2 + 1;
        } while (piVar7 != piVar2);
      }
      piVar4 = piVar4 + 1;
    } while (piVar6 != piVar4);
  }
  *param_2 = iVar1;
  return 1;
}

