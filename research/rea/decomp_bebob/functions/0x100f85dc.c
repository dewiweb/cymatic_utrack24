// rea decompile_all
// name: __cfltcvt_init
// address: 0x100f85dc
// body: available
// range: 0x100f85dc-0x100f863b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __cfltcvt_init
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_10163ed4 = __cfltcvt;
  PTR_LAB_10163ed8 = __cropzeros;
  PTR_LAB_10163edc = __fassign;
  PTR_LAB_10163ee0 = __forcdecpt;
  PTR_LAB_10163ee4 = __positive;
  PTR_LAB_10163ee8 = __cfltcvt;
  PTR_LAB_10163eec = __cfltcvt_l;
  PTR_LAB_10163ef0 = __fassign_l;
  PTR_LAB_10163ef4 = __cropzeros_l;
  PTR_LAB_10163ef8 = __forcdecpt_l;
  return;
}

