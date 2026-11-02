// rea decompile_all
// name: sync_legacy_variables_lk
// address: 0x5bb1b5
// body: available
// range: 0x5bb1b5-0x5bb207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _sync_legacy_variables_lk
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl sync_legacy_variables_lk(void)

{
  _DAT_0095d280 = *(undefined4 *)(PTR_DAT_00956c88 + 4);
  _DAT_0095d284 = *(undefined4 *)(PTR_DAT_00956c88 + 8);
  _DAT_00956c8c = *(undefined4 *)(PTR_DAT_00956c88 + 0xa8);
  PTR_PTR_00956e48 = *(undefined **)(PTR_DAT_00956c88 + 0xd4);
  PTR_PTR_00955bf4 = *(undefined **)(PTR_DAT_00956c88 + 0xbc);
  PTR_DAT_00957074 = *(undefined **)(PTR_DAT_00956c88 + 200);
  _DAT_0095707c = *(undefined4 *)(PTR_DAT_00956c88 + 0xac);
  return;
}

