// rea decompile_all
// name: CMDIClientAreaWnd::OnEraseBkgnd
// address: 0x100634df
// body: available
// range: 0x100634df-0x1006357a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIClientAreaWnd::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMDIClientAreaWnd::OnEraseBkgnd(CMDIClientAreaWnd *this,CDC *param_1)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = CWnd::GetParentFrame((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar1);
  if ((pCVar2 == (CObject *)0x0) ||
     (iVar3 = (**(code **)(*(int *)pCVar2 + 500))(param_1), iVar3 == 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar3 = (**(code **)(*(int *)pCVar4 + 0x2c8))
                      (param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
    if (iVar3 == 0) {
      CWnd::Default((CWnd *)this);
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

