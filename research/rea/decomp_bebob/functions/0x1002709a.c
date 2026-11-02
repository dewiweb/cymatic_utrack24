// rea decompile_all
// name: CMFCToolBar::LoadLastOriginalState
// address: 0x1002709a
// body: available
// range: 0x1002709a-0x1002710b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::LoadLastOriginalState(class CSettingsStore &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::LoadLastOriginalState(CMFCToolBar *this,CSettingsStore *param_1)

{
  int iVar1;
  CObject *pCVar2;
  int iVar3;
  CObList local_2c [12];
  int local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100270a6;
  iVar3 = 0;
  CObList::CObList(local_2c,10);
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0x40))(L"OriginalItems",local_2c);
  if (iVar1 != 0) {
    iVar3 = (**(code **)(*(int *)this + 0x42c))(local_2c);
  }
  while (local_20 != 0) {
    pCVar2 = CObList::RemoveHead(local_2c);
    if (pCVar2 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_1001e259(local_2c);
  return iVar3;
}

