// rea decompile_all
// name: FUN_0059f420
// address: 0x59f420
// body: available
// range: 0x59f420-0x59f498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f420(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_ECX;
  undefined1 local_24 [32];
  
  FUN_00552310(param_1);
  FUN_00503c60(in_ECX + 0x11c);
  cVar1 = FUN_00503fe0();
  if (cVar1 == '\0') {
    FUN_00503c60(in_ECX + 0x11c);
    FUN_005686f0(local_24);
  }
  FUN_00568ea0();
  FUN_005a0ae0(param_2);
  return;
}

