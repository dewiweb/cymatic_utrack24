// rea decompile_all
// name: AlignColor
// address: 0x100f3e99
// body: available
// range: 0x100f3e99-0x100f3edd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall AlignColor(long,long)
   
   Library: Visual Studio 2010 Release */

long AlignColor(long param_1,long param_2)

{
  long lVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    if (unaff_ESI < unaff_EDI) {
      return 0;
    }
    if (0xff - unaff_EDI < unaff_ESI) {
      return 0xff;
    }
    lVar1 = _labs(unaff_ESI + -0x80);
    if (lVar1 < unaff_EDI) {
      return 0x80;
    }
    lVar1 = _labs(unaff_ESI + -0xc0);
    if (lVar1 < unaff_EDI) {
      return 0xc0;
    }
  }
  return unaff_ESI;
}

