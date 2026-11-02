// rea decompile_all
// name: CVSListBox::OnCreateList
// address: 0x10044e0d
// body: available
// range: 0x10044e0d-0x10044edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class CWnd * __thiscall CVSListBox::OnCreateList(void)
   
   Library: Visual Studio 2010 Release */

CWnd * __thiscall CVSListBox::OnCreateList(CVSListBox *this)

{
  CWnd *pCVar1;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10044e19;
  if (((this != (CVSListBox *)0x0) && (*(int *)(this + 0x20) != 0)) && (*(int *)(this + 0x104) == 0)
     ) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    SetRectEmpty(&local_24);
    pCVar1 = FUN_1000858a(0x74);
    local_8 = 0;
    if (pCVar1 == (CWnd *)0x0) {
      pCVar1 = (CWnd *)0x0;
    }
    else {
      CWnd::CWnd(pCVar1);
      *(undefined ***)pCVar1 = CListCtrl::vftable;
    }
    local_8 = 0xffffffff;
    *(CWnd **)(this + 0x104) = pCVar1;
    CreateEx(pCVar1,0x200,L"SysListView32",&PTR_1011d390,0x5000420d,&local_24.left,(int)this,1,0);
    SendMessageW(*(HWND *)(*(int *)(this + 0x104) + 0x20),0x1036,0,0x20);
    CListCtrl::InsertColumn(*(CListCtrl **)(this + 0x104),0,(wchar_t *)&PTR_1011d390,0,-1,-1);
  }
  pCVar1 = (CWnd *)FUN_100f90cf();
  return pCVar1;
}

