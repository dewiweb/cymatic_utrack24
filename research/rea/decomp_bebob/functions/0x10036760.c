// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonSliderZoomButton
// address: 0x10036760
// body: available
// range: 0x10036760-0x100368b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonSliderZoomButton(class CDC
   *,class CMFCRibbonSlider *,class CRect,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonSliderZoomButton
          (CMFCVisualManager *this,CDC *param_1,undefined4 param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11)

{
  CDC *this_00;
  int iVar1;
  int iVar2;
  undefined1 local_50 [4];
  int local_4c;
  uint local_48;
  undefined1 local_44 [4];
  CDC *local_40;
  undefined **local_3c [2];
  CPen *local_34;
  CDrawingManager local_30 [8];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x1003676c;
  local_40 = param_1;
  (**(code **)(*(int *)this + 0x288))(param_2,param_9,param_10,param_11,&local_28,&local_48);
  iVar1 = (param_7 + param_5) / 2;
  iVar2 = (param_4 + param_6) / 2;
  local_24 = iVar2 + -7;
  local_20 = iVar1 + -7;
  local_1c = iVar2 + 8;
  local_18 = iVar1 + 8;
  CDrawingManager::CDrawingManager(local_30,param_1);
  local_8 = 0;
  FUN_1009eb96(&local_24,local_48,local_28);
  local_4c = iVar1 + -3;
  if (DAT_1016891c == 0) {
    CPen::CPen((CPen *)local_3c,0,1,local_28);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_34 = CDC::SelectObject(local_40,(CPen *)local_3c);
    this_00 = local_40;
    CDC::MoveTo(local_40,(int)local_44,iVar2 + -3);
    CDC::LineTo(this_00,iVar2 + 4,iVar1);
    if (param_8 == 0) {
      CDC::MoveTo(this_00,(int)local_50,iVar2);
      CDC::LineTo(this_00,iVar2,iVar1 + 4);
    }
    CDC::SelectObject(this_00,local_34);
    local_8 = local_8 & 0xffffff00;
    local_3c[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_3c);
  }
  else {
    CDrawingManager::DrawLine(local_30,iVar2 + -3,iVar1,iVar2 + 4,iVar1,local_28);
    if (param_8 == 0) {
      CDrawingManager::DrawLine(local_30,iVar2,local_4c,iVar2,iVar1 + 4,local_28);
    }
  }
  local_8 = 0xffffffff;
  FUN_1009c588((undefined4 *)local_30);
  FUN_100f90cf();
  return;
}

