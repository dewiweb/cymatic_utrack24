// rea decompile_all
// name: CMFCCaptionBar::GetImageSize
// address: 0x100bd91c
// body: available
// range: 0x100bd91c-0x100bd9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bd939 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CSize __thiscall CMFCCaptionBar::GetImageSize(void)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCCaptionBar::GetImageSize(CMFCCaptionBar *this)

{
  undefined4 *in_stack_00000004;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  ICONINFO local_18;
  
  if (*(int *)(this + 0x2c0) < 1) {
    if (*(int *)(this + 0x2b8) == 0) {
      *in_stack_00000004 = 0;
      local_28 = 0;
    }
    else {
      _memset(&local_18,0,0x14);
      GetIconInfo(*(HICON *)(this + 0x2b8),&local_18);
      GetObjectW(local_18.hbmColor,0x18,local_30);
      DeleteObject(local_18.hbmColor);
      DeleteObject(local_18.hbmMask);
      *in_stack_00000004 = local_2c;
    }
  }
  else {
    if (*(int *)(this + 0x2b8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    local_28 = *(undefined4 *)(this + 0x310);
    *in_stack_00000004 = *(undefined4 *)(this + 0x30c);
  }
  in_stack_00000004[1] = local_28;
  return;
}

