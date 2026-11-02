// rea decompile_all
// name: CMFCVisualManager::OnFillRibbonEdit
// address: 0x10032ec4
// body: available
// range: 0x10032ec4-0x10032f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillRibbonEdit(class CDC *,class
   CMFCRibbonRichEditCtrl *,class CRect,int,int,int,unsigned long &,unsigned long &,unsigned long &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnFillRibbonEdit
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7,int param_8,undefined4 param_9,int param_10)

{
  CDrawingManager *pCVar1;
  CDrawingManager local_20 [8];
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10032ed0;
  if ((param_8 == 0) || (param_10 != 0)) {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 1;
    if (DAT_1016891c == 0) {
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,DAT_10166b6c);
      CDrawingManager::HighlightRect
                (local_18,param_4,param_5,param_6,param_7,0xffffffff,0xffffffff,0,0xffffffff);
    }
    else {
      CDrawingManager::DrawRect(local_18,(CRect *)&param_4,DAT_10166aec,0xffffffff);
    }
    pCVar1 = local_18;
  }
  else {
    if (DAT_1016891c == 0) {
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,DAT_10166b64);
      return;
    }
    CDrawingManager::CDrawingManager(local_20,param_1);
    local_8 = 0;
    CDrawingManager::DrawRect(local_20,(CRect *)&param_4,DAT_10166b04,0xffffffff);
    pCVar1 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_1009c588((undefined4 *)pCVar1);
  return;
}

