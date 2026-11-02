// rea decompile_all
// name: CChevronOwnerDrawMenu::DrawItem
// address: 0x1001687f
// body: available
// range: 0x1001687f-0x10016d34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CChevronOwnerDrawMenu::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CChevronOwnerDrawMenu::DrawItem(CChevronOwnerDrawMenu *this,tagDRAWITEMSTRUCT *param_1)

{
  CObject *pCVar1;
  CDC *this_00;
  BOOL BVar2;
  int iVar3;
  LONG LVar4;
  HDC pHVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined **ppuVar9;
  UINT options;
  UINT c;
  tagMENUITEMINFOW local_c4;
  CDC local_94 [16];
  undefined4 local_84;
  CDC local_80 [4];
  HDC__ *local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  tagDRAWITEMSTRUCT *local_6c;
  CObject *local_68;
  CChevronOwnerDrawMenu *local_64;
  BOOL local_60;
  DWORD local_5c;
  LPCWSTR local_58;
  undefined **local_54;
  int local_50;
  tagRECT local_4c;
  undefined1 local_3c [4];
  int local_38;
  tagRECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb4;
  local_8 = 0x1001688e;
  local_6c = param_1;
  local_64 = this;
  FUN_10006ce0(&local_58,(short *)&PTR_1011d390);
  local_8 = 0;
  this_00 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_84 = (**(code **)(*(int *)this_00 + 0x1c))();
  _memset(&local_c4,0,0x30);
  local_c4.cbSize = 0x30;
  local_c4.fMask = 0x40;
  local_60 = 0;
  BVar2 = GetMenuItemInfoW(*(HMENU *)(local_64 + 4),*(UINT *)(param_1 + 8),0,&local_c4);
  if (BVar2 != 0) {
    local_c4.dwTypeData = (LPWSTR)FUN_10002140(&local_58,local_c4.cch);
    local_c4.cch = local_c4.cch + 1;
    local_60 = GetMenuItemInfoW(*(HMENU *)(local_64 + 4),*(UINT *)(param_1 + 8),0,&local_c4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_58,-1);
  }
  local_68 = *(CObject **)(param_1 + 0x2c);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  CopyRect(&local_4c,(RECT *)(param_1 + 0x1c));
  pCVar1 = local_68;
  if ((local_68 == (CObject *)0x0) ||
     (iVar3 = CObject::IsKindOf(local_68,(CRuntimeClass *)&PTR_s_CBitmap_1011edec), iVar3 == 0)) {
    local_70 = 0;
    LVar4 = GetSystemMetrics(0x32);
    local_38 = GetSystemMetrics(0x31);
  }
  else {
    local_70 = 1;
    GetObjectW(*(HANDLE *)(pCVar1 + 4),0x18,local_3c);
    LVar4 = local_34.left;
  }
  local_24.top = ((local_4c.bottom - local_4c.top) / 2 - LVar4 / 2) + -1 + local_4c.top;
  local_24.right = local_38 + 1;
  local_24.bottom = LVar4 + 1 + local_24.top;
  local_24.left = 0;
  local_5c = local_38;
  local_5c = GetSysColor(4);
  FUN_1001714b((undefined4 *)local_94);
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_94,pHVar5);
  (**(code **)(*(int *)this_00 + 0x28))(local_64 + 8);
  puVar6 = (undefined4 *)
           CDC::GetTextExtent(this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                       *)&local_54);
  local_78 = *puVar6;
  local_74 = puVar6[1];
  if (((byte)local_6c[0x10] & 1) == 0) {
    CDC::FillSolidRect(this_00,(tagRECT *)(local_6c + 0x1c),local_5c);
    (**(code **)(*(int *)this_00 + 0x2c))(local_5c);
    if ((*(uint *)(local_6c + 0x10) & 2) == 0) {
      if ((local_70 != 0) && ((*(uint *)(local_6c + 0x10) & 8) != 0)) {
        local_50 = local_24.bottom - local_24.top;
        local_64 = (CChevronOwnerDrawMenu *)(local_24.right - local_24.left);
        DVar7 = GetSysColor(0x14);
        DVar8 = GetSysColor(0x10);
        CDC::Draw3dRect(this_00,local_24.left,local_24.top,(int)(local_64 + 1),local_50 + 1,DVar8,
                        DVar7);
      }
      if (local_60 != 0) {
        (**(code **)(*(int *)this_00 + 0x2c))(local_5c);
        local_50 = *(int *)this_00;
        DVar7 = GetSysColor(7);
        (**(code **)(local_50 + 0x30))(DVar7);
        goto LAB_10016c08;
      }
    }
    else {
      local_50 = *(int *)this_00;
      DVar7 = GetSysColor(0x14);
      (**(code **)(local_50 + 0x30))(DVar7);
      CDC::SetBkMode(this_00,1);
      if (local_60 != 0) {
        local_60 = local_74 / 2;
        ExtTextOutW(*(HDC *)(this_00 + 4),local_24.right + 4,
                    ((local_24.bottom - local_24.top) / 2 - local_60) + 1 + local_24.top,2,
                    (RECT *)0x0,local_58,*(UINT *)(local_58 + -6),(INT *)0x0);
        local_50 = *(int *)this_00;
        DVar7 = GetSysColor(0x11);
        (**(code **)(local_50 + 0x30))(DVar7);
        c = *(UINT *)(local_58 + -6);
        iVar3 = ((local_24.bottom - local_24.top) / 2 - local_60) + local_24.top;
        options = 0;
        pHVar5 = *(HDC *)(this_00 + 4);
        goto LAB_10016c39;
      }
    }
  }
  else {
    CopyRect(&local_34,(RECT *)(local_6c + 0x1c));
    local_34.left = local_24.right + 2;
    DVar7 = GetSysColor(0xd);
    CDC::FillSolidRect(this_00,&local_34,DVar7);
    if ((local_70 != 0) && (((byte)local_6c[0x10] & 10) == 0)) {
      local_64 = (CChevronOwnerDrawMenu *)(local_24.bottom - local_24.top);
      local_50 = local_24.right - local_24.left;
      DVar7 = GetSysColor(0x10);
      DVar8 = GetSysColor(0x14);
      CDC::Draw3dRect(this_00,local_24.left,local_24.top,local_50 + 1,(int)(local_64 + 1),DVar8,
                      DVar7);
    }
    if (local_60 != 0) {
      local_50 = *(int *)this_00;
      DVar7 = GetSysColor(0xd);
      (**(code **)(local_50 + 0x2c))(DVar7);
      DVar7 = local_5c;
      if (((byte)local_6c[0x10] & 2) == 0) {
        DVar7 = GetSysColor(0xe);
      }
      (**(code **)(*(int *)this_00 + 0x30))(DVar7);
LAB_10016c08:
      c = *(UINT *)(local_58 + -6);
      iVar3 = ((local_24.bottom - local_24.top) / 2 - local_74 / 2) + local_24.top;
      options = 2;
      pHVar5 = *(HDC *)(this_00 + 4);
LAB_10016c39:
      ExtTextOutW(pHVar5,local_24.right + 3,iVar3,options,(RECT *)0x0,local_58,c,(INT *)0x0);
    }
  }
  if (local_70 == 0) goto LAB_10016d0a;
  local_50 = 0;
  local_54 = CBitmap::vftable;
  local_8._0_1_ = 2;
  if ((*(uint *)(local_6c + 0x10) & 2) == 0) {
    if ((*(uint *)(local_6c + 0x10) & 8) != 0) {
      AfxGetDitheredBitmap((CBitmap *)local_68,(CBitmap *)&local_54,local_5c,0xffffff);
      goto LAB_10016c8a;
    }
  }
  else {
    AfxGetGrayBitmap((CBitmap *)local_68,(CBitmap *)&local_54,local_5c);
LAB_10016c8a:
    local_68 = (CObject *)&local_54;
  }
  FUN_1001714b((undefined4 *)local_80);
  local_8._0_1_ = 3;
  pHVar5 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_80,pHVar5);
  if (local_68 == (CObject *)0x0) {
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar9 = *(undefined ***)(local_68 + 4);
  }
  CDC::SelectGdiObject(local_7c,ppuVar9);
  InflateRect(&local_24,-1,-1);
  CDC::BitBlt(this_00,local_24.left,local_24.top,local_24.right,local_24.bottom,local_80,0,0,
              0xcc0020);
  local_8._0_1_ = 2;
  CDC::~CDC(local_80);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_54 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_54);
LAB_10016d0a:
  (**(code **)(*(int *)this_00 + 0x20))(local_84);
  local_8 = local_8 & 0xffffff00;
  CDC::~CDC(local_94);
  FUN_10001030((undefined4 *)(local_58 + -8));
  FUN_100f90cf();
  return;
}

