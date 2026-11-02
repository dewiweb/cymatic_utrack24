// rea decompile_all
// name: CMFCImagePaintArea::OnLButtonUp
// address: 0x100e19cb
// body: available
// range: 0x100e19cb-0x100e1d35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCImagePaintArea::OnLButtonUp
          (CMFCImagePaintArea *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  int iVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CGdiObject *pCVar6;
  COLORREF CVar7;
  void *pvVar8;
  undefined1 local_18 [8];
  CGdiObject *local_10;
  CPen *local_c;
  CGdiObject *local_8;
  
  pHVar4 = GetCapture();
  pCVar5 = CWnd::FromHandle(pHVar4);
  if (pCVar5 == (CWnd *)this) {
    ReleaseCapture();
  }
  iVar1 = *(int *)(this + 0xe8);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*(int *)(this + 0xe0) != *(int *)(this + 0xd8)) {
      if (*(int *)(this + 0xd8) < *(int *)(this + 0xe0)) {
        *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
      }
      else {
        *(int *)(this + 0xd8) = *(int *)(this + 0xd8) + 1;
      }
    }
    if (*(int *)(this + 0xdc) != *(int *)(this + 0xd4)) {
      if (*(int *)(this + 0xd4) < *(int *)(this + 0xdc)) {
        *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      }
      else {
        *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
      }
    }
  }
  if (iVar1 == 0) {
LAB_100e1d15:
    tVar3.y = param_4;
    tVar3.x = param_3;
    DrawPixel(this,tVar3);
  }
  else {
    if (iVar1 == 1) {
      ScreenToBitmap(this,(CPoint *)&param_3);
      FloodFill(this,(CPoint *)&param_3);
      goto LAB_100e1d22;
    }
    if (iVar1 == 2) {
      if ((*(int *)(this + 0xe0) == *(int *)(this + 0xd8)) &&
         (*(int *)(this + 0xdc) == *(int *)(this + 0xd4))) goto LAB_100e1d15;
      pvVar8 = (void *)0x0;
      if (*(int *)(this + 0xa0) != 0) {
        pvVar8 = *(void **)(*(int *)(this + 0xa0) + 4);
      }
      pCVar6 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
      local_10 = (CGdiObject *)CDC::SelectObject((CDC *)(this + 0x88),(CPen *)(this + 0xc4));
      CDC::MoveTo((CDC *)(this + 0x88),(int)local_18,*(int *)(this + 0xd4));
      CDC::LineTo((CDC *)(this + 0x88),*(int *)(this + 0xdc),*(int *)(this + 0xe0));
      tVar2.y = param_4;
      tVar2.x = param_3;
      DrawPixel(this,tVar2);
      pvVar8 = (void *)0x0;
      if (pCVar6 != (CGdiObject *)0x0) {
        pvVar8 = *(void **)(pCVar6 + 4);
      }
      CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
      CDC::SelectObject((CDC *)(this + 0x88),(CPen *)local_10);
    }
    else {
      if (iVar1 == 3) {
        if ((*(int *)(this + 0xe0) == *(int *)(this + 0xd8)) &&
           (*(int *)(this + 0xdc) == ((tagRECT *)(this + 0xd4))->left)) goto LAB_100e1d15;
        pvVar8 = (void *)0x0;
        if (*(int *)(this + 0xa0) != 0) {
          pvVar8 = *(void **)(*(int *)(this + 0xa0) + 4);
        }
        local_10 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
        local_c = CDC::SelectObject((CDC *)(this + 0x88),(CPen *)(this + 0xc4));
        local_8 = (CGdiObject *)(**(code **)(*(int *)(this + 0x88) + 0x24))(5);
        CDC::Rectangle((CDC *)(this + 0x88),(tagRECT *)(this + 0xd4));
        pvVar8 = (void *)0x0;
        if (local_10 != (CGdiObject *)0x0) {
          pvVar8 = *(void **)(local_10 + 4);
        }
        CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
        CDC::SelectObject((CDC *)(this + 0x88),local_c);
        pCVar6 = local_8;
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            ScreenToBitmap(this,(CPoint *)&param_3);
            pvVar8 = (void *)0x0;
            if (*(int *)(this + 0xa0) != 0) {
              pvVar8 = *(void **)(*(int *)(this + 0xa0) + 4);
            }
            pCVar6 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
            CVar7 = GetPixel(*(HDC *)(this + 0x8c),param_3,param_4);
            pvVar8 = (void *)0x0;
            if (pCVar6 != (CGdiObject *)0x0) {
              pvVar8 = *(void **)(pCVar6 + 4);
            }
            CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
            CMFCImageEditorDialog::OnPickColor(*(CMFCImageEditorDialog **)(this + 0xe4),CVar7);
          }
          goto LAB_100e1d22;
        }
        if ((*(int *)(this + 0xe0) == *(int *)(this + 0xd8)) &&
           (*(int *)(this + 0xdc) == ((tagRECT *)(this + 0xd4))->left)) goto LAB_100e1d15;
        pvVar8 = (void *)0x0;
        if (*(int *)(this + 0xa0) != 0) {
          pvVar8 = *(void **)(*(int *)(this + 0xa0) + 4);
        }
        local_8 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
        local_c = CDC::SelectObject((CDC *)(this + 0x88),(CPen *)(this + 0xc4));
        local_10 = (CGdiObject *)(**(code **)(*(int *)(this + 0x88) + 0x24))(5);
        CDC::Ellipse((CDC *)(this + 0x88),(tagRECT *)(this + 0xd4));
        pvVar8 = (void *)0x0;
        if (local_8 != (CGdiObject *)0x0) {
          pvVar8 = *(void **)(local_8 + 4);
        }
        CDC::SelectGdiObject(*(HDC__ **)(this + 0x8c),pvVar8);
        CDC::SelectObject((CDC *)(this + 0x88),local_c);
        pCVar6 = local_10;
      }
      CDC::SelectObject((CDC *)(this + 0x88),(CPen *)pCVar6);
    }
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    InvalidateRect(*(HWND *)(pCVar5 + 0x20),(RECT *)(this + 0x74),1);
  }
LAB_100e1d22:
  SetRectEmpty((LPRECT)(this + 0xd4));
  return;
}

