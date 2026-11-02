// rea decompile_all
// name: CMDIClientAreaWnd::RemoveTabGroup
// address: 0x10064ca0
// body: available
// range: 0x10064ca0-0x10064e1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::RemoveTabGroup(class CMFCTabCtrl *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIClientAreaWnd::RemoveTabGroup(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1,int param_2)

{
  __POSITION *p_Var1;
  CObject *this_00;
  int iVar2;
  CObject *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  p_Var1 = CObList::Find((CObList *)(this + 0x28d0),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var1 != (__POSITION *)0x0) {
    local_2c = (CObject *)0x0;
    if (*(__POSITION **)(this + 0x28d4) == p_Var1) {
      iVar2 = *(int *)p_Var1;
    }
    else {
      iVar2 = *(int *)(p_Var1 + 4);
    }
    if (iVar2 != 0) {
      local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                    *(CObject **)(iVar2 + 8));
    }
    CObList::RemoveAt((CObList *)(this + 0x28d0),p_Var1);
    CWnd::ShowWindow((CWnd *)param_1,0);
    if (0 < *(int *)(this + 0x28dc)) {
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                   *(CObject **)(*(int *)(this + 0x28d8) + 8));
      CMFCTabCtrl::SetResizeMode((CMFCTabCtrl *)this_00,0);
    }
    if (*(int *)(this + 0x28dc) < 2) {
      *(undefined4 *)(this + 0x2968) = 0;
    }
    if (local_2c != (CObject *)0x0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(local_2c + 0x20),&local_18);
      UnionRect(&local_18,&local_18,&local_28);
      CWnd::ScreenToClient((CWnd *)this,&local_18);
      CWnd::SetWindowPos((CWnd *)local_2c,(CWnd *)0x0,local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,4);
      AdjustMDIChildren(this,(CMFCTabCtrl *)local_2c);
    }
    local_2c = (CObject *)0x0;
    iVar2 = CMap<unsigned_int,unsigned_int,int,int>::Lookup
                      ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0x28ec),(uint)param_1,
                       (int *)&local_2c);
    if ((iVar2 != 0) && (local_2c != (CObject *)0x0)) {
      (**(code **)(*(int *)local_2c + 4))(1);
      CMap<CWnd*,CWnd*,CImageList*,CImageList*>::RemoveKey
                ((CMap<CWnd*,CWnd*,CImageList*,CImageList*> *)(this + 0x28ec),(CWnd *)param_1);
    }
    CObList::AddTail((CObList *)(this + 0x2914),(CObject *)param_1);
    CWnd::ShowWindow((CWnd *)param_1,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

