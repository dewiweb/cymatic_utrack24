// rea decompile_all
// name: CPreviewViewEx::SetToolbarSize
// address: 0x10068a7c
// body: available
// range: 0x10068a7c-0x10068b9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewViewEx::SetToolbarSize(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewViewEx::SetToolbarSize(CPreviewViewEx *this)

{
  CPreviewViewEx *pCVar1;
  tagSIZE tVar2;
  int iVar3;
  CFrameWnd *this_00;
  int iVar4;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar1 = this + 0x15c;
  if ((pCVar1 != (CPreviewViewEx *)0x0) && (*(int *)(this + 0x17c) != 0)) {
    (**(code **)(*(int *)pCVar1 + 0x25c))(&local_30,1,1);
    this_00 = AFXGetParentFrame((CWnd *)this);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(*(HWND *)(this_00 + 0x20),&local_28);
    local_30 = local_28.right - local_28.left;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x17c),&local_18);
    CWnd::ScreenToClient((CWnd *)this_00,&local_18);
    CWnd::SetWindowPos(*(CWnd **)(this + 0xd0),(CWnd *)0x0,local_18.left,local_18.top,local_30,
                       local_2c,0x54);
    (**(code **)(*(int *)pCVar1 + 0x234))(0,0,0,local_30,local_2c,0x54,0);
    iVar3 = local_30;
    *(int *)(*(int *)(this + 0xd0) + 0xbc) = local_2c;
    tVar2.cy = local_2c;
    tVar2.cx = local_30;
    iVar4 = CSize::operator==((CSize *)(this + 0xe44),tVar2);
    if (iVar4 == 0) {
      *(int *)(this + 0xe44) = iVar3;
      *(int *)(this + 0xe48) = local_2c;
      (**(code **)(*(int *)this_00 + 0x174))(1);
      UpdateWindow(*(HWND *)(this_00 + 0x20));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

