// rea decompile_all
// name: FUN_001856fc
// address: 0x1856fc
// body: available
// range: 0x1856fc-0x1857c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_001856fc(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  if ((uint)(param_2 - *(int *)(param_1 + 0x40)) < 0x29) {
    return '\0';
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x40) = param_2;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    piVar3 = *(int **)(param_1 + 8);
    if (piVar3 != (int *)0x0) {
      for (piVar2 = (int *)piVar3[0x57]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x57]) {
        piVar3 = piVar2;
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x38))(piVar3);
        do {
          if ((*(byte *)(piVar3 + 0x52) & 2) != 0) {
            FUN_0018a718(piVar3);
          }
          piVar2 = (int *)FUN_0022c0cc(param_1 + 4,piVar3);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x38))(piVar2);
          }
          (**(code **)(*piVar3 + 0x3c))(piVar3);
          piVar3 = piVar2;
        } while (piVar2 != (int *)0x0);
      }
    }
  }
  return cVar1;
}

