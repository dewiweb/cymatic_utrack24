// rea decompile_all
// name: FUN_0049ddd8
// address: 0x49ddd8
// body: available
// range: 0x49ddd8-0x49de12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0049ddd8(undefined4 param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_var;
  undefined4 uVar2;
  
  FUN_004c751a();
  cVar1 = FUN_00465f61(param_1,extraout_var);
  if (cVar1 == '\0') {
    uVar2 = extraout_ECX;
    FUN_004c751a(extraout_ECX);
    cVar1 = FUN_00465f61(param_1,uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

