// rea decompile_all
// name: CMFCDropDownFrame::RecalcLayout
// address: 0x1008c29d
// body: available
// range: 0x1008c29d-0x1008c44a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCDropDownFrame::RecalcLayout(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCDropDownFrame::RecalcLayout(CMFCDropDownFrame *this,int param_1)

{
  BOOL BVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  HMONITOR hMonitor;
  int iVar4;
  int iVar5;
  tagMONITORINFO *lpmi;
  int local_58;
  int local_54;
  tagMONITORINFO local_50;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindow(*(HWND *)(this + 0x20));
  if ((BVar1 != 0) && (BVar1 = IsWindow(*(HWND *)(this + 0x148)), BVar1 != 0)) {
    if ((*(int *)(this + 0x124) == 0) ||
       (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                    *(CObject **)(*(int *)(this + 0x124) + 0x6c)),
       pCVar2 == (CObject *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*(int *)pCVar2 + 0x160))();
    }
    (**(code **)(*(int *)(this + 0x128) + 0x2a4))(&local_58,uVar3);
    local_58 = local_58 + 6;
    local_54 = local_54 + 6;
    lpmi = &local_50;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    local_50.cbSize = 0x28;
    hMonitor = MonitorFromPoint(*(POINT *)(this + 0xdf4),2);
    BVar1 = GetMonitorInfoW(hMonitor,lpmi);
    if (BVar1 == 0) {
      SystemParametersInfoW(0x30,0,&local_18,0);
    }
    else {
      CopyRect(&local_18,&local_50.rcWork);
    }
    if (local_18.right < *(int *)(this + 0xdf4) + local_58) {
      if (((*(int *)(this + 0x124) == 0) ||
          (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                       *(CObject **)(*(int *)(this + 0x124) + 0x6c)),
          pCVar2 == (CObject *)0x0)) ||
         (iVar4 = (**(code **)(*(int *)pCVar2 + 0x160))(), iVar4 != 0)) {
        iVar4 = ((local_18.right - local_18.left) - local_58) + -1;
      }
      else {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_28);
        iVar4 = local_28.left - local_58;
      }
      *(int *)(this + 0xdf4) = iVar4;
    }
    if (local_18.bottom < *(int *)(this + 0xdf8) + local_54) {
      iVar4 = *(int *)(this + 0x124);
      iVar5 = *(int *)(this + 0xdf8) - local_54;
      *(int *)(this + 0xdf8) = iVar5;
      if (iVar4 == 0) {
        if (iVar5 < 0) {
          *(undefined4 *)(this + 0xdf8) = 0;
        }
      }
      else {
        *(int *)(this + 0xdf8) = (*(int *)(iVar4 + 0x58) - *(int *)(iVar4 + 0x60)) + -4 + iVar5;
      }
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,*(int *)(this + 0xdf4),*(int *)(this + 0xdf8),
                       local_58,local_54,0x14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

