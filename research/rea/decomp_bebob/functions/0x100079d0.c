// rea decompile_all
// name: CDriverInterfaceClass::GetSyncMode
// address: 0x100079d0
// body: available
// range: 0x100079d0-0x10007a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: struct _BCO_USB_DEVICE_SYNCH_SOURCE __thiscall
   CDriverInterfaceClass::GetSyncMode(int,int) */

void __thiscall
CDriverInterfaceClass::GetSyncMode(CDriverInterfaceClass *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  int in_stack_0000000c;
  int *piVar3;
  int local_340 [206];
  uint local_8;
  
                    /* 0x79d0  21
                       ?GetSyncMode@CDriverInterfaceClass@@QAE?AU_BCO_USB_DEVICE_SYNCH_SOURCE@@HH@Z
                        */
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  piVar3 = local_340;
  this_00 = (void *)FUN_10006a20(this + 4,param_2);
  puVar1 = (undefined4 *)FUN_10005ae0(this_00,piVar3,in_stack_0000000c);
  for (iVar2 = 0xc; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_1 = *puVar1;
    param_1 = (int)(param_1 + 4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

