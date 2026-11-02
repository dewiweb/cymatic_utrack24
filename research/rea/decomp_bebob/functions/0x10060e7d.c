// rea decompile_all
// name: CFrameImpl::OnNcActivate
// address: 0x10060e7d
// body: available
// range: 0x10060e7d-0x10060fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::OnNcActivate(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::OnNcActivate(CFrameImpl *this,int param_1)

{
  bool bVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  int iVar5;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2c) == 0) {
    if (((param_1 == 0) && (*(int *)(this + 0xfc) != 0)) &&
       (BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar2 != 0)) {
      FUN_1006dd3f(*(int *)(this + 0xfc));
      CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(this + 0xfc),0);
    }
    BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
    if (BVar2 != 0) {
      pCVar3 = CMFCVisualManager::GetInstance();
      iVar4 = (**(code **)(*(int *)pCVar3 + 0x200))(*(undefined4 *)(this + 0xb0),param_1);
      bVar1 = false;
      if (((iVar4 != 0) && (*(int *)(this + 0xfc) != 0)) &&
         ((BVar2 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar2 != 0 &&
          (*(int *)(*(int *)(this + 0xfc) + 0x314) != 0)))) {
        RedrawWindow(*(HWND *)(*(int *)(this + 0xfc) + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(RECT *)0x0,(HRGN)0x0,0x501);
        bVar1 = true;
      }
      iVar5 = *(int *)(this + 0x100);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
        RedrawWindow(*(HWND *)(iVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      }
      if ((!bVar1) && (iVar5 = IsOwnerDrawCaption(this), iVar5 != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        RedrawWindow(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18,(HRGN)0x0,0x541);
      }
      if (iVar4 != 0) {
        AFX_GLOBAL_DATA::DwmIsCompositionEnabled((AFX_GLOBAL_DATA *)&DAT_10166aa0);
      }
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

