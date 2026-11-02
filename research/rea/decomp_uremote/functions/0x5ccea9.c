// rea decompile_all
// name: std::ios_base::_Ios_base_dtor
// address: 0x5ccea9
// body: available
// range: 0x5ccea9-0x5ccee4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base *)
   
   Library: Visual Studio 2008 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  ios_base *in_ECX;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     ((&DAT_0095d45c)[*(int *)(param_1 + 4)] = (&DAT_0095d45c)[*(int *)(param_1 + 4)] + -1,
     (char)(&DAT_0095d45c)[*(int *)(param_1 + 4)] < '\x01')) {
    _Tidy(in_ECX);
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0046e865(1);
    }
  }
  return;
}

