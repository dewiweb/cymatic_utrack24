// rea decompile_all
// name: CMFCDragFrameImpl::DrawFrameTab
// address: 0x100c1c52
// body: available
// range: 0x100c1c52-0x100c1de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCDragFrameImpl::DrawFrameTab(class CDockablePane *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCDragFrameImpl::DrawFrameTab(CMFCDragFrameImpl *this,CDockablePane *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  LONG LVar3;
  int iVar4;
  LONG LStack_78;
  CSmartDockingManager *local_4c;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
  iVar2 = DAT_10166c54;
  local_4c = (CSmartDockingManager *)0x0;
  bVar1 = false;
  if (*(int *)(this + 0x48) != 0) {
    local_4c = *(CSmartDockingManager **)(*(int *)(this + 0x48) + 0x1b8);
    if (((local_4c != (CSmartDockingManager *)0x0) && (*(int *)(local_4c + 8) != 0)) &&
       (*(int *)(local_4c + 4) != 0)) {
      bVar1 = true;
    }
  }
  local_18.top = local_28.top;
  local_18.bottom = local_28.bottom;
  local_18.left = local_28.left + 10;
  iVar4 = 0;
  if (DAT_10169320 == 0) {
    local_18.top = local_28.bottom - DAT_10166c6c;
    local_28.bottom = local_28.bottom - DAT_10166c6c;
  }
  else {
    local_18.bottom = DAT_10166c6c + local_28.top;
    local_28.top = local_28.top + DAT_10166c6c;
  }
  local_18.right = local_28.left + 0x32;
  if (local_28.right <= local_18.right) {
    local_18.right = (local_28.right - DAT_10166c54) + -4;
  }
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  SetRectEmpty(&local_38);
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  LVar3 = local_18.bottom;
  if (DAT_10169320 == 0) {
    LVar3 = local_18.top;
  }
  LStack_78 = 0x100c1d53;
  SetRect(&local_48,local_18.left + iVar2,LVar3 - iVar2,local_18.right - iVar2,LVar3 + iVar2);
  if (param_2 == 0) {
    if (bVar1) {
      CopyRect((LPRECT)&stack0xffffff84,&local_28);
      CSmartDockingManager::ShowTabbedPlaceAt(local_4c);
      goto LAB_100c1dd5;
    }
    iVar4 = 1;
  }
  else if (bVar1) {
    CSmartDockingManager::HidePlace(local_4c);
    goto LAB_100c1dd5;
  }
  LStack_78 = 0x100c1dae;
  DrawDragFrame(this,&local_38,&local_18,iVar4,iVar2,iVar2);
  LStack_78 = 0x100c1dc0;
  DrawDragFrame(this,&local_38,&local_28,iVar4,iVar2,iVar2);
  LStack_78 = 0x100c1dd2;
  DrawDragFrame(this,&local_38,&local_48,iVar4,iVar2,iVar2);
  *(int *)(this + 0x54) = iVar4;
LAB_100c1dd5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

