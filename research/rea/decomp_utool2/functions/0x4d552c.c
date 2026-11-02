// rea decompile_all
// name: common_initialize_environment_nolock<char>
// address: 0x4d552c
// body: available
// range: 0x4d552c-0x4d5530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl common_initialize_environment_nolock<char>(void)

{
  void *_Memory;
  char **ppcVar1;
  int iVar2;
  
  if (DAT_00c8a228 != 0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  _Memory = (void *)___dcrt_get_narrow_environment_from_os();
  if (_Memory == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    ppcVar1 = (char **)FUN_004d52fb(_Memory);
    if (ppcVar1 == (char **)0x0) {
      iVar2 = -1;
    }
    else {
      DAT_00c8a234 = ppcVar1;
      __crt_state_management::dual_state_global<char**>::initialize
                ((dual_state_global<char**> *)&DAT_00c8a228,ppcVar1);
      iVar2 = 0;
    }
    FID_conflict__free((void *)0x0);
  }
  FID_conflict__free(_Memory);
  return iVar2;
}

