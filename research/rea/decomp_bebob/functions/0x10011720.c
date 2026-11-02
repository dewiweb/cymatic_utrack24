// rea decompile_all
// name: CWnd::RepositionBars
// address: 0x10011720
// body: available
// range: 0x10011720-0x10011885 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::RepositionBars(unsigned int,unsigned int,unsigned int,unsigned
   int,struct tagRECT *,struct tagRECT const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CWnd::RepositionBars
          (CWnd *this,uint param_1,uint param_2,uint param_3,uint param_4,tagRECT *param_5,
          tagRECT *param_6,int param_7)

{
  HWND__ *pHVar1;
  uint uVar2;
  HWND hWnd;
  uint uVar3;
  CWnd *pCVar4;
  HWND__ *local_2c;
  HDWP local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = (HWND__ *)0x0;
  local_c = param_7;
  local_10 = 0;
  local_14 = 0;
  if (param_6 == (tagRECT *)0x0) {
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
  }
  else {
    local_24.left = param_6->left;
    local_24.top = param_6->top;
    local_24.right = param_6->right;
    local_24.bottom = param_6->bottom;
  }
  uVar2 = param_4 & 0xffff7fff;
  if (uVar2 == 1) {
    local_28 = (HDWP)0x0;
  }
  else {
    local_28 = BeginDeferWindowPos(8);
  }
  hWnd = GetTopWindow(*(HWND *)(this + 0x20));
  pHVar1 = local_2c;
  while (hWnd != (HWND)0x0) {
    uVar3 = ::GetDlgCtrlID(hWnd);
    pCVar4 = FromHandlePermanent(hWnd);
    local_2c = hWnd;
    if ((((uVar3 != param_3) && (local_2c = pHVar1, param_1 <= uVar3)) && (uVar3 <= param_2)) &&
       (pCVar4 != (CWnd *)0x0)) {
      SendMessageW(hWnd,0x361,0,(LPARAM)&local_28);
    }
    hWnd = GetWindow(hWnd,2);
    pHVar1 = local_2c;
  }
  if (uVar2 == 1) {
    if (param_7 == 0) {
      param_5->right = local_14;
      param_5->top = 0;
      param_5->left = 0;
      param_5->bottom = local_10;
    }
    else {
      CopyRect(param_5,&local_24);
    }
  }
  else {
    if ((param_3 != 0) && (pHVar1 != (HWND__ *)0x0)) {
      pCVar4 = FromHandle(pHVar1);
      if (uVar2 == 2) {
        local_24.left = local_24.left + param_5->left;
        local_24.top = local_24.top + param_5->top;
        local_24.right = local_24.right - param_5->right;
        local_24.bottom = local_24.bottom - param_5->bottom;
      }
      if ((param_4 & 0x8000) == 0) {
        (**(code **)(*(int *)pCVar4 + 0x68))(&local_24,0);
        AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)&local_28,pHVar1,&local_24);
      }
    }
    if (local_28 != (HDWP)0x0) {
      EndDeferWindowPos(local_28);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

