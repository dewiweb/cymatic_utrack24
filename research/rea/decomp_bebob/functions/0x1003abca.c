// rea decompile_all
// name: CPaneFrameWnd::OnWindowPosChanging
// address: 0x1003abca
// body: available
// range: 0x1003abca-0x1003ac9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::OnWindowPosChanging(CPaneFrameWnd *this,tagWINDOWPOS *param_1)

{
  int yTop;
  int xLeft;
  int yBottom;
  int xRight;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
  if (((byte)param_1[0x18] & 2) == 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    yTop = *(int *)(param_1 + 0xc);
    xLeft = *(int *)(param_1 + 8);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    if (((byte)param_1[0x18] & 1) == 0) {
      yBottom = *(int *)(param_1 + 0x14) + yTop;
      xRight = *(int *)(param_1 + 0x10) + xLeft;
    }
    else {
      yBottom = (yTop - local_28.top) + local_28.bottom;
      xRight = (xLeft - local_28.left) + local_28.right;
    }
    SetRect(&local_18,xLeft,yTop,xRight,yBottom);
    local_38 = (**(code **)(*(int *)this + 0x16c))();
    local_34 = local_38;
    local_30 = local_38;
    local_2c = local_38;
    CGlobalUtils::AdjustRectToWorkArea
              ((CGlobalUtils *)&PTR_vftable_10160f68,(CRect *)&local_18,(CRect *)&local_38);
    *(LONG *)(param_1 + 8) = local_18.left;
    *(LONG *)(param_1 + 0xc) = local_18.top;
  }
  CWnd::Default((CWnd *)this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

