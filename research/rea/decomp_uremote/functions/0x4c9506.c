// rea decompile_all
// name: FUN_004c9506
// address: 0x4c9506
// body: available
// range: 0x4c9506-0x4c9558 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c9506(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_004e2a1f();
  iVar1 = iVar1 + 4;
  iVar2 = FUN_004e2a1f(iVar1);
  iVar2 = iVar2 + 4;
  iVar3 = FUN_004e2a1f(iVar2);
  iVar3 = iVar3 + 4;
  FUN_004e2a1f(iVar3);
  FUN_004e4665(iVar3,iVar2,iVar1);
  return extraout_EDX;
}

