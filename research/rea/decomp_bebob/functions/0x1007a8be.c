// rea decompile_all
// name: CDockablePane::AdjustPaneToPaneContainer
// address: 0x1007a8be
// body: available
// range: 0x1007a8be-0x1007a9d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::AdjustPaneToPaneContainer(class CPaneDivider
   *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::AdjustPaneToPaneContainer(CDockablePane *this,CPaneDivider *param_1)

{
  BOOL BVar1;
  CFrameWnd *this_00;
  int iVar2;
  int iVar3;
  tagRECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  CPaneDivider::GetRootContainerRect(param_1);
  BVar1 = IsRectEmpty(&local_28);
  if ((BVar1 == 0) && (this_00 = CWnd::GetParentFrame((CWnd *)this), this_00 != (CFrameWnd *)0x0)) {
    CWnd::ScreenToClient((CWnd *)this_00,&local_28);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this_00,&local_18);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    UnionRect(&local_38,&local_18,&local_28);
    BVar1 = EqualRect(&local_38,&local_28);
    if (BVar1 == 0) {
      OffsetRect(&local_18,local_28.left - local_18.left,local_28.top - local_18.top);
      iVar3 = local_28.right - local_28.left;
      if (iVar3 < local_18.right - local_18.left) {
        local_18.right = iVar3 + local_18.left;
      }
      iVar2 = local_28.bottom - local_28.top;
      if (iVar2 < local_18.bottom - local_18.top) {
        local_18.bottom = local_18.top + iVar2;
      }
      (**(code **)(*(int *)this + 0x234))(0,local_18.left,local_18.top,iVar3,iVar2,0x14,0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

