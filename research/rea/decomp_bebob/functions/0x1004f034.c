// rea decompile_all
// name: CMFCLinkCtrl::OnClicked
// address: 0x1004f034
// body: available
// range: 0x1004f034-0x1004f127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCLinkCtrl::OnClicked(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCLinkCtrl::OnClicked(CMFCLinkCtrl *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_1c;
  int *local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1004f040;
  iVar1 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else if (*(int *)(this + 0x758) == 0) {
    pAVar2 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
    local_8 = 0;
    piVar3 = FUN_10005e30((int *)(*(int *)(this + 0x760) + -0x10));
    local_18 = piVar3 + 4;
    iVar1 = 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (piVar3[1] == 0) {
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
    }
    puVar4 = (undefined4 *)
             ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                             *)&local_1c,
                            (CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                             *)(this + 0x764));
    ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)*puVar4,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    FUN_10001030((undefined4 *)(local_1c + -0x10));
    *(undefined4 *)(this + 0x75c) = 1;
    *(undefined4 *)(this + 0xb0) = 0;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    FUN_10001030(local_18 + -4);
    local_8 = 0xffffffff;
    CWaitCursor::~CWaitCursor(local_11);
  }
  else {
    *(undefined4 *)(this + 0xb0) = 0;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    iVar1 = 0;
  }
  return iVar1;
}

