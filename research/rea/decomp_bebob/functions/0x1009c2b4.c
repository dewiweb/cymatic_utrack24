// rea decompile_all
// name: CreateEx
// address: 0x1009c2b4
// body: available
// range: 0x1009c2b4-0x1009c328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMiniFrameWnd::CreateEx(unsigned long,char const *,char const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int)
    public: virtual int __thiscall CMiniFrameWnd::CreateEx(unsigned long,wchar_t const *,wchar_t
   const *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CreateEx(void *this,ulong param_1,_AFX_THREAD_STATE *param_2,wchar_t *param_3,ulong param_4,
        int *param_5,int param_6,HMENU__ *param_7)

{
  HCURSOR pHVar1;
  HWND__ *pHVar2;
  HBRUSH pHVar3;
  HICON pHVar4;
  
  FUN_100022b0((void *)((int)this + 0x11c),param_3);
  pHVar2 = (HWND__ *)0x0;
  if (param_2 == (_AFX_THREAD_STATE *)0x0) {
    pHVar4 = (HICON)0x0;
    pHVar3 = (HBRUSH)0x0;
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    param_2 = AfxRegisterWndClass(8,pHVar1,pHVar3,pHVar4);
  }
  if (param_6 != 0) {
    pHVar2 = *(HWND__ **)(param_6 + 0x20);
  }
  CWnd::CreateEx(this,param_1,(wchar_t *)param_2,param_3,param_4,*param_5,param_5[1],
                 param_5[2] - *param_5,param_5[3] - param_5[1],pHVar2,param_7,(void *)0x0);
  return;
}

