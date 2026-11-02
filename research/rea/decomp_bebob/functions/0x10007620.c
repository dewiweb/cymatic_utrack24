// rea decompile_all
// name: CDriverInterfaceClass::SetSampleRateSelectionMode
// address: 0x10007620
// body: available
// range: 0x10007620-0x1000762b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007627 to 0x100055f0 FUN_100055f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CDriverInterfaceClass::SetSampleRateSelectionMode(enum
   _BCO_USB_SAMPLE_RATE_SELECTION_MODE) */

void __thiscall
CDriverInterfaceClass::SetSampleRateSelectionMode
          (CDriverInterfaceClass *this,_BCO_USB_SAMPLE_RATE_SELECTION_MODE param_1)

{
                    /* 0x7620  28
                       ?SetSampleRateSelectionMode@CDriverInterfaceClass@@QAEXW4_BCO_USB_SAMPLE_RATE_SELECTION_MODE@@@Z
                        */
  FUN_100055f0(param_1);
  return;
}

