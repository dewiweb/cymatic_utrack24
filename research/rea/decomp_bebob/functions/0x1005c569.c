// rea decompile_all
// name: CMFCPopupMenu::DrawFade
// address: 0x1005c569
// body: available
// range: 0x1005c569-0x1005c980 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenu::DrawFade(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::DrawFade(CMFCPopupMenu *this,CDC *param_1)

{
  HDC pHVar1;
  int iVar2;
  ANIMATION_TYPE AVar3;
  HBITMAP pHVar4;
  int *piVar5;
  ulong uVar6;
  CGdiObject *pCVar7;
  int iVar8;
  void *pvVar9;
  ulong *puVar10;
  void *pvVar11;
  undefined1 local_94 [8];
  undefined1 local_8c [4];
  CGdiObject *local_88;
  int local_84;
  int local_80;
  CDC *local_7c;
  int local_78;
  DWORD local_74;
  int local_70;
  HDC local_6c;
  CGdiObject *local_60;
  undefined1 local_5c [44];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x84;
  local_8 = 0x1005c578;
  local_7c = param_1;
  pvVar11 = (void *)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  iVar8 = *(int *)(this + 0x138) + *(int *)(this + 0xfc0);
  local_78 = *(int *)(this + 0x13c) + *(int *)(this + 0xfc0);
  local_80 = iVar8;
  FUN_1001714b(&local_70);
  local_8 = 0;
  if (local_7c == (CDC *)0x0) {
    pHVar1 = (HDC)0x0;
  }
  else {
    pHVar1 = *(HDC *)(local_7c + 4);
  }
  pHVar1 = CreateCompatibleDC(pHVar1);
  iVar2 = CDC::Attach((CDC *)&local_70,pHVar1);
  if (iVar2 == 0) goto LAB_1005c96d;
  if ((this == (CMFCPopupMenu *)0xfffff05c) || (*(int *)(this + 0xfa8) == 0)) {
    AVar3 = GetAnimationType(0);
    if ((AVar3 == 3) || (8 < DAT_10166c4c)) {
      local_5c._8_4_ = local_78;
      local_74 = local_78 * iVar8;
      local_5c._12_2_ = 1;
      local_5c._0_4_ = 0x28;
      local_5c._14_2_ = 0x20;
      local_5c._16_4_ = 0;
      local_5c._24_4_ = 0;
      local_5c._28_4_ = 0;
      local_5c._32_4_ = 0;
      local_5c._36_4_ = 0;
      local_5c._4_4_ = iVar8;
      local_5c._20_4_ = local_74;
      pHVar4 = CreateDIBSection(local_6c,(BITMAPINFO *)local_5c,0,(void **)(this + 0xfb4),
                                (HANDLE)0x0,0);
      if ((pHVar4 == (HBITMAP)0x0) || (*(int *)(this + 0xfb4) == 0)) goto LAB_1005c96d;
      CMenu::Attach((CMenu *)(this + 0xf9c),(HMENU__ *)pHVar4);
      pHVar4 = CreateDIBSection(local_6c,(BITMAPINFO *)local_5c,0,(void **)(this + 0xfb8),
                                (HANDLE)0x0,0);
      if ((pHVar4 == (HBITMAP)0x0) || (*(int *)(this + 0xfb8) == 0)) goto LAB_1005c96d;
      CMenu::Attach((CMenu *)(this + 0xfa4),(HMENU__ *)pHVar4);
      pHVar4 = CreateDIBSection(local_6c,(BITMAPINFO *)local_5c,0,(void **)(this + 0xfbc),
                                (HANDLE)0x0,0);
      if ((pHVar4 == (HBITMAP)0x0) || (*(int *)(this + 0xfbc) == 0)) goto LAB_1005c96d;
      CMenu::Attach((CMenu *)(this + 0xfac),(HMENU__ *)pHVar4);
      if (this == (CMFCPopupMenu *)0xfffff064) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = *(void **)(this + 4000);
      }
      local_60 = CDC::SelectGdiObject(local_6c,pvVar9);
      if (local_7c == (CDC *)0x0) {
        pHVar1 = (HDC)0x0;
      }
      else {
        pHVar1 = *(HDC *)(local_7c + 4);
      }
      BitBlt(local_6c,0,0,local_80,local_78,pHVar1,local_24.left,local_24.top,0xcc0020);
      FID_conflict__memcpy(*(void **)(this + 0xfb8),*(void **)(this + 0xfb4),local_74 << 2);
      if (this == (CMFCPopupMenu *)0xfffff05c) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = *(void **)(this + 0xfa8);
      }
      CDC::SelectGdiObject(local_6c,pvVar9);
    }
    else {
      pHVar4 = CreateCompatibleBitmap(*(HDC *)(local_7c + 4),iVar8,local_78);
      CMenu::Attach((CMenu *)(this + 0xfa4),(HMENU__ *)pHVar4);
      if ((CMenu *)(this + 0xfa4) == (CMenu *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = *(void **)(this + 0xfa8);
      }
      local_60 = CDC::SelectGdiObject(local_6c,pvVar9);
    }
    local_5c[0x28] = '\0';
    local_5c[0x29] = '\0';
    local_5c[0x2a] = '\0';
    local_5c[0x2b] = '\0';
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    (**(code **)(*(int *)this + 0x1e4))(&local_70);
    piVar5 = (int *)(**(code **)(*(int *)this + 0x1c0))();
    GetWindowRect((HWND)piVar5[8],(LPRECT)(local_5c + 0x28));
    CWnd::ScreenToClient((CWnd *)this,(tagRECT *)(local_5c + 0x28));
    (**(code **)(local_70 + 0x38))(local_8c,local_5c._40_4_,local_30);
    (**(code **)(*piVar5 + 0x260))(&local_70);
    (**(code **)(local_70 + 0x38))(local_94,0,0);
    if (local_60 == (CGdiObject *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = *(void **)(local_60 + 4);
    }
    CDC::SelectGdiObject(local_6c,pvVar9);
  }
  local_74 = *(DWORD *)(this + 0xfb4);
  puVar10 = *(ulong **)(this + 0xfb8);
  local_60 = *(CGdiObject **)(this + 0xfbc);
  AVar3 = GetAnimationType(0);
  if (0 < (int)AVar3) {
    if ((int)AVar3 < 3) {
      if (this == (CMFCPopupMenu *)0xfffff05c) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = *(void **)(this + 0xfa8);
      }
      pCVar7 = CDC::SelectGdiObject(local_6c,pvVar9);
      iVar8 = local_24.top;
      if (*(int *)(this + 0xee4) == 0) {
        iVar8 = local_24.bottom - *(int *)(this + 0xedc);
      }
      iVar2 = local_24.left;
      if (*(int *)(this + 0xee0) == 0) {
        iVar2 = local_24.right - *(int *)(this + 0xed8);
      }
      BitBlt(*(HDC *)(local_7c + 4),iVar2,iVar8,*(int *)(this + 0xed8),*(int *)(this + 0xedc),
             local_6c,0,0,0xcc0020);
    }
    else {
      if (AVar3 != 3) goto LAB_1005c964;
      if (this == (CMFCPopupMenu *)0xfffff054) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = *(void **)(this + 0xfb0);
      }
      local_88 = CDC::SelectGdiObject(local_6c,pvVar9);
      if (0 < local_78 * local_80) {
        local_74 = local_74 - (int)puVar10;
        local_84 = (int)local_60 - (int)puVar10;
        local_60 = (CGdiObject *)(local_78 * local_80);
        do {
          uVar6 = CDrawingManager::PixelAlpha
                            (*(ulong *)(local_74 + (int)puVar10),*puVar10,
                             100 - *(int *)(this + 0xf24));
          *(ulong *)(local_84 + (int)puVar10) = uVar6;
          puVar10 = puVar10 + 1;
          local_60 = (CGdiObject *)((int)local_60 + -1);
        } while (local_60 != (CGdiObject *)0x0);
      }
      BitBlt(*(HDC *)(local_7c + 4),local_24.left,local_24.top,local_80,local_78,local_6c,0,0,
             0xcc0020);
      pCVar7 = local_88;
    }
    if (pCVar7 != (CGdiObject *)0x0) {
      pvVar11 = *(void **)(pCVar7 + 4);
    }
  }
LAB_1005c964:
  CDC::SelectGdiObject(local_6c,pvVar11);
LAB_1005c96d:
  local_8 = 0xffffffff;
  CDC::~CDC((CDC *)&local_70);
  FUN_100f90cf();
  return;
}

