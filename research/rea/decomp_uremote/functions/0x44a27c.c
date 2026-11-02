// rea decompile_all
// name: FUN_0044a27c
// address: 0x44a27c
// body: available
// range: 0x44a27c-0x44a2a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044a27c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0044bfc5();
  uVar2 = FUN_005b3fb0((float)*(int *)(iVar1 + 4));
  FUN_004c0be5(uVar2);
  return;
}

