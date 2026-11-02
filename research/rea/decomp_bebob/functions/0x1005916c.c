// rea decompile_all
// name: CMDIChildWnd::OnUpdateFrameMenu
// address: 0x1005916c
// body: available
// range: 0x1005916c-0x100591f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWnd::OnUpdateFrameMenu(int,class CWnd *,struct HMENU__
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMDIChildWnd::OnUpdateFrameMenu(CMDIChildWnd *this,int param_1,CWnd *param_2,HMENU__ *param_3)

{
  CMDIFrameWnd *pCVar1;
  int *piVar2;
  LPARAM lParam;
  UINT Msg;
  
  pCVar1 = GetMDIFrame(this);
  if (param_3 == (HMENU__ *)0x0) {
    if (param_1 != 0) {
      piVar2 = (int *)(**(code **)(*(int *)this + 0x168))();
      if (piVar2 != (int *)0x0) {
        param_3 = (HMENU__ *)(**(code **)(*piVar2 + 0xec))();
        if (param_3 != (HMENU__ *)0x0) goto LAB_100591b3;
      }
    }
    param_3 = *(HMENU__ **)(this + 0x110);
    if (param_3 != (HMENU__ *)0x0) goto LAB_100591b3;
LAB_100591dd:
    lParam = 0;
    param_3 = (HMENU__ *)0x0;
    Msg = 0x234;
  }
  else {
LAB_100591b3:
    if (param_1 == 0) {
      if ((param_3 == (HMENU__ *)0x0) || (param_2 != (CWnd *)0x0)) goto LAB_100591dd;
      lParam = 0;
      param_3 = *(HMENU__ **)(pCVar1 + 0x7c);
    }
    else {
      lParam = (**(code **)(*(int *)pCVar1 + 0x1bc))(param_3);
    }
    Msg = 0x230;
  }
  SendMessageW(*(HWND *)(pCVar1 + 0x110),Msg,(WPARAM)param_3,lParam);
  return;
}

