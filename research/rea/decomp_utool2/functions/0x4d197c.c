// rea decompile_all
// name: parse_floating_point<>
// address: 0x4d197c
// body: available
// range: 0x4d197c-0x4d19f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char>
   >,double>(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char>
   >,double * const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   >,double>(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   >,double * const)
   
   Library: Visual Studio 2015 Release */

void parse_floating_point<>(__crt_locale_pointers *param_1)

{
  double *pdVar1;
  int *piVar2;
  floating_point_parse_result fVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  double *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  pdVar1 = in_stack_00000028;
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (double *)0x0) || (param_1 == (__crt_locale_pointers *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_004d0d1c();
  }
  else {
    fVar3 = __crt_strtox::
            parse_floating_point_from_source<__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                      (param_1,(input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                                *)&stack0x00000008,local_314);
    __crt_strtox::parse_floating_point_write_result<double>(fVar3,local_314,pdVar1);
  }
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

