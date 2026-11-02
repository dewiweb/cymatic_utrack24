// rea decompile_all
// name: CPaneFrameWnd::OnDrawBorder
// address: 0x1003a025
// body: available
// range: 0x1003a025-0x1003a170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPaneFrameWnd::OnDrawBorder(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnDrawBorder(CPaneFrameWnd *this,CDC *param_1)

{
  CWnd *pCVar1;
  CDockingManager *pCVar2;
  CObject *pCVar3;
  CMFCVisualManager *pCVar4;
  RECT local_38;
  tagRECT local_28;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar2 = *(CDockingManager **)(this + 0x178);
  if (pCVar2 == (CDockingManager *)0x0) {
    pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xbc));
    pCVar2 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar1);
    if (pCVar2 == (CDockingManager *)0x0) goto LAB_1003a160;
  }
  if (*(int *)(pCVar2 + 8) == 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    CWnd::ScreenToClient((CWnd *)this,&local_28);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*(int *)this + 0x1b8))(&local_18);
    OffsetRect(&local_28,local_18,*(int *)(this + 0xa0) + local_14);
    local_38.left = local_28.left;
    local_38.top = local_28.top;
    local_38.right = local_28.right;
    local_38.bottom = local_28.bottom;
    pCVar3 = (CObject *)(**(code **)(*(int *)this + 0x1a4))();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,pCVar3);
    if (pCVar3 == (CObject *)0x0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x148))
                (param_1,this,local_38.left,local_38.top,local_38.right,local_38.bottom,local_18,
                 local_14,local_10,local_c);
    }
    else {
      FillRect(*(HDC *)(param_1 + 4),&local_38,DAT_10166b34);
      pCVar4 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar4 + 0x14c))
                (param_1,pCVar3,local_38.left,local_38.top,local_38.right,local_38.bottom,local_18,
                 local_14,local_10,local_c);
    }
  }
LAB_1003a160:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

