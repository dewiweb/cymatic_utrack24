// rea decompile_all
// name: common_strtod_l<>
// address: 0x4c653f
// body: available
// range: 0x4c653f-0x4c65c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_strtod_l<double,char>(char const * const,char * * const,struct
   __crt_locale_pointers * const)
    double __cdecl common_strtod_l<double,wchar_t>(wchar_t const * const,wchar_t * * const,struct
   __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

float10 common_strtod_l<>(int param_1,int *param_2,__crt_locale_pointers *param_3)

{
  int *piVar1;
  SLD_STATUS SVar2;
  float10 fVar3;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int local_20;
  undefined1 local_1c [8];
  char local_14;
  double local_10;
  
  if (param_2 != (int *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004d0d1c();
    fVar3 = (float10)0;
  }
  else {
    uStack_30 = 0x4c6578;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_3);
    local_10 = 0.0;
    make_c_string_character_source<>(auStack_34,param_1,param_2);
    SVar2 = __crt_strtox::parse_floating_point<__crt_strtox::c_string_character_source<char>,double>
                      (local_1c);
    if ((SVar2 == 3) || (SVar2 == 2)) {
      piVar1 = __errno();
      *piVar1 = 0x22;
    }
    fVar3 = (float10)local_10;
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return fVar3;
}

