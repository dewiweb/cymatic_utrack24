// rea decompile_all
// name: CMFCToolBarImages::DrawEx
// address: 0x100841ce
// body: available
// range: 0x100841ce-0x10084514 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::DrawEx(class CDC *,class CRect,int,enum
   CMFCToolBarImages::ImageAlignHorz,enum CMFCToolBarImages::ImageAlignVert,class CRect,unsigned
   char)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBarImages::DrawEx
          (CMFCToolBarImages *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,
          uint param_14)

{
  HGDIOBJ pvVar1;
  BOOL BVar2;
  int iVar3;
  CDC *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  _BLENDFUNCTION _Var10;
  tagAFXDrawState local_4c [12];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  HGDIOBJ local_28;
  int local_24;
  CDC *local_20;
  _BLENDFUNCTION local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  BVar2 = IsRectEmpty((RECT *)&param_10);
  if (BVar2 != 0) {
    local_3c = 0;
    local_38 = 0;
    param_12 = *(int *)(this + 0x50);
    param_13 = *(int *)(this + 0x54);
    param_10 = 0;
    param_11 = 0;
    local_34 = param_12;
    local_30 = param_13;
  }
  BVar2 = IsRectEmpty((RECT *)&param_10);
  if (BVar2 != 0) goto LAB_100844bc;
  local_18.left = param_3;
  local_18.top = param_4;
  local_18.right = param_5;
  local_18.bottom = param_6;
  if (param_8 != 3) {
    if (param_8 == 0) {
      local_18.right = (param_3 - param_10) + param_12;
    }
    else if (param_8 == 2) {
      local_18.left = (param_5 - param_12) + param_10;
    }
    else {
      if (param_8 != 1) goto LAB_100842ce;
      local_18.left = (((param_5 - param_3) - param_12) + param_10) / 2 + param_3;
      local_18.right = (param_12 - param_10) + local_18.left;
    }
    local_3c = local_18.left;
    local_38 = param_4;
    local_34 = local_18.right;
    local_30 = param_6;
    IntersectRect(&local_18,&local_18,(RECT *)&param_3);
    iVar5 = local_18.right - local_18.left;
    if ((0 < iVar5) && (iVar5 != param_12 - param_10)) {
      param_10 = param_10 + (local_18.left - local_3c);
      iVar6 = param_12 - param_10;
      if (iVar5 < param_12 - param_10) {
        iVar6 = iVar5;
      }
      param_12 = iVar6 + param_10;
    }
  }
LAB_100842ce:
  if (param_9 != 3) {
    if (param_9 == 0) {
      local_18.bottom = (param_13 - param_11) + local_18.top;
    }
    else if (param_9 == 2) {
      local_18.top = (param_11 - param_13) + local_18.bottom;
    }
    else {
      if (param_9 != 1) goto LAB_1008436a;
      local_18.top = local_18.top + (((param_11 - param_13) - local_18.top) + local_18.bottom) / 2;
      local_18.bottom = (param_13 - param_11) + local_18.top;
    }
    local_3c = local_18.left;
    local_38 = local_18.top;
    local_34 = local_18.right;
    local_30 = local_18.bottom;
    IntersectRect(&local_18,&local_18,(RECT *)&param_3);
    iVar5 = local_18.bottom - local_18.top;
    if ((0 < iVar5) && (iVar5 != param_13 - param_11)) {
      param_11 = param_11 + (local_18.top - local_38);
      iVar6 = param_13 - param_11;
      if (iVar5 < param_13 - param_11) {
        iVar6 = iVar5;
      }
      param_13 = iVar6 + param_11;
    }
  }
LAB_1008436a:
  BVar2 = IsRectEmpty((RECT *)&param_10);
  if ((BVar2 == 0) && (BVar2 = IsRectEmpty(&local_18), BVar2 == 0)) {
    local_28 = SelectObject(DAT_10168924,*(HGDIOBJ *)(this + 0x88));
    iVar5 = param_10;
    local_2c = param_11;
    local_40 = param_10;
    BVar2 = IsRectEmpty((RECT *)&param_10);
    if (BVar2 == 0) {
      local_24 = param_12 - param_10;
    }
    else {
      local_24 = *(int *)(this + 0x50);
    }
    BVar2 = IsRectEmpty((RECT *)&param_10);
    if (BVar2 == 0) {
      iVar6 = param_13 - param_11;
    }
    else {
      iVar6 = *(int *)(this + 0x54);
    }
    iVar7 = 0;
    if (*(int *)(this + 8) == 0x20) {
      iVar9 = local_18.right - local_18.left;
      iVar3 = *(int *)(this + 0x50) * param_7 + local_40;
      local_1c = (_BLENDFUNCTION)((param_14 & 0xff) << 0x10);
      iVar8 = local_18.bottom - local_18.top;
      local_1c.AlphaFormat = '\x01';
      iVar5 = local_2c;
      iVar7 = local_24;
      _Var10 = local_1c;
      pCVar4 = CDC::FromHandle(DAT_10168924);
      iVar7 = CDC::AlphaBlend(local_20,local_18.left,local_18.top,iVar9,iVar8,pCVar4,iVar3,iVar5,
                              iVar7,iVar6,_Var10);
    }
    else if (*(int *)(this + 0xa4) == -1) {
      iVar7 = StretchBlt(*(HDC *)(local_20 + 4),local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,DAT_10168924,
                         *(int *)(this + 0x50) * param_7 + iVar5,local_2c,local_24,iVar6,0xcc0020);
    }
    SelectObject(DAT_10168924,local_28);
    if (iVar7 == 0) {
      pvVar1 = *(HGDIOBJ *)(this + 0x3c);
      *(undefined4 *)(this + 0x3c) = 0;
      local_28 = pvVar1;
      iVar5 = PrepareDrawImage(this,local_4c,local_18.right - local_18.left,
                               local_18.bottom - local_18.top,0);
      if (iVar5 == 0) {
        *(HGDIOBJ *)(this + 0x3c) = pvVar1;
      }
      else {
        *(int *)(this + 0x78) = param_10;
        *(int *)(this + 0x7c) = param_11;
        *(int *)(this + 0x80) = param_12;
        *(int *)(this + 0x84) = param_13;
        Draw(this,local_20,local_18.left,local_18.top,param_7,0,0,0,0,0,(uchar)param_14);
        SetRectEmpty((LPRECT)(this + 0x78));
        EndDrawImage(this,local_4c);
        *(HGDIOBJ *)(this + 0x3c) = local_28;
      }
    }
  }
LAB_100844bc:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

