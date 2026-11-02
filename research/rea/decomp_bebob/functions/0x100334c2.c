// rea decompile_all
// name: CMFCBaseVisualManager::FillReBarPane
// address: 0x100334c2
// body: available
// range: 0x100334c2-0x1003362a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseVisualManager::FillReBarPane(class CDC *,class CBasePane
   *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCBaseVisualManager::FillReBarPane
          (CMFCBaseVisualManager *this,int param_1,CWnd *param_2,LONG param_4,LONG param_5,
          int param_6,int param_7)

{
  CWnd *this_00;
  HWND pHVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  undefined4 uVar4;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x58) == 0) || (*(int *)(this + 0xc) == 0)) {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,DAT_10166b6c);
  }
  else {
    this_00 = (CWnd *)AFXGetParentFrame(param_2);
    if ((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) {
      pHVar1 = GetParent(*(HWND *)(param_2 + 0x20));
      this_00 = CWnd::FromHandle(pHVar1);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
    CWnd::ScreenToClient(param_2,&local_18);
    if (param_6 <= local_18.right) {
      param_6 = local_18.right;
    }
    if (param_7 <= local_18.bottom) {
      param_7 = local_18.bottom;
    }
    iVar2 = (**(code **)(*(int *)param_2 + 0x16c))();
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*(int *)param_2 + 0x224))(0), iVar2 == 0)) {
      param_4 = local_18.left;
      param_5 = local_18.top;
      iVar2 = CObject::IsKindOf((CObject *)param_2,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
      if ((iVar2 == 0) &&
         (((pCVar3 = DAT_10168578, DAT_10168578 != (CFrameWnd *)0x0 ||
           (pCVar3 = CWnd::GetTopLevelFrame(this_00), pCVar3 != (CFrameWnd *)0x0)) &&
          (*(HWND *)(pCVar3 + 0x20) != (HWND)0x0)))) {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_28);
        MapWindowPoints(*(HWND *)(pCVar3 + 0x20),*(HWND *)(param_2 + 0x20),(LPPOINT)&local_28,2);
        param_5 = local_28.top;
      }
    }
    if (*(code **)(this + 0x58) != (code *)0x0) {
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 4);
      }
      (**(code **)(this + 0x58))(*(undefined4 *)(this + 0xc),uVar4,0,0,&param_4,0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

