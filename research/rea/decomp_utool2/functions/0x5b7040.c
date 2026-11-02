// rea decompile_all
// name: FUN_005b7040
// address: 0x5b7040
// body: available
// range: 0x5b7040-0x5b708a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b7040(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  bool bVar1;
  
  if (param_2 == 0x219) {
    if ((param_3 != 0x8000) && (param_3 != 0x8004)) {
      bVar1 = param_3 == 7;
      goto LAB_005b706e;
    }
  }
  else {
    bVar1 = param_2 == 0x458;
LAB_005b706e:
    if (!bVar1) goto LAB_005b7077;
  }
  FUN_005b7090();
LAB_005b7077:
  DefWindowProcA(param_1,param_2,param_3,param_4);
  return;
}

