// rea decompile_all
// name: std::ios_base::_Ios_base_dtor
// address: 0x4bf23b
// body: available
// range: 0x4bf23b-0x4bf27a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) ||
     ((&DAT_00c8992c)[iVar1] = (&DAT_00c8992c)[iVar1] + -1, (char)(&DAT_00c8992c)[iVar1] < '\x01'))
  {
    _Tidy(param_1);
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      FUN_0044e190();
      FUN_004bfe14(iVar1,8);
    }
  }
  return;
}

