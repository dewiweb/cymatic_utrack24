// rea decompile_all
// name: CMFCColorMenuButton::OnDraw
// address: 0x100eb9f2
// body: available
// range: 0x100eb9f2-0x100ebc61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100eba7f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorMenuButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCColorMenuButton::OnDraw
          (CMFCColorMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CPalette *pCVar1;
  int iVar2;
  void *ho;
  CMFCVisualManager *pCVar3;
  CPen *pCVar4;
  CPen *pCVar5;
  CMFCColorMenuButton *pCVar6;
  CMFCColorMenuButton *pCVar7;
  undefined **local_40;
  HBRUSH local_3c;
  undefined **local_38 [2];
  CMFCToolBarImages *local_30;
  CPalette *local_2c;
  CMFCColorMenuButton *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100eb9fe;
  local_30 = param_3;
  local_28 = this;
  CMFCToolBarMenuButton::OnDraw
            ((CMFCToolBarMenuButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             param_8);
  iVar2 = CMFCToolBarButton::IsDrawImage((CMFCToolBarButton *)this);
  if ((iVar2 != 0) && (param_3 != (CMFCToolBarImages *)0x0)) {
    local_2c = (CPalette *)0x0;
    if (DAT_10166c4c == 8) {
      pCVar1 = (CPalette *)(this + 0x104);
      if ((pCVar1 == (CPalette *)0x0) || (*(int *)(this + 0x108) == 0)) {
        CMFCColorBar::CreatePalette((CArray<unsigned_long,unsigned_long> *)(this + 0xf0),pCVar1);
      }
      if (pCVar1 == (CPalette *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(this + 0x108);
      }
      if (iVar2 == 0) {
LAB_100eba7f:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      local_2c = CDC::SelectPalette(param_1,pCVar1,0);
      RealizePalette(*(HDC *)(param_1 + 4));
      param_3 = local_30;
    }
    else if (((CGdiObject *)(this + 0x104) != (CGdiObject *)0x0) && (*(int *)(this + 0x108) != 0)) {
      ho = CGdiObject::Detach((CGdiObject *)(this + 0x104));
      DeleteObject(ho);
      if (*(int *)(this + 0x108) != 0) goto LAB_100eba7f;
    }
    pCVar6 = local_28;
    local_24.left = *(LONG *)(param_3 + 0x68);
    local_24.right = *(LONG *)(param_3 + 0x70);
    local_24.bottom = *(LONG *)(param_3 + 0x74);
    if ((DAT_10166e5c == 0) || (*(int *)(local_28 + 0x94) != 0)) {
      local_24.top = 5;
    }
    else {
      local_24.top = 10;
    }
    local_24.top = local_24.bottom - local_24.top;
    OffsetRect(&local_24,0,1);
    if (((((param_6 != 0) && (param_5 == 0)) &&
         (pCVar3 = CMFCVisualManager::GetInstance(), *(int *)(pCVar3 + 0x70) != 0)) &&
        ((DAT_10166c28 == 0 && (DAT_10166c24 == 0)))) && ((*(uint *)(pCVar6 + 0x24) & 0x70000) == 0)
       ) {
      CBrush::CBrush((CBrush *)&local_40,(ulong)DAT_10166af0);
      FillRect(*(HDC *)(param_1 + 4),&local_24,local_3c);
      OffsetRect(&local_24,-1,-1);
      local_40 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_40);
    }
    local_28 = DAT_10166af0;
    if (((*(uint *)(pCVar6 + 0x24) & 0x40000) == 0) &&
       (local_28 = *(CMFCColorMenuButton **)(pCVar6 + 0xe8),
       *(CMFCColorMenuButton **)(pCVar6 + 0xe8) == (CMFCColorMenuButton *)0xffffffff)) {
      local_28 = *(CMFCColorMenuButton **)(pCVar6 + 0xec);
    }
    CBrush::CBrush((CBrush *)local_38,
                   (((uint)local_28 >> 0x10 & 0xff | 0x200) << 8 | (uint)local_28 >> 8 & 0xff) << 8
                   | (uint)local_28 & 0xff);
    local_8 = 0;
    pCVar4 = CDC::SelectObject(param_1,(CPen *)local_38);
    pCVar5 = (CPen *)(**(code **)(*(int *)param_1 + 0x24))(8);
    Rectangle(*(HDC *)(param_1 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
    CDC::SelectObject(param_1,pCVar5);
    CDC::SelectObject(param_1,pCVar4);
    pCVar3 = CMFCVisualManager::GetInstance();
    pCVar6 = DAT_10166af0;
    pCVar7 = DAT_10166afc;
    if ((*(int *)(pCVar3 + 0x6c) == 0) ||
       (pCVar6 = DAT_10166af8, pCVar7 = DAT_10166af8, local_28 == DAT_10166aec)) {
      CDC::Draw3dRect(param_1,&local_24,(ulong)pCVar6,(ulong)pCVar7);
    }
    if (local_2c != (CPalette *)0x0) {
      CDC::SelectPalette(param_1,local_2c,0);
    }
    local_8 = 0xffffffff;
    local_38[0] = CBrush::vftable;
    CImageList::~CImageList((CImageList *)local_38);
  }
  FUN_100f90cf();
  return;
}

