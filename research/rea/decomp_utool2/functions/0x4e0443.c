// rea decompile_all
// name: ___acrt_locale_free_time
// address: 0x4e0443
// body: available
// range: 0x4e0443-0x4e0526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Library: Visual Studio 2015 Release */

void ___acrt_locale_free_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    free_crt_array_internal(param_1,7);
    free_crt_array_internal(param_1 + 7,7);
    free_crt_array_internal(param_1 + 0xe,0xc);
    free_crt_array_internal(param_1 + 0x1a,0xc);
    free_crt_array_internal(param_1 + 0x26,2);
    FID_conflict__free(param_1[0x28]);
    FID_conflict__free(param_1[0x29]);
    FID_conflict__free(param_1[0x2a]);
    free_crt_array_internal(param_1 + 0x2d,7);
    free_crt_array_internal(param_1 + 0x34,7);
    free_crt_array_internal(param_1 + 0x3b,0xc);
    free_crt_array_internal(param_1 + 0x47,0xc);
    free_crt_array_internal(param_1 + 0x53,2);
    FID_conflict__free(param_1[0x55]);
    FID_conflict__free(param_1[0x56]);
    FID_conflict__free(param_1[0x57]);
    FID_conflict__free(param_1[0x58]);
  }
  return;
}

