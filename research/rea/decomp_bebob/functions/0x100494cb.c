// rea decompile_all
// name: CMFCPropertyGridCtrl::Init
// address: 0x100494cb
// body: available
// range: 0x100494cb-0x10049679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPropertyGridCtrl::Init(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridCtrl::Init(CMFCPropertyGridCtrl *this)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *this_00;
  undefined4 uVar4;
  undefined4 local_48 [2];
  wchar_t *local_40;
  undefined4 local_38;
  undefined4 local_34;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  if (DAT_10166b88 == (HCURSOR)0x0) {
    AfxGetModuleState();
    pAVar1 = AfxGetModuleState();
    DAT_10166b88 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x7904);
  }
  if (DAT_10166b8c == (HCURSOR)0x0) {
    AfxGetModuleState();
    pAVar1 = AfxGetModuleState();
    DAT_10166b8c = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x7905);
  }
  (**(code **)(*(int *)this + 400))();
  local_48[0] = 6;
  local_34 = 0;
  local_40 = L"Property";
  local_38 = 100;
  iVar2 = (**(code **)(*(int *)this + 0x160))();
  SendMessageW(*(HWND *)(iVar2 + 0x20),0x120a,0,(LPARAM)local_48);
  local_40 = L"Value";
  local_38 = 100;
  iVar2 = (**(code **)(*(int *)this + 0x160))();
  SendMessageW(*(HWND *)(iVar2 + 0x20),0x120a,1,(LPARAM)local_48);
  (**(code **)(*(int *)(this + 0x244) + 0x160))(0x50000001,&local_18,this,2);
  (**(code **)(*(int *)(this + 0x74) + 0x160))(this,1);
  SendMessageW(*(HWND *)(this + 0x94),0x401,1,0);
  if (DAT_10166c64 != -1) {
    SendMessageW(*(HWND *)(this + 0x94),0x418,0,DAT_10166c64);
  }
  CWnd::SetWindowPos((CWnd *)(this + 0x74),(CWnd *)&DAT_101665c0,-1,-1,-1,-1,0x13);
  (**(code **)(*(int *)(this + 0x1b0) + 0x160))(this);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar3);
  if (this_00 != (CWnd *)0x0) {
    iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CDialog_1011f594);
    if (iVar2 != 0) {
      uVar4 = 0;
      goto LAB_1004964d;
    }
  }
  uVar4 = 1;
LAB_1004964d:
  *(undefined4 *)(this + 0x354) = uVar4;
  (**(code **)(*(int *)this + 0x16c))();
  CreateBoldFont(this);
  CalcEditMargin(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

