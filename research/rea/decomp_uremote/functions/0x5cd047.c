// rea decompile_all
// name: std::locale::facet::facet_Register
// address: 0x5cd047
// body: available
// range: 0x5cd047-0x5cd084 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static void __cdecl std::locale::facet::facet_Register(class std::locale::facet *)
   
   Library: Visual Studio 2008 Release */

void __cdecl std::locale::facet::facet_Register(facet *param_1)

{
  int *piVar1;
  
  if (DAT_0095d468 == (int *)0x0) {
    _AtModuleExit(__Fac_tidy);
  }
  piVar1 = (int *)FUN_005af82d(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)DAT_0095d468;
    piVar1[1] = (int)param_1;
  }
  DAT_0095d468 = piVar1;
  return;
}

