// rea decompile_all
// name: CPaneFrameWnd::OnPaneRecalcLayout
// address: 0x1003a951
// body: available
// range: 0x1003a951-0x1003aa57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::OnPaneRecalcLayout(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnPaneRecalcLayout(CPaneFrameWnd *this)

{
  CWnd *pCVar1;
  CObject *pCVar2;
  int local_28;
  int local_24;
  CPaneFrameWnd *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_20 = this;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)pCVar1);
  local_1c = 0;
  if (pCVar2 != (CObject *)0x0) {
    if (DAT_101689e0 != 0) {
      local_28 = 0;
      local_24 = 0;
      (**(code **)(*(int *)pCVar2 + 0x26c))(&local_28);
      if (local_18.right - local_18.left < local_28) {
        local_18.right = local_18.left + local_28;
        local_1c = 1;
      }
      this = local_20;
      if (local_18.bottom - local_18.top < local_24) {
        local_18.bottom = local_18.top + local_24;
        local_1c = 1;
      }
    }
    (**(code **)(*(int *)pCVar2 + 0x234))
              (0,local_18.left,local_18.top,local_18.right - local_18.left,
               local_18.bottom - local_18.top,0x34,0);
    RedrawWindow(*(HWND *)(pCVar2 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    if (local_1c != 0) {
      (**(code **)(*(int *)this + 0x1b0))();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

