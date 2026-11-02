// rea decompile_all
// name: FUN_0046642b
// address: 0x46642b
// body: available
// range: 0x46642b-0x4664c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046642b(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int in_EAX;
  undefined4 extraout_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  if (in_EAX < param_3) {
    pcVar1 = (char *)*param_1;
    if (0 < in_EAX) {
      do {
        if (*pcVar1 == '\0') goto LAB_00466444;
        iVar2 = iVar2 + 1;
        FUN_004607e3();
      } while (iVar2 < in_EAX);
    }
    for (; iVar2 < param_3; iVar2 = iVar2 + 1) {
      if (*pcVar1 == '\0') {
        if (in_EAX == 0) {
          FUN_004652e4();
          return param_2;
        }
        break;
      }
      FUN_004607e3();
    }
    FUN_004654d6();
  }
  else {
LAB_00466444:
    FUN_004652cd();
    param_2 = extraout_ECX;
  }
  return param_2;
}

