// rea decompile_all
// name: CMFCCaptionBar::RecalcLayout
// address: 0x100be972
// body: available
// range: 0x100be972-0x100bf09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::RecalcLayout(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCCaptionBar::RecalcLayout(CMFCCaptionBar *this)

{
  CRect *pCVar1;
  LPRECT lprc;
  CPen *pCVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_d4;
  int local_d0;
  CClientDC local_cc [8];
  HDC local_c4;
  int local_b8;
  int local_b4 [2];
  CPen *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  tagRECT local_70;
  tagTEXTMETRICW local_60;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xcc;
  local_8 = 0x100be981;
  CClientDC::CClientDC(local_cc,(CWnd *)0x0);
  local_8 = 0;
  if (*(void **)(this + 1000) == (void *)0x0) {
    pCVar2 = (CPen *)&DAT_10166bb4;
  }
  else {
    pCVar2 = (CPen *)CGdiObject::FromHandle(*(void **)(this + 1000));
  }
  local_ac = CDC::SelectObject((CDC *)local_cc,pCVar2);
  GetTextMetricsW(local_c4,&local_60);
  iVar6 = local_60.tmHeight + 2;
  GetImageSize(this);
  iVar3 = *(int *)(this + 0x478);
  if (iVar3 == -1) {
    if ((*(int *)(*(int *)(this + 0x42c) + -0xc) != 0) && (*(int *)(this + 0x2b0) != 0)) {
      iVar6 = local_60.tmHeight + 0xc;
    }
    if (iVar6 <= local_80) {
      iVar6 = local_80;
    }
    iVar3 = *(int *)(this + 0x46c) + *(int *)(this + 0x470) * 2 + iVar6;
  }
  *(int *)(this + 0x47c) = iVar3;
  if (*(int *)(this + 0x2b0) != 0) {
    *(int *)(this + 0x47c) = *(int *)(this + 0x47c) + 8;
  }
  local_70.left = 0;
  local_70.top = 0;
  local_70.right = 0;
  local_70.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_70);
  BVar4 = IsRectEmpty(&local_70);
  if (BVar4 != 0) goto LAB_100bf08b;
  if (*(int *)(this + 0x2b0) != 0) {
    FUN_10037b18(&local_8c);
    local_8c = local_8c + 8;
    local_88 = local_88 + 8;
    local_d4 = (local_70.right - local_84) + local_8c;
    local_d0 = local_70.top + 4 + local_88;
    *(LONG *)(this + 0x48c) = local_70.right - local_84;
    *(LONG *)(this + 0x490) = local_70.top + 4;
    *(int *)(this + 0x494) = local_d4;
    *(int *)(this + 0x498) = local_d0;
    InflateRect(&local_70,-4,-4);
    local_70.right = local_70.right + (*(int *)(this + 0x48c) - *(int *)(this + 0x494));
  }
  local_a0 = 0;
  local_94 = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b8 = 0;
  local_9c = 0;
  local_88 = 0;
  iVar3 = *(int *)(this + 0x470);
  local_a8 = (local_70.top + local_70.bottom) / 2;
  local_78 = iVar3 + local_70.left;
  local_7c = local_70.right - iVar3;
  iVar7 = (local_70.right + local_70.left) / 2;
  local_74 = iVar7;
  iVar6 = IsImageSet(this);
  if (iVar6 != 0) {
    if (local_80 < local_70.bottom - local_70.top) {
      *(int *)(this + 0x3d4) = local_a8 - local_80 / 2;
    }
    else {
      *(LONG *)(this + 0x3d4) = local_70.top + iVar3;
    }
    if (*(int *)(this + 0x3c8) == 0) {
      *(int *)(this + 0x3dc) = *(int *)(this + 0x3d4) + local_80;
    }
    else {
      *(LONG *)(this + 0x3dc) = local_70.bottom - iVar3;
    }
    iVar3 = *(int *)(this + 0x3cc);
    if (iVar3 == 1) {
      *(int *)(this + 0x3d0) = local_78;
      iVar3 = local_78 + local_84;
      local_78 = *(int *)(this + 0x474) + iVar3;
      *(int *)(this + 0x3d8) = iVar3;
    }
    else if (iVar3 == 2) {
      iVar3 = local_7c - local_84;
      *(int *)(this + 0x3d0) = iVar3;
      local_7c = iVar3 - *(int *)(this + 0x474);
      *(int *)(this + 0x3d8) = local_84 + iVar3;
      local_a0 = 1;
      local_98 = 1;
    }
    else if (iVar3 == 3) {
      local_74 = iVar7 - local_84 / 2;
      local_a4 = 1;
      if (*(int *)(this + 0x43c) == 1) {
        local_a0 = 1;
      }
      if (*(int *)(this + 0x404) == 1) {
        local_98 = 1;
      }
    }
  }
  iVar3 = 0;
  local_90 = 0;
  if (*(int *)(*(int *)(this + 0x42c) + -0xc) != 0) {
    piVar5 = (int *)CDC::GetTextExtent((CDC *)local_cc,
                                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)local_b4);
    local_90 = *piVar5 + *(int *)(this + 0x474) * 2;
    if (*(int *)(this + 0x2b0) != 0) {
      local_90 = local_90 + 0x14;
    }
    if (((*(int *)(this + 0x438) != 0) && (*(int *)(this + 0x460) != 0)) &&
       (*(int *)(this + 0x464) != 0)) {
      local_90 = local_90 + 10;
    }
    iVar3 = local_90;
    *(LONG *)(this + 0x444) = local_70.top;
    *(LONG *)(this + 0x44c) = local_70.bottom;
    if (*(int *)(this + 0x2b0) != 0) {
      InflateRect((LPRECT)(this + 0x440),0,-5);
    }
    iVar6 = *(int *)(this + 0x43c);
    if (iVar6 == 1) {
      if ((*(int *)(this + 0x2b0) == 0) || (*(int *)(this + 0x404) != 1)) {
        *(int *)(this + 0x440) = local_78;
        if (local_78 == *(int *)(this + 0x470) + local_70.left) {
          *(int *)(this + 0x440) = *(int *)(this + 0x470) + local_70.left;
        }
        local_78 = *(int *)(this + 0x474) + *(int *)(this + 0x440) + iVar3;
        *(int *)(this + 0x448) = *(int *)(this + 0x440) + iVar3;
      }
      else {
        local_9c = 1;
      }
    }
    else {
      if (iVar6 == 2) {
        *(int *)(this + 0x440) = local_7c - iVar3;
        if (local_7c == local_70.right - *(int *)(this + 0x470)) {
          *(LONG *)(this + 0x440) = (local_70.right - *(int *)(this + 0x470)) - iVar3;
        }
        local_7c = *(int *)(this + 0x440) - *(int *)(this + 0x474);
        *(int *)(this + 0x448) = *(int *)(this + 0x440) + iVar3;
      }
      else {
        if (iVar6 != 3) goto LAB_100bf08b;
        local_74 = local_74 - iVar3 / 2;
        local_b8 = 1;
        if (*(int *)(this + 0x404) != 1) goto LAB_100bed94;
      }
      local_94 = 1;
    }
  }
LAB_100bed94:
  local_b4[0] = 0;
  if (*(int *)(*(int *)(this + 0x3ec) + -0xc) != 0) {
    piVar5 = (int *)(**(code **)(*(int *)this + 0x334))(&local_d4,local_cc,this + 0x3ec);
    local_b4[0] = *piVar5;
    iVar3 = piVar5[1];
    iVar6 = local_a8 - iVar3 / 2;
    *(int *)(this + 0x40c) = iVar6;
    *(int *)(this + 0x414) = iVar6 + iVar3;
    iVar3 = *(int *)(this + 0x404);
    if (iVar3 == 1) {
      *(int *)(this + 0x408) = local_78;
      local_78 = local_78 + local_b4[0] + *(int *)(this + 0x470) * 2;
    }
    else if (iVar3 == 2) {
      *(int *)(this + 0x408) = local_7c - local_b4[0];
    }
    else {
      if (iVar3 != 3) goto LAB_100bf08b;
      local_74 = local_74 - local_b4[0] / 2;
      local_88 = 1;
    }
    pCVar1 = (CRect *)(this + 0x408);
    *(int *)(this + 0x410) = *(int *)pCVar1 + local_b4[0];
    AdjustRectToMargin(this,pCVar1,(CRect *)&local_70,*(int *)(this + 0x470),0);
    *(undefined4 *)(this + 0x418) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this + 0x41c) = *(undefined4 *)(this + 0x40c);
    *(undefined4 *)(this + 0x420) = *(undefined4 *)(this + 0x410);
    *(undefined4 *)(this + 0x424) = *(undefined4 *)(this + 0x414);
    iVar3 = local_90;
  }
  if (local_a4 != 0) {
    *(int *)(this + 0x3d0) = local_74;
    *(int *)(this + 0x3d8) = local_74 + local_84;
    local_74 = local_74 + local_84 + *(int *)(this + 0x474);
  }
  if (local_9c == 0) {
    if (local_b8 != 0) {
      iVar3 = iVar3 + local_74;
      *(int *)(this + 0x440) = local_74;
      local_74 = *(int *)(this + 0x474) + iVar3;
      *(int *)(this + 0x448) = iVar3;
    }
  }
  else {
    *(int *)(this + 0x440) = local_78;
    *(int *)(this + 0x448) = local_78 + iVar3;
    if (local_70.right < local_78 + iVar3 + *(int *)(this + 0x470)) {
      iVar6 = local_70.right - *(int *)(this + 0x470);
      *(int *)(this + 0x448) = iVar6;
      *(int *)(this + 0x440) = iVar6 - iVar3;
    }
  }
  if (local_88 != 0) {
    pCVar1 = (CRect *)(this + 0x408);
    *(int *)pCVar1 = local_74;
    *(int *)(this + 0x410) = local_b4[0] + local_74;
    AdjustRectToMargin(this,pCVar1,(CRect *)&local_70,*(int *)(this + 0x470),0);
    *(undefined4 *)(this + 0x418) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this + 0x41c) = *(undefined4 *)(this + 0x40c);
    *(undefined4 *)(this + 0x420) = *(undefined4 *)(this + 0x410);
    *(undefined4 *)(this + 0x424) = *(undefined4 *)(this + 0x414);
  }
  iVar3 = IsImageSet(this);
  if (iVar3 != 0) {
    lprc = (LPRECT)(this + 0x3d0);
    AdjustRectToMargin(this,(CRect *)lprc,(CRect *)&local_70,*(int *)(this + 0x470),
                       (uint)(*(int *)(this + 0x3c8) == 0));
    if ((lprc->left < local_70.left) || (local_70.right < *(int *)(this + 0x3d8))) {
      SetRectEmpty(lprc);
    }
  }
  local_24 = *(undefined4 *)(this + 0x440);
  uStack_20 = *(undefined4 *)(this + 0x444);
  uStack_1c = *(undefined4 *)(this + 0x448);
  uStack_18 = *(undefined4 *)(this + 0x44c);
  if ((*(int *)(*(int *)(this + 0x42c) + -0xc) != 0) && (iVar3 = IsImageSet(this), iVar3 != 0)) {
    CheckRectangle(this,(CRect *)&local_24,(CRect *)(this + 0x3d0),local_a0);
  }
  if (*(int *)(*(int *)(this + 0x42c) + -0xc) != 0) {
    iVar3 = *(int *)(this + 0x470);
    AdjustRectToMargin(this,(CRect *)&local_24,(CRect *)&local_70,iVar3,0);
    if (local_70.right - local_70.left <
        ((*(int *)(this + 0x448) + *(int *)(this + 0x3d8) + iVar3 * 2) -
        ((LPRECT)(this + 0x440))->left) - *(int *)(this + 0x3d0)) {
      SetRectEmpty((LPRECT)(this + 0x440));
    }
  }
  if (*(int *)(*(int *)(this + 0x3ec) + -0xc) != 0) {
    CheckRectangle(this,(CRect *)(this + 0x418),(CRect *)(this + 0x3d0),local_98);
    if ((local_94 == 0) && (local_9c == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    CheckRectangle(this,(CRect *)(this + 0x418),(CRect *)&local_24,iVar3);
  }
  if (local_ac != (CPen *)0x0) {
    CDC::SelectObject((CDC *)local_cc,local_ac);
  }
  *(uint *)(this + 0x428) = (uint)(*(int *)(this + 0x420) - *(int *)(this + 0x418) < local_b4[0]);
  UpdateTooltips(this);
LAB_100bf08b:
  local_8 = 0xffffffff;
  CClientDC::~CClientDC(local_cc);
  FUN_100f90cf();
  return;
}

