// rea decompile_all
// name: CMFCPropertyGridCtrl::EnsureVisible
// address: 0x10049e1b
// body: available
// range: 0x10049e1b-0x10049f42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCPropertyGridCtrl::EnsureVisible(class CMFCPropertyGridProperty
   *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCPropertyGridCtrl::EnsureVisible
          (CMFCPropertyGridCtrl *this,CMFCPropertyGridProperty *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CMFCPropertyGridProperty *this_00;
  LPRECT lprc;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x314) != 0) {
    if ((param_2 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
      for (this_00 = *(CMFCPropertyGridProperty **)(param_1 + 0xc4);
          this_00 != (CMFCPropertyGridProperty *)0x0;
          this_00 = *(CMFCPropertyGridProperty **)(this_00 + 0xc4)) {
        CMFCPropertyGridProperty::Expand(this_00,1);
      }
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x38);
    if ((iVar1 < *(int *)(this + 0x2ec) + -1) || (*(int *)(this + 0x2f4) < iVar2)) {
      lprc = (LPRECT)(param_1 + 0x3c);
      local_18.left = lprc->left;
      local_18.top = *(LONG *)(param_1 + 0x40);
      local_18.right = *(LONG *)(param_1 + 0x44);
      local_18.bottom = *(LONG *)(param_1 + 0x48);
      SetRectEmpty(lprc);
      RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
      if ((iVar1 < *(int *)(this + 0x2ec) + -1) && (*(int *)(this + 0x2ec) + -1 <= iVar2)) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else if ((*(int *)(this + 0x2f4) < iVar2) && (iVar1 <= *(int *)(this + 0x2f4))) {
        uVar5 = 0;
        uVar4 = 1;
      }
      else {
        uVar5 = iVar1 / *(int *)(this + 0x314) - *(int *)(this + 0x31c);
        uVar4 = 4;
      }
      OnVScroll(this,uVar4,uVar5,(CScrollBar *)0x0);
      BVar3 = IsRectEmpty(&local_18);
      if (BVar3 == 0) {
        (**(code **)(*(int *)param_1 + 0x78))();
        RedrawWindow(*(HWND *)(this + 0x20),lprc,(HRGN)0x0,0x105);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

