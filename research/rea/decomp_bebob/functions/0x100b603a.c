// rea decompile_all
// name: CMFCRibbonPanel::OnDrawPaletteMenu
// address: 0x100b603a
// body: available
// range: 0x100b603a-0x100b643c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b6339 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::OnDrawPaletteMenu(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::OnDrawPaletteMenu(CMFCRibbonPanel *this,CDC *param_1)

{
  CObject *pCVar1;
  BOOL BVar2;
  CMFCVisualManager *pCVar3;
  HRGN pHVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_6c [8];
  tagAFXDrawState local_64 [12];
  undefined **local_58;
  undefined4 local_54;
  CDC *local_50;
  int local_4c;
  int local_48;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100b6046;
  local_50 = param_1;
  local_4c = CObject::IsKindOf(*(CObject **)(this + 0xb0),
                               (CRuntimeClass *)&PTR_s_CMFCRibbonUndoButton_1013f824);
  if ((local_4c != 0) || (local_48 = 1, *(int *)(*(int *)(this + 0xb0) + 0x300) == 0)) {
    local_48 = 0;
  }
  local_44.left = *(LONG *)(this + 0x6c);
  local_44.top = *(LONG *)(this + 0x70);
  local_44.right = *(LONG *)(this + 0x74);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_44.bottom = *(LONG *)(this + 0x78);
  SetRectEmpty(&local_24);
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  SetRectEmpty(&local_34);
  BVar2 = IsRectEmpty((RECT *)(this + 0x8c));
  if (BVar2 == 0) {
    if (((*(int *)(this + 0xac) != 0) && (local_48 == 0)) && (local_4c == 0)) {
      local_4c = *(int *)(*(int *)(this + 0xac) + 0xcc8);
      *(undefined4 *)(*(int *)(this + 0xac) + 0xcc8) = 0;
      pCVar3 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar3 + 0x34))
                (local_50,*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0x8c),
                 *(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x94),
                 *(undefined4 *)(this + 0x98),((RECT *)(this + 0x8c))->left,
                 *(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x94),
                 *(undefined4 *)(this + 0x98),0);
      *(int *)(*(int *)(this + 0xac) + 0xcc8) = local_4c;
    }
    local_24.left = *(LONG *)(this + 0x8c);
    local_24.bottom = *(LONG *)(this + 0x90);
    local_24.right = *(LONG *)(this + 0x94);
    local_24.top = local_24.bottom + -1;
    local_44.bottom = *(int *)(this + 0x90) + -1;
  }
  BVar2 = IsRectEmpty((RECT *)(this + 0x7c));
  if (BVar2 == 0) {
    if ((*(int *)(this + 0xac) != 0) && (local_48 == 0)) {
      local_4c = *(int *)(*(int *)(this + 0xac) + 0xcc8);
      *(undefined4 *)(*(int *)(this + 0xac) + 0xcc8) = 0;
      pCVar3 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar3 + 0x34))
                (local_50,*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0x7c),
                 *(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x84),
                 *(undefined4 *)(this + 0x88),((RECT *)(this + 0x7c))->left,
                 *(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x84),
                 *(undefined4 *)(this + 0x88),0);
      *(int *)(*(int *)(this + 0xac) + 0xcc8) = local_4c;
    }
    local_34.left = *(LONG *)(this + 0x7c);
    local_34.right = *(LONG *)(this + 0x84);
    local_34.top = *(LONG *)(this + 0x88);
    local_34.bottom = local_34.top + 1;
    local_44.top = *(int *)(this + 0x88) + 1;
  }
  if ((*(int *)(this + 0xac) != 0) && (local_48 != 0)) {
    local_4c = *(int *)(*(int *)(this + 0xac) + 0xcc8);
    *(undefined4 *)(*(int *)(this + 0xac) + 0xcc8) = 0;
    pCVar3 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar3 + 0x34))
              (local_50,*(undefined4 *)(this + 0xac),*(undefined4 *)(this + 0x6c),
               *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74),
               *(undefined4 *)(this + 0x78),*(undefined4 *)(this + 0x6c),
               *(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74),
               *(undefined4 *)(this + 0x78),0);
    *(int *)(*(int *)(this + 0xac) + 0xcc8) = local_4c;
  }
  local_54 = 0;
  local_58 = CRgn::vftable;
  local_8 = 0;
  pHVar4 = CreateRectRgnIndirect(&local_44);
  CMenu::Attach((CMenu *)&local_58,(HMENU__ *)pHVar4);
  CDC::SelectClipRgn(local_50,(CRgn *)&local_58);
  if (0 < *(int *)(*(int *)(this + 0xb0) + 0x1a4)) {
    CMFCToolBarImages::SetTransparentColor
              ((CMFCToolBarImages *)(*(int *)(this + 0xb0) + 0x1a0),DAT_10166ab4);
    puVar5 = (undefined4 *)(**(code **)(**(int **)(this + 0xb0) + 0x1e4))(local_6c);
    CMFCToolBarImages::PrepareDrawImage
              ((CMFCToolBarImages *)(*(int *)(this + 0xb0) + 0x1a0),local_64,*puVar5,puVar5[1],0);
  }
  local_48 = 0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if ((local_48 < 0) || (*(int *)(this + 0x25c) <= local_48)) goto LAB_100b6339;
      pCVar1 = *(CObject **)(*(int *)(this + 600) + local_48 * 4);
      local_4c = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
      iVar6 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
      if ((local_4c != 0) || (iVar6 != 0)) {
        (**(code **)(*(int *)pCVar1 + 0xdc))(local_50);
      }
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(this + 0x25c));
  }
  CDC::SelectClipRgn(local_50,(CRgn *)0x0);
  local_48 = 0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if ((local_48 < 0) || (*(int *)(this + 0x25c) <= local_48)) {
LAB_100b6339:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      pCVar1 = *(CObject **)(*(int *)(this + 600) + local_48 * 4);
      local_4c = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonLabel_1013aaa0);
      iVar6 = CObject::IsKindOf(pCVar1,(CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734);
      if ((local_4c == 0) && (iVar6 == 0)) {
        *(undefined4 *)(pCVar1 + 0x90) = 1;
        (**(code **)(*(int *)pCVar1 + 0xdc))(local_50);
      }
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(this + 0x25c));
  }
  BVar2 = IsRectEmpty(&local_34);
  if (BVar2 == 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar3 + 0x48))
              (local_50,*(undefined4 *)(this + 0xac),local_34.left,local_34.top,local_34.right,
               local_34.bottom,0);
  }
  BVar2 = IsRectEmpty(&local_24);
  if (BVar2 == 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar3 + 0x48))
              (local_50,*(undefined4 *)(this + 0xac),local_24.left,local_24.top,local_24.right,
               local_24.bottom,0);
  }
  if (0 < *(int *)(*(int *)(this + 0xb0) + 0x1a4)) {
    CMFCToolBarImages::EndDrawImage((CMFCToolBarImages *)(*(int *)(this + 0xb0) + 0x1a0),local_64);
  }
  local_8 = 0xffffffff;
  local_58 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_58);
  FUN_100f90cf();
  return;
}

