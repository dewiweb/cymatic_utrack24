// rea decompile_all
// name: CMFCToolBar::SetTwoRowsWithSibling
// address: 0x100272bd
// body: available
// range: 0x100272bd-0x100273e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::SetTwoRowsWithSibling(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::SetTwoRowsWithSibling(CMFCToolBar *this)

{
  int iVar1;
  CObject *pCVar2;
  CObject *this_00;
  CDockSite *this_01;
  __POSITION *p_Var3;
  CDockingPanesRow *this_02;
  undefined1 local_14 [4];
  int local_10;
  CObject *local_c;
  HDWP local_8;
  
  if ((*(int *)(this + 0xb58) != 0) && (iVar1 = *(int *)(this + 0xc9c), iVar1 != 0)) {
    local_c = *(CObject **)(iVar1 + 0xb0);
    pCVar2 = *(CObject **)(this + 0xb0);
    if (pCVar2 == local_c) {
      if (*(int *)(this + 0xb5c) == 0) {
        (**(code **)(*(int *)pCVar2 + 0x24))(iVar1);
        local_c = (CObject *)(**(code **)(*(int *)this + 0x19c))();
        (**(code **)(**(int **)(this + 0xc9c) + 0x25c))(local_14,0,1);
        this_00 = local_c;
        p_Var3 = CObList::Find((CObList *)(local_c + 0x11c),pCVar2,(__POSITION *)0x0);
        this_02 = CDockSite::AddRow((CDockSite *)this_00,p_Var3,local_10);
        (**(code **)(*(int *)this_02 + 0x1c))(*(undefined4 *)(this + 0xc9c),5,0,0);
        local_8 = BeginDeferWindowPos(10);
      }
      else {
        (**(code **)(*(int *)local_c + 0x24))(this);
        this_01 = (CDockSite *)(**(code **)(**(int **)(this + 0xc9c) + 0x19c))();
        (**(code **)(*(int *)this + 0x25c))(local_14,0,1);
        p_Var3 = CObList::Find((CObList *)(this_01 + 0x11c),local_c,(__POSITION *)0x0);
        this_02 = CDockSite::AddRow(this_01,p_Var3,local_10);
        (**(code **)(*(int *)this_02 + 0x1c))(this,5,0,0);
        local_8 = BeginDeferWindowPos(10);
        this = *(CMFCToolBar **)(this + 0xc9c);
      }
      CDockingPanesRow::MovePane(this_02,(CPane *)this,0,&local_8);
      EndDeferWindowPos(local_8);
    }
  }
  return;
}

