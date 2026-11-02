// rea decompile_all
// name: CMDIClientAreaWnd::SetActiveTab
// address: 0x10063755
// body: available
// range: 0x10063755-0x10063897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::SetActiveTab(struct HWND__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::SetActiveTab(CMDIClientAreaWnd *this,HWND__ *param_1)

{
  CMFCBaseTabCtrl *this_00;
  CWnd *pCVar1;
  CObject *pCVar2;
  int iVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2910) == 0) {
    if (*(int *)(this + 0x2908) == 0) {
      if ((*(int *)(this + 0x2878) != 0) &&
         (iVar3 = (**(code **)(*(int *)(this + 0x74) + 0x218))(param_1), -1 < iVar3)) {
        (**(code **)(*(int *)(this + 0x74) + 0x210))(iVar3);
      }
    }
    else {
      pCVar1 = CWnd::FromHandle(param_1);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)pCVar1)
      ;
      if (((pCVar2 != (CObject *)0x0) &&
          (this_00 = *(CMFCBaseTabCtrl **)(pCVar2 + 0x118), this_00 != (CMFCBaseTabCtrl *)0x0)) &&
         (iVar3 = (**(code **)(*(int *)this_00 + 0x218))(param_1), -1 < iVar3)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this_00 + 0x20),&local_18);
        BVar4 = IsRectEmpty(&local_18);
        if ((BVar4 != 0) &&
           (pCVar5 = CWnd::GetTopLevelFrame((CWnd *)pCVar2), pCVar5 != (CFrameWnd *)0x0)) {
          (**(code **)(*(int *)pCVar5 + 0x174))(1);
        }
        pCVar2 = FUN_10062d9c((int)this);
        if (pCVar2 != (CObject *)0x0) {
          *(undefined4 *)(pCVar2 + 0x24c) = 0;
          iVar6 = (**(code **)(*(int *)pCVar2 + 0x208))();
          CMFCBaseTabCtrl::InvalidateTab((CMFCBaseTabCtrl *)pCVar2,iVar6);
        }
        *(undefined4 *)(this_00 + 0x24c) = 1;
        (**(code **)(*(int *)this_00 + 0x210))(iVar3);
        iVar3 = (**(code **)(*(int *)this_00 + 0x208))();
        CMFCBaseTabCtrl::InvalidateTab(this_00,iVar3);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

