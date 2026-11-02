// rea decompile_all
// name: FUN_0057fcb0
// address: 0x57fcb0
// body: available
// range: 0x57fcb0-0x57fd1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057fcb0(uint *param_1,uint param_2)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_0057b330(param_1,param_2);
  if (((cVar1 != '\0') && (cVar1 = FUN_00596500(in_ECX + 0x28,param_1,param_2), cVar1 != '\0')) &&
     (*param_1 < param_2)) {
    *(undefined1 *)(in_ECX + 0x30) = *(undefined1 *)*param_1;
    *param_1 = *param_1 + 1;
    return 1;
  }
  return 0;
}

