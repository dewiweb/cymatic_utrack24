// rea decompile_all
// name: CDockablePane::CheckAutoHideCondition
// address: 0x10079cca
// body: available
// range: 0x10079cca-0x10079e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CDockablePane::CheckAutoHideCondition(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockablePane::CheckAutoHideCondition(CDockablePane *this)

{
  POINT Point;
  POINT pt;
  POINT pt_00;
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  CObject *this_00;
  tagPOINT local_40;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x30c) == 0)) &&
      (iVar2 = (**(code **)(*(int *)this + 0x1d8))(), iVar2 != 0)) &&
     ((DAT_1016843c == 0 &&
      (((iVar2 = *(int *)(this + 0x338), iVar2 == 0 || (*(int *)(iVar2 + 0x20) == 0)) ||
       (BVar3 = IsWindowVisible(*(HWND *)(iVar2 + 0x20)), BVar3 == 0)))))) {
    iVar2 = *(int *)(this + 0x318);
    local_38.left = *(LONG *)(iVar2 + 0x18);
    local_38.top = *(LONG *)(iVar2 + 0x1c);
    local_38.right = *(LONG *)(iVar2 + 0x20);
    local_38.bottom = *(LONG *)(iVar2 + 0x24);
    CWnd::ClientToScreen(*(CWnd **)(this + 0x31c),&local_38);
    local_40.x = 0;
    local_40.y = 0;
    GetCursorPos(&local_40);
    Point.y = local_40.y;
    Point.x = local_40.x;
    pHVar4 = WindowFromPoint(Point);
    this_00 = (CObject *)CWnd::FromHandle(pHVar4);
    bVar1 = false;
    while (this_00 != (CObject *)0x0) {
      if (((this_00 == (CObject *)this) || (*(int *)(this_00 + 0x20) == *(int *)(this + 0x33c))) ||
         (iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)
                                            &PTR_s_CMFCPropertyGridToolTipCtrl_10136f74), iVar2 != 0
         )) {
        bVar1 = true;
        break;
      }
      pHVar4 = GetParent(*(HWND *)(this_00 + 0x20));
      this_00 = (CObject *)CWnd::FromHandle(pHVar4);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x33c),&local_28);
    UnionRect(&local_18,&local_18,&local_28);
    pt.y = local_40.y;
    pt.x = local_40.x;
    BVar3 = PtInRect(&local_18,pt);
    if (((BVar3 == 0) && (!bVar1)) &&
       (pt_00.y = local_40.y, pt_00.x = local_40.x, BVar3 = PtInRect(&local_38,pt_00), BVar3 == 0))
    {
      (**(code **)(*(int *)this + 0x344))(0,1);
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

