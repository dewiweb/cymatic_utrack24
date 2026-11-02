// rea decompile_all
// name: OnCreate
// address: 0x1001ee37
// body: available
// range: 0x1001ee37-0x1001f02c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMDIChildWndEx::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMDIChildWndEx::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

void __thiscall OnCreate(void *this,int *param_1)

{
  CMDIFrameWnd *pCVar1;
  CObject *pCVar2;
  ulong uVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = CMDIChildWnd::GetMDIFrame(this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar1);
  *(CObject **)((int)this + 0x438) = pCVar2;
  *(uint *)((int)this + 0x164) = (uint)param_1[8] >> 0x17 & 1;
  *(undefined4 *)((int)this + 0x13c) = 1;
  uVar3 = CWnd::GetExStyle(this);
  if ((uVar3 & 0x80000) == 0) {
    pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    SendMessageW(*(HWND *)(pCVar5 + 0x20),0xb,0,0);
    local_28.left = param_1[7];
    local_28.top = param_1[6];
    local_28.bottom = local_28.top + param_1[4];
    local_28.right = local_28.left + param_1[5];
    iVar6 = *(int *)((int)this + 0x438);
    *(LONG *)((int)this + 0x128) = local_28.left;
    *(LONG *)((int)this + 300) = local_28.top;
    *(LONG *)((int)this + 0x130) = local_28.right;
    *(LONG *)((int)this + 0x134) = local_28.bottom;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x2d48) == 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)(iVar6 + 0x460),&local_18);
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      GetClientRect(*(HWND *)((int)this + 0x20),&local_38);
      CWnd::ClientToScreen(this,&local_38);
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)((int)this + 0x20),&local_28);
      local_18.left = local_18.left + (local_28.left - local_38.left);
      local_18.top = local_18.top + (local_28.top - local_38.top);
      local_18.right = local_18.right + (local_28.right - local_38.right);
      local_18.bottom = local_18.bottom + (local_28.bottom - local_38.bottom);
      CWnd::SetWindowPos(this,(CWnd *)0x0,local_18.left,local_18.top,local_18.right - local_18.left,
                         local_18.bottom - local_18.top,0x14);
    }
    pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    SendMessageW(*(HWND *)(pCVar5 + 0x20),0xb,1,0);
  }
  iVar6 = OnCreate(this,param_1);
  if (iVar6 != -1) {
    iVar6 = CFrameImpl::IsPrintPreview((CFrameImpl *)(*(int *)((int)this + 0x438) + 0x33c));
    if (iVar6 != 0) {
      SendMessageW(*(HWND *)(*(int *)((int)this + 0x438) + 0x20),0x10,0,0);
    }
    CFrameImpl::AddFrame(this);
    (**(code **)(*(int *)this + 0x1cc))(0);
    PostMessageW(*(HWND *)((int)this + 0x20),DAT_10167854,0,0);
  }
  *(undefined4 *)((int)this + 0x13c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

