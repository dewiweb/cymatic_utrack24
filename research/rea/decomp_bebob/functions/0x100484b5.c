// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackDescr
// address: 0x100484b5
// body: available
// range: 0x100484b5-0x10048584 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackDescr(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPropertyGridCtrl::TrackDescr(CMFCPropertyGridCtrl *this,int param_1)

{
  RECT *lprc;
  BOOL BVar1;
  int iVar2;
  CClientDC local_30 [4];
  HDC local_2c;
  RECT *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CClientDC::CClientDC(local_30,(CWnd *)this);
  lprc = (RECT *)(this + 0x338);
  local_1c = lprc;
  BVar1 = IsRectEmpty(lprc);
  if (BVar1 == 0) {
    InvertRect(local_2c,lprc);
  }
  if (param_1 == -0x80000000) {
    SetRectEmpty(lprc);
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar2 = *(int *)(this + 0x310) + *(int *)(this + 0x314) + local_18.top;
    if (param_1 <= iVar2) {
      param_1 = iVar2;
    }
    iVar2 = local_18.bottom - *(int *)(this + 0x314);
    if (iVar2 <= param_1) {
      param_1 = iVar2;
    }
    lprc->left = local_18.left;
    *(LONG *)(this + 0x33c) = local_18.top;
    *(LONG *)(this + 0x340) = local_18.right;
    *(LONG *)(this + 0x344) = local_18.bottom;
    *(int *)(this + 0x33c) = param_1 + -1;
    *(int *)(this + 0x344) = param_1 + 1;
    InvertRect(local_2c,local_1c);
  }
  CClientDC::~CClientDC(local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

