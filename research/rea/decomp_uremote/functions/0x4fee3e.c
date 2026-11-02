// rea decompile_all
// name: FUN_004fee3e
// address: 0x4fee3e
// body: available
// range: 0x4fee3e-0x4fee76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fee3e(uint *param_1,undefined4 param_2)

{
  char cVar1;
  uint in_ECX;
  uint uVar2;
  
  FUN_00478556(param_2);
  cVar1 = FUN_004786d2();
  uVar2 = ~-(uint)(cVar1 != '\0') & in_ECX;
  *param_1 = uVar2;
  if (uVar2 != 0) {
    *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
  }
  return;
}

