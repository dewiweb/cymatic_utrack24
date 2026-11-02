// rea decompile_all
// name: CMFCPropertyGridToolTipCtrl::Track
// address: 0x100ce88d
// body: available
// range: 0x100ce88d-0x100ceb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ce92d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridToolTipCtrl::Track(class CRect,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridToolTipCtrl::Track
          (CMFCPropertyGridToolTipCtrl *this,int param_2,LONG param_3,int param_4,int param_5,
          undefined4 *param_6)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  POINT pt;
  BOOL BVar1;
  int iVar2;
  CGdiObject *pCVar3;
  int *piVar4;
  ulong uVar5;
  HMONITOR hMonitor;
  HCURSOR hCursor;
  undefined4 *puVar6;
  tagMONITORINFO *lpmi;
  int local_7c [5];
  CGdiObject *local_68;
  int local_64;
  undefined4 *local_60;
  tagMONITORINFO local_5c;
  int local_34 [2];
  int local_2c;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar6 = param_6;
  uStack_4 = 0x6c;
  local_8 = 0x100ce899;
  local_60 = param_6;
  if ((this == (CMFCPropertyGridToolTipCtrl *)0x0) || (*(int *)(this + 0x20) == 0))
  goto LAB_100ceb28;
  BVar1 = EqualRect((RECT *)(this + 0x78),(RECT *)&param_2);
  if ((BVar1 != 0) && (iVar2 = FUN_10005720(this + 0x74,(ushort *)*puVar6), iVar2 == 0))
  goto LAB_100ceb28;
  ((RECT *)(this + 0x78))->left = param_2;
  *(LONG *)(this + 0x7c) = param_3;
  *(int *)(this + 0x80) = param_4;
  *(int *)(this + 0x84) = param_5;
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 0x74);
  FUN_10007c90(this_00,local_60);
  CClientDC::CClientDC((CClientDC *)local_7c,(CWnd *)this);
  local_8 = 0;
  if (*(void **)(this + 0x8c) == (void *)0x0) {
    local_68 = CDC::SelectStockObject((CDC *)local_7c,0x11);
  }
  else {
    pCVar3 = CGdiObject::FromHandle(*(void **)(this + 0x8c));
    local_68 = (CGdiObject *)CDC::SelectObject((CDC *)local_7c,(CPen *)pCVar3);
  }
  if (local_68 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  puVar6 = (undefined4 *)(param_5 - param_3);
  local_60 = puVar6;
  iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::FindOneOf
                    (this_00,L"\n");
  if (iVar2 == -1) {
    piVar4 = (int *)CDC::GetTextExtent((CDC *)local_7c,
                                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_2c);
    iVar2 = *piVar4 + *(int *)(this + 0x88) * 2;
  }
  else {
    local_34[0] = 0;
    local_34[1] = 0;
    local_28 = DAT_10166c6c;
    local_2c = 200;
    iVar2 = (**(code **)(local_7c[0] + 0x68))
                      (*(int *)this_00,*(undefined4 *)(*(int *)this_00 + -0xc),local_34,0x410);
    puVar6 = (undefined4 *)(iVar2 + *(int *)(this + 0x88) * 2);
    iVar2 = (*(int *)(this + 0x88) * 2 - local_34[0]) + local_2c;
    local_60 = puVar6;
  }
  local_64 = iVar2;
  CDC::SelectObject((CDC *)local_7c,(CPen *)local_68);
  uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0x90));
  if ((uVar5 & 0x400000) == 0) {
    param_4 = param_2 + iVar2;
  }
  else {
    param_2 = param_4 - iVar2;
  }
  param_5 = param_3 + (int)puVar6;
  if (param_5 - param_3 < *(int *)(this + 0x84) - *(int *)(this + 0x7c)) {
    param_3 = *(LONG *)(this + 0x7c);
    param_5 = *(int *)(this + 0x84);
  }
  lpmi = &local_5c;
  local_5c.cbSize = 0x28;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  pt.y = param_3;
  pt.x = param_2;
  hMonitor = MonitorFromPoint(pt,2);
  BVar1 = GetMonitorInfoW(hMonitor,lpmi);
  if (BVar1 == 0) {
    SystemParametersInfoW(0x30,0,&local_24,0);
  }
  else {
    CopyRect(&local_24,&local_5c.rcWork);
  }
  iVar2 = local_24.right;
  if (local_24.right - local_24.left < param_4 - param_2) {
LAB_100cea88:
    param_2 = local_24.left;
    param_4 = iVar2;
  }
  else if (local_24.right < param_4) {
    param_2 = local_24.right - local_64;
    param_4 = local_24.right;
  }
  else if (param_2 < local_24.left) {
    iVar2 = local_64 + local_24.left;
    goto LAB_100cea88;
  }
  iVar2 = local_24.bottom;
  if (local_24.bottom - local_24.top < param_5 - param_3) {
LAB_100ceabf:
    param_3 = local_24.top;
    param_5 = iVar2;
  }
  else if (local_24.bottom < param_5) {
    param_3 = local_24.bottom - (int)local_60;
    param_5 = local_24.bottom;
  }
  else if (param_3 < local_24.top) {
    iVar2 = param_5 + (int)local_60;
    goto LAB_100ceabf;
  }
  CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_101665c0,param_2,param_3,param_4 - param_2,
                     param_5 - param_3,0x210);
  CWnd::ShowWindow((CWnd *)this,4);
  InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(this + 0x20));
  AfxGetModuleState();
  hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  SetCursor(hCursor);
  local_8 = 0xffffffff;
  CClientDC::~CClientDC((CClientDC *)local_7c);
LAB_100ceb28:
  FUN_100f90cf();
  return;
}

