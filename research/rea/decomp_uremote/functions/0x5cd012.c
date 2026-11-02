// rea decompile_all
// name: __Fac_tidy
// address: 0x5cd012
// body: available
// range: 0x5cd012-0x5cd046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Fac_tidy
   
   Library: Visual Studio 2008 Release */

void __Fac_tidy(void)

{
  _Fac_node *this;
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  while (this = DAT_0095d468, DAT_0095d468 != (_Fac_node *)0x0) {
    DAT_0095d468 = *(_Fac_node **)DAT_0095d468;
    std::_Fac_node::_scalar_deleting_destructor_(this,1);
  }
  FUN_005cd2d7();
  return;
}

