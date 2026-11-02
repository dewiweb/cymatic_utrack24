// rea decompile_all
// name: FUN_004ed52d
// address: 0x4ed52d
// body: available
// range: 0x4ed52d-0x4ed553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ed52d(int param_1)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  int *piVar4;
  
  iVar2 = FUN_004c4e62();
  piVar4 = *(int **)(iVar2 + 0x48);
  piVar1 = piVar4 + *(int *)(iVar2 + 0x50);
  while( true ) {
    uVar3 = (uint3)((uint)piVar1 >> 8);
    if (piVar4 == piVar1) {
      return (uint)uVar3 << 8;
    }
    if (param_1 == *piVar4) break;
    piVar4 = piVar4 + 1;
  }
  return CONCAT31(uVar3,1);
}

