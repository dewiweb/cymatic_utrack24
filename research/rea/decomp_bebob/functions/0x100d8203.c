// rea decompile_all
// name: _AFX_MOUSEANCHORWND::PreTranslateMessage
// address: 0x100d8203
// body: available
// range: 0x100d8203-0x100d82b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d8214 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall _AFX_MOUSEANCHORWND::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall _AFX_MOUSEANCHORWND::PreTranslateMessage(_AFX_MOUSEANCHORWND *this,tagMSG *param_1)

{
  uint uVar1;
  POINT pt;
  BOOL BVar2;
  tagPOINT local_c;
  
  if (param_1 == (tagMSG *)0x0) {
    local_c.x = (LONG)this;
    local_c.y = (LONG)this;
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar1 = param_1->message;
  if (uVar1 < 0x206) {
    if (uVar1 < 0x204) {
      if (uVar1 < 0x100) {
        return 0;
      }
      if (0x102 < uVar1) {
        if (uVar1 < 0x104) {
          return 0;
        }
        if (0x105 < uVar1) {
          if (uVar1 < 0x201) {
            return 0;
          }
          if (0x202 < uVar1) {
            return 0;
          }
        }
      }
    }
  }
  else if (uVar1 != 0x207) {
    if (uVar1 == 0x208) {
      local_c.x = (LONG)(short)param_1->lParam;
      local_c.y = (LONG)(short)((uint)param_1->lParam >> 0x10);
      ClientToScreen(*(HWND *)(this + 0x20),&local_c);
      pt.y = local_c.y;
      pt.x = local_c.x;
      BVar2 = PtInRect((RECT *)(this + 0x74),pt);
      if (BVar2 != 0) {
        return 1;
      }
    }
    else if (uVar1 != 0x20a) {
      return 0;
    }
  }
  *(undefined4 *)(this + 0x8c) = 1;
  return 1;
}

