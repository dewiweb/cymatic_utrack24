// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonTabsFrame
// address: 0x10036226
// body: available
// range: 0x10036226-0x100362ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036263 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonTabsFrame(class CDC
   *,class CMFCRibbonBar *,class CRect)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonTabsFrame
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_4,int param_5,int param_6
          )

{
  CPen *pCVar1;
  undefined1 local_20 [8];
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10036232;
  CPen::CPen((CPen *)local_18,0,1,DAT_10166af0);
  local_8 = 0;
  pCVar1 = CDC::SelectObject(param_1,(CPen *)local_18);
  if (pCVar1 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CDC::MoveTo(param_1,(int)local_20,param_4);
  CDC::LineTo(param_1,param_6,param_5);
  CDC::SelectObject(param_1,pCVar1);
  local_8 = 0xffffffff;
  local_18[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_18);
  return 0xffffffff;
}

