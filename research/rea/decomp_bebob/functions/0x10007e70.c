// rea decompile_all
// name: CDriverInterfaceClass::GetDeviceProps
// address: 0x10007e70
// body: available
// range: 0x10007e70-0x10007e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CDriverInterfaceClass::GetDeviceProps(int,class DEVICE_PROPS &) */

void __thiscall
CDriverInterfaceClass::GetDeviceProps(CDriverInterfaceClass *this,int param_1,DEVICE_PROPS *param_2)

{
  int iVar1;
  
                    /* 0x7e70  12  ?GetDeviceProps@CDriverInterfaceClass@@QAEXHAAVDEVICE_PROPS@@@Z
                        */
  iVar1 = FUN_10005fd0(this + 4,param_1);
  FUN_10007d30(param_2,iVar1);
  return;
}

