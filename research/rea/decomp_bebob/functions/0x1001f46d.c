// rea decompile_all
// name: CMDIChildWndEx::OnSize
// address: 0x1001f46d
// body: available
// range: 0x1001f46d-0x1001f609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIChildWndEx::OnSize(CMDIChildWndEx *this,uint param_1,int param_2,int param_3)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CObject *this_00;
  tagWINDOWPOS local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x11c) != 0) goto LAB_1001f5fa;
  InvalidateIconicBitmaps(this);
  *(uint *)(this + 0x124) = (uint)(param_1 == 1);
  pCVar1 = CMFCVisualManager::GetInstance();
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x1f0))();
  if (iVar2 != 0) {
    if ((*(int *)(this + 0x438) == 0) || (*(int *)(*(int *)(this + 0x438) + 0x2d48) != 0)) {
      if (*(int *)(this + 0x160) != 0) {
        *(undefined4 *)(this + 0x160) = 0;
        SetWindowRgn(*(HWND *)(this + 0x20),(HRGN)0x0,1);
      }
    }
    else {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_18);
      local_24 = local_18.right - local_18.left;
      local_2c = local_18.left;
      local_20 = local_18.bottom - local_18.top;
      local_28 = local_18.top;
      local_1c = 0x20;
      CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x140),local_34);
    }
  }
  if (((*(int *)(this + 0x124) == 0) && (param_1 != 2)) && (*(int *)(this + 0x120) == 0)) {
    *(undefined4 *)(this + 0x250) = 1;
    CMDIChildWnd::OnSize((CMDIChildWnd *)this,param_1,param_2,param_3);
    (**(code **)(*(int *)this + 0x1c0))(0);
    *(undefined4 *)(this + 0x250) = 0;
  }
  else {
    CMDIChildWnd::OnSize((CMDIChildWnd *)this,param_1,param_2,param_3);
    if ((param_1 == 2) || ((param_1 == 0 && (*(int *)(this + 0x120) != 0)))) {
      (**(code **)(*(int *)this + 0x174))(1);
      if ((*(int *)(this + 0xa0) != 0) && (param_1 == 0)) {
        pCVar3 = CWnd::GetParentFrame((CWnd *)this);
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,
                                     (CObject *)pCVar3);
        if (this_00 != (CObject *)0x0) {
          iVar2 = CMDIFrameWndEx::AreMDITabs((CMDIFrameWndEx *)this_00,(int *)0x0);
          if (iVar2 != 0) goto LAB_1001f5df;
        }
        CWnd::ModifyStyle((CWnd *)this,0,0xcf0000,0);
      }
    }
LAB_1001f5df:
    *(uint *)(this + 0x120) = (uint)(param_1 == 2);
  }
  FUN_100610f1((CFrameImpl *)(this + 0x140));
LAB_1001f5fa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

