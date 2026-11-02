// rea decompile_all
// name: CMFCPropertyGridCtrl::EditItem
// address: 0x10048858
// body: available
// range: 0x10048858-0x100488b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridCtrl::EditItem(class CMFCPropertyGridProperty
   *,struct tagPOINT *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPropertyGridCtrl::EditItem
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,tagPOINT *param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  
  iVar1 = (**(code **)(*(int *)this + 0x184))(1);
  iVar2 = 0;
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x68) != 0)) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x2c))(param_2);
      if (iVar2 != 0) {
        CMFCPropertyGridProperty::Redraw(param_1);
        SetCurSel(this,param_1,1);
        pHVar3 = SetCapture(*(HWND *)(this + 0x20));
        CWnd::FromHandle(pHVar3);
      }
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

