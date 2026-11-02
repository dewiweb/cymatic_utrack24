// rea decompile_all
// name: destroy_ptd
// address: 0x4d8fcb
// body: available
// range: 0x4d8fcb-0x4d9073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl destroy_ptd(struct __acrt_ptd * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl destroy_ptd(__acrt_ptd *param_1)

{
  __acrt_ptd **local_8;
  
  if (*(undefined **)param_1 != &DAT_00731b70) {
    FID_conflict__free(*(undefined **)param_1);
  }
  FID_conflict__free(*(void **)(param_1 + 0x3c));
  FID_conflict__free(*(void **)(param_1 + 0x30));
  FID_conflict__free(*(void **)(param_1 + 0x34));
  FID_conflict__free(*(void **)(param_1 + 0x38));
  FID_conflict__free(*(void **)(param_1 + 0x28));
  FID_conflict__free(*(void **)(param_1 + 0x2c));
  FID_conflict__free(*(void **)(param_1 + 0x40));
  FID_conflict__free(*(void **)(param_1 + 0x44));
  FID_conflict__free(*(void **)(param_1 + 0x360));
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_>
            (5,(<lambda_6250bd4b2a391816dd638c3bf72b0bcb> *)&local_8);
  local_8 = &param_1;
  __acrt_lock_and_call<<lambda_be2b3da3f62db62e9dad5dc70221a656>_>
            (4,(<lambda_be2b3da3f62db62e9dad5dc70221a656> *)&local_8);
  return;
}

