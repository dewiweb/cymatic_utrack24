// rea decompile_all
// name: CMFCButton::OnFillBackground
// address: 0x10051f9f
// body: available
// range: 0x10051f9f-0x10052052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCButton::OnFillBackground(class CDC *,class CRect const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::OnFillBackground(CMFCButton *this,CDC *param_1,CRect *param_2)

{
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10051fab;
  if (*(int *)(this + 0x84) == 0) {
    if (*(ulong *)(this + 0x74c) == 0xffffffff) {
      FillRect(*(HDC *)(param_1 + 4),(RECT *)param_2,DAT_10166b34);
    }
    else {
      CDC::FillSolidRect(param_1,(tagRECT *)param_2,*(ulong *)(this + 0x74c));
    }
  }
  else {
    AFX_GLOBAL_DATA::DrawParentBackground
              ((AFX_GLOBAL_DATA *)&DAT_10166aa0,(CWnd *)this,param_1,(tagRECT *)0x0);
  }
  if (((*(int *)(this + 0xb4) != 0) && (*(int *)(this + 0x8c) != 0)) &&
     ((*(int *)(this + 0xa0) == 0 || (*(int *)(this + 0xa8) == 0)))) {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    CDrawingManager::HighlightRect
              (local_18,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0xffffffff,0xffffffff,0,
               0xffffffff);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_18);
  }
  return;
}

