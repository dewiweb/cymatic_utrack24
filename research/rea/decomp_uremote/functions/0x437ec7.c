// rea decompile_all
// name: FUN_00437ec7
// address: 0x437ec7
// body: available
// range: 0x437ec7-0x437f30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00437ec7(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x10bc);
  uVar2 = *(int *)(unaff_ESI + 0x10c0) - iVar1;
  if (param_1 <= uVar2) {
    uVar2 = param_1;
  }
  *(int *)(unaff_ESI + 0x10b8) = *(int *)(unaff_ESI + 0x10b8) + uVar2;
  param_1 = param_1 - uVar2;
  *(int *)(unaff_ESI + 0x10bc) = iVar1 + uVar2;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar2 = 0x1000;
    if (param_1 < 0x1000) {
      uVar2 = param_1;
    }
    uVar3 = FUN_00438319(0,uVar2);
    if (uVar3 < uVar2) break;
    *(int *)(unaff_ESI + 0x10b8) = *(int *)(unaff_ESI + 0x10b8) + uVar2;
    param_1 = param_1 - uVar2;
  }
  return 0x55;
}

