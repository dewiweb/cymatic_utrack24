// rea decompile_all
// name: __crt_strtox::parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
// address: 0x4d1f1f
// body: available
// range: 0x4d1f1f-0x4d2030 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   >,unsigned __int64>(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &,unsigned __int64)
   
   Library: Visual Studio 2015 Release */

floating_point_parse_result __cdecl
__crt_strtox::
parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
          __uint64 param_3)

{
  char cVar1;
  bool bVar2;
  floating_point_parse_result fVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((*param_1 != (&DAT_00731330)[iVar4]) && (*param_1 != (&DAT_00731334)[iVar4])) {
      FID_conflict_operator__();
      return 7;
    }
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar4 = iVar4 + 1;
    *param_1 = cVar1;
  } while (iVar4 != 3);
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
            (param_2,cVar1);
  cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    *param_1 = cVar1;
    bVar2 = parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                      (param_1,param_2);
    if (bVar2) {
      fVar3 = 5;
    }
    else {
      bVar2 = parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                        (param_1,param_2);
      if (!bVar2) {
        if (*param_1 == ')') {
          return 4;
        }
        do {
          if (*param_1 == '\0') break;
          iVar4 = (int)*param_1;
          if ((((9 < iVar4 - 0x30U) && (0x19 < iVar4 - 0x61U)) && (0x19 < iVar4 - 0x41U)) &&
             (iVar4 != 0x5f)) goto LAB_004d1f80;
          cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                  get(param_2);
          *param_1 = cVar1;
        } while (cVar1 != ')');
        if (*param_1 == ')') {
          return 4;
        }
        goto LAB_004d1f80;
      }
      fVar3 = 6;
    }
    input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
              (param_2,*param_1);
  }
  else {
LAB_004d1f80:
    cVar1 = FID_conflict_operator__();
    fVar3 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return fVar3;
}

