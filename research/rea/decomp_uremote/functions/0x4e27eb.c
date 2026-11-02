// rea decompile_all
// name: FUN_004e27eb
// address: 0x4e27eb
// body: available
// range: 0x4e27eb-0x4e282f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004e27eb(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_004e0e6d();
  uVar1 = piVar3[2];
  uVar2 = uVar1;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    if (uVar2 < (uint)piVar3[2]) {
      iVar4 = *(int *)(*piVar3 + uVar2 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      FUN_004e0a5f(0);
    }
  }
  return 0 < (int)uVar1;
}

