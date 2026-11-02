// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategory
// address: 0x100362ac
// body: available
// range: 0x100362ac-0x100363e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036314 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCategory(class CDC *,class
   CMFCRibbonCategory *,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCategory
          (undefined4 param_1_00,CDC *param_1,int param_2,int param_4,int param_5,uint param_6,
          int param_7)

{
  int iVar1;
  int iVar2;
  CPen *pCVar3;
  undefined1 local_2c [8];
  CDrawingManager local_24 [8];
  undefined **local_1c [2];
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100362b8;
  param_6 = param_6 - 2;
  param_7 = param_7 + -2;
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,DAT_10166b6c);
  iVar1 = *(int *)(param_2 + 0x4c);
  iVar2 = *(int *)(param_2 + 0x54);
  CPen::CPen((CPen *)local_1c,0,1,DAT_10166af0);
  local_8 = 0;
  pCVar3 = CDC::SelectObject(param_1,(CPen *)local_1c);
  if (pCVar3 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CDC::MoveTo(param_1,(int)local_2c,param_4);
  CDC::LineTo(param_1,iVar1 + 1,param_5);
  CDC::MoveTo(param_1,(int)local_2c,iVar2 + -2);
  CDC::LineTo(param_1,param_6,param_5);
  CDC::LineTo(param_1,param_6,param_7);
  CDC::LineTo(param_1,param_4,param_7);
  CDC::LineTo(param_1,param_4,param_5);
  CDC::SelectObject(param_1,pCVar3);
  CDrawingManager::CDrawingManager(local_24,param_1);
  local_8._0_1_ = 1;
  FUN_1009e432(local_24,param_4,param_5,param_6,param_7,2,100,0x4b,(CMenu *)0x0,(CMenu *)0x0,
               *(undefined4 *)(local_14 + 0xc4),1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1009c588((undefined4 *)local_24);
  local_8 = 0xffffffff;
  local_1c[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_1c);
  return;
}

