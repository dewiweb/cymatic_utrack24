// rea decompile_all
// name: FUN_004251a8
// address: 0x4251a8
// body: available
// range: 0x4251a8-0x42524d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004251a8(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = *(int **)(param_1 + 0x268);
  piVar2 = piVar3 + *(int *)(param_1 + 0x264) * 0xc;
  if (piVar3 != (int *)0x0) {
    for (; piVar3 < piVar2; piVar3 = piVar3 + 0xc) {
      uVar4 = piVar3[1];
      uVar1 = *piVar3 * 0x28 + uVar4;
      if (uVar4 != 0) {
        for (; uVar4 < uVar1; uVar4 = uVar4 + 0x28) {
          FUN_00411a5c(*(undefined4 *)(uVar4 + 0x1c));
          *(undefined4 *)(uVar4 + 0x1c) = 0;
          FUN_00411a5c(*(undefined4 *)(uVar4 + 0x20));
          *(undefined4 *)(uVar4 + 0x20) = 0;
        }
      }
      FUN_00411a5c(piVar3[1]);
      piVar3[1] = 0;
      *piVar3 = 0;
    }
    FUN_00411a5c(*(undefined4 *)(param_1 + 0x268));
    *(undefined4 *)(param_1 + 0x268) = 0;
  }
  *(undefined4 *)(param_1 + 0x264) = 0;
  return;
}

