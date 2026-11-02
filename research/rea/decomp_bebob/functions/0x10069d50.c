// rea decompile_all
// name: COleIPFrameWnd::OnResizeChild
// address: 0x10069d50
// body: available
// range: 0x10069d50-0x10069e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall COleIPFrameWnd::OnResizeChild(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall COleIPFrameWnd::OnResizeChild(COleIPFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  long lVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x168))();
  if (iVar1 != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CopyRect(&local_18,(RECT *)param_2);
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    CWnd::ClientToScreen((CWnd *)this,&local_18);
    CWnd::ScreenToClient(pCVar3,&local_18);
    pCVar3 = CWnd::GetDlgItem((CWnd *)this,0xe900);
    local_28 = *(int *)(this + 0x158);
    local_24 = *(int *)(this + 0x15c);
    local_20 = *(int *)(this + 0x160);
    local_1c = *(int *)(this + 0x164);
    (**(code **)(*(int *)pCVar3 + 0x68))(&local_28,1);
    local_18.left = local_18.left + (*(int *)(this + 0x158) - local_28);
    local_18.top = local_18.top + (*(int *)(this + 0x15c) - local_24);
    local_18.right = local_18.right + (*(int *)(this + 0x160) - local_20);
    local_18.bottom = local_18.bottom + (*(int *)(this + 0x164) - local_1c);
    (**(code **)(*(int *)this + 0x1d4))(&local_18);
  }
  lVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar4;
}

