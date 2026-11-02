// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_string_specifier_tchar<wchar_t>
// address: 0x4d2588
// body: available
// range: 0x4d2588-0x4d26f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier_tchar<wchar_t>(enum
   __crt_stdio_input::conversion_mode,wchar_t)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier_tchar<wchar_t>
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1,wchar_t param_2)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  pwVar4 = (wchar_t *)0x0;
  if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 4;
    puVar1 = *(uint **)(this + 0x6c);
    pwVar4 = (wchar_t *)puVar1[-1];
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_004d0d1c();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(uint **)(this + 0x6c) = puVar1 + 1;
      uVar5 = *puVar1;
      goto LAB_004d25d9;
    }
  }
  uVar5 = 0xffffffff;
LAB_004d25d9:
  if (uVar5 == 0) {
    if ((*(uint *)this & 4) != 0) {
      string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
LAB_004d25ee:
      *pwVar4 = L'\0';
    }
LAB_004d25f3:
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    local_14 = *(uint *)(this + 0x30);
    local_18 = *(int *)(this + 0x34);
    local_10 = uVar5;
    if ((param_1 != 0) && (uVar5 != 0xffffffff)) {
      local_10 = uVar5 - 1;
    }
    local_c = 0;
    local_8 = 0;
    local_20 = pwVar4;
    while( true ) {
      if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
      goto LAB_004d26aa;
      local_1c = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
      bVar2 = is_character_allowed_in_string(this,param_1,local_1c);
      if (!bVar2) break;
      if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
        if (local_10 == 0) {
          if (uVar5 != 0xffffffff) goto LAB_004d25ee;
          goto LAB_004d25f3;
        }
        bVar2 = write_character(this,pwVar4,uVar5,&local_20,&local_10,(char)local_1c);
        if (!bVar2) goto LAB_004d26aa;
      }
      bVar2 = 0xfffffffe < local_c;
      local_c = local_c + 1;
      local_8 = local_8 + (uint)bVar2;
    }
    string_input_adapter<char>::unget((string_input_adapter<char> *)(this + 8),local_1c);
LAB_004d26aa:
    if ((local_c != 0 || local_8 != 0) &&
       (((param_1 != 0 || ((local_c == local_14 && (local_8 == local_18)))) ||
        ((*(uint *)this & 4) != 0)))) {
      if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
        if (param_1 != 0) {
          *local_20 = L'\0';
        }
        *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
      }
      return true;
    }
  }
  return false;
}

