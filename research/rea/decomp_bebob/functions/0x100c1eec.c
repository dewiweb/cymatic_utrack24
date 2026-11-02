// rea decompile_all
// name: CMFCDragFrameImpl::EndDrawDragFrame
// address: 0x100c1eec
// body: available
// range: 0x100c1eec-0x100c1fe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c1fbe to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::EndDrawDragFrame(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCDragFrameImpl::EndDrawDragFrame(CMFCDragFrameImpl *this,int param_1)

{
  CSmartDockingManager *this_00;
  bool bVar1;
  BOOL BVar2;
  RECT *lprc;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x48) != 0) {
    this_00 = *(CSmartDockingManager **)(*(int *)(this + 0x48) + 0x1b8);
    bVar1 = false;
    if (((this_00 != (CSmartDockingManager *)0x0) && (*(int *)(this_00 + 8) != 0)) &&
       (*(int *)(this_00 + 4) != 0)) {
      bVar1 = true;
      CSmartDockingManager::HidePlace(this_00);
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SetRectEmpty(&local_18);
    lprc = (RECT *)(this + 0x1c);
    BVar2 = IsRectEmpty(lprc);
    if (BVar2 != 0) {
      lprc = (RECT *)(this + 0xc);
    }
    local_28.left = lprc->left;
    local_28.top = lprc->top;
    local_28.right = lprc->right;
    local_28.bottom = lprc->bottom;
    if (*(int *)(this + 0x34) == -1) {
      if (!bVar1) {
        DrawDragFrame(this,&local_18,&local_28,0,*(int *)(this + 0x40),4);
      }
    }
    else {
      *(undefined4 *)(this + 0x2c) = 1;
    }
    if (param_1 != 0) {
      RemoveTabPreDocking(this,(CDockablePane *)0x0);
      SetRectEmpty((LPRECT)(this + 0x1c));
      SetRectEmpty((LPRECT)(this + 0xc));
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x4c);
      *(undefined4 *)(this + 0x4c) = 0;
    }
    *(undefined4 *)(this + 0x30) = 0;
    if (*(CDockingManager **)(this + 0x48) == (CDockingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    if (!bVar1) {
      CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

