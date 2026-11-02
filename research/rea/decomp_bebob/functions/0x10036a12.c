// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonColorPaletteBox
// address: 0x10036a12
// body: available
// range: 0x10036a12-0x10036bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036ad8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonColorPaletteBox(class CDC *,class
   CMFCRibbonColorButton *,class CMFCRibbonGalleryIcon *,unsigned long,class
   CRect,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonColorPaletteBox
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,undefined4 param_3,HBRUSH param_4,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13)

{
  CPen *pCVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 local_3c [8];
  undefined **local_34 [2];
  undefined **local_2c;
  HBRUSH local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x10036a1e;
  local_24.left = param_6;
  local_24.top = param_7;
  local_24.right = param_8;
  local_24.bottom = param_9;
  local_28 = param_4;
  InflateRect(&local_24,-1,0);
  if ((param_12 != 0) || (param_13 != 0)) {
    CMFCToolBarImages::FillDitheredRect(param_1,(CRect *)&param_6);
    InflateRect(&local_24,-1,-2);
  }
  if (local_28 != (HBRUSH)0xffffffff) {
    CBrush::CBrush((CBrush *)&local_2c,(ulong)local_28);
    FillRect(*(HDC *)(param_1 + 4),&local_24,local_28);
    local_2c = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_2c);
  }
  if ((param_10 == 0) || (param_11 == 0)) {
    CPen::CPen((CPen *)local_34,0,1,DAT_10166ab8);
    local_8 = 0;
    pCVar1 = CDC::SelectObject(param_1,(CPen *)local_34);
    if (pCVar1 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CDC::MoveTo(param_1,(int)&local_2c,param_6);
    CDC::LineTo(param_1,param_6,param_9);
    CDC::MoveTo(param_1,(int)&local_2c,param_8 + -1);
    CDC::LineTo(param_1,param_8 + -1,param_9);
    if (param_10 != 0) {
      CDC::MoveTo(param_1,(int)&local_2c,param_6);
      CDC::LineTo(param_1,param_8,param_7);
    }
    if (param_11 != 0) {
      CDC::MoveTo(param_1,(int)local_3c,param_6);
      CDC::LineTo(param_1,param_8,param_9 + -1);
    }
    CDC::SelectObject(param_1,pCVar1);
    local_8 = 0xffffffff;
    local_34[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_34);
  }
  else {
    CDC::Draw3dRect(param_1,(tagRECT *)&param_6,DAT_10166ab8,DAT_10166ab8);
  }
  uVar2 = DAT_10166af4;
  uVar3 = DAT_10166af0;
  if ((param_12 != 0) || (uVar2 = DAT_10166af0, uVar3 = DAT_10166af4, param_13 != 0)) {
    CDC::Draw3dRect(param_1,(tagRECT *)&param_6,uVar2,uVar3);
  }
  FUN_100f90cf();
  return;
}

