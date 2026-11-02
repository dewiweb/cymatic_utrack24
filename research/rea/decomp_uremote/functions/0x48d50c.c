// rea decompile_all
// name: FUN_0048d50c
// address: 0x48d50c
// body: available
// range: 0x48d50c-0x48d5d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d50c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_1[0x6a];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  iVar3 = param_1[0x13];
  if (iVar3 == 0) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_0048d0dc;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0048d054;
    }
  }
  else if (iVar3 == 1) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_0048d255;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0048d169;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_0048ce82();
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_0048cffb();
    }
  }
  else if (iVar3 == 2) {
    piVar2 = (int *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_0048d354;
    *(undefined1 *)(iVar1 + 0x54) = 0;
    if (*piVar2 == 0) {
      FUN_0048d4d6();
    }
    iVar1 = param_1[0x17];
    iVar3 = 0;
    if (0 < param_1[0x19]) {
      do {
        FUN_0048e721(*piVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < param_1[0x19]);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  return;
}

