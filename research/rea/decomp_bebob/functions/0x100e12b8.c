// rea decompile_all
// name: CMFCImagePaintArea::DrawItem
// address: 0x100e12b8
// body: available
// range: 0x100e12b8-0x100e150b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCImagePaintArea::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCImagePaintArea::DrawItem(CMFCImagePaintArea *this,tagDRAWITEMSTRUCT *param_1)

{
  CDC *pCVar1;
  int iVar2;
  COLORREF CVar3;
  ulong uVar4;
  void *pvVar5;
  int iVar6;
  undefined1 local_60 [4];
  CGdiObject *local_5c;
  undefined **local_58 [2];
  int local_50;
  CPen *local_4c;
  CDC *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100e12c4;
  pCVar1 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_48 = pCVar1;
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  FillRect(*(HDC *)(pCVar1 + 4),&local_24,DAT_10166b34);
  InflateRect(&local_24,-1,-1);
  local_44.right = *(int *)(this + 0x98) * *(int *)(this + 0xbc) + local_24.left;
  local_44.left = local_24.left;
  local_44.top = local_24.top;
  local_44.bottom = *(int *)(this + 0x9c) * *(int *)(this + 0xc0) + local_24.top;
  local_24.right = local_44.right;
  local_24.bottom = local_44.bottom;
  InflateRect(&local_24,1,1);
  CDC::Draw3dRect(local_48,&local_44,DAT_10166ac8,DAT_10166abc);
  CPen::CPen((CPen *)local_58,0,1,DAT_10166ab8);
  local_8 = 0;
  local_4c = CDC::SelectObject(local_48,(CPen *)local_58);
  iVar2 = *(int *)(this + 0xbc);
  for (iVar6 = iVar2 + local_44.left; iVar6 <= local_44.right - iVar2; iVar6 = iVar6 + iVar2) {
    CDC::MoveTo(local_48,(int)local_60,iVar6);
    CDC::LineTo(local_48,iVar6,local_44.bottom + -1);
    iVar2 = *(int *)(this + 0xbc);
  }
  iVar2 = *(int *)(this + 0xc0);
  for (iVar6 = iVar2 + local_44.top; iVar6 <= local_44.bottom - iVar2; iVar6 = iVar6 + iVar2) {
    CDC::MoveTo(local_48,(int)local_60,local_44.left + 1);
    CDC::LineTo(local_48,local_44.right + -1,iVar6);
    iVar2 = *(int *)(this + 0xc0);
  }
  CDC::SelectObject(local_48,local_4c);
  if (*(int *)(this + 0xa0) != 0) {
    local_5c = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),*(void **)(*(int *)(this + 0xa0) + 4));
    local_4c = (CPen *)0x0;
    if (0 < *(int *)(this + 0x98)) {
      do {
        local_50 = 0;
        if (0 < *(int *)(this + 0x9c)) {
          do {
            CVar3 = GetPixel(*(HDC *)(this + 0x8c),(int)local_4c,local_50);
            uVar4 = CMFCToolBarImages::MapFromSysColor(CVar3,0);
            if (uVar4 != 0xffffffff) {
              local_34.top = *(int *)(this + 0xc0) * local_50 + local_44.top;
              local_34.left = *(int *)(this + 0xbc) * (int)local_4c + local_44.left;
              local_34.bottom = *(int *)(this + 0xc0) + local_34.top;
              local_34.right = *(int *)(this + 0xbc) + local_34.left;
              InflateRect(&local_34,-1,-1);
              CDC::FillSolidRect(local_48,&local_34,uVar4);
            }
            local_50 = local_50 + 1;
          } while (local_50 < *(int *)(this + 0x9c));
        }
        local_4c = local_4c + 1;
      } while ((int)local_4c < *(int *)(this + 0x98));
    }
    if (local_5c == (CGdiObject *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = *(void **)(local_5c + 4);
    }
    CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar5);
  }
  local_8 = 0xffffffff;
  local_58[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_58);
  FUN_100f90cf();
  return;
}

