// rea decompile_all
// name: CMFCFontComboBox::DrawItem
// address: 0x1004f6cb
// body: available
// range: 0x1004f6cb-0x1004f938 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCFontComboBox::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCFontComboBox::DrawItem(CMFCFontComboBox *this,tagDRAWITEMSTRUCT *param_1)

{
  int iVar1;
  int iVar2;
  tagPOINT tVar3;
  CDC *this_00;
  undefined4 uVar4;
  HBRUSH pHVar5;
  COLORREF color;
  HFONT pHVar6;
  undefined **ppuVar7;
  CImageList *this_01;
  undefined **local_98;
  undefined4 local_94;
  undefined **local_90;
  HBRUSH local_8c;
  int local_88;
  int local_84;
  LOGFONTW local_80;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x1004f6da;
  this_01 = (CImageList *)(this + 0x74);
  if ((this_01 == (CImageList *)0x0) || (*(int *)(this + 0x78) == 0)) {
    CImageList::Create(this_01,17000,0x10,0,0xffffff);
  }
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  if (((byte)param_1[0x10] & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(this_00 + 4),&local_24);
  }
  uVar4 = (**(code **)(*(int *)this_00 + 0x1c))();
  local_8c = (HBRUSH)0x0;
  local_90 = CBrush::vftable;
  local_8 = 0;
  if (((byte)param_1[0x10] & 1) == 0) {
    color = GetBkColor(*(HDC *)(this_00 + 8));
    pHVar5 = CreateSolidBrush(color);
    CMenu::Attach((CMenu *)&local_90,(HMENU__ *)pHVar5);
  }
  else {
    pHVar5 = CreateSolidBrush(DAT_10166ad4);
    CMenu::Attach((CMenu *)&local_90,(HMENU__ *)pHVar5);
    (**(code **)(*(int *)this_00 + 0x30))(DAT_10166ad8);
  }
  CDC::SetBkMode(this_00,1);
  FillRect(*(HDC *)(this_00 + 4),&local_24,local_8c);
  iVar1 = *(int *)(param_1 + 8);
  if (-1 < iVar1) {
    local_94 = 0;
    local_98 = CFont::vftable;
    iVar2 = *(int *)(param_1 + 0x2c);
    local_84 = 0;
    local_8._0_1_ = 1;
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0x10) & 6) != 0) {
        tVar3.y = ((local_24.bottom - local_24.top) + -0x10) / 2 + local_24.top;
        tVar3.x = local_24.left;
        CImageList::Draw(this_01,this_00,~(*(uint *)(iVar2 + 0x10) >> 1) & 1,tVar3,0);
      }
      local_24.left = local_24.left + 0x16;
      if ((DAT_101682d8 != 0) && (*(char *)(iVar2 + 0xc) != '\x02')) {
        GetObjectW(DAT_10166bb8,0x5c,&local_80);
        lstrcpyW(local_80.lfFaceName,*(LPCWSTR *)(iVar2 + 4));
        if (*(BYTE *)(iVar2 + 0xc) != '\x01') {
          local_80.lfCharSet = *(BYTE *)(iVar2 + 0xc);
        }
        if (local_80.lfHeight < 0) {
          local_80.lfHeight = local_80.lfHeight + -4;
        }
        else {
          local_80.lfHeight = local_80.lfHeight + 4;
        }
        pHVar6 = CreateFontIndirectW(&local_80);
        CMenu::Attach((CMenu *)&local_98,(HMENU__ *)pHVar6);
        local_84 = (**(code **)(*(int *)this_00 + 0x28))(&local_98);
      }
    }
    ppuVar7 = FUN_1000ad47();
    FUN_10005e00(&local_88,(int *)ppuVar7);
    local_8 = CONCAT31(local_8._1_3_,2);
    CComboBox::GetLBText
              ((CComboBox *)this,iVar1,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_88);
    (**(code **)(*(int *)this_00 + 0x68))(local_88,*(undefined4 *)(local_88 + -0xc),&local_24,0x24);
    if (local_84 != 0) {
      (**(code **)(*(int *)this_00 + 0x28))(local_84);
    }
    FUN_10001030((undefined4 *)(local_88 + -0x10));
    local_8 = local_8 & 0xffffff00;
    local_98 = CFont::vftable;
    CImageList::~CImageList((CImageList *)&local_98);
  }
  (**(code **)(*(int *)this_00 + 0x20))(uVar4);
  local_8 = 0xffffffff;
  local_90 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_90);
  FUN_100f90cf();
  return;
}

