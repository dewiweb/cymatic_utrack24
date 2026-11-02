// rea decompile_all
// name: __crt_stdio_output::write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
// address: 0x4ca35e
// body: available
// range: 0x4ca35e-0x4ca38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::string_output_adapter<wchar_t>,char>(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,char,int,int * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
          (string_output_adapter<wchar_t> *param_1,char param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      string_output_adapter<wchar_t>::write_character(param_1,(short)param_2,param_4);
      if (*param_4 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

