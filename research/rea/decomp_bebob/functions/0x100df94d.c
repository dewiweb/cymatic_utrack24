// rea decompile_all
// name: CMFCToolBarButtonsListButton::OnVScroll
// address: 0x100df94d
// body: available
// range: 0x100df94d-0x100dfa79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::OnVScroll(unsigned int,unsigned
   int,class CScrollBar *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonsListButton::OnVScroll
          (CMFCToolBarButtonsListButton *this,uint param_1,uint param_2,CScrollBar *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(this + 0x114);
  if (param_1 == 0) {
    iVar4 = -5 - *(int *)(this + 0x98);
LAB_100df9fa:
    iVar2 = iVar2 + iVar4;
LAB_100df9fc:
    iVar4 = iVar2;
    if (iVar2 < 1) goto LAB_100df993;
  }
  else {
    if (param_1 == 1) {
      iVar2 = iVar2 + 5 + *(int *)(this + 0x98);
      goto LAB_100df9fc;
    }
    if (param_1 == 2) {
      iVar2 = iVar2 - (*(int *)(this + 0x98) + 5) * *(int *)(this + 0x11c);
      goto LAB_100df9fc;
    }
    if (param_1 == 3) {
      iVar4 = (*(int *)(this + 0x98) + 5) * *(int *)(this + 0x11c);
      goto LAB_100df9fa;
    }
    if (param_1 == 4) {
      uVar3 = *(int *)(this + 0x98) + 5;
      iVar2 = (((int)uVar3 / 2 + param_2) / uVar3) * uVar3;
      goto LAB_100df9fc;
    }
    if (param_1 != 6) {
      if (param_1 != 7) goto LAB_100dfa6a;
      iVar2 = *(int *)(this + 0x118);
      goto LAB_100df9fc;
    }
    iVar2 = 0;
LAB_100df993:
    iVar4 = 0;
  }
  iVar1 = *(int *)(this + 0x118);
  if ((iVar4 <= iVar1) && (iVar1 = iVar2, iVar2 < 1)) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(this + 0x114)) {
    *(int *)(this + 0x114) = iVar1;
    CWnd::SetScrollPos((CWnd *)this,1,iVar1,1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    iVar2 = GetSystemMetrics(2);
    local_18.right = local_18.right + (-2 - iVar2);
    InflateRect(&local_18,-1,-1);
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
  }
LAB_100dfa6a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

