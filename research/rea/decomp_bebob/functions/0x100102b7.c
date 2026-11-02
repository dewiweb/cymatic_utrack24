// rea decompile_all
// name: CMenu::TrackPopupMenu
// address: 0x100102b7
// body: available
// range: 0x100102b7-0x1001030c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMenu::TrackPopupMenu(unsigned int,int,int,class CWnd *,struct tagRECT
   const *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall
CMenu::TrackPopupMenu
          (CMenu *this,uint param_1,int param_2,int param_3,CWnd *param_4,tagRECT *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _AFX_THREAD_STATE *p_Var3;
  HWND hWnd;
  BOOL BVar4;
  
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 0x78);
  uVar2 = *(undefined4 *)(p_Var3 + 0x74);
  hWnd = (HWND)0x0;
  if (param_4 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_4 + 0x20);
  }
  *(HWND *)(p_Var3 + 0x74) = hWnd;
  *(undefined4 *)(p_Var3 + 0x78) = *(undefined4 *)(this + 4);
  BVar4 = ::TrackPopupMenu(*(HMENU *)(this + 4),param_1,param_2,param_3,0,hWnd,param_5);
  *(undefined4 *)(p_Var3 + 0x74) = uVar2;
  *(undefined4 *)(p_Var3 + 0x78) = uVar1;
  return BVar4;
}

