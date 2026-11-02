// rea decompile_all
// name: CMFCTabCtrl::SetTabsHeight
// address: 0x100742cf
// body: available
// range: 0x100742cf-0x1007446d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007442f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTabCtrl::SetTabsHeight(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCTabCtrl::SetTabsHeight(CMFCTabCtrl *this)

{
  CGdiObject *this_00;
  int iVar1;
  HFONT pHVar2;
  int iVar3;
  CClientDC local_120 [8];
  HDC local_118;
  CPen *local_10c;
  int local_108 [5];
  BYTE local_f1;
  tagTEXTMETRICW local_ac;
  LOGFONTW local_70;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x110;
  local_8 = 0x100742de;
  if (*(int *)(this + 0x204) == 0) {
    if (*(int *)(this + 0x20c) == 0) {
      CMFCBaseTabCtrl::SetTabsHeight((CMFCBaseTabCtrl *)this);
    }
    else {
      if (*(int *)(this + 0xb8) < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(this + 0xb8) + 7;
      }
      iVar3 = DAT_10166c6c + 4;
      if (DAT_10166c6c + 4 < iVar1) {
        iVar3 = iVar1;
      }
      *(int *)(this + 0xf0) = iVar3;
    }
  }
  else {
    iVar1 = GetSystemMetrics(3);
    *(int *)(this + 0xf0) = iVar1 + DAT_10161740 / 2;
    GetObjectW(DAT_10166bb8,0x5c,local_108);
    _memset(&local_70,0,0x5c);
    local_70.lfCharSet = local_f1;
    local_70.lfHeight = local_108[0];
    local_70.lfQuality = '\x05';
    lstrcpyW(local_70.lfFaceName,L"Arial");
    CClientDC::CClientDC(local_120,(CWnd *)this);
    local_8 = 0;
    this_00 = (CGdiObject *)(this + 300);
    do {
      CGdiObject::DeleteObject(this_00);
      pHVar2 = CreateFontIndirectW(&local_70);
      CMenu::Attach((CMenu *)this_00,(HMENU__ *)pHVar2);
      local_10c = CDC::SelectObject((CDC *)local_120,(CPen *)this_00);
      if (local_10c == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      GetTextMetricsW(local_118,&local_ac);
      CDC::SelectObject((CDC *)local_120,local_10c);
      if (DAT_10161740 / 2 + local_ac.tmHeight <= *(int *)(this + 0xf0)) break;
      if (local_70.lfHeight < 0) {
        local_70.lfHeight = local_70.lfHeight + 1;
      }
      else {
        local_70.lfHeight = local_70.lfHeight + -1;
      }
    } while (local_70.lfHeight != 0);
    local_70.lfWeight = 700;
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x134));
    pHVar2 = CreateFontIndirectW(&local_70);
    CMenu::Attach((CMenu *)(this + 0x134),(HMENU__ *)pHVar2);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_120);
  }
  FUN_100f90cf();
  return;
}

