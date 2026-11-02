// rea decompile_all
// name: std::locale::_Init
// address: 0x4befd4
// body: available
// range: 0x4befd4-0x4bf061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(bool)
   
   Library: Visual Studio 2015 Release */

_Locimp * __cdecl std::locale::_Init(bool param_1)

{
  code *pcVar1;
  _Locimp *p_Var2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4befe0;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  p_Var2 = DAT_00c898d8;
  if (DAT_00c898d8 == (_Locimp *)0x0) {
    p_Var2 = _Locimp::_New_Locimp(false);
    _Setgloballocale(p_Var2);
    *(undefined4 *)(p_Var2 + 0x10) = 0x3f;
    _Yarn<char>::operator=((_Yarn<char> *)(p_Var2 + 0x18),"C");
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    DAT_00c898d4 = p_Var2;
    guard_check_icall();
    (*pcVar1)();
    _DAT_00c898f8 = DAT_00c898d4;
  }
  if (param_1) {
    pcVar1 = *(code **)(*(int *)p_Var2 + 4);
    guard_check_icall();
    (*pcVar1)();
  }
  FUN_004bede7();
  return p_Var2;
}

