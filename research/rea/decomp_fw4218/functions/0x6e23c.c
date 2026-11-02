// rea decompile_all
// name: FUN_0006e23c
// address: 0x6e23c
// body: available
// range: 0x6e23c-0x6e2d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0006e23c(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = DAT_0006e2dc;
  param_1[0x30] = DAT_0006e2e0;
  FUN_0006f614(param_1);
  piVar5 = param_1 + 0x42;
  piVar4 = (int *)param_1[0x46];
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)*piVar4;
    while (piVar1 = piVar3, piVar1 != piVar4) {
      piVar3 = (int *)param_1[0x46];
      if (piVar1 != (int *)param_1[0x46]) {
        piVar3 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[0x47] = param_1[0x47] + -1;
        *piVar1 = param_1[0x43];
        param_1[0x43] = piVar1;
      }
    }
    puVar2 = (undefined4 *)param_1[0x46];
    *puVar2 = param_1[0x43];
    param_1[0x43] = puVar2;
    piVar4 = (int *)*piVar5;
    while (piVar4 != (int *)0x0) {
      *piVar5 = *piVar4;
      FUN_00173a54(piVar4[2],piVar4[1],0);
      FUN_00173a54(piVar4,1,0);
      piVar4 = (int *)*piVar5;
    }
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  FUN_001ce98c(param_1 + 0x3b);
  FUN_001f01ac(param_1 + 0x32);
  FUN_0006f888(param_1);
  return;
}

