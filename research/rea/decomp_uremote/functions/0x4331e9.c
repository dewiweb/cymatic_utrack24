// rea decompile_all
// name: FUN_004331e9
// address: 0x4331e9
// body: available
// range: 0x4331e9-0x433350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004331e9(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x13c) != 0) {
      piVar1 = (int *)(param_1 + 300);
      param_1 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = *(int *)(iVar3 + 0x13c) + param_1 * 8;
          if (*(undefined4 **)(iVar2 + 4) != (undefined4 *)0x0) {
            FUN_00411a5c(**(undefined4 **)(iVar2 + 4));
            **(undefined4 **)(iVar2 + 4) = 0;
            FUN_00411a5c(*(undefined4 *)(iVar2 + 4));
            *(undefined4 *)(iVar2 + 4) = 0;
          }
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)(iVar3 + 300));
      }
      FUN_00411a5c(*(undefined4 *)(iVar3 + 0x13c));
      *(undefined4 *)(iVar3 + 0x13c) = 0;
    }
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0xa4));
    *(undefined4 *)(iVar3 + 0xa4) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0xa8));
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0xac));
    *(undefined4 *)(iVar3 + 0xac) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0xb0));
    *(undefined4 *)(iVar3 + 0xb0) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0xb4));
    *(undefined4 *)(iVar3 + 0xb4) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x130));
    *(undefined4 *)(iVar3 + 0x130) = 0;
    *(undefined4 *)(iVar3 + 300) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x8c));
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x98));
    *(undefined4 *)(iVar3 + 0x98) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x9c));
    *(undefined4 *)(iVar3 + 0x9c) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x144));
    *(undefined4 *)(iVar3 + 0x144) = 0;
    FUN_00411a5c(*(undefined4 *)(iVar3 + 0x148));
    *(undefined4 *)(iVar3 + 0x148) = 0;
  }
  return;
}

