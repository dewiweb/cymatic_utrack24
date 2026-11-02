// rea decompile_all
// name: CDC::DrawDragRect
// address: 0x1001de73
// body: available
// range: 0x1001de73-0x1001e136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001df4f to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDC::DrawDragRect(struct tagRECT const *,struct tagSIZE,struct tagRECT
   const *,struct tagSIZE,class CBrush *,class CBrush *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDC::DrawDragRect(CDC *this,tagRECT *param_1,tagSIZE param_2,tagRECT *param_3,tagSIZE param_4,
                 CBrush *param_5,CBrush *param_6)

{
  HRGN pHVar1;
  CPen *pCVar2;
  CRgn *pCVar3;
  undefined **local_54;
  undefined4 local_50;
  undefined **local_4c;
  int local_48;
  undefined **local_44;
  HRGN local_40;
  undefined **local_3c;
  HRGN local_38;
  undefined **local_34;
  undefined4 local_30;
  CBrush *local_2c;
  CBrush *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_28 = param_5;
  local_2c = param_6;
  local_50 = 0;
  local_54 = CRgn::vftable;
  local_38 = (HRGN)0x0;
  local_3c = CRgn::vftable;
  local_40 = (HRGN)0x0;
  local_44 = CRgn::vftable;
  local_8 = 2;
  pHVar1 = CreateRectRgnIndirect(param_1);
  CMenu::Attach((CMenu *)&local_3c,(HMENU__ *)pHVar1);
  CopyRect(&local_24,param_1);
  InflateRect(&local_24,-param_2.cx,-param_2.cy);
  IntersectRect(&local_24,&local_24,param_1);
  pHVar1 = CreateRectRgnIndirect(&local_24);
  CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar1);
  pHVar1 = CreateRectRgn(0,0,0,0);
  CMenu::Attach((CMenu *)&local_54,(HMENU__ *)pHVar1);
  CRgn::CombineRgn((CRgn *)&local_54,(CRgn *)&local_3c,(CRgn *)&local_44,3);
  if (local_28 == (CBrush *)0x0) {
    local_28 = GetHalftoneBrush();
  }
  if (local_28 == (CBrush *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (local_2c == (CBrush *)0x0) {
    local_2c = local_28;
  }
  local_30 = 0;
  local_34 = CRgn::vftable;
  local_48 = 0;
  local_4c = CRgn::vftable;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_3 != (tagRECT *)0x0) {
    pHVar1 = CreateRectRgn(0,0,0,0);
    CMenu::Attach((CMenu *)&local_34,(HMENU__ *)pHVar1);
    SetRectRgn(local_38,param_3->left,param_3->top,param_3->right,param_3->bottom);
    CopyRect(&local_24,param_3);
    InflateRect(&local_24,-param_4.cx,-param_4.cy);
    IntersectRect(&local_24,&local_24,param_3);
    SetRectRgn(local_40,local_24.left,local_24.top,local_24.right,local_24.bottom);
    CRgn::CombineRgn((CRgn *)&local_34,(CRgn *)&local_3c,(CRgn *)&local_44,3);
    if (*(int *)(local_28 + 4) == *(int *)(local_2c + 4)) {
      pHVar1 = CreateRectRgn(0,0,0,0);
      CMenu::Attach((CMenu *)&local_4c,(HMENU__ *)pHVar1);
      CRgn::CombineRgn((CRgn *)&local_4c,(CRgn *)&local_34,(CRgn *)&local_54,3);
    }
  }
  if ((*(int *)(local_28 + 4) != *(int *)(local_2c + 4)) && (param_3 != (tagRECT *)0x0)) {
    SelectClipRgn(this,(CRgn *)&local_34);
    (**(code **)(*(int *)this + 0x50))(&local_24);
    pCVar2 = SelectObject(this,(CPen *)local_2c);
    PatBlt(*(HDC *)(this + 4),local_24.left,local_24.top,local_24.right - local_24.left,
           local_24.bottom - local_24.top,0x5a0049);
    SelectObject(this,pCVar2);
  }
  pCVar3 = (CRgn *)&local_4c;
  if (local_48 == 0) {
    pCVar3 = (CRgn *)&local_54;
  }
  SelectClipRgn(this,pCVar3);
  (**(code **)(*(int *)this + 0x50))(&local_24);
  pCVar2 = SelectObject(this,(CPen *)local_28);
  PatBlt(*(HDC *)(this + 4),local_24.left,local_24.top,local_24.right - local_24.left,
         local_24.bottom - local_24.top,0x5a0049);
  if (pCVar2 != (CPen *)0x0) {
    SelectObject(this,pCVar2);
  }
  SelectClipRgn(this,(CRgn *)0x0);
  local_8._0_1_ = 3;
  local_4c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_4c);
  local_8._0_1_ = 2;
  local_34 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_34);
  local_8._0_1_ = 1;
  local_44 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_44);
  local_8 = (uint)local_8._1_3_ << 8;
  local_3c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_3c);
  local_8 = 0xffffffff;
  local_54 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_54);
  FUN_100f90cf();
  return;
}

