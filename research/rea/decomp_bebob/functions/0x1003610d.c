// rea decompile_all
// name: CMFCVisualManager::OnDrawDefaultRibbonImage
// address: 0x1003610d
// body: available
// range: 0x1003610d-0x10036225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawDefaultRibbonImage(class CDC *,class
   CRect,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawDefaultRibbonImage
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  uint uVar1;
  CPen *pCVar2;
  CPen *pCVar3;
  uint uVar4;
  CDrawingManager local_34 [8];
  undefined **local_2c [2];
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x10036119;
  local_24.top = (param_4 + param_6) / 2;
  local_24.left = (param_5 + param_3) / 2;
  local_24.right = local_24.left + 1;
  local_24.bottom = local_24.top + 1;
  InflateRect(&local_24,5,5);
  if (((DAT_10166c4c < 9) || (DAT_10166c28 != 0)) || (DAT_10166c24 != 0)) {
    uVar1 = DAT_10166ad0;
    if (param_7 == 0) {
      uVar1 = 0x7f00;
    }
    CBrush::CBrush((CBrush *)local_2c,uVar1);
    local_8 = 0;
    pCVar2 = CDC::SelectObject(param_1,(CPen *)local_2c);
    pCVar3 = (CPen *)(**(code **)(*(int *)param_1 + 0x24))(8);
    Ellipse(*(HDC *)(param_1 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
    CDC::SelectObject(param_1,pCVar2);
    CDC::SelectObject(param_1,pCVar3);
    local_8 = 0xffffffff;
    local_2c[0] = CBrush::vftable;
    CImageList::~CImageList((CImageList *)local_2c);
  }
  else {
    CDrawingManager::CDrawingManager(local_34,param_1);
    local_8 = 1;
    uVar1 = DAT_10166ad0;
    uVar4 = DAT_10166ab8;
    if (param_7 == 0) {
      uVar1 = 0x80d0a0;
      uVar4 = 0x2c7547;
    }
    FUN_1009eb96(&local_24.left,uVar1,uVar4);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_34);
  }
  FUN_100f90cf();
  return;
}

