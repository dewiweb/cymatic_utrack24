// rea decompile_all
// name: __mtterm
// address: 0x5b857b
// body: available
// range: 0x5b857b-0x5b85b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b85b3 to 0x5b5731 __mtdeletelocks (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  
  if (DAT_009564a0 != -1) {
    pcVar1 = (code *)__decode_pointer(DAT_0095d228,DAT_009564a0);
    (*pcVar1)();
    DAT_009564a0 = -1;
  }
  if (DAT_009564a4 != 0xffffffff) {
    TlsFree(DAT_009564a4);
    DAT_009564a4 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}

