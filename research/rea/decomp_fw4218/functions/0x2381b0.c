// rea decompile_all
// name: FUN_002381b0
// address: 0x2381b0
// body: available
// range: 0x2381b0-0x2382d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_002381b0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = DAT_002382d4;
  piVar5 = (int *)param_1[4];
  if (piVar5 != (int *)0x0) {
    piVar6 = DAT_002382d4 + 3;
    piVar7 = (int *)*piVar5;
    while (piVar1 = piVar7, piVar1 != piVar5) {
      piVar7 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar7 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar7;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        if ((int *)piVar1[2] != piVar6) {
          piVar3 = (int *)piVar1[2] + -3;
          iVar4 = *piVar3;
          if ((iVar4 == -1) || ((piVar3 != piVar2 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
            FUN_00173a54(piVar1[2] + -0xc,*(int *)(piVar1[2] + -8) + 8,0);
          }
        }
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
    }
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      FUN_00173a54(piVar2[2],piVar2[1],0);
      FUN_00173a54(piVar2,1,0);
      piVar2 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

