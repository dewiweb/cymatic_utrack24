// rea decompile_all
// name: CScreenWnd::Create
// address: 0x100eb1f3
// body: available
// range: 0x100eb1f3-0x100eb2a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CScreenWnd::Create(class CMFCColorDialog *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CScreenWnd::Create(CScreenWnd *this,CMFCColorDialog *param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HCURSOR pHVar4;
  _AFX_THREAD_STATE *p_Var5;
  int iVar6;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100eb1ff;
  pHVar1 = GetDesktopWindow();
  pCVar2 = CWnd::FromHandle(pHVar1);
  if (pCVar2 != (CWnd *)0x0) {
    *(CMFCColorDialog **)(this + 0x74) = param_1;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_24);
    AfxGetModuleState();
    pAVar3 = AfxGetModuleState();
    pHVar4 = LoadCursorW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x3f11);
    p_Var5 = AfxRegisterWndClass(0x800,pHVar4,(HBRUSH)0x10,(HICON)0x0);
    FUN_10006ce0(&local_28,(short *)p_Var5);
    local_8 = 0;
    CreateEx(this,0xa0,local_28,&PTR_1011d390,0x90000000,&local_24.left,0,0,0);
    FUN_10001030((undefined4 *)(local_28 + -0x10));
  }
  iVar6 = FUN_100f90cf();
  return iVar6;
}

