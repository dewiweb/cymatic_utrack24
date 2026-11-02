// rea decompile_all
// name: CallGetChannelInputMonitorMute
// address: 0x10007420
// body: available
// range: 0x10007420-0x10007446 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __thiscall
CallGetChannelInputMonitorMute
          (uint3 param_1,CDriverInterfaceClass *param_2,int param_3,int param_4,E_Channel param_5)

{
  undefined4 uStack_8;
  
                    /* 0x7420  47  CallGetChannelInputMonitorMute */
  uStack_8 = (uint)param_1;
  CDriverInterfaceClass::getChannelInputMonitorMute
            (param_2,param_3,param_4,param_5,(bool *)((int)&uStack_8 + 3));
  return uStack_8._3_1_;
}

