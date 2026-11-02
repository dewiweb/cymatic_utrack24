// rea decompile_all
// name: CMDIFrameWndEx::OnSize
// address: 0x100234e1
// body: available
// range: 0x100234e1-0x1002365b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWndEx::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIFrameWndEx::OnSize(CMDIFrameWndEx *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  tagWINDOWPOS local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x140) != 0) {
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    goto LAB_1002364c;
  }
  *(uint *)(this + 0x13c) = (uint)(param_1 == 1);
  if (*(int *)(this + 0x438) == 0) {
    iVar1 = CFrameImpl::IsOwnerDrawCaption((CFrameImpl *)(this + 0x33c));
    if (iVar1 != 0) goto LAB_1002353d;
  }
  else {
LAB_1002353d:
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28 = local_18.right - local_18.left;
    local_30 = local_18.left;
    local_24 = local_18.bottom - local_18.top;
    local_2c = local_18.top;
    local_20 = 0x20;
    CFrameImpl::OnWindowPosChanging((CFrameImpl *)(this + 0x33c),local_38);
  }
  (**(code **)(*(int *)(this + 0x14c) + 0x58))(*(int *)(this + 0x13c) == 0);
  if (((*(int *)(this + 0x13c) == 0) && (param_1 != 2)) && (*(int *)(this + 0x138) == 0)) {
    *(undefined4 *)(this + 0x158) = 1;
    (**(code **)(*(int *)this + 0x1c0))(0);
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    *(undefined4 *)(this + 0x158) = 0;
    local_1c = 0;
    SystemParametersInfoW(0x26,0,&local_1c,0);
    if (local_1c == 0) {
      (**(code **)(*(int *)this + 0x174))(1);
    }
  }
  else {
    CMDIFrameWnd::OnSize((CMDIFrameWnd *)this,param_1,param_2,param_3);
    if ((param_1 == 2) || ((param_1 == 0 && (*(int *)(this + 0x138) != 0)))) {
      (**(code **)(*(int *)this + 0x174))(1);
    }
    *(uint *)(this + 0x138) = (uint)(param_1 == 2);
  }
  FUN_100610f1((CFrameImpl *)(this + 0x33c));
LAB_1002364c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

