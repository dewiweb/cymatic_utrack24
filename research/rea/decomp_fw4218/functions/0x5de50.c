// rea decompile_all
// name: FUN_0005de50
// address: 0x5de50
// body: available
// range: 0x5de50-0x5dec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0005de50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = DAT_0005dec8;
  if (*param_1 != 0) {
    FUN_001f00bc(DAT_0005dec8);
    iVar2 = *(int *)(*param_1 + 4) + -1;
    *(int *)(*param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      iVar2 = FUN_00046c3c();
      piVar3 = *(int **)(iVar2 + 0x10);
      for (piVar4 = (int *)*piVar3; piVar4 != piVar3; piVar4 = (int *)*piVar4) {
        if ((int *)*param_1 == piVar4 + 2) {
          if (piVar4 != piVar3) {
            *(int *)piVar4[1] = *piVar4;
            *(int *)(*piVar4 + 4) = piVar4[1];
            *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
            *piVar4 = *(undefined4 *)(iVar2 + 4);
            *(int **)(iVar2 + 4) = piVar4;
          }
          break;
        }
      }
    }
    FUN_001f06d4(uVar1);
  }
  return param_1;
}

