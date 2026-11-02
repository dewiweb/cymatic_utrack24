// rea decompile_all
// name: FUN_00166298
// address: 0x166298
// body: available
// range: 0x166298-0x1663b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1663b0 to 0x1c6a78 FUN_001c6a78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00166298(int param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  FUN_001f00bc(param_1 + 0x1c);
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != (int *)0x0) {
    for (piVar3 = (int *)*piVar5; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      piVar5 = piVar3;
    }
    while ((piVar5 != (int *)0x0 &&
           ((piVar5[0xe] != 0 ||
            (puVar2 = (undefined *)FUN_001d06b8(), puVar2 < &DAT_00002710 + piVar5[0x10]))))) {
      if (piVar5 == (int *)0x0) {
        piVar3 = *(int **)(param_1 + 4);
        if (piVar3 == (int *)0x0) break;
        piVar5 = piVar3;
        for (piVar3 = (int *)*piVar3; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
          piVar5 = piVar3;
        }
      }
      else {
        pbVar1 = (byte *)(piVar5 + 2);
        piVar5 = (int *)piVar5[1];
        piVar3 = piVar5;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            piVar5 = piVar3;
            if (piVar5 == (int *)0x0) goto LAB_0016636c;
            piVar3 = (int *)*piVar5;
          } while ((int *)*piVar5 != (int *)0x0);
        }
      }
    }
  }
LAB_0016636c:
  FUN_001f06d4(param_1 + 0x1c);
  if (piVar5 != (int *)0x0) {
    FUN_001f00bc(param_1 + 0x1c);
    FUN_00207280(param_1,piVar5 + 4);
    FUN_001f06d4(param_1 + 0x1c);
    FUN_00165d90(piVar5);
    iVar4 = FUN_0014cd8c(piVar5 + 4);
    FUN_001c6a78(iVar4 + -0x10);
    return;
  }
  return;
}

