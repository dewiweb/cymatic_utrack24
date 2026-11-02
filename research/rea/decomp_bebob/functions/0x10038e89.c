// rea decompile_all
// name: CPaneFrameWnd::OnMouseActivate
// address: 0x10038e89
// body: available
// range: 0x10038e89-0x10038f26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPaneFrameWnd::OnMouseActivate(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneFrameWnd::OnMouseActivate(CPaneFrameWnd *this,CWnd *param_1,uint param_2,uint param_3)

{
  BOOL BVar1;
  CWnd *this_00;
  int iVar2;
  long lVar3;
  tagPOINT local_10;
  int local_8;
  
  if ((*(HWND *)(this + 200) != (HWND)0x0) && (BVar1 = IsWindow(*(HWND *)(this + 200)), BVar1 != 0))
  {
    this_00 = CWnd::FromHandle(*(HWND__ **)(this + 200));
    local_10.x = 0;
    local_10.y = 0;
    GetCursorPos(&local_10);
    ScreenToClient(*(HWND *)(this + 0x20),&local_10);
    local_8 = (**(code **)(*(int *)this + 0x1e8))(local_10.x,local_10.y,1);
    iVar2 = CObject::IsKindOf((CObject *)this_00,(CRuntimeClass *)&PTR_s_CMFCToolBar_10160470);
    if ((iVar2 != 0) && (local_8 != 1)) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_101665c0,0,0,0,0,0x13);
      return 3;
    }
  }
  lVar3 = CWnd::Default((CWnd *)this);
  return lVar3;
}

