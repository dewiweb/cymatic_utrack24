// rea decompile_all
// name: AfxRepositionWindow
// address: 0x1000ef61
// body: available
// range: 0x1000ef61-0x1000f014 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall AfxRepositionWindow(struct AFX_SIZEPARENTPARAMS *,struct HWND__ *,struct tagRECT
   const *)
   
   Library: Visual Studio 2010 Release */

void AfxRepositionWindow(AFX_SIZEPARENTPARAMS *param_1,HWND__ *param_2,tagRECT *param_3)

{
  int Y;
  int X;
  HWND hWnd;
  BOOL BVar1;
  HDWP pvVar2;
  int cy;
  int cx;
  undefined1 local_18 [12];
  LONG local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  hWnd = GetParent(param_2);
  if ((param_1 == (AFX_SIZEPARENTPARAMS *)0x0) || (*(int *)param_1 != 0)) {
    local_18._0_4_ = 0;
    local_18._4_4_ = 0;
    local_18._8_4_ = 0;
    local_c = 0;
    GetWindowRect(param_2,(LPRECT)local_18);
    ScreenToClient(hWnd,(LPPOINT)local_18);
    ScreenToClient(hWnd,(LPPOINT)(local_18 + 8));
    BVar1 = EqualRect((RECT *)local_18,param_3);
    if (BVar1 == 0) {
      Y = param_3->top;
      X = param_3->left;
      cy = param_3->bottom - Y;
      cx = param_3->right - X;
      if (param_1 == (AFX_SIZEPARENTPARAMS *)0x0) {
        SetWindowPos(param_2,(HWND)0x0,X,Y,cx,cy,0x14);
      }
      else {
        pvVar2 = DeferWindowPos(*(HDWP *)param_1,param_2,(HWND)0x0,X,Y,cx,cy,0x14);
        *(HDWP *)param_1 = pvVar2;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

