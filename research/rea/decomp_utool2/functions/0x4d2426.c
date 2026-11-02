// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_string_specifier_tchar<char>
// address: 0x4d2426
// body: available
// range: 0x4d2426-0x4d2587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier_tchar<char>(enum
   __crt_stdio_input::conversion_mode,char)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier_tchar<char>
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *local_1c;
  int local_8;
  
  puVar8 = (undefined1 *)0x0;
  if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 4;
    piVar4 = *(int **)(this + 0x6c);
    puVar8 = (undefined1 *)piVar4[-1];
    if (puVar8 == (undefined1 *)0x0) {
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_004d0d1c();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(int **)(this + 0x6c) = piVar4 + 1;
      iVar9 = *piVar4;
      goto LAB_004d2477;
    }
  }
  iVar9 = -1;
LAB_004d2477:
  if (iVar9 == 0) {
    if ((*(uint *)this & 4) != 0) {
      string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
LAB_004d248c:
      *puVar8 = 0;
    }
LAB_004d248f:
    piVar4 = __errno();
    *piVar4 = 0xc;
  }
  else {
    uVar1 = *(uint *)(this + 0x30);
    iVar2 = *(int *)(this + 0x34);
    local_8 = iVar9;
    if ((param_1 != 0) && (iVar9 != -1)) {
      local_8 = iVar9 + -1;
    }
    uVar7 = 0;
    iVar6 = 0;
    local_1c = puVar8;
    while( true ) {
      if (((uVar1 != 0 || iVar2 != 0) && (uVar7 == uVar1)) && (iVar6 == iVar2)) goto LAB_004d2540;
      iVar5 = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
      bVar3 = is_character_allowed_in_string(this,param_1,iVar5);
      if (!bVar3) break;
      if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
        if (local_8 == 0) {
          if (iVar9 != -1) goto LAB_004d248c;
          goto LAB_004d248f;
        }
        *local_1c = (char)iVar5;
        local_1c = local_1c + 1;
        local_8 = local_8 + -1;
      }
      bVar3 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + (uint)bVar3;
    }
    string_input_adapter<char>::unget((string_input_adapter<char> *)(this + 8),iVar5);
LAB_004d2540:
    if ((uVar7 != 0 || iVar6 != 0) &&
       (((param_1 != 0 || ((uVar7 == uVar1 && (iVar6 == iVar2)))) || ((*(uint *)this & 4) != 0)))) {
      if (this[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
        if (param_1 != 0) {
          *local_1c = 0;
        }
        *(int *)(this + 0x70) = *(int *)(this + 0x70) + 1;
      }
      return true;
    }
  }
  return false;
}

