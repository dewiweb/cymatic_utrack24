// rea decompile_all
// name: __acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
// address: 0x4de822
// body: available
// range: 0x4de822-0x4de849 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> >(enum
   __acrt_lock_id,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
          (__acrt_lock_id param_1,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  __crt_seh_guarded_call<void>::
  operator()<<lambda_978dc153c237d78434369da87b74ff60>,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,<lambda_4a8533e2866a575feecb8298ce776b0d>_>
            (&local_5,(<lambda_978dc153c237d78434369da87b74ff60> *)&local_10,param_2,
             (<lambda_4a8533e2866a575feecb8298ce776b0d> *)&local_c);
  return;
}

