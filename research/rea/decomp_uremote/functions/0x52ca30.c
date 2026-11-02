// rea decompile_all
// name: FUN_0052ca30
// address: 0x52ca30
// body: available
// range: 0x52ca30-0x52caac inclusive
// range: 0x52caaf-0x52cac2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0052ca30(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined1 local_18 [12];
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  local_c = *(int *)(in_ECX + 4);
  while (local_c != 0) {
    FUN_005446c0(local_18);
    cVar1 = FUN_005039c0();
    if ((cVar1 == '\0') && (cVar1 = FUN_00503830(local_18,param_1), cVar1 != '\0')) {
      FUN_00544600();
      FUN_00544280(1);
      FUN_00544620();
      local_5 = 1;
    }
    if (local_c == 0) {
      local_c = *(int *)(in_ECX + 4);
    }
    else {
      local_c = *(int *)(local_c + 8);
    }
  }
  return local_5;
}

