// rea decompile_all
// name: CPaneFrameWnd::SetCaptionButtonsToolTips
// address: 0x1003c08a
// body: available
// range: 0x1003c08a-0x1003c17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::SetCaptionButtonsToolTips(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneFrameWnd::SetCaptionButtonsToolTips(CPaneFrameWnd *this)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x118);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) &&
     (iVar2 = *(int *)(this + 0x108), LVar3 = SendMessageW(*(HWND *)(iVar1 + 0x20),0x40d,0,0),
     iVar2 != LVar3)) {
    local_1c = 0;
    LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0x118) + 0x20),0x40d,0,0);
    if (0 < LVar3) {
      do {
        local_1c = local_1c + 1;
        CToolTipCtrl::DelTool(*(CToolTipCtrl **)(this + 0x118),(CWnd *)this,local_1c);
        LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0x118) + 0x20),0x40d,0,0);
      } while ((int)local_1c < LVar3);
    }
    uVar4 = SendMessageW(*(HWND *)(*(int *)(this + 0x118) + 0x20),0x40d,0,0);
    while ((-1 < (int)uVar4 && ((int)uVar4 < *(int *)(this + 0x108)))) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      SetRectEmpty(&local_18);
      uVar4 = uVar4 + 1;
      CToolTipCtrl::AddTool
                (*(CToolTipCtrl **)(this + 0x118),(CWnd *)this,(wchar_t *)0xffffffff,&local_18,uVar4
                );
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

