// rea decompile_all
// name: __crt_stdio_input::skip_whitespace<__crt_stdio_input::string_input_adapter,char>
// address: 0x4d26f4
// body: available
// range: 0x4d26f4-0x4d2722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl __crt_stdio_input::skip_whitespace<class
   __crt_stdio_input::string_input_adapter,char>(class __crt_stdio_input::string_input_adapter<char>
   &,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__crt_stdio_input::skip_whitespace<__crt_stdio_input::string_input_adapter,char>
          (string_input_adapter<char> *param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  int iVar2;
  
  do {
    uVar1 = string_input_adapter<char>::get(param_1);
    if (uVar1 == 0xffffffff) {
      return -1;
    }
    iVar2 = __ischartype_l(uVar1 & 0xff,8,param_2);
  } while (iVar2 != 0);
  return uVar1;
}

