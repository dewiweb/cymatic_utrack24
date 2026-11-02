// rea decompile_all
// name: ___acrt_CompareStringEx@36
// address: 0x4d74ca
// body: available
// range: 0x4d74ca-0x4d753d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_CompareStringEx@36
   
   Library: Visual Studio 2015 Release */

void ___acrt_CompareStringEx_36
               (wchar_t *param_1,ulong param_2,wchar_t *param_3,int param_4,wchar_t *param_5,
               int param_6,_nlsversioninfo *param_7,void *param_8,long param_9)

{
  uint uVar1;
  _func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
  *p_Var2;
  LCID Locale;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  p_Var2 = try_get_CompareStringEx();
  if (p_Var2 == (_func_int_wchar_t_ptr_ulong_wchar_t_ptr_int_wchar_t_ptr_int__nlsversioninfo_ptr_void_ptr_long
                 *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall();
    (*p_Var2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

