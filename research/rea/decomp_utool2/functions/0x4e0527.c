// rea decompile_all
// name: ___acrt_locale_initialize_time
// address: 0x4e0527
// body: available
// range: 0x4e0527-0x4e05a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_locale_initialize_time
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined **_Memory;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    _Memory = &PTR_DAT_00732748;
LAB_004e058e:
    ___acrt_locale_release_lc_time_reference(*(undefined4 *)(param_1 + 0x9c));
    *(undefined ***)(param_1 + 0x9c) = _Memory;
    uVar2 = 0;
  }
  else {
    _Memory = (undefined **)__calloc_base(1,0x164);
    if ((__crt_lc_time_data *)_Memory == (__crt_lc_time_data *)0x0) {
      FID_conflict__free((void *)0x0);
    }
    else {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)_Memory,param_1);
      if (bVar1) {
        *(undefined4 *)((int)_Memory + 0xb0) = 1;
        FID_conflict__free((void *)0x0);
        goto LAB_004e058e;
      }
      ___acrt_locale_free_time(_Memory);
      FID_conflict__free(_Memory);
    }
    uVar2 = 1;
  }
  return uVar2;
}

