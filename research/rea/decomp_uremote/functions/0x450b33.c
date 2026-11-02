// rea decompile_all
// name: FUN_00450b33
// address: 0x450b33
// body: available
// range: 0x450b33-0x450b8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00450b33(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_00467ec4();
  cVar1 = FUN_004c7203(0x1b);
  if (cVar1 != '\0') {
    if (*(int *)(in_ECX + 0x6154) == 3) {
      cVar1 = FUN_00449386();
      if (cVar1 == '\0') {
        FUN_0045080e();
      }
      return 1;
    }
    if (*(int *)(in_ECX + 0x6154) == 4) {
      FUN_0045080e();
    }
  }
  uVar2 = FUN_004c3428(param_1);
  return uVar2;
}

