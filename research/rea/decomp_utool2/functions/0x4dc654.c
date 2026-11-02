// rea decompile_all
// name: __acrt_lock_and_call<<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>
// address: 0x4dc654
// body: available
// range: 0x4dc654-0x4dc67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void (__cdecl*__cdecl __acrt_lock_and_call<class <lambda_ec61778202f4f5fc7e7711acc23c3bca>
   >(enum __acrt_lock_id,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &&))(int)
   
   Library: Visual Studio 2015 Release */

_func_void_int * __cdecl
__acrt_lock_and_call<<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>
          (__acrt_lock_id param_1,<lambda_ec61778202f4f5fc7e7711acc23c3bca> *param_2)

{
  _func_void_int *p_Var1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c [2];
  
  local_c[0] = param_1;
  local_10 = param_1;
  p_Var1 = (_func_void_int *)operator()<>(&local_10,param_2,local_c);
  return p_Var1;
}

