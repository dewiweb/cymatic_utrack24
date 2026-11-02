// rea decompile_all
// name: CMFCTasksPane::OnSetCursor
// address: 0x100eeaed
// body: available
// range: 0x100eeaed-0x100eeb82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCTasksPane::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCTasksPane::OnSetCursor(CMFCTasksPane *this,CWnd *param_1,uint param_2,uint param_3)

{
  CMFCTasksPaneTask *pCVar1;
  HICON__ *hCursor;
  int iVar2;
  long lVar3;
  tagPOINT local_c;
  
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(this + 0x20),&local_c);
  pCVar1 = TaskHitTest(this,local_c.x,local_c.y);
  if ((((*(int *)(this + 0x448) == 0) || (*(int *)(*(int *)(this + 0x448) + 0x38) == 0)) &&
      ((pCVar1 == (CMFCTasksPaneTask *)0x0 || (*(int *)(pCVar1 + 0x38) == 0)))) &&
     ((*(int *)(this + 0x350) == 0 ||
      ((*(int *)(this + 0x51c) == 0 &&
       (iVar2 = (**(code **)(*(int *)this + 1000))(local_c.x,local_c.y), iVar2 == 0)))))) {
    lVar3 = CWnd::Default((CWnd *)this);
    return lVar3;
  }
  hCursor = AFX_GLOBAL_DATA::GetHandCursor((AFX_GLOBAL_DATA *)&DAT_10166aa0);
  SetCursor(hCursor);
  return 1;
}

