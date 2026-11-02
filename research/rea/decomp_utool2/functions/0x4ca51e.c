// rea decompile_all
// name: __crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
// address: 0x4ca51e
// body: available
// range: 0x4ca51e-0x4ca541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> & __thiscall
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>::operator=(class
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> &&)
   
   Library: Visual Studio 2015 Release */

__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<char,__crt_internal_free_policy>::operator=
          (__crt_unique_heap_ptr<char,__crt_internal_free_policy> *this,
          __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *param_1)

{
  FID_conflict__free(*(void **)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = 0;
  return (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)this;
}

