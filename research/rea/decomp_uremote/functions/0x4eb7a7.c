// rea decompile_all
// name: FUN_004eb7a7
// address: 0x4eb7a7
// body: available
// range: 0x4eb7a7-0x4eb804 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb7a7(void)

{
  char cVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_004c0ccc(*(undefined4 *)(in_ECX + 0x7c),in_ECX + 0x84);
  fVar2 = (float10)FUN_0049fa3d();
  FUN_004a8e4a((float)fVar2);
  FUN_004d291d();
  FUN_004e9f79();
  cVar1 = FUN_004e97e8();
  if (cVar1 == '\0') {
    FUN_004ea08f();
  }
  else {
    FUN_004e99ba();
  }
  return;
}

