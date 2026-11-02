// rea decompile_all
// name: CDriverInterfaceClass::getDeviceMessage
// address: 0x10007a60
// body: available
// range: 0x10007a60-0x10007a79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: enum E_DEVICE_MESSAGE_ID __thiscall CDriverInterfaceClass::getDeviceMessage(int) */

E_DEVICE_MESSAGE_ID __thiscall
CDriverInterfaceClass::getDeviceMessage(CDriverInterfaceClass *this,int param_1)

{
  int iVar1;
  E_DEVICE_MESSAGE_ID EVar2;
  
                    /* 0x7a60  36
                       ?getDeviceMessage@CDriverInterfaceClass@@QAE?AW4E_DEVICE_MESSAGE_ID@@H@Z */
  iVar1 = FUN_10006a20(this + 4,param_1);
  EVar2 = FUN_10005140(iVar1);
  return EVar2;
}

