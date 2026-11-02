// rea decompile_all
// name: FUN_1003cb3d
// address: 0x1003cb3d
// body: available
// range: 0x1003cb3d-0x1003d031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003d02d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __fastcall FUN_1003cb3d(CWnd *param_1)

{
  undefined4 *puVar1;
  CDC *pCVar2;
  CWnd *pCVar3;
  CDockingManager *pCVar4;
  HDC pHVar5;
  int iVar6;
  HBITMAP pHVar7;
  BOOL BVar8;
  HRGN pHVar9;
  CMFCVisualManager *pCVar10;
  int *piVar11;
  int *piVar12;
  tagRECT *ptVar13;
  undefined1 *puVar14;
  void *pvVar15;
  CDC local_124 [4];
  HDC__ *local_120;
  CWindowDC local_114 [4];
  HDC local_110;
  undefined **local_100;
  void *local_fc;
  CGdiObject *local_f8;
  int local_f4;
  undefined **local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  CDC *local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  tagRECT local_b4;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  tagRECT local_84;
  tagRECT local_74;
  tagRECT local_64;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x114;
  local_8 = 0x1003cb4c;
  pCVar4 = *(CDockingManager **)(param_1 + 0x178);
  if (pCVar4 == (CDockingManager *)0x0) {
    pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(param_1 + 0xbc));
    pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
    if (pCVar4 == (CDockingManager *)0x0) goto LAB_1003d027;
  }
  if (*(int *)(pCVar4 + 8) == 0) {
    CWindowDC::CWindowDC(local_114,param_1);
    local_d8 = (CDC *)local_114;
    local_8 = 0;
    local_e8 = 0;
    FUN_1001714b((undefined4 *)local_124);
    local_fc = (void *)0x0;
    local_100 = CBitmap::vftable;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_f8 = (CGdiObject *)0x0;
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_44);
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRect(&local_34,0,0,local_44.right - local_44.left,local_44.bottom - local_44.top);
    pHVar5 = CreateCompatibleDC(local_110);
    iVar6 = CDC::Attach(local_124,pHVar5);
    if (iVar6 != 0) {
      pHVar7 = CreateCompatibleBitmap
                         (local_110,local_34.right - local_34.left,local_34.bottom - local_34.top);
      iVar6 = CMenu::Attach((CMenu *)&local_100,(HMENU__ *)pHVar7);
      if (iVar6 != 0) {
        local_e8 = 1;
        local_f8 = CDC::SelectGdiObject(local_120,local_fc);
        local_d8 = local_124;
      }
    }
    local_64.left = 0;
    local_64.top = 0;
    local_64.right = 0;
    local_64.bottom = 0;
    local_74.left = 0;
    local_74.top = 0;
    local_74.right = 0;
    local_74.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_74);
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_64);
    CWnd::ClientToScreen(param_1,&local_64);
    OffsetRect(&local_64,-local_74.left,-local_74.top);
    CDC::ExcludeClipRect((CDC *)local_114,&local_64);
    local_ec = 0;
    local_f0 = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,3);
    BVar8 = IsRectEmpty((RECT *)(param_1 + 0xe4));
    if (BVar8 == 0) {
      pHVar9 = CreateRectRgnIndirect((RECT *)(param_1 + 0xe4));
      CMenu::Attach((CMenu *)&local_f0,(HMENU__ *)pHVar9);
      CDC::SelectClipRgn((CDC *)local_114,(CRgn *)&local_f0);
    }
    (**(code **)(*(int *)param_1 + 0x210))(local_d8);
    local_54.left = 0;
    local_54.top = 0;
    local_54.right = 0;
    local_54.bottom = 0;
    (**(code **)(*(int *)param_1 + 0x1c4))(&local_54);
    pCVar4 = *(CDockingManager **)(param_1 + 0x178);
    if (pCVar4 == (CDockingManager *)0x0) {
      pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(param_1 + 0xbc));
      pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
    }
    if (*(int *)(pCVar4 + 8) != 0) {
      SetRectEmpty(&local_54);
    }
    (**(code **)(*(int *)param_1 + 0x1c4))(&local_54);
    pCVar10 = CMFCVisualManager::GetInstance();
    pCVar2 = local_d8;
    local_e4 = (**(code **)(*(int *)pCVar10 + 0x144))
                         (local_d8,local_54.left,local_54.top,local_54.right,local_54.bottom,param_1
                          ,*(undefined4 *)(param_1 + 0x78));
    puVar1 = *(undefined4 **)(param_1 + 0x100);
    local_dc = -1;
    local_e0 = -1;
joined_r0x1003cdcc:
    do {
      if (puVar1 == (undefined4 *)0x0) goto LAB_1003ce8b;
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar12 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      piVar12[8] = local_e4;
      pCVar2 = local_d8;
      if (piVar12[3] == 0) {
        iVar6 = *piVar12;
        if (piVar12[6] != 0) {
          if (local_e0 == -1) {
            ptVar13 = &local_24;
          }
          else {
            iVar6 = (**(code **)(iVar6 + 0xc))(local_a4);
            pCVar2 = local_d8;
            if (*(int *)(iVar6 + 8) + 2 < local_e0) goto joined_r0x1003cdcc;
            iVar6 = *piVar12;
            ptVar13 = &local_b4;
          }
          iVar6 = (**(code **)(iVar6 + 0xc))(ptVar13);
          local_e0 = *(int *)(iVar6 + 8) + 2;
          pCVar2 = local_d8;
          goto joined_r0x1003cdcc;
        }
        if (local_dc == -1) {
          puVar14 = local_d4;
        }
        else {
          piVar11 = (int *)(**(code **)(iVar6 + 0xc))(local_c4);
          pCVar2 = local_d8;
          if (local_dc < *piVar11) goto joined_r0x1003cdcc;
          iVar6 = *piVar12;
          puVar14 = local_94;
        }
        piVar12 = (int *)(**(code **)(iVar6 + 0xc))(puVar14);
        local_dc = *piVar12;
        pCVar2 = local_d8;
      }
    } while( true );
  }
  goto LAB_1003d027;
LAB_1003ce8b:
  CDC::SetBkMode(pCVar2,1);
  (**(code **)(*(int *)pCVar2 + 0x30))(local_e4);
  local_e4 = (**(code **)(*(int *)pCVar2 + 0x28))(&DAT_10166bc4);
  (**(code **)(*(int *)param_1 + 0x1b4))(&local_f4);
  local_84.left = local_54.left;
  local_84.top = local_54.top;
  local_84.right = local_54.right;
  local_8 = CONCAT31(local_8._1_3_,4);
  local_84.bottom = local_54.bottom;
  if (local_dc != -1) {
    local_84.right = local_dc;
  }
  if (local_e0 != -1) {
    local_84.left = local_e0;
  }
  InflateRect(&local_84,-2,0);
  pCVar2 = local_d8;
  (**(code **)(*(int *)local_d8 + 0x68))(local_f4,*(undefined4 *)(local_f4 + -0xc),&local_84,0x8024)
  ;
  (**(code **)(*(int *)pCVar2 + 0x28))(local_e4);
  CDC::SelectClipRgn(pCVar2,(CRgn *)0x0);
  (**(code **)(*(int *)param_1 + 0x214))(pCVar2);
  if (local_e8 != 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    iVar6 = FUN_10016f73(local_114,&local_24);
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        local_24.left = local_34.left;
        local_24.top = local_34.top;
        local_24.right = local_34.right;
        local_24.bottom = local_34.bottom;
      }
      BitBlt(local_110,local_24.left,local_24.top,local_24.right - local_24.left,
             local_24.bottom - local_24.top,local_120,local_24.left,local_24.top,0xcc0020);
    }
    pvVar15 = (void *)0x0;
    if (local_f8 != (CGdiObject *)0x0) {
      pvVar15 = *(void **)(local_f8 + 4);
    }
    CDC::SelectGdiObject(local_120,pvVar15);
  }
  CWnd::Default(param_1);
  FUN_10001030((undefined4 *)(local_f4 + -0x10));
  local_8._0_1_ = 2;
  local_f0 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_f0);
  local_8._0_1_ = 1;
  local_100 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_100);
  local_8 = (uint)local_8._1_3_ << 8;
  CDC::~CDC(local_124);
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_114);
LAB_1003d027:
  FUN_100f90cf();
  return;
}

