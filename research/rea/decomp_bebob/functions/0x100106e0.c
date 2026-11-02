// rea decompile_all
// name: CWnd::ScrollWindow
// address: 0x100106e0
// body: available
// range: 0x100106e0-0x100107a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::ScrollWindow(int,int,struct tagRECT const *,struct tagRECT const
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CWnd::ScrollWindow(CWnd *this,int param_1,int param_2,tagRECT *param_3,tagRECT *param_4)

{
  BOOL BVar1;
  HWND hWnd;
  UINT uCmd;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindowVisible(*(HWND *)(this + 0x20));
  if (((BVar1 == 0) && (param_3 == (tagRECT *)0x0)) && (param_4 == (tagRECT *)0x0)) {
    uCmd = 5;
    hWnd = *(HWND *)(this + 0x20);
    while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(hWnd,&local_18);
      ScreenToClient(this,&local_18);
      ::SetWindowPos(hWnd,(HWND)0x0,local_18.left + param_1,local_18.top + param_2,0,0,0x15);
      uCmd = 2;
    }
  }
  else {
    ::ScrollWindow(*(HWND *)(this + 0x20),param_1,param_2,param_3,param_4);
  }
  if ((*(int *)(this + 0x68) != 0) && (param_3 == (tagRECT *)0x0)) {
    (**(code **)(**(int **)(this + 0x68) + 0x5c))(param_1,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

